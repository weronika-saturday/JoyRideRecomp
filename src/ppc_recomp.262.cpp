#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8277C508"))) PPC_WEAK_FUNC(sub_8277C508);
PPC_FUNC_IMPL(__imp__sub_8277C508) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8277C50C"))) PPC_WEAK_FUNC(sub_8277C50C);
PPC_FUNC_IMPL(__imp__sub_8277C50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277C510"))) PPC_WEAK_FUNC(sub_8277C510);
PPC_FUNC_IMPL(__imp__sub_8277C510) {
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
	// lwz r29,0(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x8277c5b4
	if (!cr6.gt) goto loc_8277C5B4;
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277c5b4
	if (cr6.eq) goto loc_8277C5B4;
loc_8277C540:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x8277c5b4
	if (cr6.lt) goto loc_8277C5B4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r31,164
	ctx.r3.s64 = r31.s64 + 164;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x8277c58c
	if (cr6.lt) goto loc_8277C58C;
	// lwz r11,-12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// lbz r8,1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r11,r7,r8
	r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, xer);
	// blt cr6,0x8277c5b4
	if (cr6.lt) goto loc_8277C5B4;
loc_8277C58C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// bl 0x82789fd0
	sub_82789FD0(ctx, base);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8277c540
	if (!cr6.eq) goto loc_8277C540;
loc_8277C5B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8277C5B8"))) PPC_WEAK_FUNC(sub_8277C5B8);
PPC_FUNC_IMPL(__imp__sub_8277C5B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8277C5BC"))) PPC_WEAK_FUNC(sub_8277C5BC);
PPC_FUNC_IMPL(__imp__sub_8277C5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277C5C0"))) PPC_WEAK_FUNC(sub_8277C5C0);
PPC_FUNC_IMPL(__imp__sub_8277C5C0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x8278a070
	sub_8278A070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277C5C8"))) PPC_WEAK_FUNC(sub_8277C5C8);
PPC_FUNC_IMPL(__imp__sub_8277C5C8) {
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
	// lwz r11,168(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,164(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 164);
	// addi r3,r4,164
	ctx.r3.s64 = ctx.r4.s64 + 164;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,-12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bl 0x82789fd0
	sub_82789FD0(ctx, base);
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

__attribute__((alias("__imp__sub_8277C62C"))) PPC_WEAK_FUNC(sub_8277C62C);
PPC_FUNC_IMPL(__imp__sub_8277C62C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277C630"))) PPC_WEAK_FUNC(sub_8277C630);
PPC_FUNC_IMPL(__imp__sub_8277C630) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,160(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r4.u32);
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r8.u32);
	// beq cr6,0x8277c728
	if (cr6.eq) goto loc_8277C728;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277c774
	if (cr6.eq) goto loc_8277C774;
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277c714
	if (cr6.eq) goto loc_8277C714;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8277C6A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277c6a8
	if (!cr6.eq) goto loc_8277C6A8;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r10,r11,r5
	ctx.r10.u64 = r11.u64 + ctx.r5.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x8277c6d8
	if (!cr6.eq) goto loc_8277C6D8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8277C6D8:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// addi r4,r7,-20960
	ctx.r4.s64 = ctx.r7.s64 + -20960;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8278a960
	sub_8278A960(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8277C714:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8277c768
	goto loc_8277C768;
loc_8277C728:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277c774
	if (cr6.eq) goto loc_8277C774;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8277C768:
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277C774:
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8277C790"))) PPC_WEAK_FUNC(sub_8277C790);
PPC_FUNC_IMPL(__imp__sub_8277C790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277C794"))) PPC_WEAK_FUNC(sub_8277C794);
PPC_FUNC_IMPL(__imp__sub_8277C794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277C798"))) PPC_WEAK_FUNC(sub_8277C798);
PPC_FUNC_IMPL(__imp__sub_8277C798) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,160(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r4.u32);
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r8.u32);
	// beq cr6,0x8277c890
	if (cr6.eq) goto loc_8277C890;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277c8dc
	if (cr6.eq) goto loc_8277C8DC;
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277c87c
	if (cr6.eq) goto loc_8277C87C;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8277C810:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277c810
	if (!cr6.eq) goto loc_8277C810;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r10,r11,r5
	ctx.r10.u64 = r11.u64 + ctx.r5.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x8277c840
	if (!cr6.eq) goto loc_8277C840;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8277C840:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// addi r4,r7,-20960
	ctx.r4.s64 = ctx.r7.s64 + -20960;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8278a960
	sub_8278A960(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8277C87C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8277c8d0
	goto loc_8277C8D0;
loc_8277C890:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277c8dc
	if (cr6.eq) goto loc_8277C8DC;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8277C8D0:
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277C8DC:
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8277C8F8"))) PPC_WEAK_FUNC(sub_8277C8F8);
PPC_FUNC_IMPL(__imp__sub_8277C8F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277C8FC"))) PPC_WEAK_FUNC(sub_8277C8FC);
PPC_FUNC_IMPL(__imp__sub_8277C8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277C900"))) PPC_WEAK_FUNC(sub_8277C900);
PPC_FUNC_IMPL(__imp__sub_8277C900) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,160(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r4,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r4.u32);
	// addi r9,r1,432
	ctx.r9.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r8.u32);
	// beq cr6,0x8277c9f8
	if (cr6.eq) goto loc_8277C9F8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277ca44
	if (cr6.eq) goto loc_8277CA44;
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277c9e4
	if (cr6.eq) goto loc_8277C9E4;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8277C978:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277c978
	if (!cr6.eq) goto loc_8277C978;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r10,r11,r5
	ctx.r10.u64 = r11.u64 + ctx.r5.u64;
	// lbz r9,-1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x8277c9a8
	if (!cr6.eq) goto loc_8277C9A8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_8277C9A8:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,256
	ctx.r8.s64 = 256;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r6,r30,12
	ctx.r6.s64 = r30.s64 + 12;
	// addi r4,r7,-20960
	ctx.r4.s64 = ctx.r7.s64 + -20960;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8278a960
	sub_8278A960(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8277C9E4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8277ca38
	goto loc_8277CA38;
loc_8277C9F8:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277ca44
	if (cr6.eq) goto loc_8277CA44;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_8277CA38:
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277CA44:
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8277CA60"))) PPC_WEAK_FUNC(sub_8277CA60);
PPC_FUNC_IMPL(__imp__sub_8277CA60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277CA64"))) PPC_WEAK_FUNC(sub_8277CA64);
PPC_FUNC_IMPL(__imp__sub_8277CA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277CA68"))) PPC_WEAK_FUNC(sub_8277CA68);
PPC_FUNC_IMPL(__imp__sub_8277CA68) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8277cb6c
	if (!cr6.eq) goto loc_8277CB6C;
	// bl 0x82779428
	sub_82779428(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277cb6c
	if (cr6.eq) goto loc_8277CB6C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stb r8,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r8.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// bl 0x82781760
	sub_82781760(ctx, base);
	// lbz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8277cb44
	if (!cr6.eq) goto loc_8277CB44;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277cb2c
	if (!cr6.eq) goto loc_8277CB2C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r10,-20680
	ctx.r4.s64 = ctx.r10.s64 + -20680;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8277c630
	sub_8277C630(ctx, base);
loc_8277CB2C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r29,0
	r29.s64 = 0;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9468
	return;
loc_8277CB44:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277cb58
	if (cr6.eq) goto loc_8277CB58;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
loc_8277CB58:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9468
	return;
loc_8277CB6C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82781070
	sub_82781070(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8277CB7C"))) PPC_WEAK_FUNC(sub_8277CB7C);
PPC_FUNC_IMPL(__imp__sub_8277CB7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8277CB80"))) PPC_WEAK_FUNC(sub_8277CB80);
PPC_FUNC_IMPL(__imp__sub_8277CB80) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x8277cbc0
	if (!cr6.eq) goto loc_8277CBC0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8277CBC0:
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x8277cc28
	if (!cr6.eq) goto loc_8277CC28;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277ac10
	sub_8277AC10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277cc10
	if (!cr0.eq) goto loc_8277CC10;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277CC10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8277CC28:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-20624
	ctx.r4.s64 = r11.s64 + -20624;
	// bl 0x8277c630
	sub_8277C630(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8277CC4C"))) PPC_WEAK_FUNC(sub_8277CC4C);
PPC_FUNC_IMPL(__imp__sub_8277CC4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277CC50"))) PPC_WEAK_FUNC(sub_8277CC50);
PPC_FUNC_IMPL(__imp__sub_8277CC50) {
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
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// li r29,0
	r29.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 672);
	// addi r4,r4,120
	ctx.r4.s64 = ctx.r4.s64 + 120;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8277ccf4
	if (cr6.eq) goto loc_8277CCF4;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x8277ccc0
	if (cr6.eq) goto loc_8277CCC0;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bne cr6,0x8277ccc4
	if (!cr6.eq) goto loc_8277CCC4;
loc_8277CCC0:
	// li r11,1
	r11.s64 = 1;
loc_8277CCC4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277ccf4
	if (cr6.eq) goto loc_8277CCF4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8277CCF4:
	// stb r29,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r29.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8277CD10"))) PPC_WEAK_FUNC(sub_8277CD10);
PPC_FUNC_IMPL(__imp__sub_8277CD10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8277CD14"))) PPC_WEAK_FUNC(sub_8277CD14);
PPC_FUNC_IMPL(__imp__sub_8277CD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277CD18"))) PPC_WEAK_FUNC(sub_8277CD18);
PPC_FUNC_IMPL(__imp__sub_8277CD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8277cd3c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8277CD3C;
	// bdzf 4*cr6+eq,0x8277cd40
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8277CD40;
	// bdzf 4*cr6+eq,0x8277cd44
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8277CD44;
	// bne cr6,0x8277cd48
	if (!cr6.eq) {
		sub_8277CD48(ctx, base);
		return;
	}
	// b 0x8278a9e0
	sub_8278A9E0(ctx, base);
	return;
loc_8277CD3C:
	// b 0x8278aac0
	sub_8278AAC0(ctx, base);
	return;
loc_8277CD40:
	// b 0x8278abd8
	sub_8278ABD8(ctx, base);
	return;
loc_8277CD44:
	// b 0x8278ace8
	sub_8278ACE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CD48"))) PPC_WEAK_FUNC(sub_8277CD48);
PPC_FUNC_IMPL(__imp__sub_8277CD48) {
	PPC_FUNC_PROLOGUE();
	// b 0x8278adc8
	sub_8278ADC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277CD4C"))) PPC_WEAK_FUNC(sub_8277CD4C);
PPC_FUNC_IMPL(__imp__sub_8277CD4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277CD50"))) PPC_WEAK_FUNC(sub_8277CD50);
PPC_FUNC_IMPL(__imp__sub_8277CD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8277CDA0"))) PPC_WEAK_FUNC(sub_8277CDA0);
PPC_FUNC_IMPL(__imp__sub_8277CDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277CDA4"))) PPC_WEAK_FUNC(sub_8277CDA4);
PPC_FUNC_IMPL(__imp__sub_8277CDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277CDA8"))) PPC_WEAK_FUNC(sub_8277CDA8);
PPC_FUNC_IMPL(__imp__sub_8277CDA8) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8277cdf4
	if (cr6.eq) goto loc_8277CDF4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
loc_8277CDF4:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277cea0
	if (cr6.eq) goto loc_8277CEA0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r28.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r10,r11,-25696
	ctx.r10.s64 = r11.s64 + -25696;
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r30.u32);
	// stb r29,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, r29.u8);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r29,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r29.u32);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r29.u32);
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r27.u32);
	// stw r26,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r26.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8276a2f8
	sub_8276A2F8(ctx, base);
	// lbz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8277ce70
	if (!cr6.eq) goto loc_8277CE70;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277ce70
	if (cr6.eq) goto loc_8277CE70;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277CE70:
	// lbz r11,152(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277ce94
	if (!cr6.eq) goto loc_8277CE94;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277ce94
	if (cr6.eq) goto loc_8277CE94;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277CE94:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e945c
	return;
loc_8277CEA0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8277cedc
	if (cr6.eq) goto loc_8277CEDC;
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
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8277ced8
	if (cr6.eq) goto loc_8277CED8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-20564
	ctx.r4.s64 = r11.s64 + -20564;
	// bl 0x8277c630
	sub_8277C630(ctx, base);
loc_8277CED8:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
loc_8277CEDC:
	// lbz r11,152(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277cef8
	if (!cr6.eq) goto loc_8277CEF8;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277cef8
	if (cr6.eq) goto loc_8277CEF8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277CEF8:
	// lbz r11,152(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277cf1c
	if (!cr6.eq) goto loc_8277CF1C;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277cf1c
	if (cr6.eq) goto loc_8277CF1C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277CF1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8277CF24"))) PPC_WEAK_FUNC(sub_8277CF24);
PPC_FUNC_IMPL(__imp__sub_8277CF24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8277CF28"))) PPC_WEAK_FUNC(sub_8277CF28);
PPC_FUNC_IMPL(__imp__sub_8277CF28) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8277cf74
	if (cr6.eq) goto loc_8277CF74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r25,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r25.u8);
loc_8277CF74:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d018
	if (cr6.eq) goto loc_8277D018;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82771bf8
	sub_82771BF8(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8276a2f8
	sub_8276A2F8(ctx, base);
	// lbz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8277cfe8
	if (!cr6.eq) goto loc_8277CFE8;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277cfe8
	if (cr6.eq) goto loc_8277CFE8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277CFE8:
	// lbz r11,152(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277d00c
	if (!cr6.eq) goto loc_8277D00C;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277d00c
	if (cr6.eq) goto loc_8277D00C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277D00C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e945c
	return;
loc_8277D018:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8277d050
	if (cr6.eq) goto loc_8277D050;
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
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8277d050
	if (cr6.eq) goto loc_8277D050;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-20564
	ctx.r4.s64 = r11.s64 + -20564;
	// bl 0x8277c630
	sub_8277C630(ctx, base);
loc_8277D050:
	// lbz r11,152(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277d070
	if (!cr6.eq) goto loc_8277D070;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277d070
	if (cr6.eq) goto loc_8277D070;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277D070:
	// lbz r11,152(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277d094
	if (!cr6.eq) goto loc_8277D094;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277d094
	if (cr6.eq) goto loc_8277D094;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277D094:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8277D09C"))) PPC_WEAK_FUNC(sub_8277D09C);
PPC_FUNC_IMPL(__imp__sub_8277D09C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8277D0A0"))) PPC_WEAK_FUNC(sub_8277D0A0);
PPC_FUNC_IMPL(__imp__sub_8277D0A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r14,0
	r14.s64 = 0;
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// stw r4,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r4.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// stw r5,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// mr r26,r14
	r26.u64 = r14.u64;
	// beq cr6,0x8277d5c0
	if (cr6.eq) goto loc_8277D5C0;
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r28,r7,1
	r28.s64 = ctx.r7.s64 + 1;
	// lwz r10,12(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// addi r31,r6,8
	r31.s64 = ctx.r6.s64 + 8;
	// lwz r9,28(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// lbz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r11,r9,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r19,r11,-32
	r19.s64 = r11.s64 + -32;
	// beq cr6,0x8277d4e8
	if (cr6.eq) goto loc_8277D4E8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// li r17,4
	r17.s64 = 4;
	// li r16,1
	r16.s64 = 1;
	// li r18,2
	r18.s64 = 2;
	// li r20,3
	r20.s64 = 3;
	// li r21,5
	r21.s64 = 5;
	// addi r26,r11,-20344
	r26.s64 = r11.s64 + -20344;
	// addi r25,r10,-20400
	r25.s64 = ctx.r10.s64 + -20400;
	// addi r24,r9,-20460
	r24.s64 = ctx.r9.s64 + -20460;
	// addi r22,r8,-20520
	r22.s64 = ctx.r8.s64 + -20520;
loc_8277D148:
	// cmpwi cr6,r7,37
	cr6.compare<int32_t>(ctx.r7.s32, 37, xer);
	// bne cr6,0x8277d48c
	if (!cr6.eq) goto loc_8277D48C;
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// extsb r7,r11
	ctx.r7.s64 = r11.s8;
	// cmpwi cr6,r7,100
	cr6.compare<int32_t>(ctx.r7.s32, 100, xer);
	// bne cr6,0x8277d1ac
	if (!cr6.eq) goto loc_8277D1AC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r29,7
	ctx.r10.s64 = r29.s64 + 7;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// blt cr6,0x8277d190
	if (cr6.lt) goto loc_8277D190;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277D190:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d4a0
	if (cr6.eq) goto loc_8277D4A0;
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// stb r17,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r17.u8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x8277d4a0
	goto loc_8277D4A0;
loc_8277D1AC:
	// cmpwi cr6,r7,117
	cr6.compare<int32_t>(ctx.r7.s32, 117, xer);
	// bne cr6,0x8277d1f8
	if (!cr6.eq) goto loc_8277D1F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stb r14,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r14.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8277d1d8
	if (cr6.lt) goto loc_8277D1D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277D1D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277d1ec
	if (cr6.eq) goto loc_8277D1EC;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
loc_8277D1EC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// b 0x8277d4a0
	goto loc_8277D4A0;
loc_8277D1F8:
	// cmpwi cr6,r7,110
	cr6.compare<int32_t>(ctx.r7.s32, 110, xer);
	// bne cr6,0x8277d234
	if (!cr6.eq) goto loc_8277D234;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8277d220
	if (cr6.lt) goto loc_8277D220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277D220:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d4a0
	if (cr6.eq) goto loc_8277D4A0;
	// stb r16,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r16.u8);
	// b 0x8277d4a0
	goto loc_8277D4A0;
loc_8277D234:
	// cmpwi cr6,r7,98
	cr6.compare<int32_t>(ctx.r7.s32, 98, xer);
	// bne cr6,0x8277d28c
	if (!cr6.eq) goto loc_8277D28C;
	// addi r10,r29,7
	ctx.r10.s64 = r29.s64 + 7;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r30,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x8277d274
	if (cr6.lt) goto loc_8277D274;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277D274:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d4a0
	if (cr6.eq) goto loc_8277D4A0;
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// stb r18,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r18.u8);
	// b 0x8277d4a0
	goto loc_8277D4A0;
loc_8277D28C:
	// cmpwi cr6,r7,102
	cr6.compare<int32_t>(ctx.r7.s32, 102, xer);
	// bne cr6,0x8277d2dc
	if (!cr6.eq) goto loc_8277D2DC;
	// addi r10,r29,7
	ctx.r10.s64 = r29.s64 + 7;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lfd f31,0(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// blt cr6,0x8277d2c4
	if (cr6.lt) goto loc_8277D2C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277D2C4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d4a0
	if (cr6.eq) goto loc_8277D4A0;
	// stfd f31,8(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + 8, f31.u64);
	// stb r20,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r20.u8);
	// b 0x8277d4a0
	goto loc_8277D4A0;
loc_8277D2DC:
	// cmpwi cr6,r7,104
	cr6.compare<int32_t>(ctx.r7.s32, 104, xer);
	// bne cr6,0x8277d348
	if (!cr6.eq) goto loc_8277D348;
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// extsb r7,r11
	ctx.r7.s64 = r11.s8;
	// cmpwi cr6,r7,102
	cr6.compare<int32_t>(ctx.r7.s32, 102, xer);
	// bne cr6,0x8277d340
	if (!cr6.eq) goto loc_8277D340;
	// addi r10,r29,7
	ctx.r10.s64 = r29.s64 + 7;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lfd f31,0(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// blt cr6,0x8277d328
	if (cr6.lt) goto loc_8277D328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277D328:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d4a0
	if (cr6.eq) goto loc_8277D4A0;
	// stfd f31,8(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + 8, f31.u64);
	// stb r20,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r20.u8);
	// b 0x8277d4a0
	goto loc_8277D4A0;
loc_8277D340:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x8277d490
	goto loc_8277D490;
loc_8277D348:
	// cmpwi cr6,r7,115
	cr6.compare<int32_t>(ctx.r7.s32, 115, xer);
	// bne cr6,0x8277d3d8
	if (!cr6.eq) goto loc_8277D3D8;
	// addi r10,r29,7
	ctx.r10.s64 = r29.s64 + 7;
	// lwz r11,120(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 120);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8277d39c
	if (cr6.lt) goto loc_8277D39C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277D39C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d3bc
	if (cr6.eq) goto loc_8277D3BC;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stb r21,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r21.u8);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_8277D3BC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x8277d4a0
	if (!cr0.eq) goto loc_8277D4A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x8277d4a0
	goto loc_8277D4A0;
loc_8277D3D8:
	// cmpwi cr6,r7,108
	cr6.compare<int32_t>(ctx.r7.s32, 108, xer);
	// bne cr6,0x8277d484
	if (!cr6.eq) goto loc_8277D484;
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// extsb r7,r11
	ctx.r7.s64 = r11.s8;
	// cmpwi cr6,r7,115
	cr6.compare<int32_t>(ctx.r7.s32, 115, xer);
	// bne cr6,0x8277d47c
	if (!cr6.eq) goto loc_8277D47C;
	// addi r10,r29,7
	ctx.r10.s64 = r29.s64 + 7;
	// lwz r11,120(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 120);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// addi r29,r10,8
	r29.s64 = ctx.r10.s64 + 8;
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82764d10
	sub_82764D10(ctx, base);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8277d440
	if (cr6.lt) goto loc_8277D440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277D440:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d460
	if (cr6.eq) goto loc_8277D460;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stb r21,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r21.u8);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_8277D460:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x8277d4a0
	if (!cr0.eq) goto loc_8277D4A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x8277d4a0
	goto loc_8277D4A0;
loc_8277D47C:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// b 0x8277d490
	goto loc_8277D490;
loc_8277D484:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8277d490
	goto loc_8277D490;
loc_8277D48C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8277D490:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8277c630
	sub_8277C630(ctx, base);
loc_8277D4A0:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8277d4d8
	if (cr6.eq) goto loc_8277D4D8;
loc_8277D4B0:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x8277d4c8
	if (cr6.eq) goto loc_8277D4C8;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x8277d4c8
	if (cr6.eq) goto loc_8277D4C8;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// bne cr6,0x8277d4d8
	if (!cr6.eq) goto loc_8277D4D8;
loc_8277D4C8:
	// lbzu r10,1(r28)
	ea = 1 + r28.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r28.u32 = ea;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8277d4b0
	if (!cr6.eq) goto loc_8277D4B0;
loc_8277D4D8:
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x8277d148
	if (!cr6.eq) goto loc_8277D148;
loc_8277D4E8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r14
	r27.u64 = r14.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	r11.s64 = ctx.r8.s32 >> 4;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r19,r7
	r11.s64 = ctx.r7.s64 - r19.s64;
	// addi r26,r11,-32
	r26.s64 = r11.s64 + -32;
	// srawi. r24,r26,1
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r24.s64 = r26.s32 >> 1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// ble 0x8277d5c0
	if (!cr0.gt) goto loc_8277D5C0;
	// addi r25,r19,1
	r25.s64 = r19.s64 + 1;
	// add r30,r19,r26
	r30.u64 = r19.u64 + r26.u64;
loc_8277D520:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r9,r25,r27
	ctx.r9.u64 = r25.u64 + r27.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r14
	r28.u64 = r14.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	r11.s64 = ctx.r6.s32 >> 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bgt cr6,0x8277d564
	if (cr6.gt) goto loc_8277D564;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r7,r30,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r8,r30,4,23,27
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0x1F0;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// add r28,r10,r8
	r28.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8277D564:
	// mr r29,r14
	r29.u64 = r14.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bgt cr6,0x8277d584
	if (cr6.gt) goto loc_8277D584;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r9,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x1F0;
	// lwzx r11,r8,r11
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
loc_8277D584:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmpw cr6,r27,r24
	cr6.compare<int32_t>(r27.s32, r24.s32, xer);
	// blt cr6,0x8277d520
	if (cr6.lt) goto loc_8277D520;
loc_8277D5C0:
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// mr r9,r15
	ctx.r9.u64 = r15.u64;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r8,28(r23)
	ctx.r8.u64 = PPC_LOAD_U32(r23.u32 + 28);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r4,364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// srawi r11,r3,4
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	r11.s64 = ctx.r3.s32 >> 4;
	// lwz r3,356(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r31,r23,8
	r31.s64 = r23.s64 + 8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r8,r11,-32
	ctx.r8.s64 = r11.s64 + -32;
	// bl 0x8277cda8
	sub_8277CDA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_8277D61C"))) PPC_WEAK_FUNC(sub_8277D61C);
PPC_FUNC_IMPL(__imp__sub_8277D61C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8277D620"))) PPC_WEAK_FUNC(sub_8277D620);
PPC_FUNC_IMPL(__imp__sub_8277D620) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8277d65c
	if (cr6.lt) goto loc_8277D65C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277D65C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d684
	if (cr6.eq) goto loc_8277D684;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
loc_8277D684:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277d6a4
	if (cr6.eq) goto loc_8277D6A4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r4,r10,-20292
	ctx.r4.s64 = ctx.r10.s64 + -20292;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82789348
	sub_82789348(ctx, base);
loc_8277D6A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8277D6A8"))) PPC_WEAK_FUNC(sub_8277D6A8);
PPC_FUNC_IMPL(__imp__sub_8277D6A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8277D6AC"))) PPC_WEAK_FUNC(sub_8277D6AC);
PPC_FUNC_IMPL(__imp__sub_8277D6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277D6B0"))) PPC_WEAK_FUNC(sub_8277D6B0);
PPC_FUNC_IMPL(__imp__sub_8277D6B0) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lbz r9,198(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 198);
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8277d6f8
	if (!cr6.eq) goto loc_8277D6F8;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x8278f180
	sub_8278F180(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x8277d6fc
	goto loc_8277D6FC;
loc_8277D6F8:
	// li r26,0
	r26.s64 = 0;
loc_8277D6FC:
	// cmpwi cr6,r31,138
	cr6.compare<int32_t>(r31.s32, 138, xer);
	// bne cr6,0x8277d730
	if (!cr6.eq) goto loc_8277D730;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r29,1
	r29.s64 = 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lbz r27,5(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// b 0x8277d78c
	goto loc_8277D78C;
loc_8277D730:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8277ae90
	sub_8277AE90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r27,3(r11)
	r27.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8277d78c
	if (!cr6.lt) goto loc_8277D78C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_8277D78C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8277d880
	if (cr6.eq) goto loc_8277D880;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d880
	if (cr6.eq) goto loc_8277D880;
	// lwz r3,156(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 156);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277d7d0
	if (cr6.eq) goto loc_8277D7D0;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x8277d7d0
	if (cr6.lt) goto loc_8277D7D0;
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
loc_8277D7D0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827b70e0
	sub_827B70E0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x8277d880
	if (cr6.lt) goto loc_8277D880;
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// beq cr6,0x8277d848
	if (cr6.eq) goto loc_8277D848;
loc_8277D800:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x8277d850
	if (!cr6.lt) goto loc_8277D850;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r6,r9,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8277d83c
	if (cr6.eq) goto loc_8277D83C;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// lbz r9,1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_8277D83C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, xer);
	// blt cr6,0x8277d800
	if (cr6.lt) goto loc_8277D800;
loc_8277D848:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x8277d87c
	if (cr6.lt) goto loc_8277D87C;
loc_8277D850:
	// lbz r11,54(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 54);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277d880
	if (cr6.eq) goto loc_8277D880;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// addi r4,r11,-20264
	ctx.r4.s64 = r11.s64 + -20264;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9460
	return;
loc_8277D87C:
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
loc_8277D880:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8277D884"))) PPC_WEAK_FUNC(sub_8277D884);
PPC_FUNC_IMPL(__imp__sub_8277D884) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8277D888"))) PPC_WEAK_FUNC(sub_8277D888);
PPC_FUNC_IMPL(__imp__sub_8277D888) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8277d930
	if (cr6.eq) goto loc_8277D930;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bne cr6,0x8277d930
	if (!cr6.eq) goto loc_8277D930;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8278f0b0
	sub_8278F0B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277d900
	if (cr6.eq) goto loc_8277D900;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r5,r3,104
	ctx.r5.s64 = ctx.r3.s64 + 104;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8277d904
	goto loc_8277D904;
loc_8277D900:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_8277D904:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82767360
	sub_82767360(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8277d924
	if (cr6.eq) goto loc_8277D924;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_8277D924:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9460
	return;
loc_8277D930:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bne cr6,0x8277d924
	if (!cr6.eq) goto loc_8277D924;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827670c8
	sub_827670C8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277da98
	if (cr6.eq) goto loc_8277DA98;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8277d978
	if (cr6.lt) goto loc_8277D978;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277D978:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277d9a0
	if (cr6.eq) goto loc_8277D9A0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
loc_8277D9A0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8278f0b0
	sub_8278F0B0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277d9c0
	if (cr6.eq) goto loc_8277D9C0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_8277D9C0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
	// addi r9,r26,104
	ctx.r9.s64 = r26.s64 + 104;
	// bne cr6,0x8277d9e0
	if (!cr6.eq) goto loc_8277D9E0;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_8277D9E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r5,r10,-25696
	ctx.r5.s64 = ctx.r10.s64 + -25696;
	// subf r4,r8,r11
	ctx.r4.s64 = r11.s64 - ctx.r8.s64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// srawi r11,r4,4
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	r11.s64 = ctx.r4.s32 >> 4;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stb r30,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r30.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8276a2f8
	sub_8276A2F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8277da80
	if (!cr6.lt) goto loc_8277DA80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_8277DA80:
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8277daa0
	if (cr6.eq) goto loc_8277DAA0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// b 0x8277daa0
	goto loc_8277DAA0;
loc_8277DA98:
	// li r30,0
	r30.s64 = 0;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_8277DAA0:
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277dac0
	if (!cr6.eq) goto loc_8277DAC0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277dac0
	if (cr6.eq) goto loc_8277DAC0;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277DAC0:
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277dae4
	if (!cr6.eq) goto loc_8277DAE4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277dae4
	if (cr6.eq) goto loc_8277DAE4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277DAE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8277DAEC"))) PPC_WEAK_FUNC(sub_8277DAEC);
PPC_FUNC_IMPL(__imp__sub_8277DAEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8277DAF0"))) PPC_WEAK_FUNC(sub_8277DAF0);
PPC_FUNC_IMPL(__imp__sub_8277DAF0) {
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
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r30,24(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,2128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2128, ctx.r10.u32);
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277dc40
	if (cr6.eq) goto loc_8277DC40;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r29.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r5,r11,340
	ctx.r5.s64 = r11.s64 + 340;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8277dc38
	if (cr6.eq) goto loc_8277DC38;
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x8277db7c
	if (cr6.eq) goto loc_8277DB7C;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bne cr6,0x8277db80
	if (!cr6.eq) goto loc_8277DB80;
loc_8277DB7C:
	// li r11,1
	r11.s64 = 1;
loc_8277DB80:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277dc38
	if (cr6.eq) goto loc_8277DC38;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r29.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,12(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// lwz r11,28(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r8,r11,-31
	ctx.r8.s64 = r11.s64 + -31;
	// bl 0x8277cda8
	sub_8277CDA8(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,1008
	ctx.r4.s64 = ctx.r10.s64 + 1008;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x827892d8
	sub_827892D8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277dc18
	if (!cr0.eq) goto loc_8277DC18;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277DC18:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,2128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// b 0x828e946c
	return;
loc_8277DC38:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_8277DC40:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827667d8
	sub_827667D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r30,2000
	cr6.compare<uint32_t>(r30.u32, 2000, xer);
	// blt cr6,0x8277dc7c
	if (cr6.lt) goto loc_8277DC7C;
	// li r30,1999
	r30.s64 = 1999;
loc_8277DC7C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r4,2000
	ctx.r4.s64 = 2000;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stbx r29,r30,r10
	PPC_STORE_U8(r30.u32 + ctx.r10.u32, r29.u8);
	// lbz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8277dcc8
	if (cr6.eq) goto loc_8277DCC8;
	// li r9,10
	ctx.r9.s64 = 10;
loc_8277DCAC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,13
	cr6.compare<uint32_t>(ctx.r8.u32, 13, xer);
	// bne cr6,0x8277dcbc
	if (!cr6.eq) goto loc_8277DCBC;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_8277DCBC:
	// lbzu r10,1(r11)
	ea = 1 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277dcac
	if (!cr6.eq) goto loc_8277DCAC;
loc_8277DCC8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,2000
	cr6.compare<uint32_t>(ctx.r10.u32, 2000, xer);
	// bge cr6,0x8277dcec
	if (!cr6.lt) goto loc_8277DCEC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,1008
	ctx.r4.s64 = r11.s64 + 1008;
	// b 0x8277dcf4
	goto loc_8277DCF4;
loc_8277DCEC:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-20176
	ctx.r4.s64 = r11.s64 + -20176;
loc_8277DCF4:
	// bl 0x827892d8
	sub_827892D8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277dd14
	if (!cr0.eq) goto loc_8277DD14;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277DD14:
	// lwz r3,2128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
}

__attribute__((alias("__imp__sub_8277DD20"))) PPC_WEAK_FUNC(sub_8277DD20);
PPC_FUNC_IMPL(__imp__sub_8277DD20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8277DD24"))) PPC_WEAK_FUNC(sub_8277DD24);
PPC_FUNC_IMPL(__imp__sub_8277DD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277DD28"))) PPC_WEAK_FUNC(sub_8277DD28);
PPC_FUNC_IMPL(__imp__sub_8277DD28) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stb r31,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, r31.u8);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stb r31,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, r31.u8);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8277dd88
	if (cr6.gt) goto loc_8277DD88;
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_8277DD88:
	// bl 0x82766560
	sub_82766560(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x8277cb80
	sub_8277CB80(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8277de04
	if (!cr6.eq) goto loc_8277DE04;
	// lbz r11,54(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 54);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277de04
	if (cr6.eq) goto loc_8277DE04;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82768200
	sub_82768200(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// addi r4,r10,-20156
	ctx.r4.s64 = ctx.r10.s64 + -20156;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277de04
	if (!cr0.eq) goto loc_8277DE04;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277DE04:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r8,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x8277de4c
	if (cr6.lt) goto loc_8277DE4C;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,4,23,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
loc_8277DE4C:
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r3.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277e004
	if (cr6.eq) goto loc_8277E004;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r8,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// blt cr6,0x8277dea8
	if (cr6.lt) goto loc_8277DEA8;
	// addi r11,r11,-6
	r11.s64 = r11.s64 + -6;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,4,23,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
loc_8277DEA8:
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,-24324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -24324);
	f31.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r6,r9,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r9.s64;
	// srawi r11,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	r11.s64 = ctx.r6.s32 >> 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x8277df08
	if (cr6.lt) goto loc_8277DF08;
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r11,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_8277DF08:
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// stfs f13,140(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	r11.s64 = ctx.r7.s32 >> 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x8277df60
	if (cr6.lt) goto loc_8277DF60;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r11,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_8277DF60:
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r11,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	r11.s64 = ctx.r7.s32 >> 4;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8277dfb8
	if (cr6.lt) goto loc_8277DFB8;
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r11,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_8277DFB8:
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r29,4
	r29.s64 = 4;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
loc_8277DFD4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8277dffc
	if (!cr6.lt) goto loc_8277DFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_8277DFFC:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8277dfd4
	if (!cr0.eq) goto loc_8277DFD4;
loc_8277E004:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277e088
	if (cr6.eq) goto loc_8277E088;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827a4928
	sub_827A4928(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e088
	if (cr6.eq) goto loc_8277E088;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r3,2544
	r11.s64 = ctx.r3.s64 + 2544;
	// stw r10,2544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2544, ctx.r10.u32);
	// lbz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// stb r9,2548(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2548, ctx.r9.u8);
	// lbz r8,133(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// stb r8,2549(r3)
	PPC_STORE_U8(ctx.r3.u32 + 2549, ctx.r8.u8);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,2552(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2552, temp.u32);
	// stfs f13,2556(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2556, temp.u32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,2560(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2560, temp.u32);
	// stfs f11,2564(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2564, temp.u32);
	// lfs f10,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,2568(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2568, temp.u32);
	// stfs f10,2572(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 2572, temp.u32);
loc_8277E088:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x8278c630
	sub_8278C630(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8277E09C"))) PPC_WEAK_FUNC(sub_8277E09C);
PPC_FUNC_IMPL(__imp__sub_8277E09C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8277E0A0"))) PPC_WEAK_FUNC(sub_8277E0A0);
PPC_FUNC_IMPL(__imp__sub_8277E0A0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// extsw r31,r11
	r31.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// bgt cr6,0x8277e0d0
	if (cr6.gt) goto loc_8277E0D0;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
loc_8277E0D0:
	// li r11,1
	r11.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x8277e0f4
	if (cr6.eq) goto loc_8277E0F4;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// bne cr6,0x8277e0f8
	if (!cr6.eq) goto loc_8277E0F8;
loc_8277E0F4:
	// li r11,1
	r11.s64 = 1;
loc_8277E0F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277e228
	if (cr6.eq) goto loc_8277E228;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277e1dc
	if (cr6.eq) goto loc_8277E1DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e1dc
	if (cr6.eq) goto loc_8277E1DC;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r4,r10,120
	ctx.r4.s64 = ctx.r10.s64 + 120;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,120(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r5,r11,304
	ctx.r5.s64 = r11.s64 + 304;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8277e1b4
	if (cr6.eq) goto loc_8277E1B4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8277e1d4
	if (cr6.eq) goto loc_8277E1D4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767a90
	sub_82767A90(ctx, base);
	// b 0x8277e1d4
	goto loc_8277E1D4;
loc_8277E1B4:
	// lbz r11,54(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 54);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277e1d4
	if (cr6.eq) goto loc_8277E1D4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// addi r4,r11,-20056
	ctx.r4.s64 = r11.s64 + -20056;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8277E1D4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_8277E1DC:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277e1fc
	if (!cr6.eq) goto loc_8277E1FC;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e1fc
	if (cr6.eq) goto loc_8277E1FC;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E1FC:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277e220
	if (!cr6.eq) goto loc_8277E220;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e220
	if (cr6.eq) goto loc_8277E220;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E220:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// b 0x8277e248
	goto loc_8277E248;
loc_8277E228:
	// lbz r11,54(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 54);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277e248
	if (cr6.eq) goto loc_8277E248;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// addi r4,r11,-20112
	ctx.r4.s64 = r11.s64 + -20112;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8277E248:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8277e29c
	if (!cr6.lt) goto loc_8277E29C;
	// li r30,2
	r30.s64 = 2;
loc_8277E268:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8277e290
	if (!cr6.lt) goto loc_8277E290;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_8277E290:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8277e268
	if (!cr0.eq) goto loc_8277E268;
	// b 0x8277e2bc
	goto loc_8277E2BC;
loc_8277E29C:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8277E2BC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8277e2e4
	if (cr6.lt) goto loc_8277E2E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277E2E4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e2f8
	if (cr6.eq) goto loc_8277E2F8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
loc_8277E2F8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8277E304"))) PPC_WEAK_FUNC(sub_8277E304);
PPC_FUNC_IMPL(__imp__sub_8277E304) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8277E308"))) PPC_WEAK_FUNC(sub_8277E308);
PPC_FUNC_IMPL(__imp__sub_8277E308) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8277e344
	if (cr6.gt) goto loc_8277E344;
	// lwz r3,20(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
loc_8277E344:
	// bl 0x82768680
	sub_82768680(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8277e3a0
	if (!cr6.lt) goto loc_8277E3A0;
	// li r30,2
	r30.s64 = 2;
loc_8277E36C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8277e394
	if (!cr6.lt) goto loc_8277E394;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_8277E394:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8277e36c
	if (!cr0.eq) goto loc_8277E36C;
	// b 0x8277e3c0
	goto loc_8277E3C0;
loc_8277E3A0:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8277E3C0:
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x8277e3dc
	if (cr6.eq) goto loc_8277E3DC;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne cr6,0x8277e3e0
	if (!cr6.eq) goto loc_8277E3E0;
loc_8277E3DC:
	// li r11,1
	r11.s64 = 1;
loc_8277E3E0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277e600
	if (cr6.eq) goto loc_8277E600;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277e5b4
	if (cr6.eq) goto loc_8277E5B4;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r28.u8);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r10,120
	ctx.r4.s64 = ctx.r10.s64 + 120;
	// lwz r11,120(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r5,r11,304
	ctx.r5.s64 = r11.s64 + 304;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8277e588
	if (cr6.eq) goto loc_8277E588;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e5a8
	if (cr6.eq) goto loc_8277E5A8;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x8277e5a8
	if (!cr6.gt) goto loc_8277E5A8;
loc_8277E488:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,28(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	r11.s64 = ctx.r7.s32 >> 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x8277e4d0
	if (cr6.gt) goto loc_8277E4D0;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// lwz r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r11,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
loc_8277E4D0:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x8277e4e8
	if (cr6.eq) goto loc_8277E4E8;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne cr6,0x8277e4ec
	if (!cr6.eq) goto loc_8277E4EC;
loc_8277E4E8:
	// li r11,1
	r11.s64 = 1;
loc_8277E4EC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277e578
	if (cr6.eq) goto loc_8277E578;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8277e530
	if (cr6.eq) goto loc_8277E530;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8277E530:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277e550
	if (!cr6.eq) goto loc_8277E550;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8277e550
	if (cr6.eq) goto loc_8277E550;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E550:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277e574
	if (!cr6.eq) goto loc_8277E574;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e574
	if (cr6.eq) goto loc_8277E574;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E574:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
loc_8277E578:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// blt cr6,0x8277e488
	if (cr6.lt) goto loc_8277E488;
	// b 0x8277e5a8
	goto loc_8277E5A8;
loc_8277E588:
	// lbz r11,54(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 54);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277e5a8
	if (cr6.eq) goto loc_8277E5A8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// addi r4,r11,-19928
	ctx.r4.s64 = r11.s64 + -19928;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8277E5A8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8277E5B4:
	// lbz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8277e5d4
	if (!cr6.eq) goto loc_8277E5D4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277e5d4
	if (cr6.eq) goto loc_8277E5D4;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E5D4:
	// lbz r11,120(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277e5f8
	if (!cr6.eq) goto loc_8277E5F8;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e5f8
	if (cr6.eq) goto loc_8277E5F8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E5F8:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// b 0x8277e620
	goto loc_8277E620;
loc_8277E600:
	// lbz r11,54(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 54);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277e620
	if (cr6.eq) goto loc_8277E620;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// addi r4,r11,-19988
	ctx.r4.s64 = r11.s64 + -19988;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8277E620:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8277E63C"))) PPC_WEAK_FUNC(sub_8277E63C);
PPC_FUNC_IMPL(__imp__sub_8277E63C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8277E640"))) PPC_WEAK_FUNC(sub_8277E640);
PPC_FUNC_IMPL(__imp__sub_8277E640) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r10,-16
	ctx.r4.s64 = ctx.r10.s64 + -16;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x8277e67c
	if (cr6.gt) goto loc_8277E67C;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
loc_8277E67C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277e7e8
	if (cr6.eq) goto loc_8277E7E8;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277e7e8
	if (cr6.eq) goto loc_8277E7E8;
	// stb r28,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r28.u8);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r10,120
	ctx.r4.s64 = ctx.r10.s64 + 120;
	// lwz r11,120(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r5,r11,304
	ctx.r5.s64 = r11.s64 + 304;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8277e7bc
	if (cr6.eq) goto loc_8277E7BC;
	// lbz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x8277e7bc
	if (!cr6.eq) goto loc_8277E7BC;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e72c
	if (cr6.eq) goto loc_8277E72C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8277E72C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r3,648(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e764
	if (cr6.eq) goto loc_8277E764;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// bl 0x827922a0
	sub_827922A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8277e768
	goto loc_8277E768;
loc_8277E764:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8277E768:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// bl 0x8279ece8
	sub_8279ECE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// bl 0x82788a10
	sub_82788A10(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8277e7a0
	if (cr6.eq) goto loc_8277E7A0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E7A0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8277e7dc
	if (cr6.eq) goto loc_8277E7DC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// b 0x8277e81c
	goto loc_8277E81C;
loc_8277E7BC:
	// lbz r11,54(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 54);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277e7dc
	if (cr6.eq) goto loc_8277E7DC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// addi r4,r11,-19760
	ctx.r4.s64 = r11.s64 + -19760;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8277E7DC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// b 0x8277e81c
	goto loc_8277E81C;
loc_8277E7E8:
	// lbz r10,54(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 54);
	// rlwinm r9,r10,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8277e81c
	if (cr6.eq) goto loc_8277E81C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bne cr6,0x8277e810
	if (!cr6.eq) goto loc_8277E810;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-19808
	ctx.r4.s64 = r11.s64 + -19808;
	// b 0x8277e818
	goto loc_8277E818;
loc_8277E810:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-19852
	ctx.r4.s64 = r11.s64 + -19852;
loc_8277E818:
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8277E81C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8277e870
	if (!cr6.lt) goto loc_8277E870;
	// li r30,2
	r30.s64 = 2;
loc_8277E83C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8277e864
	if (!cr6.lt) goto loc_8277E864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_8277E864:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8277e83c
	if (!cr0.eq) goto loc_8277E83C;
	// b 0x8277e890
	goto loc_8277E890;
loc_8277E870:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8277E890:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277e8b0
	if (!cr6.eq) goto loc_8277E8B0;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e8b0
	if (cr6.eq) goto loc_8277E8B0;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E8B0:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277e8d4
	if (!cr6.eq) goto loc_8277E8D4;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e8d4
	if (cr6.eq) goto loc_8277E8D4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E8D4:
	// lbz r11,120(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277e8f8
	if (!cr6.eq) goto loc_8277E8F8;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e8f8
	if (cr6.eq) goto loc_8277E8F8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E8F8:
	// lbz r11,120(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277e91c
	if (!cr6.eq) goto loc_8277E91C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277e91c
	if (cr6.eq) goto loc_8277E91C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277E91C:
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8277E934"))) PPC_WEAK_FUNC(sub_8277E934);
PPC_FUNC_IMPL(__imp__sub_8277E934) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8277E938"))) PPC_WEAK_FUNC(sub_8277E938);
PPC_FUNC_IMPL(__imp__sub_8277E938) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// bgt cr6,0x8277e968
	if (cr6.gt) goto loc_8277E968;
	// lwz r31,20(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
loc_8277E968:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x8277e988
	if (cr6.eq) goto loc_8277E988;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// bne cr6,0x8277e98c
	if (!cr6.eq) goto loc_8277E98C;
loc_8277E988:
	// li r11,1
	r11.s64 = 1;
loc_8277E98C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277eaa8
	if (cr6.eq) goto loc_8277EAA8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277ea5c
	if (cr6.eq) goto loc_8277EA5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277ea5c
	if (cr6.eq) goto loc_8277EA5C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r4,r10,120
	ctx.r4.s64 = ctx.r10.s64 + 120;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r11,120(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r5,r11,304
	ctx.r5.s64 = r11.s64 + 304;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8277ea34
	if (cr6.eq) goto loc_8277EA34;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x8277ea54
	goto loc_8277EA54;
loc_8277EA34:
	// lbz r11,54(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 54);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277ea54
	if (cr6.eq) goto loc_8277EA54;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// addi r4,r11,-19648
	ctx.r4.s64 = r11.s64 + -19648;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8277EA54:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_8277EA5C:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277ea7c
	if (!cr6.eq) goto loc_8277EA7C;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277ea7c
	if (cr6.eq) goto loc_8277EA7C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277EA7C:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277eaa0
	if (!cr6.eq) goto loc_8277EAA0;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277eaa0
	if (cr6.eq) goto loc_8277EAA0;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277EAA0:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// b 0x8277eac8
	goto loc_8277EAC8;
loc_8277EAA8:
	// lbz r11,54(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 54);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277eac8
	if (cr6.eq) goto loc_8277EAC8;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// addi r4,r11,-19708
	ctx.r4.s64 = r11.s64 + -19708;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8277EAC8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8277eb1c
	if (!cr6.lt) goto loc_8277EB1C;
	// li r30,2
	r30.s64 = 2;
loc_8277EAE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8277eb10
	if (!cr6.lt) goto loc_8277EB10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_8277EB10:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8277eae8
	if (!cr0.eq) goto loc_8277EAE8;
	// b 0x8277eb3c
	goto loc_8277EB3C;
loc_8277EB1C:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8277EB3C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8277eb64
	if (cr6.lt) goto loc_8277EB64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8277EB64:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277eb7c
	if (cr6.eq) goto loc_8277EB7C;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r28,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r28.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8277EB7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8277EB80"))) PPC_WEAK_FUNC(sub_8277EB80);
PPC_FUNC_IMPL(__imp__sub_8277EB80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8277EB84"))) PPC_WEAK_FUNC(sub_8277EB84);
PPC_FUNC_IMPL(__imp__sub_8277EB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277EB88"))) PPC_WEAK_FUNC(sub_8277EB88);
PPC_FUNC_IMPL(__imp__sub_8277EB88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82792850
	sub_82792850(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8277EB90"))) PPC_WEAK_FUNC(sub_8277EB90);
PPC_FUNC_IMPL(__imp__sub_8277EB90) {
	PPC_FUNC_PROLOGUE();
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
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r3,640
	ctx.r3.s64 = ctx.r3.s64 + 640;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8278cb38
	sub_8278CB38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// beq cr6,0x8277ebe0
	if (cr6.eq) goto loc_8277EBE0;
	// bne 0x8277ebd8
	if (!cr0.eq) goto loc_8277EBD8;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277EBD8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8277ebec
	goto loc_8277EBEC;
loc_8277EBE0:
	// bne 0x8277ebe8
	if (!cr0.eq) goto loc_8277EBE8;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277EBE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8277EBEC:
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

__attribute__((alias("__imp__sub_8277EC00"))) PPC_WEAK_FUNC(sub_8277EC00);
PPC_FUNC_IMPL(__imp__sub_8277EC00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277EC04"))) PPC_WEAK_FUNC(sub_8277EC04);
PPC_FUNC_IMPL(__imp__sub_8277EC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277EC08"))) PPC_WEAK_FUNC(sub_8277EC08);
PPC_FUNC_IMPL(__imp__sub_8277EC08) {
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
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r31,r3,636
	r31.s64 = ctx.r3.s64 + 636;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// ble cr6,0x8277ec40
	if (!cr6.gt) goto loc_8277EC40;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278aef8
	sub_8278AEF8(ctx, base);
	// b 0x8277ec64
	goto loc_8277EC64;
loc_8277EC40:
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8277ec58
	if (!cr6.eq) goto loc_8277EC58;
	// bl 0x827655c8
	sub_827655C8(ctx, base);
loc_8277EC58:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278b070
	sub_8278B070(ctx, base);
loc_8277EC64:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8277ec84
	if (!cr6.eq) goto loc_8277EC84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8277ec98
	goto loc_8277EC98;
loc_8277EC84:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8277ec94
	if (cr6.eq) goto loc_8277EC94;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8279f3f8
	sub_8279F3F8(ctx, base);
loc_8277EC94:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8277EC98:
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

__attribute__((alias("__imp__sub_8277ECAC"))) PPC_WEAK_FUNC(sub_8277ECAC);
PPC_FUNC_IMPL(__imp__sub_8277ECAC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8277ECB0"))) PPC_WEAK_FUNC(sub_8277ECB0);
PPC_FUNC_IMPL(__imp__sub_8277ECB0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277ee78
	if (cr6.eq) goto loc_8277EE78;
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277ecf8
	if (cr6.eq) goto loc_8277ECF8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,0,4,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_8277ECF8:
	// mr r27,r11
	r27.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277ee78
	if (cr6.eq) goto loc_8277EE78;
loc_8277ED04:
	// lbz r11,124(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 124);
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// ble cr6,0x8277ed7c
	if (!cr6.gt) goto loc_8277ED7C;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8277ed64
	if (cr6.eq) goto loc_8277ED64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// and r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 & ctx.r9.u64;
	// bl 0x8278a550
	sub_8278A550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8277ed64
	if (cr6.lt) goto loc_8277ED64;
	// rlwinm r11,r3,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r8
	r31.u64 = ctx.r7.u64 & ctx.r8.u64;
	// b 0x8277edb0
	goto loc_8277EDB0;
loc_8277ED64:
	// li r11,0
	r11.s64 = 0;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r7,r8
	r31.u64 = ctx.r7.u64 & ctx.r8.u64;
	// b 0x8277edb0
	goto loc_8277EDB0;
loc_8277ED7C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8277ed94
	if (!cr6.eq) goto loc_8277ED94;
	// bl 0x827655c8
	sub_827655C8(ctx, base);
loc_8277ED94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278aff0
	sub_8278AFF0(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r8,r9
	r31.u64 = ctx.r8.u64 & ctx.r9.u64;
loc_8277EDB0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8277ee5c
	if (!cr6.eq) goto loc_8277EE5C;
	// lbz r31,124(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 124);
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(r31.s32, 5, xer);
	// blt cr6,0x8277edec
	if (cr6.lt) goto loc_8277EDEC;
	// subfic r11,r31,6
	xer.ca = r31.u32 <= 6;
	r11.s64 = 6 - r31.s64;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,272
	ctx.r3.s64 = r11.s64 + 272;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8277ee70
	if (!cr6.eq) goto loc_8277EE70;
loc_8277EDEC:
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(r31.s32, 6, xer);
	// blt cr6,0x8277ee20
	if (cr6.lt) goto loc_8277EE20;
	// lbz r10,124(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 124);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// subfic r9,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r10.s64;
	// addi r3,r11,248
	ctx.r3.s64 = r11.s64 + 248;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8277ee70
	if (!cr6.eq) goto loc_8277EE70;
loc_8277EE20:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8277ee3c
	if (cr6.eq) goto loc_8277EE3C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,0,4,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_8277EE3C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// lwz r27,20(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x8277ed04
	if (!cr6.eq) goto loc_8277ED04;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_8277EE5C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_8277EE70:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277EE78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8277EE80"))) PPC_WEAK_FUNC(sub_8277EE80);
PPC_FUNC_IMPL(__imp__sub_8277EE80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8277EE84"))) PPC_WEAK_FUNC(sub_8277EE84);
PPC_FUNC_IMPL(__imp__sub_8277EE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277EE88"))) PPC_WEAK_FUNC(sub_8277EE88);
PPC_FUNC_IMPL(__imp__sub_8277EE88) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bl 0x8277eb90
	sub_8277EB90(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f038
	if (cr6.eq) goto loc_8277F038;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8277f02c
	if (!cr6.eq) goto loc_8277F02C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r29,0
	r29.s64 = 0;
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r29.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x8277ef18
	if (cr6.eq) goto loc_8277EF18;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// rlwinm r8,r9,0,4,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_8277EF18:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8277ef38
	if (cr6.eq) goto loc_8277EF38;
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x8279f0f8
	sub_8279F0F8(ctx, base);
loc_8277EF38:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277ef58
	if (!cr6.eq) goto loc_8277EF58;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277ef58
	if (cr6.eq) goto loc_8277EF58;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277EF58:
	// lbz r11,112(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277ef7c
	if (!cr6.eq) goto loc_8277EF7C;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277ef7c
	if (cr6.eq) goto loc_8277EF7C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277EF7C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bl 0x8277eb90
	sub_8277EB90(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277efd0
	if (cr6.eq) goto loc_8277EFD0;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// rlwinm r8,r9,0,4,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_8277EFD0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277efe0
	if (cr6.eq) goto loc_8277EFE0;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277EFE0:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277f004
	if (!cr6.eq) goto loc_8277F004;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f004
	if (cr6.eq) goto loc_8277F004;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277F004:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277f028
	if (!cr6.eq) goto loc_8277F028;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f028
	if (cr6.eq) goto loc_8277F028;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277F028:
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
loc_8277F02C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_8277F038:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8277F040"))) PPC_WEAK_FUNC(sub_8277F040);
PPC_FUNC_IMPL(__imp__sub_8277F040) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8277F044"))) PPC_WEAK_FUNC(sub_8277F044);
PPC_FUNC_IMPL(__imp__sub_8277F044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277F048"))) PPC_WEAK_FUNC(sub_8277F048);
PPC_FUNC_IMPL(__imp__sub_8277F048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r30,r3,632
	r30.s64 = ctx.r3.s64 + 632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278c7e8
	sub_8278C7E8(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r9
	r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8277f0c0
	if (!cr6.eq) goto loc_8277F0C0;
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// bl 0x8277ee88
	sub_8277EE88(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278c7e8
	sub_8278C7E8(ctx, base);
	// subfic r10,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r3.s64;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r7,r8
	r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277f0cc
	if (cr6.eq) goto loc_8277F0CC;
loc_8277F0C0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8277F0CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8277F0D4"))) PPC_WEAK_FUNC(sub_8277F0D4);
PPC_FUNC_IMPL(__imp__sub_8277F0D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8277F0D8"))) PPC_WEAK_FUNC(sub_8277F0D8);
PPC_FUNC_IMPL(__imp__sub_8277F0D8) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f114
	if (cr6.eq) goto loc_8277F114;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8277F114:
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,2
	ctx.r9.s64 = r30.s64 + 2;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r27,120
	r30.s64 = r27.s64 + 120;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8277f1f0
	if (cr6.eq) goto loc_8277F1F0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f1f0
	if (cr6.eq) goto loc_8277F1F0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r5,r31,304
	ctx.r5.s64 = r31.s64 + 304;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8277f1e8
	if (cr6.eq) goto loc_8277F1E8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f1d4
	if (cr6.eq) goto loc_8277F1D4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_8277F1D4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8277f1e4
	if (cr6.eq) goto loc_8277F1E4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277F1E4:
	// mr r28,r31
	r28.u64 = r31.u64;
loc_8277F1E8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277F1F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq cr6,0x8277f20c
	if (cr6.eq) goto loc_8277F20C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8277F20C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8277F210"))) PPC_WEAK_FUNC(sub_8277F210);
PPC_FUNC_IMPL(__imp__sub_8277F210) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8277F214"))) PPC_WEAK_FUNC(sub_8277F214);
PPC_FUNC_IMPL(__imp__sub_8277F214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277F218"))) PPC_WEAK_FUNC(sub_8277F218);
PPC_FUNC_IMPL(__imp__sub_8277F218) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r25,648(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277f318
	if (cr6.eq) goto loc_8277F318;
	// li r30,0
	r30.s64 = 0;
loc_8277F258:
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f288
	if (cr6.eq) goto loc_8277F288;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8279f260
	sub_8279F260(ctx, base);
	// b 0x8277f28c
	goto loc_8277F28C;
loc_8277F288:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8277F28C:
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r30.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x82766758
	sub_82766758(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827766f0
	sub_827766F0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277f2e4
	if (!cr6.eq) goto loc_8277F2E4;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f2e4
	if (cr6.eq) goto loc_8277F2E4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277F2E4:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277f308
	if (!cr6.eq) goto loc_8277F308;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f308
	if (cr6.eq) goto loc_8277F308;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277F308:
	// lwzu r11,8(r31)
	ea = 8 + r31.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8277f258
	if (!cr6.eq) goto loc_8277F258;
loc_8277F318:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8277F31C"))) PPC_WEAK_FUNC(sub_8277F31C);
PPC_FUNC_IMPL(__imp__sub_8277F31C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8277F320"))) PPC_WEAK_FUNC(sub_8277F320);
PPC_FUNC_IMPL(__imp__sub_8277F320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277f474
	if (cr6.eq) goto loc_8277F474;
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r25,0
	r25.s64 = 0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r30,r3,120
	r30.s64 = ctx.r3.s64 + 120;
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// lwz r6,120(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,8(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r25.u8);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// bl 0x8277ca68
	sub_8277CA68(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8277f400
	if (cr6.eq) goto loc_8277F400;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277f3dc
	if (!cr0.eq) goto loc_8277F3DC;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277F3DC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x8277f63c
	if (!cr0.eq) goto loc_8277F63C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e945c
	return;
loc_8277F400:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8277a720
	sub_8277A720(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277f4ec
	if (cr6.eq) goto loc_8277F4EC;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8277ac10
	sub_8277AC10(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8277f480
	if (!cr6.eq) goto loc_8277F480;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277f45c
	if (!cr0.eq) goto loc_8277F45C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277F45C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x8277f474
	if (!cr0.eq) goto loc_8277F474;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277F474:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e945c
	return;
loc_8277F480:
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277f4c8
	if (!cr0.eq) goto loc_8277F4C8;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277F4C8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x8277f4e0
	if (!cr0.eq) goto loc_8277F4E0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277F4E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e945c
	return;
loc_8277F4EC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8277f578
	if (cr6.eq) goto loc_8277F578;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addic. r27,r11,-1
	xer.ca = r11.u32 > 0;
	r27.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x8277f578
	if (cr0.lt) goto loc_8277F578;
	// rlwinm r31,r27,3,0,28
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
loc_8277F504:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8277f530
	if (cr6.eq) goto loc_8277F530;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277f56c
	if (cr6.eq) goto loc_8277F56C;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x8277f53c
	goto loc_8277F53C;
loc_8277F530:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277f56c
	if (cr6.eq) goto loc_8277F56C;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
loc_8277F53C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f56c
	if (cr6.eq) goto loc_8277F56C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
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
	// bne cr6,0x8277f600
	if (!cr6.eq) goto loc_8277F600;
loc_8277F56C:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// bge 0x8277f504
	if (!cr0.lt) goto loc_8277F504;
loc_8277F578:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8277ecb0
	sub_8277ECB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8277f600
	if (!cr6.eq) goto loc_8277F600;
	// lwz r11,116(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277f5c8
	if (cr6.eq) goto loc_8277F5C8;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
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
	// bne cr6,0x8277f600
	if (!cr6.eq) goto loc_8277F600;
loc_8277F5C8:
	// lbz r11,124(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 124);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// ble cr6,0x8277f648
	if (!cr6.gt) goto loc_8277F648;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,244(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x8277f600
	if (cr6.eq) goto loc_8277F600;
	// lwz r9,256(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x8277f600
	if (cr6.eq) goto loc_8277F600;
	// lwz r10,252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8277f698
	if (!cr6.eq) goto loc_8277F698;
loc_8277F600:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277f624
	if (!cr0.eq) goto loc_8277F624;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277F624:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x8277f63c
	if (!cr0.eq) goto loc_8277F63C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277F63C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e945c
	return;
loc_8277F648:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8277f65c
	if (!cr6.eq) goto loc_8277F65C;
	// bl 0x827655c8
	sub_827655C8(ctx, base);
loc_8277F65C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r8,244(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 244);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x8277f600
	if (cr6.eq) goto loc_8277F600;
	// lwz r8,256(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 256);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r9
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, xer);
	// beq cr6,0x8277f600
	if (cr6.eq) goto loc_8277F600;
	// lwz r10,252(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 252);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// beq cr6,0x8277f600
	if (cr6.eq) goto loc_8277F600;
loc_8277F698:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,95
	cr6.compare<uint32_t>(ctx.r9.u32, 95, xer);
	// bne cr6,0x8277f700
	if (!cr6.eq) goto loc_8277F700;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lbz r10,124(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 124);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subfic r9,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// bl 0x827a1bb8
	sub_827A1BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8277f700
	if (cr6.eq) goto loc_8277F700;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8277f700
	if (!cr6.eq) goto loc_8277F700;
	// lwz r3,116(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8277f600
	if (!cr6.eq) goto loc_8277F600;
loc_8277F700:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,672(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 672);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277f73c
	if (cr6.eq) goto loc_8277F73C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8277f600
	if (!cr6.eq) goto loc_8277F600;
loc_8277F73C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277f760
	if (!cr0.eq) goto loc_8277F760;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277F760:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x8277f474
	if (!cr0.eq) goto loc_8277F474;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8277F780"))) PPC_WEAK_FUNC(sub_8277F780);
PPC_FUNC_IMPL(__imp__sub_8277F780) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8277F784"))) PPC_WEAK_FUNC(sub_8277F784);
PPC_FUNC_IMPL(__imp__sub_8277F784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277F788"))) PPC_WEAK_FUNC(sub_8277F788);
PPC_FUNC_IMPL(__imp__sub_8277F788) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8277f848
	if (cr6.eq) goto loc_8277F848;
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8277f848
	if (cr0.lt) goto loc_8277F848;
	// rlwinm r29,r26,3,0,28
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
loc_8277F7C0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8277f7ec
	if (cr6.eq) goto loc_8277F7EC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277f7f8
	if (cr6.eq) goto loc_8277F7F8;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// b 0x8277f7fc
	goto loc_8277F7FC;
loc_8277F7EC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,104
	r31.s64 = r11.s64 + 104;
	// bne cr6,0x8277f7fc
	if (!cr6.eq) goto loc_8277F7FC;
loc_8277F7F8:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_8277F7FC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r25.u8);
	// beq cr6,0x8277f834
	if (cr6.eq) goto loc_8277F834;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8277f86c
	if (!cr6.eq) goto loc_8277F86C;
loc_8277F834:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
	// bge 0x8277f7c0
	if (!cr0.lt) goto loc_8277F7C0;
loc_8277F848:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8277ecb0
	sub_8277ECB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f8a4
	if (cr6.eq) goto loc_8277F8A4;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9458
	return;
loc_8277F86C:
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9458
	return;
loc_8277F8A4:
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// stb r25,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r25.u8);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8277F8D4"))) PPC_WEAK_FUNC(sub_8277F8D4);
PPC_FUNC_IMPL(__imp__sub_8277F8D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8277F8D8"))) PPC_WEAK_FUNC(sub_8277F8D8);
PPC_FUNC_IMPL(__imp__sub_8277F8D8) {
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
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277f974
	if (cr6.eq) goto loc_8277F974;
	// lwz r11,116(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277f934
	if (cr6.eq) goto loc_8277F934;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// b 0x8277f938
	goto loc_8277F938;
loc_8277F934:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8277F938:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-20188
	ctx.r8.s64 = ctx.r10.s64 + -20188;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stb r30,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r30.u8);
	// stb r30,56(r31)
	PPC_STORE_U8(r31.u32 + 56, r30.u8);
	// b 0x8277f978
	goto loc_8277F978;
loc_8277F974:
	// li r31,0
	r31.s64 = 0;
loc_8277F978:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,200
	ctx.r3.s64 = r29.s64 + 200;
	// bl 0x8278cc48
	sub_8278CC48(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8277f99c
	if (cr6.eq) goto loc_8277F99C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8277F99C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8277F9A0"))) PPC_WEAK_FUNC(sub_8277F9A0);
PPC_FUNC_IMPL(__imp__sub_8277F9A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8277F9A4"))) PPC_WEAK_FUNC(sub_8277F9A4);
PPC_FUNC_IMPL(__imp__sub_8277F9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277F9A8"))) PPC_WEAK_FUNC(sub_8277F9A8);
PPC_FUNC_IMPL(__imp__sub_8277F9A8) {
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
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x8278c5a0
	sub_8278C5A0(ctx, base);
	// addi r31,r28,40
	r31.s64 = r28.s64 + 40;
	// li r30,4
	r30.s64 = 4;
	// li r27,0
	r27.s64 = 0;
loc_8277F9CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r27,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r27.u8);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bne 0x8277f9cc
	if (!cr0.eq) goto loc_8277F9CC;
	// lwz r11,108(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// addi r31,r28,104
	r31.s64 = r28.s64 + 104;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277fa48
	if (cr6.eq) goto loc_8277FA48;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r11
	r30.u64 = r11.u64;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r29,r11,-16
	r29.s64 = r11.s64 + -16;
loc_8277FA08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// bne 0x8277fa08
	if (!cr0.eq) goto loc_8277FA08;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277fa64
	if (cr6.eq) goto loc_8277FA64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277fa40
	if (cr6.eq) goto loc_8277FA40;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_8277FA40:
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// b 0x8277fa64
	goto loc_8277FA64;
loc_8277FA48:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x8277fa64
	if (cr6.gt) goto loc_8277FA64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8286ab28
	sub_8286AB28(ctx, base);
loc_8277FA64:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// addi r3,r28,128
	ctx.r3.s64 = r28.s64 + 128;
	// lbz r11,198(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 198);
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// stb r10,198(r28)
	PPC_STORE_U8(r28.u32 + 198, ctx.r10.u8);
	// bl 0x8278c6e0
	sub_8278C6E0(ctx, base);
	// lwz r4,204(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 204);
	// addi r31,r28,200
	r31.s64 = r28.s64 + 200;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8277fac0
	if (cr6.eq) goto loc_8277FAC0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82793af8
	sub_82793AF8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277fadc
	if (cr6.eq) goto loc_8277FADC;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277fab8
	if (cr6.eq) goto loc_8277FAB8;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_8277FAB8:
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// b 0x8277fadc
	goto loc_8277FADC;
loc_8277FAC0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bgt cr6,0x8277fadc
	if (cr6.gt) goto loc_8277FADC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82793b58
	sub_82793B58(ctx, base);
loc_8277FADC:
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r27,196(r28)
	PPC_STORE_U16(r28.u32 + 196, r27.u16);
	// addi r3,r28,164
	ctx.r3.s64 = r28.s64 + 164;
	// bl 0x82789fd0
	sub_82789FD0(ctx, base);
	// addi r3,r28,176
	ctx.r3.s64 = r28.s64 + 176;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r27,176(r28)
	PPC_STORE_U8(r28.u32 + 176, r27.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8277FB00"))) PPC_WEAK_FUNC(sub_8277FB00);
PPC_FUNC_IMPL(__imp__sub_8277FB00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8277FB04"))) PPC_WEAK_FUNC(sub_8277FB04);
PPC_FUNC_IMPL(__imp__sub_8277FB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8277FB08"))) PPC_WEAK_FUNC(sub_8277FB08);
PPC_FUNC_IMPL(__imp__sub_8277FB08) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8277fd64
	if (cr6.eq) goto loc_8277FD64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,648(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277fb50
	if (cr6.eq) goto loc_8277FB50;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82788b48
	sub_82788B48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8277fb54
	goto loc_8277FB54;
loc_8277FB50:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8277FB54:
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r9,-19556
	ctx.r4.s64 = ctx.r9.s64 + -19556;
	// li r5,9
	ctx.r5.s64 = 9;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r8,-19568
	ctx.r4.s64 = ctx.r8.s64 + -19568;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-19576
	ctx.r4.s64 = r11.s64 + -19576;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r11,r9,8
	r11.s64 = ctx.r9.s64 + 8;
	// addi r3,r11,588
	ctx.r3.s64 = r11.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stb r28,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r28.u8);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,44(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,0,4,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277fcf8
	if (cr6.eq) goto loc_8277FCF8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277FCF8:
	// stw r30,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277fd20
	if (!cr0.eq) goto loc_8277FD20;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277FD20:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277fd3c
	if (!cr0.eq) goto loc_8277FD3C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277FD3C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x8277fd58
	if (!cr0.eq) goto loc_8277FD58;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277FD58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// b 0x8277fd7c
	goto loc_8277FD7C;
loc_8277FD64:
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277fd74
	if (cr6.eq) goto loc_8277FD74;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8277FD74:
	// li r28,0
	r28.s64 = 0;
	// stw r28,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r28.u32);
loc_8277FD7C:
	// addi r3,r31,636
	ctx.r3.s64 = r31.s64 + 636;
	// bl 0x8278d0b0
	sub_8278D0B0(ctx, base);
	// addi r3,r31,640
	ctx.r3.s64 = r31.s64 + 640;
	// bl 0x8278d018
	sub_8278D018(ctx, base);
	// addi r3,r31,632
	ctx.r3.s64 = r31.s64 + 632;
	// bl 0x827774b0
	sub_827774B0(ctx, base);
	// stw r28,644(r31)
	PPC_STORE_U32(r31.u32 + 644, r28.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8277FD9C"))) PPC_WEAK_FUNC(sub_8277FD9C);
PPC_FUNC_IMPL(__imp__sub_8277FD9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8277FDA0"))) PPC_WEAK_FUNC(sub_8277FDA0);
PPC_FUNC_IMPL(__imp__sub_8277FDA0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r3,648(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8277fdfc
	if (cr6.eq) goto loc_8277FDFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8279fce0
	sub_8279FCE0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x8277fe00
	goto loc_8277FE00;
loc_8277FDFC:
	// mr r26,r25
	r26.u64 = r25.u64;
loc_8277FE00:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r31,r11,3
	r31.s64 = r11.s64 + 3;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// addi r3,r10,596
	ctx.r3.s64 = ctx.r10.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r27,r11,2
	r27.s64 = r11.s64 + 2;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r5,r6,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// or r11,r5,r7
	r11.u64 = ctx.r5.u64 | ctx.r7.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8277ff14
	if (!cr6.gt) goto loc_8277FF14;
	// addi r28,r26,80
	r28.s64 = r26.s64 + 80;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_8277FE6C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// lwz r11,120(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// lwz r11,84(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 84);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x8278a200
	sub_8278A200(ctx, base);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r29,r11,-8
	r29.s64 = r11.s64 + -8;
	// stw r25,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, r25.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x8277fee0
	if (!cr0.eq) goto loc_8277FEE0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277FEE0:
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// add r11,r10,r27
	r11.u64 = ctx.r10.u64 + r27.u64;
	// addi r27,r11,1
	r27.s64 = r11.s64 + 1;
	// bne 0x8277ff0c
	if (!cr0.eq) goto loc_8277FF0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8277FF0C:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x8277fe6c
	if (!cr0.eq) goto loc_8277FE6C;
loc_8277FF14:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r11,76(r26)
	PPC_STORE_U32(r26.u32 + 76, r11.u32);
	// stb r25,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r25.u8);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stw r7,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r7.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// rlwinm r5,r6,0,4,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r5,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r5.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277ff8c
	if (cr6.eq) goto loc_8277FF8C;
	// lwz r9,200(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8277ff8c
	if (cr6.eq) goto loc_8277FF8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8279f0f8
	sub_8279F0F8(ctx, base);
loc_8277FF8C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8277ffd8
	if (cr6.eq) goto loc_8277FFD8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8277FFD8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r3,648(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780030
	if (cr6.eq) goto loc_82780030;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279f910
	sub_8279F910(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82780034
	goto loc_82780034;
loc_82780030:
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82780034:
	// li r11,7
	r11.s64 = 7;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r31,120(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r29,r31,632
	r29.s64 = r31.s64 + 632;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8278c7e8
	sub_8278C7E8(ctx, base);
	// subfic r9,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r3.s64;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r7
	r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8278009c
	if (!cr6.eq) goto loc_8278009C;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277ee88
	sub_8277EE88(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8278c7e8
	sub_8278C7E8(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r9
	r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827800a4
	if (cr6.eq) goto loc_827800A4;
loc_8278009C:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x827800a8
	goto loc_827800A8;
loc_827800A4:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_827800A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// bl 0x8279f188
	sub_8279F188(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// bl 0x8279ece8
	sub_8279ECE8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780118
	if (!cr6.eq) goto loc_82780118;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82780104
	if (cr6.lt) goto loc_82780104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82780104:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780118
	if (cr6.eq) goto loc_82780118;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
loc_82780118:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82780128
	if (cr6.eq) goto loc_82780128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780128:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780150
	if (!cr6.eq) goto loc_82780150;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780150
	if (cr6.eq) goto loc_82780150;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780150:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780174
	if (!cr6.eq) goto loc_82780174;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780174
	if (cr6.eq) goto loc_82780174;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780174:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82780194
	if (!cr0.eq) goto loc_82780194;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82780194:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_827801A0"))) PPC_WEAK_FUNC(sub_827801A0);
PPC_FUNC_IMPL(__imp__sub_827801A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827801A4"))) PPC_WEAK_FUNC(sub_827801A4);
PPC_FUNC_IMPL(__imp__sub_827801A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827801A8"))) PPC_WEAK_FUNC(sub_827801A8);
PPC_FUNC_IMPL(__imp__sub_827801A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,104
	ctx.r4.s64 = 104;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r3,648(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780204
	if (cr6.eq) goto loc_82780204;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8279fce0
	sub_8279FCE0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82780208
	goto loc_82780208;
loc_82780204:
	// mr r27,r23
	r27.u64 = r23.u64;
loc_82780208:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r31,r11,3
	r31.s64 = r11.s64 + 3;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,120(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// addi r3,r10,596
	ctx.r3.s64 = ctx.r10.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,16(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r5,103(r27)
	PPC_STORE_U8(r27.u32 + 103, ctx.r5.u8);
	// or r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 | ctx.r4.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r29,r11,2
	r29.s64 = r11.s64 + 2;
	// lbz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r11,1(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 | ctx.r3.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r8,100(r27)
	PPC_STORE_U16(r27.u32 + 100, ctx.r8.u16);
	// ble cr6,0x82780370
	if (!cr6.gt) goto loc_82780370;
	// addi r28,r27,80
	r28.s64 = r27.s64 + 80;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
loc_827802A0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r25,r29,1
	r25.s64 = r29.s64 + 1;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// lbzx r26,r11,r29
	r26.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_827802B4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827802b4
	if (!cr6.eq) goto loc_827802B4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,120(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// bl 0x82764bc0
	sub_82764BC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lwz r11,84(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 84);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x8278a200
	sub_8278A200(ctx, base);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r29,r11,-8
	r29.s64 = r11.s64 + -8;
	// stw r26,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, r26.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x8278033c
	if (!cr0.eq) goto loc_8278033C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8278033C:
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// add r11,r10,r25
	r11.u64 = ctx.r10.u64 + r25.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// bne 0x82780368
	if (!cr0.eq) goto loc_82780368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82780368:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// bne 0x827802a0
	if (!cr0.eq) goto loc_827802A0;
loc_82780370:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r11,76(r27)
	PPC_STORE_U32(r27.u32 + 76, r11.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// stb r23,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r23.u8);
	// stw r7,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r7.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// rlwinm r5,r6,0,4,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r5,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r5.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// lwz r10,204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827803e8
	if (cr6.eq) goto loc_827803E8;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827803e8
	if (cr6.eq) goto loc_827803E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8279f0f8
	sub_8279F0F8(ctx, base);
loc_827803E8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82780434
	if (cr6.eq) goto loc_82780434;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82780434:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r28,r11,120
	r28.s64 = r11.s64 + 120;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8278048c
	if (cr6.eq) goto loc_8278048C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8279f910
	sub_8279F910(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x82780490
	goto loc_82780490;
loc_8278048C:
	// mr r26,r23
	r26.u64 = r23.u64;
loc_82780490:
	// li r11,7
	r11.s64 = 7;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r31,120(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// addi r29,r31,632
	r29.s64 = r31.s64 + 632;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8278c7e8
	sub_8278C7E8(ctx, base);
	// subfic r9,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r3.s64;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r6,r7
	r11.u64 = ctx.r6.u64 & ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827804f8
	if (!cr6.eq) goto loc_827804F8;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277ee88
	sub_8277EE88(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8278c7e8
	sub_8278C7E8(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r9
	r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82780500
	if (cr6.eq) goto loc_82780500;
loc_827804F8:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x82780504
	goto loc_82780504;
loc_82780500:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
loc_82780504:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8279f188
	sub_8279F188(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8279ece8
	sub_8279ECE8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8278056c
	if (!cr6.eq) goto loc_8278056C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82780558
	if (cr6.lt) goto loc_82780558;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82780558:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8278056c
	if (cr6.eq) goto loc_8278056C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
loc_8278056C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8278057c
	if (cr6.eq) goto loc_8278057C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8278057C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827805a4
	if (!cr6.eq) goto loc_827805A4;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827805a4
	if (cr6.eq) goto loc_827805A4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827805A4:
	// lbz r11,104(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 104);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827805c8
	if (!cr6.eq) goto loc_827805C8;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827805c8
	if (cr6.eq) goto loc_827805C8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827805C8:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827805e8
	if (!cr0.eq) goto loc_827805E8;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827805E8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_827805F4"))) PPC_WEAK_FUNC(sub_827805F4);
PPC_FUNC_IMPL(__imp__sub_827805F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_827805F8"))) PPC_WEAK_FUNC(sub_827805F8);
PPC_FUNC_IMPL(__imp__sub_827805F8) {
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
	// lwz r11,204(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,-4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82780634
	if (cr6.eq) goto loc_82780634;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r9,0,4,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
loc_82780634:
	// lwz r31,-4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82780660
	if (cr6.eq) goto loc_82780660;
	// lbz r11,124(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 124);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// subfic r10,r11,6
	xer.ca = r11.u32 <= 6;
	ctx.r10.s64 = 6 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r6,r8,31
	ctx.r6.u64 = ctx.r8.u32 & 0x1;
	// bl 0x8278d2b8
	sub_8278D2B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780660:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82780670"))) PPC_WEAK_FUNC(sub_82780670);
PPC_FUNC_IMPL(__imp__sub_82780670) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82780674"))) PPC_WEAK_FUNC(sub_82780674);
PPC_FUNC_IMPL(__imp__sub_82780674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82780678"))) PPC_WEAK_FUNC(sub_82780678);
PPC_FUNC_IMPL(__imp__sub_82780678) {
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
	// lwz r11,204(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827806e4
	if (cr6.eq) goto loc_827806E4;
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827806e4
	if (cr6.eq) goto loc_827806E4;
	// bl 0x8277ecb0
	sub_8277ECB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x827806e4
	if (!cr6.eq) goto loc_827806E4;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827805f8
	sub_827805F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827806E4:
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

__attribute__((alias("__imp__sub_827806F8"))) PPC_WEAK_FUNC(sub_827806F8);
PPC_FUNC_IMPL(__imp__sub_827806F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827806FC"))) PPC_WEAK_FUNC(sub_827806FC);
PPC_FUNC_IMPL(__imp__sub_827806FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82780700"))) PPC_WEAK_FUNC(sub_82780700);
PPC_FUNC_IMPL(__imp__sub_82780700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// stb r26,288(r1)
	PPC_STORE_U8(ctx.r1.u32 + 288, r26.u8);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// bge cr6,0x82780754
	if (!cr6.lt) goto loc_82780754;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r24,r11,-32
	r24.s64 = r11.s64 + -32;
loc_82780754:
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bne cr6,0x82780784
	if (!cr6.eq) goto loc_82780784;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// li r30,1
	r30.s64 = 1;
	// bl 0x8277cc50
	sub_8277CC50(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82780788
	if (cr6.eq) goto loc_82780788;
loc_82780784:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82780788:
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x827807e4
	if (cr6.eq) goto loc_827807E4;
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// rlwinm r30,r30,0,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827807bc
	if (!cr6.eq) goto loc_827807BC;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827807bc
	if (cr6.eq) goto loc_827807BC;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827807BC:
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827807e0
	if (!cr6.eq) goto loc_827807E0;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827807e0
	if (cr6.eq) goto loc_827807E0;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827807E0:
	// stw r26,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r26.u32);
loc_827807E4:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827808c4
	if (cr6.eq) goto loc_827808C4;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stb r26,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r26.u8);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82780810
	if (cr6.eq) goto loc_82780810;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// bne cr6,0x82780814
	if (!cr6.eq) goto loc_82780814;
loc_82780810:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82780814:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8278084c
	if (!cr6.eq) goto loc_8278084C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8278084c
	if (cr6.eq) goto loc_8278084C;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8278084c
	if (cr6.eq) goto loc_8278084C;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x82780840
	if (cr6.eq) goto loc_82780840;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82780870
	if (!cr6.eq) goto loc_82780870;
loc_82780840:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// b 0x82780870
	goto loc_82780870;
loc_8278084C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82780f50
	sub_82780F50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_82780870:
	// lbz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 192);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827808c0
	if (cr6.eq) goto loc_827808C0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827808a4
	if (cr6.eq) goto loc_827808A4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_827808A4:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x828e9454
	return;
loc_827808C0:
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827808C4:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r27,r28,120
	r27.s64 = r28.s64 + 120;
	// stb r26,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, r26.u8);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,304
	ctx.r5.s64 = r11.s64 + 304;
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
	// bne cr6,0x82780918
	if (!cr6.eq) goto loc_82780918;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x8277f048
	sub_8277F048(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82767990
	sub_82767990(ctx, base);
loc_82780918:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r26,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r26.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// beq cr6,0x8278095c
	if (cr6.eq) goto loc_8278095C;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r8,r9,0,4,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8278095C:
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82780980
	if (cr6.eq) goto loc_82780980;
	// lbz r11,8(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// bl 0x8279f0f8
	sub_8279F0F8(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82780980:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stb r26,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, r26.u8);
	// beq cr6,0x82780ad8
	if (cr6.eq) goto loc_82780AD8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,312
	ctx.r5.s64 = r11.s64 + 312;
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82780ad4
	if (cr6.eq) goto loc_82780AD4;
	// lbz r11,224(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 224);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x827809d4
	if (cr6.eq) goto loc_827809D4;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// bne cr6,0x827809d8
	if (!cr6.eq) goto loc_827809D8;
loc_827809D4:
	// li r11,1
	r11.s64 = 1;
loc_827809D8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82780a08
	if (cr6.eq) goto loc_82780A08;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// ori r30,r30,2
	r30.u64 = r30.u64 | 2;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82780a0c
	if (!cr6.eq) goto loc_82780A0C;
loc_82780A08:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82780A0C:
	// rlwinm r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2;
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82780a64
	if (cr6.eq) goto loc_82780A64;
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780a3c
	if (!cr6.eq) goto loc_82780A3C;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780a3c
	if (cr6.eq) goto loc_82780A3C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780A3C:
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// stw r26,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780a60
	if (!cr6.eq) goto loc_82780A60;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780a60
	if (cr6.eq) goto loc_82780A60;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780A60:
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r26.u32);
loc_82780A64:
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82780ad4
	if (cr6.eq) goto loc_82780AD4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8279f3f8
	sub_8279F3F8(ctx, base);
	// lbz r11,176(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780aac
	if (!cr6.eq) goto loc_82780AAC;
	// lwz r3,168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780aac
	if (cr6.eq) goto loc_82780AAC;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780AAC:
	// lbz r11,176(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780ad0
	if (!cr6.eq) goto loc_82780AD0;
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780ad0
	if (cr6.eq) goto loc_82780AD0;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780AD0:
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r26.u32);
loc_82780AD4:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82780AD8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780c20
	if (cr6.eq) goto loc_82780C20;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82788a10
	sub_82788A10(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r30.u32);
	// addi r8,r10,-25696
	ctx.r8.s64 = ctx.r10.s64 + -25696;
	// stw r28,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r28.u32);
	// stb r26,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, r26.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stb r26,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, r26.u8);
	// stw r26,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r26.u32);
	// stw r26,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r26.u32);
	// stw r23,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r23.u32);
	// stw r24,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r24.u32);
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8276a2f8
	sub_8276A2F8(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r9,r10,0,4,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lbz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82780bd4
	if (!cr6.eq) goto loc_82780BD4;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780bd4
	if (cr6.eq) goto loc_82780BD4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780BD4:
	// lbz r11,120(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780bf8
	if (!cr6.eq) goto loc_82780BF8;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780bf8
	if (cr6.eq) goto loc_82780BF8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780BF8:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x828e9454
	return;
loc_82780C20:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// bne cr6,0x82780c34
	if (!cr6.eq) goto loc_82780C34;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_82780C34:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x8277be38
	sub_8277BE38(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// bne cr6,0x82780c58
	if (!cr6.eq) goto loc_82780C58;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_82780C58:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8277be38
	sub_8277BE38(ctx, base);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-19544
	ctx.r4.s64 = r11.s64 + -19544;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8277c630
	sub_8277C630(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82780ca4
	if (!cr0.eq) goto loc_82780CA4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82780CA4:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82780cc0
	if (!cr0.eq) goto loc_82780CC0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82780CC0:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lbz r11,120(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780ce8
	if (!cr6.eq) goto loc_82780CE8;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780ce8
	if (cr6.eq) goto loc_82780CE8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780CE8:
	// lbz r11,120(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780d0c
	if (!cr6.eq) goto loc_82780D0C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780d0c
	if (cr6.eq) goto loc_82780D0C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780D0C:
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
}

__attribute__((alias("__imp__sub_82780D28"))) PPC_WEAK_FUNC(sub_82780D28);
PPC_FUNC_IMPL(__imp__sub_82780D28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82780D2C"))) PPC_WEAK_FUNC(sub_82780D2C);
PPC_FUNC_IMPL(__imp__sub_82780D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82780D30"))) PPC_WEAK_FUNC(sub_82780D30);
PPC_FUNC_IMPL(__imp__sub_82780D30) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r28,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r28.u8);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82780e24
	if (cr6.eq) goto loc_82780E24;
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x82780d90
	if (cr6.eq) goto loc_82780D90;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne cr6,0x82780d94
	if (!cr6.eq) goto loc_82780D94;
loc_82780D90:
	// li r11,1
	r11.s64 = 1;
loc_82780D94:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82780e24
	if (cr6.eq) goto loc_82780E24;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x82780700
	sub_82780700(ctx, base);
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780de8
	if (!cr6.eq) goto loc_82780DE8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780de8
	if (cr6.eq) goto loc_82780DE8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780DE8:
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82780e0c
	if (!cr6.eq) goto loc_82780E0C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82780e0c
	if (cr6.eq) goto loc_82780E0C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82780E0C:
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_82780E24:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82780E34"))) PPC_WEAK_FUNC(sub_82780E34);
PPC_FUNC_IMPL(__imp__sub_82780E34) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82780E38"))) PPC_WEAK_FUNC(sub_82780E38);
PPC_FUNC_IMPL(__imp__sub_82780E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r30,r3,636
	r30.s64 = ctx.r3.s64 + 636;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// ble cr6,0x82780e6c
	if (!cr6.gt) goto loc_82780E6C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278aef8
	sub_8278AEF8(ctx, base);
	// b 0x82780e90
	goto loc_82780E90;
loc_82780E6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82780e84
	if (!cr6.eq) goto loc_82780E84;
	// bl 0x827655c8
	sub_827655C8(ctx, base);
loc_82780E84:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278b070
	sub_8278B070(ctx, base);
loc_82780E90:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r8,r9
	r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82780eb4
	if (!cr6.eq) goto loc_82780EB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82780EB4:
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subfic r10,r11,6
	xer.ca = r11.u32 <= 6;
	ctx.r10.s64 = 6 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// bl 0x8278d8e8
	sub_8278D8E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82780ED8"))) PPC_WEAK_FUNC(sub_82780ED8);
PPC_FUNC_IMPL(__imp__sub_82780ED8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82780EDC"))) PPC_WEAK_FUNC(sub_82780EDC);
PPC_FUNC_IMPL(__imp__sub_82780EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82780EE0"))) PPC_WEAK_FUNC(sub_82780EE0);
PPC_FUNC_IMPL(__imp__sub_82780EE0) {
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
	// lwz r11,204(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82780f48
	if (cr6.eq) goto loc_82780F48;
	// lwz r10,200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82780f48
	if (cr6.eq) goto loc_82780F48;
	// bl 0x8277ecb0
	sub_8277ECB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82780f40
	if (!cr6.eq) goto loc_82780F40;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827805f8
	sub_827805F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82780F40:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
loc_82780F48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82780F4C"))) PPC_WEAK_FUNC(sub_82780F4C);
PPC_FUNC_IMPL(__imp__sub_82780F4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82780F50"))) PPC_WEAK_FUNC(sub_82780F50);
PPC_FUNC_IMPL(__imp__sub_82780F50) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r7,r9,r11
	ctx.r7.s64 = r11.s64 - ctx.r9.s64;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// srawi r7,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// rlwinm r11,r6,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bgt cr6,0x82780fb0
	if (cr6.gt) goto loc_82780FB0;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,4,23,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_82780FB0:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82781004
	if (cr6.eq) goto loc_82781004;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82780ffc
	if (cr6.eq) goto loc_82780FFC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82780fd8
	if (cr6.eq) goto loc_82780FD8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82780fdc
	if (!cr6.eq) goto loc_82780FDC;
loc_82780FD8:
	// li r11,1
	r11.s64 = 1;
loc_82780FDC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82780ff0
	if (cr6.eq) goto loc_82780FF0;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x82781008
	goto loc_82781008;
loc_82780FF0:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// b 0x82781054
	goto loc_82781054;
loc_82780FFC:
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82781008
	goto loc_82781008;
loc_82781004:
	// li r9,5
	ctx.r9.s64 = 5;
loc_82781008:
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 672);
	// subf r7,r5,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r5.s64;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// bl 0x82780d30
	sub_82780D30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82766ee0
	sub_82766EE0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82781054
	if (cr6.eq) goto loc_82781054;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82781054:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_8278106C"))) PPC_WEAK_FUNC(sub_8278106C);
PPC_FUNC_IMPL(__imp__sub_8278106C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82781070"))) PPC_WEAK_FUNC(sub_82781070);
PPC_FUNC_IMPL(__imp__sub_82781070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781754
	if (cr6.eq) goto loc_82781754;
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827810bc
	if (cr6.eq) goto loc_827810BC;
	// li r11,4
	r11.s64 = 4;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r11.u8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827810BC:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781154
	if (cr6.eq) goto loc_82781154;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82781154
	if (cr0.lt) goto loc_82781154;
	// rlwinm r30,r29,3,0,28
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
loc_827810D8:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82781108
	if (cr6.eq) goto loc_82781108;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781754
	if (cr6.eq) goto loc_82781754;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// b 0x82781114
	goto loc_82781114;
loc_82781108:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781754
	if (cr6.eq) goto loc_82781754;
	// addi r31,r11,104
	r31.s64 = r11.s64 + 104;
loc_82781114:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82781754
	if (cr6.eq) goto loc_82781754;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82781198
	if (!cr6.eq) goto loc_82781198;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// bge 0x827810d8
	if (!cr0.lt) goto loc_827810D8;
loc_82781154:
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827815d4
	if (!cr6.eq) goto loc_827815D4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r31,4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x8277ecb0
	sub_8277ECB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781208
	if (cr6.eq) goto loc_82781208;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82781208
	if (cr6.eq) goto loc_82781208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// b 0x82781210
	goto loc_82781210;
loc_82781198:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827811fc
	if (cr6.eq) goto loc_827811FC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x827811cc
	if (cr6.lt) goto loc_827811CC;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x827811d0
	if (!cr6.gt) goto loc_827811D0;
loc_827811CC:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_827811D0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827811f4
	if (cr6.eq) goto loc_827811F4;
	// addi r4,r31,-104
	ctx.r4.s64 = r31.s64 + -104;
	// bl 0x827671d0
	sub_827671D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e945c
	return;
loc_827811F4:
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// bl 0x82767990
	sub_82767990(ctx, base);
loc_827811FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e945c
	return;
loc_82781208:
	// addic r11,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	r11.s64 = ctx.r4.s64 + -1;
	// subfe r11,r11,r4
	temp.u8 = (~r11.u32 + ctx.r4.u32 < ~r11.u32) | (~r11.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82781210:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827811fc
	if (!cr6.eq) goto loc_827811FC;
	// lbz r11,124(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 124);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// blt cr6,0x82781590
	if (cr6.lt) goto loc_82781590;
	// subfic r11,r11,6
	xer.ca = r11.u32 <= 6;
	r11.s64 = 6 - r11.s64;
	// lwz r11,120(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r28,r27,120
	r28.s64 = r27.s64 + 120;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,272
	ctx.r3.s64 = r11.s64 + 272;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827813d8
	if (cr6.eq) goto loc_827813D8;
	// lwz r10,204(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 204);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82781590
	if (cr6.eq) goto loc_82781590;
	// lwz r11,200(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 200);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,-4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82781590
	if (cr6.eq) goto loc_82781590;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r3,648(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827812a4
	if (cr6.eq) goto loc_827812A4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82773950
	sub_82773950(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827812a8
	goto loc_827812A8;
loc_827812A4:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_827812A8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x82773b70
	sub_82773B70(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8278132c
	if (!cr6.gt) goto loc_8278132C;
loc_827812C4:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subf r4,r7,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r8,r4,4
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 4;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bgt cr6,0x82781310
	if (cr6.gt) goto loc_82781310;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r10,4,23,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1F0;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
loc_82781310:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82772f28
	sub_82772F28(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x827812c4
	if (cr6.lt) goto loc_827812C4;
loc_8278132C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r29,r11,272
	r29.s64 = r11.s64 + 272;
	// bl 0x82766ee0
	sub_82766EE0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827805f8
	sub_827805F8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r27,7
	r27.s64 = 7;
	// addi r5,r11,276
	ctx.r5.s64 = r11.s64 + 276;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r27,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r27.u8);
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r6,r31,56
	ctx.r6.s64 = r31.s64 + 56;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,280
	ctx.r5.s64 = r11.s64 + 280;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x82767990
	sub_82767990(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e945c
	return;
loc_827813D8:
	// lbz r11,124(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 124);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// blt cr6,0x82781590
	if (cr6.lt) goto loc_82781590;
	// subfic r11,r11,6
	xer.ca = r11.u32 <= 6;
	r11.s64 = 6 - r11.s64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r11,248
	ctx.r3.s64 = r11.s64 + 248;
	// clrlwi r5,r9,31
	ctx.r5.u64 = ctx.r9.u32 & 0x1;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82781590
	if (cr6.eq) goto loc_82781590;
	// lwz r10,204(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 204);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82781590
	if (cr6.eq) goto loc_82781590;
	// lwz r11,200(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 200);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781590
	if (cr6.eq) goto loc_82781590;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781590
	if (cr6.eq) goto loc_82781590;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82781590
	if (cr6.eq) goto loc_82781590;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rlwinm r8,r9,0,4,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r6,r11,244
	ctx.r6.s64 = r11.s64 + 244;
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r25.u8);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r25,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r25.u32);
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r25.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r25.u32);
	// bl 0x8277ca68
	sub_8277CA68(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,72
	ctx.r4.s64 = 72;
	// lwz r3,648(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827814f8
	if (cr6.eq) goto loc_827814F8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r29,20(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// bl 0x8278b5f8
	sub_8278B5F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827814fc
	goto loc_827814FC;
loc_827814F8:
	// mr r30,r25
	r30.u64 = r25.u64;
loc_827814FC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x82767990
	sub_82767990(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r4,r11,248
	ctx.r4.s64 = r11.s64 + 248;
	// bl 0x82780ee0
	sub_82780EE0(ctx, base);
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8278153c
	if (!cr6.eq) goto loc_8278153C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8278153c
	if (cr6.eq) goto loc_8278153C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8278153C:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82781560
	if (!cr6.eq) goto loc_82781560;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781560
	if (cr6.eq) goto loc_82781560;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82781560:
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82781584
	if (cr6.eq) goto loc_82781584;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82781584:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e945c
	return;
loc_82781590:
	// lbz r10,124(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 124);
	// lwz r11,120(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// subfic r9,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r10.s64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r3,r11,244
	ctx.r3.s64 = r11.s64 + 244;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x827815d4
	if (cr6.eq) goto loc_827815D4;
	// lwz r4,116(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// bl 0x827671d0
	sub_827671D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e945c
	return;
loc_827815D4:
	// lwz r11,116(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781754
	if (cr6.eq) goto loc_82781754;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r31,r27,120
	r31.s64 = r27.s64 + 120;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
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
	// beq cr6,0x8278164c
	if (cr6.eq) goto loc_8278164C;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781640
	if (cr6.eq) goto loc_82781640;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,116(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// bl 0x82766478
	sub_82766478(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_82781640:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e945c
	return;
loc_8278164C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,20(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// lwz r31,672(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 672);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827816bc
	if (!cr6.eq) goto loc_827816BC;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82764480
	sub_82764480(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827816bc
	if (cr6.eq) goto loc_827816BC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,95
	cr6.compare<uint32_t>(ctx.r8.u32, 95, xer);
	// bne cr6,0x827816bc
	if (!cr6.eq) goto loc_827816BC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x8277a388
	sub_8277A388(ctx, base);
	// lbz r11,82(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827816bc
	if (cr6.eq) goto loc_827816BC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e945c
	return;
loc_827816BC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82781728
	if (cr6.eq) goto loc_82781728;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82781728
	if (cr6.eq) goto loc_82781728;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781640
	if (cr6.eq) goto loc_82781640;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82766ee0
	sub_82766EE0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e945c
	return;
loc_82781728:
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82781754
	if (!cr6.eq) goto loc_82781754;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r10,-19464
	ctx.r4.s64 = ctx.r10.s64 + -19464;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82789348
	sub_82789348(ctx, base);
loc_82781754:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8278175C"))) PPC_WEAK_FUNC(sub_8278175C);
PPC_FUNC_IMPL(__imp__sub_8278175C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82781760"))) PPC_WEAK_FUNC(sub_82781760);
PPC_FUNC_IMPL(__imp__sub_82781760) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827817b0
	if (!cr6.eq) goto loc_827817B0;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781db8
	if (cr6.eq) goto loc_82781DB8;
	// lwz r4,116(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// bl 0x827671d0
	sub_827671D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e9448
	return;
loc_827817B0:
	// li r25,0
	r25.s64 = 0;
	// lwz r29,16(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r25.u8);
	// mr r28,r25
	r28.u64 = r25.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r22,r10,-19412
	r22.s64 = ctx.r10.s64 + -19412;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r24,r22
	r24.u64 = r22.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// beq cr6,0x827817ec
	if (cr6.eq) goto loc_827817EC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r25,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r25.u8);
loc_827817EC:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827817fc
	if (cr6.eq) goto loc_827817FC;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
loc_827817FC:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// lis r23,-31962
	r23.s64 = -2094661632;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,47
	cr6.compare<int32_t>(r11.s32, 47, xer);
	// bne cr6,0x8278185c
	if (!cr6.eq) goto loc_8278185C;
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827671d0
	sub_827671D0(ctx, base);
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// li r28,1
	r28.s64 = 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r24,4228(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + 4228);
	// beq cr6,0x82781868
	if (cr6.eq) goto loc_82781868;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// b 0x82781868
	goto loc_82781868;
loc_8278185C:
	// cmpwi cr6,r11,46
	cr6.compare<int32_t>(r11.s32, 46, xer);
	// bne cr6,0x82781868
	if (!cr6.eq) goto loc_82781868;
	// lwz r24,4228(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + 4228);
loc_82781868:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,120(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r29,1
	r29.s64 = 1;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r25.u8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// bl 0x82788f58
	sub_82788F58(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82781cc4
	if (cr6.eq) goto loc_82781CC4;
loc_827818B0:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82781ba4
	if (cr6.eq) goto loc_82781BA4;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x827818f8
	if (cr6.eq) goto loc_827818F8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r31,r11
	r31.u64 = r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827818f0
	if (!cr0.eq) goto loc_827818F0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827818F0:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r31,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r31.u32);
loc_827818F8:
	// lbz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r30,r25
	r30.u64 = r25.u64;
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r25.u8);
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// beq cr6,0x82781964
	if (cr6.eq) goto loc_82781964;
	// clrlwi r10,r28,24
	ctx.r10.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82781a7c
	if (!cr6.eq) goto loc_82781A7C;
	// lwz r10,120(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// lwz r9,200(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 200);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x82781954
	if (cr6.eq) goto loc_82781954;
	// lbz r11,124(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 124);
	// addi r3,r10,260
	ctx.r3.s64 = ctx.r10.s64 + 260;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// subfic r10,r11,6
	xer.ca = r11.u32 <= 6;
	ctx.r10.s64 = 6 - r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r8,31
	ctx.r5.u64 = ctx.r8.u32 & 0x1;
	// bl 0x82772b10
	sub_82772B10(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82781958
	if (cr6.eq) goto loc_82781958;
loc_82781954:
	// li r11,1
	r11.s64 = 1;
loc_82781958:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781a7c
	if (cr6.eq) goto loc_82781A7C;
loc_82781964:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82781a38
	if (!cr6.eq) goto loc_82781A38;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781a1c
	if (cr6.eq) goto loc_82781A1C;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82781a1c
	if (!cr6.gt) goto loc_82781A1C;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r11,-8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x827819c0
	if (cr6.eq) goto loc_827819C0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827819cc
	if (cr6.eq) goto loc_827819CC;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// b 0x827819d0
	goto loc_827819D0;
loc_827819C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r31,r11,104
	r31.s64 = r11.s64 + 104;
	// bne cr6,0x827819d0
	if (!cr6.eq) goto loc_827819D0;
loc_827819CC:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_827819D0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x827819f8
	if (cr6.lt) goto loc_827819F8;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// li r11,1
	r11.s64 = 1;
	// ble cr6,0x827819fc
	if (!cr6.gt) goto loc_827819FC;
loc_827819F8:
	// mr r11,r25
	r11.u64 = r25.u64;
loc_827819FC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781a1c
	if (cr6.eq) goto loc_82781A1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278f0b0
	sub_8278F0B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827671d0
	sub_827671D0(ctx, base);
loc_82781A1C:
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82781a34
	if (!cr6.eq) goto loc_82781A34;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,116(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// bl 0x827671d0
	sub_827671D0(ctx, base);
loc_82781A34:
	// li r28,1
	r28.s64 = 1;
loc_82781A38:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781a7c
	if (cr6.eq) goto loc_82781A7C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781a7c
	if (cr6.eq) goto loc_82781A7C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x827671d0
	sub_827671D0(ctx, base);
	// li r30,1
	r30.s64 = 1;
loc_82781A7C:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82781b54
	if (!cr6.eq) goto loc_82781B54;
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82781acc
	if (!cr6.eq) goto loc_82781ACC;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r25,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r25.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r25.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r25.u32);
	// bl 0x82781070
	sub_82781070(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82781b54
	goto loc_82781B54;
loc_82781ACC:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x82781b04
	if (cr6.eq) goto loc_82781B04;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82781b04
	if (cr6.eq) goto loc_82781B04;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x82781af4
	if (cr6.eq) goto loc_82781AF4;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne cr6,0x82781af8
	if (!cr6.eq) goto loc_82781AF8;
loc_82781AF4:
	// li r11,1
	r11.s64 = 1;
loc_82781AF8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781b44
	if (cr6.eq) goto loc_82781B44;
loc_82781B04:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781b54
	if (cr6.eq) goto loc_82781B54;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82781b54
	if (!cr6.eq) goto loc_82781B54;
loc_82781B44:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r25,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r25.u8);
	// mr r30,r25
	r30.u64 = r25.u64;
loc_82781B54:
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781b68
	if (cr6.eq) goto loc_82781B68;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
loc_82781B68:
	// clrlwi r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781b80
	if (cr6.eq) goto loc_82781B80;
	// lbz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82781c34
	if (!cr6.eq) goto loc_82781C34;
loc_82781B80:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781c34
	if (cr6.eq) goto loc_82781C34;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r28,r30
	r28.u64 = r30.u64;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_82781BA4:
	// lwz r11,4228(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4228);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// bne cr6,0x82781bcc
	if (!cr6.eq) goto loc_82781BCC;
	// cmpwi cr6,r31,58
	cr6.compare<int32_t>(r31.s32, 58, xer);
	// bne cr6,0x82781c04
	if (!cr6.eq) goto loc_82781C04;
	// mr r24,r22
	r24.u64 = r22.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r22.u32);
	// b 0x82781bd4
	goto loc_82781BD4;
loc_82781BCC:
	// cmpwi cr6,r31,46
	cr6.compare<int32_t>(r31.s32, 46, xer);
	// bne cr6,0x82781c04
	if (!cr6.eq) goto loc_82781C04;
loc_82781BD4:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82781c04
	if (cr6.eq) goto loc_82781C04;
	// lbz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// bne cr6,0x82781c04
	if (!cr6.eq) goto loc_82781C04;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r11,4228(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4228);
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
loc_82781C04:
	// cmpwi cr6,r31,47
	cr6.compare<int32_t>(r31.s32, 47, xer);
	// bne cr6,0x82781c14
	if (!cr6.eq) goto loc_82781C14;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// mr r24,r11
	r24.u64 = r11.u64;
loc_82781C14:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r29,r25
	r29.u64 = r25.u64;
	// bl 0x82788f58
	sub_82788F58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827818b0
	if (!cr6.eq) goto loc_827818B0;
	// b 0x82781cc4
	goto loc_82781CC4;
loc_82781C34:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r25.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r28,r25
	r28.u64 = r25.u64;
	// bl 0x82788f58
	sub_82788F58(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781cbc
	if (cr6.eq) goto loc_82781CBC;
	// lwz r31,16(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82781c74
	if (cr6.eq) goto loc_82781C74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r25,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r25.u8);
loc_82781C74:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781c84
	if (cr6.eq) goto loc_82781C84;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
loc_82781C84:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82781cbc
	if (cr6.eq) goto loc_82781CBC;
	// lwz r11,120(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x82781cb8
	if (!cr0.eq) goto loc_82781CB8;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82781CB8:
	// stw r31,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r31.u32);
loc_82781CBC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_82781CC4:
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781cf0
	if (cr6.eq) goto loc_82781CF0;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,7
	cr6.compare<uint32_t>(ctx.r10.u32, 7, xer);
	// bne cr6,0x82781cf0
	if (!cr6.eq) goto loc_82781CF0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
loc_82781CF0:
	// lwz r31,16(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82781d44
	if (cr6.eq) goto loc_82781D44;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x82781d44
	if (cr6.eq) goto loc_82781D44;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82781d44
	if (cr6.eq) goto loc_82781D44;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x82781d28
	if (cr6.eq) goto loc_82781D28;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// bne cr6,0x82781d2c
	if (!cr6.eq) goto loc_82781D2C;
loc_82781D28:
	// li r11,1
	r11.s64 = 1;
loc_82781D2C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82781d44
	if (!cr6.eq) goto loc_82781D44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r25,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r25.u8);
loc_82781D44:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82781d80
	if (!cr6.eq) goto loc_82781D80;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82781d6c
	if (!cr0.eq) goto loc_82781D6C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82781D6C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e9448
	return;
loc_82781D80:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781d94
	if (cr6.eq) goto loc_82781D94;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
loc_82781D94:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82781db0
	if (!cr0.eq) goto loc_82781DB0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82781DB0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_82781DB8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_82781DC0"))) PPC_WEAK_FUNC(sub_82781DC0);
PPC_FUNC_IMPL(__imp__sub_82781DC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_82781DC4"))) PPC_WEAK_FUNC(sub_82781DC4);
PPC_FUNC_IMPL(__imp__sub_82781DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82781DC8"))) PPC_WEAK_FUNC(sub_82781DC8);
PPC_FUNC_IMPL(__imp__sub_82781DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82781DCC"))) PPC_WEAK_FUNC(sub_82781DCC);
PPC_FUNC_IMPL(__imp__sub_82781DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82781DD0"))) PPC_WEAK_FUNC(sub_82781DD0);
PPC_FUNC_IMPL(__imp__sub_82781DD0) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r9,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// bl 0x8277ca68
	sub_8277CA68(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781f08
	if (cr6.eq) goto loc_82781F08;
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,9
	cr6.compare<uint32_t>(r11.u32, 9, xer);
	// bne cr6,0x82781f08
	if (!cr6.eq) goto loc_82781F08;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// addi r9,r11,244
	ctx.r9.s64 = r11.s64 + 244;
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r30.u8);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r30.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// bl 0x82781070
	sub_82781070(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82781eac
	if (cr6.eq) goto loc_82781EAC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781e84
	if (cr6.eq) goto loc_82781E84;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
loc_82781E84:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781ea4
	if (cr6.eq) goto loc_82781EA4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_82781EA4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82781ec4
	goto loc_82781EC4;
loc_82781EAC:
	// lwz r31,116(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82781ed0
	if (cr6.eq) goto loc_82781ED0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82781EC4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// bne cr6,0x82781ed4
	if (!cr6.eq) goto loc_82781ED4;
loc_82781ED0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82781ED4:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82767360
	sub_82767360(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82782124
	if (cr6.eq) goto loc_82782124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x828e9458
	return;
loc_82781F08:
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bne cr6,0x82782124
	if (!cr6.eq) goto loc_82782124;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,244
	ctx.r4.s64 = r11.s64 + 244;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781f94
	if (cr6.eq) goto loc_82781F94;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x82781f6c
	if (!cr6.eq) goto loc_82781F6C;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_82781F6C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82781f8c
	if (cr6.eq) goto loc_82781F8C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_82781F8C:
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x82781fb0
	goto loc_82781FB0;
loc_82781F94:
	// lwz r11,116(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82781fac
	if (cr6.eq) goto loc_82781FAC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_82781FAC:
	// mr r25,r11
	r25.u64 = r11.u64;
loc_82781FB0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827670c8
	sub_827670C8(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r31,r29,8
	r31.s64 = r29.s64 + 8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82781fe0
	if (cr6.lt) goto loc_82781FE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82781FE0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82782008
	if (cr6.eq) goto loc_82782008;
	// li r10,5
	ctx.r10.s64 = 5;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
loc_82782008:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stb r30,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r30.u8);
	// addi r9,r25,104
	ctx.r9.s64 = r25.s64 + 104;
	// bne cr6,0x82782024
	if (!cr6.eq) goto loc_82782024;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
loc_82782024:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r5,r10,-25696
	ctx.r5.s64 = ctx.r10.s64 + -25696;
	// subf r4,r8,r11
	ctx.r4.s64 = r11.s64 - ctx.r8.s64;
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r27.u32);
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r5,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r5.u32);
	// srawi r11,r4,4
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	r11.s64 = ctx.r4.s32 >> 4;
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// stb r30,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, r30.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r29.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r30.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r11.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8276a2f8
	sub_8276A2F8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x827820c4
	if (!cr6.lt) goto loc_827820C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_827820C4:
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827820e4
	if (!cr6.eq) goto loc_827820E4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827820e4
	if (cr6.eq) goto loc_827820E4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827820E4:
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82782108
	if (!cr6.eq) goto loc_82782108;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82782108
	if (cr6.eq) goto loc_82782108;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82782108:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82782124
	if (cr6.eq) goto loc_82782124;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82782124:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_8278212C"))) PPC_WEAK_FUNC(sub_8278212C);
PPC_FUNC_IMPL(__imp__sub_8278212C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82782130"))) PPC_WEAK_FUNC(sub_82782130);
PPC_FUNC_IMPL(__imp__sub_82782130) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,2784(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2784);
	// rlwinm r8,r9,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x827821d4
	if (cr6.eq) goto loc_827821D4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82768200
	sub_82768200(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-19348
	ctx.r4.s64 = r11.s64 + -19348;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82789348
	sub_82789348(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827821d4
	if (!cr0.eq) goto loc_827821D4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827821D4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8278234c
	if (!cr6.eq) goto loc_8278234C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82779428
	sub_82779428(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8278234c
	if (cr6.eq) goto loc_8278234C;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r30,0
	r30.s64 = 0;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r29.u32);
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r30.u8);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r30.u32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r30.u32);
	// stb r30,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r30.u8);
	// bl 0x82781760
	sub_82781760(ctx, base);
	// lbz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x827822d0
	if (cr6.eq) goto loc_827822D0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82782314
	if (cr6.eq) goto loc_82782314;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827822bc
	if (!cr0.eq) goto loc_827822BC;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827822BC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e9460
	return;
loc_827822D0:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82782314
	if (cr6.eq) goto loc_82782314;
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
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82782314
	if (cr6.eq) goto loc_82782314;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-19404
	ctx.r4.s64 = ctx.r10.s64 + -19404;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277c630
	sub_8277C630(ctx, base);
loc_82782314:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82782338
	if (!cr0.eq) goto loc_82782338;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82782338:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e9460
	return;
loc_8278234C:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277f788
	sub_8277F788(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82782368"))) PPC_WEAK_FUNC(sub_82782368);
PPC_FUNC_IMPL(__imp__sub_82782368) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8278236C"))) PPC_WEAK_FUNC(sub_8278236C);
PPC_FUNC_IMPL(__imp__sub_8278236C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82782370"))) PPC_WEAK_FUNC(sub_82782370);
PPC_FUNC_IMPL(__imp__sub_82782370) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82782454
	if (cr6.eq) goto loc_82782454;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82782454
	if (cr6.eq) goto loc_82782454;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,120(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r28.u8);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r28.u8);
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r29,r8,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addic. r10,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82782424
	if (!cr0.eq) goto loc_82782424;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82782424:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82782460
	if (cr6.eq) goto loc_82782460;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-19276
	ctx.r4.s64 = r11.s64 + -19276;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277c630
	sub_8277C630(ctx, base);
loc_82782444:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_82782454:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e9458
	return;
loc_82782460:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827824dc
	if (!cr6.eq) goto loc_827824DC;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-19324
	ctx.r4.s64 = r11.s64 + -19324;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277c630
	sub_8277C630(ctx, base);
	// lbz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827824b0
	if (!cr6.eq) goto loc_827824B0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827824b0
	if (cr6.eq) goto loc_827824B0;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827824B0:
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827824d4
	if (!cr6.eq) goto loc_827824D4;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827824d4
	if (cr6.eq) goto loc_827824D4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827824D4:
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// b 0x82782444
	goto loc_82782444;
loc_827824DC:
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82782504
	if (cr6.eq) goto loc_82782504;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x82782504
	if (cr6.eq) goto loc_82782504;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82782514
	if (cr6.eq) goto loc_82782514;
	// addi r27,r11,104
	r27.s64 = r11.s64 + 104;
	// b 0x82782514
	goto loc_82782514;
loc_82782504:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82782514:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8277d0a0
	sub_8277D0A0(ctx, base);
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82782558
	if (!cr6.eq) goto loc_82782558;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82782558
	if (cr6.eq) goto loc_82782558;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82782558:
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8278257c
	if (!cr6.eq) goto loc_8278257C;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8278257c
	if (cr6.eq) goto loc_8278257C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8278257C:
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_82782598"))) PPC_WEAK_FUNC(sub_82782598);
PPC_FUNC_IMPL(__imp__sub_82782598) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8278259C"))) PPC_WEAK_FUNC(sub_8278259C);
PPC_FUNC_IMPL(__imp__sub_8278259C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827825A0"))) PPC_WEAK_FUNC(sub_827825A0);
PPC_FUNC_IMPL(__imp__sub_827825A0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82782684
	if (cr6.eq) goto loc_82782684;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82782684
	if (cr6.eq) goto loc_82782684;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,120(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// addi r3,r11,596
	ctx.r3.s64 = r11.s64 + 596;
	// stb r28,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r28.u8);
	// stb r28,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r28.u8);
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r29,r8,27,31,31
	r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// addic. r10,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82782654
	if (!cr0.eq) goto loc_82782654;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82782654:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82782690
	if (cr6.eq) goto loc_82782690;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-19276
	ctx.r4.s64 = r11.s64 + -19276;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277c630
	sub_8277C630(ctx, base);
loc_82782674:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_82782684:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x828e9458
	return;
loc_82782690:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8278270c
	if (!cr6.eq) goto loc_8278270C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-19324
	ctx.r4.s64 = r11.s64 + -19324;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8277c630
	sub_8277C630(ctx, base);
	// lbz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827826e0
	if (!cr6.eq) goto loc_827826E0;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827826e0
	if (cr6.eq) goto loc_827826E0;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827826E0:
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82782704
	if (!cr6.eq) goto loc_82782704;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82782704
	if (cr6.eq) goto loc_82782704;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82782704:
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// b 0x82782674
	goto loc_82782674;
loc_8278270C:
	// lbz r11,160(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82782734
	if (cr6.eq) goto loc_82782734;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x82782734
	if (cr6.eq) goto loc_82782734;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82782744
	if (cr6.eq) goto loc_82782744;
	// addi r27,r11,104
	r27.s64 = r11.s64 + 104;
	// b 0x82782744
	goto loc_82782744;
loc_82782734:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82782744:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8277cda8
	sub_8277CDA8(ctx, base);
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82782788
	if (!cr6.eq) goto loc_82782788;
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82782788
	if (cr6.eq) goto loc_82782788;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82782788:
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827827ac
	if (!cr6.eq) goto loc_827827AC;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827827ac
	if (cr6.eq) goto loc_827827AC;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827827AC:
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r28.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_827827C8"))) PPC_WEAK_FUNC(sub_827827C8);
PPC_FUNC_IMPL(__imp__sub_827827C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_827827CC"))) PPC_WEAK_FUNC(sub_827827CC);
PPC_FUNC_IMPL(__imp__sub_827827CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827827D0"))) PPC_WEAK_FUNC(sub_827827D0);
PPC_FUNC_IMPL(__imp__sub_827827D0) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r3,680
	ctx.r3.s64 = ctx.r3.s64 + 680;
	// addi r10,r11,-19228
	ctx.r10.s64 = r11.s64 + -19228;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x827b31a0
	sub_827B31A0(ctx, base);
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82782808
	if (cr6.eq) goto loc_82782808;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82782808:
	// addi r3,r31,640
	ctx.r3.s64 = r31.s64 + 640;
	// bl 0x8278d018
	sub_8278D018(ctx, base);
	// addi r3,r31,636
	ctx.r3.s64 = r31.s64 + 636;
	// bl 0x8278d0b0
	sub_8278D0B0(ctx, base);
	// addi r3,r31,632
	ctx.r3.s64 = r31.s64 + 632;
	// bl 0x827774b0
	sub_827774B0(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x827d89f8
	sub_827D89F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82782840"))) PPC_WEAK_FUNC(sub_82782840);
PPC_FUNC_IMPL(__imp__sub_82782840) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82782844"))) PPC_WEAK_FUNC(sub_82782844);
PPC_FUNC_IMPL(__imp__sub_82782844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82782848"))) PPC_WEAK_FUNC(sub_82782848);
PPC_FUNC_IMPL(__imp__sub_82782848) {
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
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// subfic r9,r10,6
	xer.ca = ctx.r10.u32 <= 6;
	ctx.r9.s64 = 6 - ctx.r10.s64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r3,636
	ctx.r3.s64 = ctx.r3.s64 + 636;
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// bl 0x8278dad0
	sub_8278DAD0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82782888"))) PPC_WEAK_FUNC(sub_82782888);
PPC_FUNC_IMPL(__imp__sub_82782888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278288C"))) PPC_WEAK_FUNC(sub_8278288C);
PPC_FUNC_IMPL(__imp__sub_8278288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82782890"))) PPC_WEAK_FUNC(sub_82782890);
PPC_FUNC_IMPL(__imp__sub_82782890) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82782908
	if (cr6.eq) goto loc_82782908;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82782908
	if (cr6.eq) goto loc_82782908;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lbz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82768238
	sub_82768238(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82782908
	if (!cr0.eq) goto loc_82782908;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82782908:
	// lbz r11,144(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 144);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x82782a48
	if (!cr6.eq) goto loc_82782A48;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r30,r8,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82782954
	if (!cr0.eq) goto loc_82782954;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82782954:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8278296c
	if (cr6.eq) goto loc_8278296C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x827829d8
	goto loc_827829D8;
loc_8278296C:
	// stb r29,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r29.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827829cc
	if (!cr0.eq) goto loc_827829CC;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827829CC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82767080
	sub_82767080(ctx, base);
loc_827829D4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_827829D8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82782a64
	if (!cr6.eq) goto loc_82782A64;
	// lbz r11,54(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 54);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82782a34
	if (cr6.eq) goto loc_82782A34;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82768200
	sub_82768200(ctx, base);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// addi r4,r11,-19224
	ctx.r4.s64 = r11.s64 + -19224;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82782a34
	if (!cr0.eq) goto loc_82782A34;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82782A34:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r11,198(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 198);
	// ori r10,r11,64
	ctx.r10.u64 = r11.u64 | 64;
	// b 0x82782a74
	goto loc_82782A74;
loc_82782A48:
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x827829d4
	if (!cr6.eq) goto loc_827829D4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x827829d8
	goto loc_827829D8;
loc_82782A64:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r11,198(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 198);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,26,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFBF;
loc_82782A74:
	// stw r3,116(r30)
	PPC_STORE_U32(r30.u32 + 116, ctx.r3.u32);
	// stb r10,198(r30)
	PPC_STORE_U8(r30.u32 + 198, ctx.r10.u8);
	// bl 0x8276a820
	sub_8276A820(ctx, base);
	// stb r3,124(r30)
	PPC_STORE_U8(r30.u32 + 124, ctx.r3.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82782ab4
	if (!cr6.lt) goto loc_82782AB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82782AB4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82782AC0"))) PPC_WEAK_FUNC(sub_82782AC0);
PPC_FUNC_IMPL(__imp__sub_82782AC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82782AC4"))) PPC_WEAK_FUNC(sub_82782AC4);
PPC_FUNC_IMPL(__imp__sub_82782AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82782AC8"))) PPC_WEAK_FUNC(sub_82782AC8);
PPC_FUNC_IMPL(__imp__sub_82782AC8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82782b1c
	if (!cr6.lt) goto loc_82782B1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82782B1C:
	// li r29,0
	r29.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r29,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r29.u8);
	// bl 0x82766830
	sub_82766830(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82782b5c
	if (cr6.lt) goto loc_82782B5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82782B5C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82782b70
	if (cr6.eq) goto loc_82782B70;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
loc_82782B70:
	// cmpwi cr6,r28,85
	cr6.compare<int32_t>(r28.s32, 85, xer);
	// bne cr6,0x82782b94
	if (!cr6.eq) goto loc_82782B94;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82782c18
	if (!cr6.eq) goto loc_82782C18;
	// b 0x82782c84
	goto loc_82782C84;
loc_82782B94:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// stb r29,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r29.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82782c64
	if (cr6.eq) goto loc_82782C64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// beq cr6,0x82782c64
	if (cr6.eq) goto loc_82782C64;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82782c18
	if (!cr0.eq) goto loc_82782C18;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82782C18:
	// addi r9,r30,36
	ctx.r9.s64 = r30.s64 + 36;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r4,r11,120
	ctx.r4.s64 = r11.s64 + 120;
	// addi r8,r10,-21496
	ctx.r8.s64 = ctx.r10.s64 + -21496;
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,32(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r10,-26548
	ctx.r9.s64 = ctx.r10.s64 + -26548;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// b 0x82782c84
	goto loc_82782C84;
loc_82782C64:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82782c84
	if (!cr0.eq) goto loc_82782C84;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82782C84:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82782C98"))) PPC_WEAK_FUNC(sub_82782C98);
PPC_FUNC_IMPL(__imp__sub_82782C98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82782C9C"))) PPC_WEAK_FUNC(sub_82782C9C);
PPC_FUNC_IMPL(__imp__sub_82782C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82782CA0"))) PPC_WEAK_FUNC(sub_82782CA0);
PPC_FUNC_IMPL(__imp__sub_82782CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// stw r7,836(r1)
	PPC_STORE_U32(ctx.r1.u32 + 836, ctx.r7.u32);
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r9,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r9.u32);
	// mr r17,r4
	r17.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r10.u32);
	// beq cr6,0x82782cf4
	if (cr6.eq) goto loc_82782CF4;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x82782d0c
	if (!cr6.eq) goto loc_82782D0C;
loc_82782CF4:
	// lwz r11,116(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bge cr6,0x82782d0c
	if (!cr6.lt) goto loc_82782D0C;
	// li r11,1
	r11.s64 = 1;
	// b 0x82782d18
	goto loc_82782D18;
loc_82782D0C:
	// lwz r11,116(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// lbz r10,102(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 102);
	// rlwinm r11,r10,28,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
loc_82782D18:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82787e50
	if (!cr6.eq) goto loc_82787E50;
	// lwz r11,192(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 192);
	// li r16,0
	r16.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r16.u32);
	// stw r11,192(r17)
	PPC_STORE_U32(r17.u32 + 192, r11.u32);
	// lwz r11,8(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// blt cr6,0x82782d5c
	if (cr6.lt) goto loc_82782D5C;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82782d60
	if (!cr6.eq) goto loc_82782D60;
loc_82782D5C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82782D60:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82782d74
	if (cr6.eq) goto loc_82782D74;
	// mr r11,r16
	r11.u64 = r16.u64;
	// b 0x82782d78
	goto loc_82782D78;
loc_82782D74:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82782D78:
	// stw r17,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r17.u32);
	// addi r10,r17,120
	ctx.r10.s64 = r17.s64 + 120;
	// lwz r9,116(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// lwz r8,120(r17)
	ctx.r8.u64 = PPC_LOAD_U32(r17.u32 + 120);
	// lwz r3,648(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 648);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// beq cr6,0x82782dc0
	if (cr6.eq) goto loc_82782DC0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82782dc0
	if (cr6.eq) goto loc_82782DC0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8278c100
	sub_8278C100(ctx, base);
	// b 0x82782dc4
	goto loc_82782DC4;
loc_82782DC0:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_82782DC4:
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x8277a920
	sub_8277A920(ctx, base);
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,160(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// stw r10,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// bl 0x8276a820
	sub_8276A820(ctx, base);
	// addi r9,r28,-2
	ctx.r9.s64 = r28.s64 + -2;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lbz r8,214(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r11,204(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 204);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stb r28,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, r28.u8);
	// stb r5,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r5.u8);
	// rlwimi r8,r3,5,26,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0x20) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFDF);
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r9,r11,6,25,25
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0x40) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFBF);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stb r9,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r9.u8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r4,198(r17)
	ctx.r4.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// lbz r5,214(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// lwz r11,8(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 8);
	// not r10,r4
	ctx.r10.u64 = ~ctx.r4.u64;
	// rlwimi r5,r3,7,17,24
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r3.u32, 7) & 0x7F80) | (ctx.r5.u64 & 0xFFFFFFFFFFFF807F);
	// rlwinm r8,r10,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// stb r5,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, ctx.r5.u8);
	// stb r8,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r8.u8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82782e60
	if (!cr6.lt) goto loc_82782E60;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82782E60:
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r29.u32);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r29.u32);
	// mr r15,r16
	r15.u64 = r16.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x827865e0
	if (!cr6.lt) goto loc_827865E0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r24,-32248
	r24.s64 = -2113404928;
	// addi r11,r11,-25696
	r11.s64 = r11.s64 + -25696;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// addi r11,r24,-18140
	r11.s64 = r24.s64 + -18140;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r7,r7,-18180
	ctx.r7.s64 = ctx.r7.s64 + -18180;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r25,-32248
	r25.s64 = -2113404928;
	// stw r7,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r7.u32);
	// lis r23,-32248
	r23.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfd f30,16944(r4)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16944);
	// lis r22,-32248
	r22.s64 = -2113404928;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r10,-18220
	r11.s64 = ctx.r10.s64 + -18220;
	// lis r21,-32248
	r21.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r11.u32);
	// addi r25,r25,-18268
	r25.s64 = r25.s64 + -18268;
	// addi r10,r9,-18408
	ctx.r10.s64 = ctx.r9.s64 + -18408;
	// addi r7,r23,-18344
	ctx.r7.s64 = r23.s64 + -18344;
	// stw r25,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r25.u32);
	// lis r19,-32248
	r19.s64 = -2113404928;
	// stw r10,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r10.u32);
	// addi r24,r22,-18440
	r24.s64 = r22.s64 + -18440;
	// stw r7,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r7.u32);
	// addi r9,r8,13435
	ctx.r9.s64 = ctx.r8.s64 + 13435;
	// lwz r23,852(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// stw r24,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r24.u32);
	// addi r22,r21,-18492
	r22.s64 = r21.s64 + -18492;
	// lwz r21,232(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// addi r8,r6,-18544
	ctx.r8.s64 = ctx.r6.s64 + -18544;
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r21.u32);
	// lis r20,-32248
	r20.s64 = -2113404928;
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// stw r22,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r22.u32);
	// lis r18,-32248
	r18.s64 = -2113404928;
	// lwz r25,240(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// addi r19,r19,-18592
	r19.s64 = r19.s64 + -18592;
	// lis r31,-32248
	r31.s64 = -2113404928;
	// lis r30,-32248
	r30.s64 = -2113404928;
	// stw r19,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r19.u32);
	// lis r29,-32248
	r29.s64 = -2113404928;
	// lwz r19,216(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lis r28,-32248
	r28.s64 = -2113404928;
	// lis r27,-32248
	r27.s64 = -2113404928;
	// lis r26,-32248
	r26.s64 = -2113404928;
	// addi r7,r5,-18648
	ctx.r7.s64 = ctx.r5.s64 + -18648;
	// addi r21,r20,-18704
	r21.s64 = r20.s64 + -18704;
	// lwz r20,836(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// addi r18,r18,-18820
	r18.s64 = r18.s64 + -18820;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// addi r6,r4,-18756
	ctx.r6.s64 = ctx.r4.s64 + -18756;
	// stw r21,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r21.u32);
	// addi r5,r3,-18768
	ctx.r5.s64 = ctx.r3.s64 + -18768;
	// stw r18,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r18.u32);
	// addi r4,r31,-18868
	ctx.r4.s64 = r31.s64 + -18868;
	// stw r6,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r6.u32);
	// addi r3,r30,-18904
	ctx.r3.s64 = r30.s64 + -18904;
	// stw r5,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r5.u32);
	// addi r11,r29,-18952
	r11.s64 = r29.s64 + -18952;
	// stw r4,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r4.u32);
	// addi r10,r28,-19012
	ctx.r10.s64 = r28.s64 + -19012;
	// stw r3,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r3.u32);
	// addi r9,r27,-19056
	ctx.r9.s64 = r27.s64 + -19056;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r11.u32);
	// addi r8,r26,-19100
	ctx.r8.s64 = r26.s64 + -19100;
	// stw r10,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// li r18,5
	r18.s64 = 5;
	// stw r8,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// li r24,3
	r24.s64 = 3;
	// li r22,2
	r22.s64 = 2;
	// li r21,1
	r21.s64 = 1;
	// lwz r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r7,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r7.u32);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r11.u32);
loc_82782FD0:
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82783068
	if (cr6.eq) goto loc_82783068;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82783068
	if (cr6.eq) goto loc_82783068;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// clrlwi r9,r8,1
	ctx.r9.u64 = ctx.r8.u32 & 0x7FFFFFFF;
	// lwz r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_82783004:
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// blt cr6,0x82783018
	if (cr6.lt) goto loc_82783018;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82783004
	if (cr6.lt) goto loc_82783004;
loc_82783018:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82783068
	if (cr6.eq) goto loc_82783068;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r31,r10,r11
	r31.s64 = r11.s64 - ctx.r10.s64;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x8278304c
	if (!cr6.lt) goto loc_8278304C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x82783064
	if (!cr6.lt) goto loc_82783064;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x8278305c
	goto loc_8278305C;
loc_8278304C:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82783064
	if (cr6.lt) goto loc_82783064;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_8278305C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x827891a0
	sub_827891A0(ctx, base);
loc_82783064:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
loc_82783068:
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r28,184(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// add r11,r8,r28
	r11.u64 = ctx.r8.u64 + r28.u64;
	// lbzx r5,r8,r28
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + r28.u32);
	// rlwinm r10,r5,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82786e44
	if (!cr6.eq) goto loc_82786E44;
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// cmplwi cr6,r5,105
	cr6.compare<uint32_t>(ctx.r5.u32, 105, xer);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// bgt cr6,0x827865c4
	if (cr6.gt) goto loc_827865C4;
	// lis r12,-32136
	r12.s64 = -2106064896;
	// rlwinm r0,r5,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,12460
	r12.s64 = r12.s64 + 12460;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_827871C4;
	case 1:
		goto loc_827865C4;
	case 2:
		goto loc_827865C4;
	case 3:
		goto loc_827865C4;
	case 4:
		goto loc_82783254;
	case 5:
		goto loc_82783298;
	case 6:
		goto loc_827832DC;
	case 7:
		goto loc_82783308;
	case 8:
		goto loc_827865C4;
	case 9:
		goto loc_827865C4;
	case 10:
		goto loc_82783334;
	case 11:
		goto loc_82783388;
	case 12:
		goto loc_827833DC;
	case 13:
		goto loc_82783430;
	case 14:
		goto loc_82783484;
	case 15:
		goto loc_82783504;
	case 16:
		goto loc_8278358C;
	case 17:
		goto loc_82783630;
	case 18:
		goto loc_827836D4;
	case 19:
		goto loc_82783738;
	case 20:
		goto loc_82783818;
	case 21:
		goto loc_82783860;
	case 22:
		goto loc_827865C4;
	case 23:
		goto loc_827839B8;
	case 24:
		goto loc_827839E8;
	case 25:
		goto loc_827865C4;
	case 26:
		goto loc_827865C4;
	case 27:
		goto loc_827865C4;
	case 28:
		goto loc_82783A08;
	case 29:
		goto loc_82783B54;
	case 30:
		goto loc_827865C4;
	case 31:
		goto loc_827865C4;
	case 32:
		goto loc_82783C28;
	case 33:
		goto loc_82783C34;
	case 34:
		goto loc_82783CDC;
	case 35:
		goto loc_82783D98;
	case 36:
		goto loc_82783E44;
	case 37:
		goto loc_82783F14;
	case 38:
		goto loc_82783FC8;
	case 39:
		goto loc_82784060;
	case 40:
		goto loc_8278406C;
	case 41:
		goto loc_82784088;
	case 42:
		goto loc_8278418C;
	case 43:
		goto loc_827841FC;
	case 44:
		goto loc_82784208;
	case 45:
		goto loc_827865C4;
	case 46:
		goto loc_827865C4;
	case 47:
		goto loc_827865C4;
	case 48:
		goto loc_82784214;
	case 49:
		goto loc_82784268;
	case 50:
		goto loc_827842A0;
	case 51:
		goto loc_827842E0;
	case 52:
		goto loc_82784334;
	case 53:
		goto loc_82784394;
	case 54:
		goto loc_82784478;
	case 55:
		goto loc_827844D0;
	case 56:
		goto loc_827865C4;
	case 57:
		goto loc_827865C4;
	case 58:
		goto loc_82784524;
	case 59:
		goto loc_82784668;
	case 60:
		goto loc_82784790;
	case 61:
		goto loc_82784864;
	case 62:
		goto loc_82784BF0;
	case 63:
		goto loc_82784C3C;
	case 64:
		goto loc_82784D08;
	case 65:
		goto loc_82784FB8;
	case 66:
		goto loc_82785030;
	case 67:
		goto loc_82785138;
	case 68:
		goto loc_82785344;
	case 69:
		goto loc_8278544C;
	case 70:
		goto loc_827854A8;
	case 71:
		goto loc_827854B8;
	case 72:
		goto loc_82783504;
	case 73:
		goto loc_8278550C;
	case 74:
		goto loc_82785584;
	case 75:
		goto loc_82785594;
	case 76:
		goto loc_827855A8;
	case 77:
		goto loc_827855E8;
	case 78:
		goto loc_82785648;
	case 79:
		goto loc_82785980;
	case 80:
		goto loc_82785B04;
	case 81:
		goto loc_82785B18;
	case 82:
		goto loc_82785B2C;
	case 83:
		goto loc_82786704;
	case 84:
		goto loc_82786A04;
	case 85:
		goto loc_827854A8;
	case 86:
		goto loc_827865C4;
	case 87:
		goto loc_827865C4;
	case 88:
		goto loc_827865C4;
	case 89:
		goto loc_827865C4;
	case 90:
		goto loc_827865C4;
	case 91:
		goto loc_827865C4;
	case 92:
		goto loc_827865C4;
	case 93:
		goto loc_827865C4;
	case 94:
		goto loc_827865C4;
	case 95:
		goto loc_827865C4;
	case 96:
		goto loc_82786A10;
	case 97:
		goto loc_82786A64;
	case 98:
		goto loc_82786AB8;
	case 99:
		goto loc_82786B0C;
	case 100:
		goto loc_82786B60;
	case 101:
		goto loc_82786BB4;
	case 102:
		goto loc_82786C08;
	case 103:
		goto loc_82786CF0;
	case 104:
		goto loc_82786D7C;
	case 105:
		goto loc_82786E38;
	default:
		__builtin_unreachable();
	}
	// lwz r19,29124(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 29124);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,12884(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 12884);
	// lwz r19,12952(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 12952);
	// lwz r19,13020(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13020);
	// lwz r19,13064(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13064);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,13108(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13108);
	// lwz r19,13192(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13192);
	// lwz r19,13276(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13276);
	// lwz r19,13360(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13360);
	// lwz r19,13444(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13444);
	// lwz r19,13572(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13572);
	// lwz r19,13708(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13708);
	// lwz r19,13872(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13872);
	// lwz r19,14036(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 14036);
	// lwz r19,14136(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 14136);
	// lwz r19,14360(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 14360);
	// lwz r19,14432(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 14432);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,14776(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 14776);
	// lwz r19,14824(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 14824);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,14856(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 14856);
	// lwz r19,15188(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 15188);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,15400(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 15400);
	// lwz r19,15412(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 15412);
	// lwz r19,15580(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 15580);
	// lwz r19,15768(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 15768);
	// lwz r19,15940(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 15940);
	// lwz r19,16148(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 16148);
	// lwz r19,16328(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 16328);
	// lwz r19,16480(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 16480);
	// lwz r19,16492(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 16492);
	// lwz r19,16520(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 16520);
	// lwz r19,16780(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 16780);
	// lwz r19,16892(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 16892);
	// lwz r19,16904(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 16904);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,16916(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 16916);
	// lwz r19,17000(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 17000);
	// lwz r19,17056(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 17056);
	// lwz r19,17120(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 17120);
	// lwz r19,17204(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 17204);
	// lwz r19,17300(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 17300);
	// lwz r19,17528(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 17528);
	// lwz r19,17616(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 17616);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,17700(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 17700);
	// lwz r19,18024(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 18024);
	// lwz r19,18320(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 18320);
	// lwz r19,18532(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 18532);
	// lwz r19,19440(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 19440);
	// lwz r19,19516(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 19516);
	// lwz r19,19720(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 19720);
	// lwz r19,20408(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 20408);
	// lwz r19,20528(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 20528);
	// lwz r19,20792(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 20792);
	// lwz r19,21316(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 21316);
	// lwz r19,21580(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 21580);
	// lwz r19,21672(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 21672);
	// lwz r19,21688(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 21688);
	// lwz r19,13572(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 13572);
	// lwz r19,21772(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 21772);
	// lwz r19,21892(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 21892);
	// lwz r19,21908(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 21908);
	// lwz r19,21928(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 21928);
	// lwz r19,21992(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 21992);
	// lwz r19,22088(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 22088);
	// lwz r19,22912(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 22912);
	// lwz r19,23300(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 23300);
	// lwz r19,23320(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 23320);
	// lwz r19,23340(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 23340);
	// lwz r19,26372(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26372);
	// lwz r19,27140(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 27140);
	// lwz r19,21672(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 21672);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,27152(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 27152);
	// lwz r19,27236(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 27236);
	// lwz r19,27320(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 27320);
	// lwz r19,27404(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 27404);
	// lwz r19,27488(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 27488);
	// lwz r19,27572(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 27572);
	// lwz r19,27656(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 27656);
	// lwz r19,27888(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 27888);
	// lwz r19,28028(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 28028);
	// lwz r19,28216(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 28216);
loc_82783254:
	// lbz r11,198(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827871ac
	if (!cr6.eq) goto loc_827871AC;
	// lwz r31,116(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r11
	r30.u64 = r11.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,288(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 288);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827871ac
	goto loc_827871AC;
loc_82783298:
	// lbz r11,198(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827871ac
	if (!cr6.eq) goto loc_827871AC;
	// lwz r31,116(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r11
	r30.u64 = r11.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,288(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 288);
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827871ac
	goto loc_827871AC;
loc_827832DC:
	// lbz r11,198(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827865c4
	if (!cr6.eq) goto loc_827865C4;
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783308:
	// lbz r11,198(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827865c4
	if (!cr6.eq) goto loc_827865C4;
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,292(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783334:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82783354
	if (cr6.gt) goto loc_82783354;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783354:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82769070
	sub_82769070(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783388:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x827833a8
	if (cr6.gt) goto loc_827833A8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827833A8:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827785b0
	sub_827785B0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827833DC:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x827833fc
	if (cr6.gt) goto loc_827833FC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827833FC:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82778610
	sub_82778610(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783430:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82783450
	if (cr6.gt) goto loc_82783450;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783450:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82768938
	sub_82768938(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783484:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x827834a4
	if (cr6.gt) goto loc_827834A4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827834A4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x827834bc
	if (cr6.gt) goto loc_827834BC;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827834BC:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827693c0
	sub_827693C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r29,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r29.u8);
	// stb r22,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r22.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783504:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r6,r11
	ctx.r6.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// bgt cr6,0x82783524
	if (cr6.gt) goto loc_82783524;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783524:
	// li r7,-1
	ctx.r7.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82769b08
	sub_82769B08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82783550
	if (cr6.gt) goto loc_82783550;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783550:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82783580
	if (!cr6.lt) goto loc_82783580;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82783580:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_8278358C:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x827835a8
	if (cr6.gt) goto loc_827835A8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827835A8:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827835d8
	if (cr6.eq) goto loc_827835D8;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r21
	r29.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827835dc
	if (!cr6.eq) goto loc_827835DC;
loc_827835D8:
	// mr r29,r16
	r29.u64 = r16.u64;
loc_827835DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x827835f4
	if (cr6.gt) goto loc_827835F4;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827835F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r22,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r22.u8);
	// stb r29,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r29.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783630:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8278364c
	if (cr6.gt) goto loc_8278364C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8278364C:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8278367c
	if (!cr6.eq) goto loc_8278367C;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r29,r16
	r29.u64 = r16.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82783680
	if (cr6.eq) goto loc_82783680;
loc_8278367C:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82783680:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82783698
	if (cr6.gt) goto loc_82783698;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783698:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r29,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r29.u8);
	// stb r22,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r22.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827836D4:
	// lwz r31,8(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x827836f8
	if (!cr6.eq) goto loc_827836F8;
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,4(r31)
	PPC_STORE_U8(r31.u32 + 4, ctx.r9.u8);
	// b 0x827865c4
	goto loc_827865C4;
loc_827836F8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8278370c
	if (!cr6.eq) goto loc_8278370C;
	// stb r22,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r22.u8);
	// stb r21,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r21.u8);
	// b 0x827865c4
	goto loc_827865C4;
loc_8278370C:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r30,r10,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stb r22,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r22.u8);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783738:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82783754
	if (cr6.gt) goto loc_82783754;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783754:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82768238
	sub_82768238(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82768238
	sub_82768238(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82783798
	if (cr6.gt) goto loc_82783798;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783798:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r27,r8,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r27,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r27.u8);
	// stb r22,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r22.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x827837e4
	if (!cr6.lt) goto loc_827837E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_827837E4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827837fc
	if (!cr0.eq) goto loc_827837FC;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827837FC:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827865c4
	if (!cr0.eq) goto loc_827865C4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783818:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82768238
	sub_82768238(ctx, base);
	// lwz r30,8(r17)
	r30.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82764480
	sub_82764480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827db780
	sub_827DB780(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827865c4
	if (!cr0.eq) goto loc_827865C4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783860:
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r9,12(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r8,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x827838a8
	if (cr6.lt) goto loc_827838A8;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,4,23,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
loc_827838A8:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82768238
	sub_82768238(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// extsw r3,r11
	ctx.r3.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// bgt cr6,0x827838d8
	if (cr6.gt) goto loc_827838D8;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827838D8:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x827d7860
	sub_827D7860(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r9,r11,-32
	ctx.r9.s64 = r11.s64 + -32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82783954
	if (!cr6.lt) goto loc_82783954;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82783920:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82783948
	if (!cr6.lt) goto loc_82783948;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82783948:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82783920
	if (!cr0.eq) goto loc_82783920;
	// b 0x82783978
	goto loc_82783978;
loc_82783954:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82783978:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x8278399c
	if (!cr0.eq) goto loc_8278399C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8278399C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827865c4
	if (!cr0.eq) goto loc_827865C4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827839B8:
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827839E8:
	// lwz r31,8(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827db780
	sub_827DB780(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783A08:
	// lwz r31,8(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lbz r11,124(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 124);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// ble cr6,0x82783acc
	if (!cr6.gt) goto loc_82783ACC;
	// addi r11,r17,120
	r11.s64 = r17.s64 + 120;
	// lwz r11,120(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 120);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,292(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82783a58
	if (!cr6.eq) goto loc_82783A58;
	// bl 0x8278eb68
	sub_8278EB68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82756338
	sub_82756338(ctx, base);
	// b 0x82783aac
	goto loc_82783AAC;
loc_82783A58:
	// lwz r9,296(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82783a74
	if (!cr6.eq) goto loc_82783A74;
	// bl 0x8278eb78
	sub_8278EB78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82756338
	sub_82756338(ctx, base);
	// b 0x82783aac
	goto loc_82783AAC;
loc_82783A74:
	// lwz r11,300(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 300);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82783b44
	if (cr6.eq) goto loc_82783B44;
loc_82783A80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r16,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r16.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
loc_82783AAC:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827865c4
	if (!cr0.eq) goto loc_827865C4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783ACC:
	// lwz r11,120(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 120);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r30,r17,120
	r30.s64 = r17.s64 + 120;
	// addi r3,r11,292
	ctx.r3.s64 = r11.s64 + 292;
	// bl 0x8276a5c0
	sub_8276A5C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82783afc
	if (cr6.eq) goto loc_82783AFC;
	// bl 0x8278eb68
	sub_8278EB68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82756338
	sub_82756338(ctx, base);
	// b 0x82783aac
	goto loc_82783AAC;
loc_82783AFC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,296
	ctx.r3.s64 = r11.s64 + 296;
	// bl 0x8276a5c0
	sub_8276A5C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82783b28
	if (cr6.eq) goto loc_82783B28;
	// bl 0x8278eb78
	sub_8278EB78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82756338
	sub_82756338(ctx, base);
	// b 0x82783aac
	goto loc_82783AAC;
loc_82783B28:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,300
	ctx.r3.s64 = r11.s64 + 300;
	// bl 0x8276a5c0
	sub_8276A5C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82783a80
	if (cr6.eq) goto loc_82783A80;
loc_82783B44:
	// bl 0x8278eb88
	sub_8278EB88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82756338
	sub_82756338(ctx, base);
	// b 0x82783aac
	goto loc_82783AAC;
loc_82783B54:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82783b70
	if (cr6.gt) goto loc_82783B70;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783B70:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82782130
	sub_82782130(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r3,-32
	r11.s64 = ctx.r3.s64 + -32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82783be8
	if (!cr6.lt) goto loc_82783BE8;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82783BB4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82783bdc
	if (!cr6.lt) goto loc_82783BDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82783BDC:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82783bb4
	if (!cr0.eq) goto loc_82783BB4;
	// b 0x82783c08
	goto loc_82783C08;
loc_82783BE8:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82783C08:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827865c4
	if (!cr0.eq) goto loc_827865C4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783C28:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82782890
	sub_82782890(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783C34:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82783c50
	if (cr6.gt) goto loc_82783C50;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783C50:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lbz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// bl 0x827688c0
	sub_827688C0(ctx, base);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// bl 0x82768238
	sub_82768238(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82783c8c
	if (cr6.gt) goto loc_82783C8C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783C8C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82768a58
	sub_82768A58(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82783cc0
	if (!cr6.lt) goto loc_82783CC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82783CC0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827865c4
	if (!cr0.eq) goto loc_827865C4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783CDC:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82783cf8
	if (cr6.gt) goto loc_82783CF8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783CF8:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277cb80
	sub_8277CB80(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// beq cr6,0x82783d54
	if (cr6.eq) goto loc_82783D54;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82783d24
	if (cr6.gt) goto loc_82783D24;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783D24:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82768680
	sub_82768680(ctx, base);
	// lwz r11,256(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 256);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82783d6c
	goto loc_82783D6C;
loc_82783D54:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82783d60
	if (cr6.gt) goto loc_82783D60;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783D60:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r16,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r16.u8);
loc_82783D6C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783D98:
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r9,12(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r8,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x82783de0
	if (cr6.lt) goto loc_82783DE0;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,4,23,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
loc_82783DE0:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277cb80
	sub_8277CB80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82783e38
	if (cr6.eq) goto loc_82783E38;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// extsw r29,r11
	r29.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82783e10
	if (cr6.gt) goto loc_82783E10;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783E10:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82768680
	sub_82768680(ctx, base);
	// lwz r11,252(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 252);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82783E38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c630
	sub_8278C630(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783E44:
	// lwz r11,28(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// lwz r9,12(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm r11,r8,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x82783e8c
	if (cr6.lt) goto loc_82783E8C;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,4,23,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1F0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
loc_82783E8C:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277cb80
	sub_8277CB80(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82783f08
	if (cr6.eq) goto loc_82783F08;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82783eb8
	if (cr6.gt) goto loc_82783EB8;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82783EB8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8276b4e8
	sub_8276B4E8(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82783f08
	if (!cr0.eq) goto loc_82783F08;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82783F08:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c630
	sub_8278C630(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783F14:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r30,r17,8
	r30.s64 = r17.s64 + 8;
	// bl 0x8277cb80
	sub_8277CB80(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82783f9c
	if (cr6.eq) goto loc_82783F9C;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r11,16384
	cr6.compare<int32_t>(r11.s32, 16384, xer);
	// bge cr6,0x82783f94
	if (!cr6.lt) goto loc_82783F94;
	// lwz r3,128(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82783f50
	if (!cr6.eq) goto loc_82783F50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276eb80
	sub_8276EB80(ctx, base);
loc_82783F50:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82783f60
	if (cr6.eq) goto loc_82783F60;
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// b 0x82783f7c
	goto loc_82783F7C;
loc_82783F60:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_82783F7C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b4e0
	sub_8277B4E0(ctx, base);
	// b 0x82783f9c
	goto loc_82783F9C;
loc_82783F94:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276ac60
	sub_8276AC60(ctx, base);
loc_82783F9C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82783FC8:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r9,28(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// stw r19,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r19.u32);
	// rlwinm r11,r9,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r17,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, r17.u32);
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// stw r16,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, r16.u32);
	// stb r16,548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 548, r16.u8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r16,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r16.u32);
	// stw r16,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r16.u32);
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r21,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, r21.u32);
	// stw r7,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r7.u32);
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r11.u32);
	// bl 0x8277daf0
	sub_8277DAF0(ctx, base);
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r6,12(r17)
	ctx.r6.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82784044
	if (!cr6.lt) goto loc_82784044;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82784044:
	// lwz r11,528(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784060:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8277dd28
	sub_8277DD28(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_8278406C:
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r16,2544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2544, r16.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784088:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x827840a4
	if (cr6.gt) goto loc_827840A4;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827840A4:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82768238
	sub_82768238(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82768238
	sub_82768238(ctx, base);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
loc_827840E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r29,r8,r9
	r29.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82784104
	if (cr6.eq) goto loc_82784104;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x827840e0
	if (cr6.eq) goto loc_827840E0;
loc_82784104:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8278411c
	if (cr6.gt) goto loc_8278411C;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8278411C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// rlwinm r11,r29,1,31,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// stb r22,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r22.u8);
	// stb r11,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r11.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82784158
	if (!cr6.lt) goto loc_82784158;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82784158:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x82784170
	if (!cr0.eq) goto loc_82784170;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82784170:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827865c4
	if (!cr0.eq) goto loc_827865C4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_8278418C:
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277c510
	sub_8277C510(ctx, base);
	// addi r3,r17,176
	ctx.r3.s64 = r17.s64 + 176;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827841d4
	if (!cr6.lt) goto loc_827841D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_827841D4:
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82787e68
	sub_82787E68(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_827841FC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8277e0a0
	sub_8277E0A0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784208:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8277e308
	sub_8277E308(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784214:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bge cr6,0x82784230
	if (!cr6.lt) goto loc_82784230;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_82784230:
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,8(r17)
	r30.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x827d9318
	sub_827D9318(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// divwu r8,r9,r31
	ctx.r8.u32 = ctx.r9.u32 / r31.u32;
	// mullw r7,r8,r31
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r31.s32);
	// subf r4,r7,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r7.s64;
	// bl 0x827db780
	sub_827DB780(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784268:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82768238
	sub_82768238(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82764480
	sub_82764480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x827db780
	sub_827DB780(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827842A0:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r4,r9
	ctx.r4.s64 = ctx.r9.s8;
	// bl 0x827db780
	sub_827DB780(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827842E0:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82768680
	sub_82768680(ctx, base);
	// stb r3,480(r1)
	PPC_STORE_U8(ctx.r1.u32 + 480, ctx.r3.u8);
	// stb r16,481(r1)
	PPC_STORE_U8(ctx.r1.u32 + 481, r16.u8);
	// addi r11,r17,120
	r11.s64 = r17.s64 + 120;
	// lwz r11,120(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 120);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,260
	ctx.r3.s64 = ctx.r1.s64 + 260;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82756238
	sub_82756238(ctx, base);
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827865c4
	if (!cr0.eq) goto loc_827865C4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784334:
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x827a3bc8
	sub_827A3BC8(ctx, base);
	// std r3,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r3.u64);
	// bl 0x828eb5b0
	sub_828EB5B0(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r9,16(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x8278437c
	if (cr6.lt) goto loc_8278437C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8278437C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
	// stfd f31,8(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + 8, f31.u64);
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784394:
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827890e0
	sub_827890E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82768238
	sub_82768238(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// extsw r3,r11
	ctx.r3.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// bgt cr6,0x827843d8
	if (cr6.gt) goto loc_827843D8;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827843D8:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82768680
	sub_82768680(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x827d7860
	sub_827D7860(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r9,r11,-32
	ctx.r9.s64 = r11.s64 + -32;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x8278442c
	if (!cr6.lt) goto loc_8278442C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// b 0x82784450
	goto loc_82784450;
loc_8278442C:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82784450:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784478:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82768238
	sub_82768238(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827844a8
	if (!cr6.eq) goto loc_827844A8;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// b 0x827844b8
	goto loc_827844B8;
loc_827844A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827644f8
	sub_827644F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_827844B8:
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x827db780
	sub_827DB780(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827844D0:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82768778
	sub_82768778(ctx, base);
	// sth r3,480(r1)
	PPC_STORE_U16(ctx.r1.u32 + 480, ctx.r3.u16);
	// sth r16,482(r1)
	PPC_STORE_U16(ctx.r1.u32 + 482, r16.u16);
	// addi r11,r17,120
	r11.s64 = r17.s64 + 120;
	// lwz r11,120(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 120);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82756288
	sub_82756288(ctx, base);
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827865c4
	if (!cr0.eq) goto loc_827865C4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784524:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// mr r29,r16
	r29.u64 = r16.u64;
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82784544
	if (cr6.gt) goto loc_82784544;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82784544:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lbz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bgt cr6,0x827845e0
	if (cr6.gt) goto loc_827845E0;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8278457c
	if (cr6.eq) goto loc_8278457C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827845e0
	if (!cr6.eq) goto loc_827845E0;
loc_8278457C:
	// stb r16,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r16.u8);
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277a528
	sub_8277A528(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827845d0
	if (cr6.eq) goto loc_827845D0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827845d0
	if (cr6.eq) goto loc_827845D0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r17,120
	ctx.r4.s64 = r17.s64 + 120;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_827845D0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82784624
	goto loc_82784624;
loc_827845E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x827845f8
	if (cr6.gt) goto loc_827845F8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827845F8:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82784624
	if (cr6.eq) goto loc_82784624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r17,120
	ctx.r4.s64 = r17.s64 + 120;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82784624:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8278464c
	if (!cr6.lt) goto loc_8278464C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_8278464C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82756388
	sub_82756388(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784668:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// stb r16,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r16.u8);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r9,r10,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8278470c
	if (!cr6.eq) goto loc_8278470C;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82779428
	sub_82779428(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8278470c
	if (cr6.eq) goto loc_8278470C;
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,512
	ctx.r9.s64 = ctx.r1.s64 + 512;
	// stw r16,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r16.u32);
	// stw r10,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r10.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r16,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, r16.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r9.u32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, r11.u32);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// stw r16,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r16.u32);
	// bl 0x82781760
	sub_82781760(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82784700
	if (cr6.eq) goto loc_82784700;
	// lbz r10,512(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 512);
	// mr r11,r21
	r11.u64 = r21.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82784704
	if (!cr6.eq) goto loc_82784704;
loc_82784700:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82784704:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// b 0x82784720
	goto loc_82784720;
loc_8278470C:
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277a528
	sub_8277A528(ctx, base);
loc_82784720:
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82784768
	if (cr6.eq) goto loc_82784768;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82784768
	if (cr6.eq) goto loc_82784768;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r17,120
	ctx.r4.s64 = r17.s64 + 120;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r31,8(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82784770
	goto loc_82784770;
loc_82784768:
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82784770:
	// bl 0x82756388
	sub_82756388(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784790:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x827847ac
	if (cr6.gt) goto loc_827847AC;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827847AC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827847f4
	if (!cr6.eq) goto loc_827847F4;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// beq cr6,0x827847f4
	if (cr6.eq) goto loc_827847F4;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82782130
	sub_82782130(ctx, base);
	// b 0x82784804
	goto loc_82784804;
loc_827847F4:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82780ee0
	sub_82780EE0(ctx, base);
loc_82784804:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82784834
	if (!cr6.lt) goto loc_82784834;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784834:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784864:
	// stb r16,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r16.u8);
	// addi r28,r17,8
	r28.s64 = r17.s64 + 8;
	// stb r16,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, r16.u8);
	// addi r26,r1,512
	r26.s64 = ctx.r1.s64 + 512;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r27,r21
	r27.u64 = r21.u64;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x827849f8
	if (!cr6.eq) goto loc_827849F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,576
	ctx.r8.s64 = ctx.r1.s64 + 576;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// lbz r10,512(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 512);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// beq cr6,0x827848d4
	if (cr6.eq) goto loc_827848D4;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x827848d8
	if (!cr6.eq) goto loc_827848D8;
loc_827848D4:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_827848D8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827849e8
	if (!cr6.eq) goto loc_827849E8;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bne cr6,0x827849ac
	if (!cr6.eq) goto loc_827849AC;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82784914
	if (cr6.eq) goto loc_82784914;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82784914:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82784924
	if (cr6.eq) goto loc_82784924;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82784924:
	// mr r15,r31
	r15.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827849ac
	if (cr6.eq) goto loc_827849AC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827849ac
	if (cr6.eq) goto loc_827849AC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r17,120
	ctx.r5.s64 = r17.s64 + 120;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82766758
	sub_82766758(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82767990
	sub_82767990(ctx, base);
	// b 0x827849d4
	goto loc_827849D4;
loc_827849AC:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827849d0
	if (cr6.eq) goto loc_827849D0;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_827849D0:
	// mr r27,r16
	r27.u64 = r16.u64;
loc_827849D4:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x827849e4
	if (cr6.eq) goto loc_827849E4;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827849E4:
	// mr r15,r16
	r15.u64 = r16.u64;
loc_827849E8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x82784a00
	goto loc_82784A00;
loc_827849F8:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
loc_82784A00:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82784a18
	if (cr6.gt) goto loc_82784A18;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
loc_82784A18:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// stfd f1,424(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.f1.u64);
	// li r12,2047
	r12.s64 = 2047;
	// stfd f1,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.f1.u64);
	// li r11,2047
	r11.s64 = 2047;
	// rldicr r12,r12,52,11
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r11,52,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFF0000000000000;
	// mr r11,r21
	r11.u64 = r21.u64;
	// ld r9,424(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 424);
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & r12.u64;
	// cmpld cr6,r8,r10
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, xer);
	// beq cr6,0x82784a50
	if (cr6.eq) goto loc_82784A50;
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82784A50:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82784a6c
	if (!cr6.eq) goto loc_82784A6C;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// lwz r29,220(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// b 0x82784a70
	goto loc_82784A70;
loc_82784A6C:
	// mr r29,r16
	r29.u64 = r16.u64;
loc_82784A70:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// stb r16,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, r16.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82784b70
	if (cr6.eq) goto loc_82784B70;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82784b38
	if (cr6.eq) goto loc_82784B38;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r11,r1,496
	r11.s64 = ctx.r1.s64 + 496;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, r11.u32);
	// rlwinm r11,r8,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r30,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, r30.u32);
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// stb r16,548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 548, r16.u8);
	// stw r16,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r16.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r19,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r19.u32);
	// stw r16,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r16.u32);
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r17,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, r17.u32);
	// stw r29,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, r29.u32);
	// addi r5,r11,-2
	ctx.r5.s64 = r11.s64 + -2;
	// stw r5,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r5.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,528(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82784b64
	goto loc_82784B64;
loc_82784B38:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82784b64
	if (cr6.eq) goto loc_82784B64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r4,364(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// bl 0x8277c630
	sub_8277C630(ctx, base);
loc_82784B64:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
loc_82784B70:
	// addi r4,r29,1
	ctx.r4.s64 = r29.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// lbz r11,176(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 176);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x827871ac
	if (cr6.eq) goto loc_827871AC;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277c510
	sub_8277C510(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82787e68
	sub_82787E68(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// b 0x827871ac
	goto loc_827871AC;
loc_82784BF0:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82784c04
	if (cr6.eq) goto loc_82784C04;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
loc_82784C04:
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827871c4
	if (!cr6.lt) goto loc_827871C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784C3C:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82784c68
	if (cr6.gt) goto loc_82784C68;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82784C68:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f30.f64);
	// beq cr6,0x82784c84
	if (cr6.eq) goto loc_82784C84;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x828ec6b0
	sub_828EC6B0(ctx, base);
	// b 0x82784c88
	goto loc_82784C88;
loc_82784C84:
	// bl 0x8278eb68
	sub_8278EB68(ctx, base);
loc_82784C88:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82784cb0
	if (!cr6.lt) goto loc_82784CB0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// b 0x82784cd0
	goto loc_82784CD0;
loc_82784CB0:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82784CD0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82784cf0
	if (cr6.lt) goto loc_82784CF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82784CF0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
	// stfd f31,8(r11)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r11.u32 + 8, f31.u64);
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
	// b 0x827865c4
	goto loc_827865C4;
loc_82784D08:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82784d3c
	if (cr6.gt) goto loc_82784D3C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82784D3C:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// li r12,2047
	r12.s64 = 2047;
	// li r11,2047
	r11.s64 = 2047;
	// stfd f1,416(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.f1.u64);
	// rldicr r12,r12,52,11
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFF0000000000000;
	// ld r10,416(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// rldicr r8,r11,52,11
	ctx.r8.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFF0000000000000;
	// stfd f1,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.f1.u64);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & r12.u64;
	// cmpld cr6,r9,r8
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, xer);
	// mr r11,r21
	r11.u64 = r21.u64;
	// beq cr6,0x82784d74
	if (cr6.eq) goto loc_82784D74;
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82784D74:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82784d90
	if (!cr6.eq) goto loc_82784D90;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// lwz r28,220(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// b 0x82784d94
	goto loc_82784D94;
loc_82784D90:
	// mr r28,r16
	r28.u64 = r16.u64;
loc_82784D94:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82784db8
	if (!cr6.lt) goto loc_82784DB8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// b 0x82784dd8
	goto loc_82784DD8;
loc_82784DB8:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82784DD8:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82784de8
	if (cr6.eq) goto loc_82784DE8;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82784DE8:
	// stb r16,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r16.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,512
	ctx.r5.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// mr r29,r16
	r29.u64 = r16.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82784eac
	if (cr6.eq) goto loc_82784EAC;
	// lbz r11,512(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 512);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x82784e34
	if (cr6.eq) goto loc_82784E34;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x82784e38
	if (!cr6.eq) goto loc_82784E38;
loc_82784E34:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82784E38:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82784eac
	if (cr6.eq) goto loc_82784EAC;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82780700
	sub_82780700(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82784e9c
	if (!cr6.eq) goto loc_82784E9C;
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82784e9c
	if (cr6.eq) goto loc_82784E9C;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_82784E9C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// b 0x82784ed0
	goto loc_82784ED0;
loc_82784EAC:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82784ed0
	if (cr6.eq) goto loc_82784ED0;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_82784ED0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x82784f80
	if (cr6.eq) goto loc_82784F80;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82784f04
	if (cr6.lt) goto loc_82784F04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82784F04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82784f18
	if (cr6.eq) goto loc_82784F18;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82766ee0
	sub_82766EE0(ctx, base);
loc_82784F18:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82784F20:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// mr r15,r16
	r15.u64 = r16.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// lbz r11,176(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 176);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x827871ac
	if (cr6.eq) goto loc_827871AC;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277c510
	sub_8277C510(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82787e68
	sub_82787E68(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// b 0x827871ac
	goto loc_827871AC;
loc_82784F80:
	// stb r16,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, r16.u8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82784f94
	if (cr6.lt) goto loc_82784F94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82784F94:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82784fa8
	if (cr6.eq) goto loc_82784FA8;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
loc_82784FA8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82784f20
	goto loc_82784F20;
loc_82784FB8:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82784fec
	if (!cr6.eq) goto loc_82784FEC;
	// cmpwi cr6,r23,1
	cr6.compare<int32_t>(r23.s32, 1, xer);
	// bne cr6,0x82784ff8
	if (!cr6.eq) goto loc_82784FF8;
loc_82784FEC:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82780678
	sub_82780678(ctx, base);
loc_82784FF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82785020
	if (!cr6.lt) goto loc_82785020;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82785020:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785030:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r30,220(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82785074
	if (!cr6.lt) goto loc_82785074;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82785074:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r9,r1,512
	ctx.r9.s64 = ctx.r1.s64 + 512;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r6,r8,r11
	ctx.r6.s64 = r11.s64 - ctx.r8.s64;
	// stb r16,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r16.u8);
	// rlwinm r11,r7,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r19,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r19.u32);
	// srawi r10,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// stw r9,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r9.u32);
	// stw r16,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, r16.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r17,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, r17.u32);
	// stb r16,548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 548, r16.u8);
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r30,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, r30.u32);
	// stw r16,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r16.u32);
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r11.u32);
	// stw r16,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r16.u32);
	// bl 0x82774e48
	sub_82774E48(ctx, base);
	// lwz r5,528(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x827850f4
	if (!cr6.gt) goto loc_827850F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
loc_827850F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82785114
	if (cr6.lt) goto loc_82785114;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82785114:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82785128
	if (cr6.eq) goto loc_82785128;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
loc_82785128:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785138:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// addi r11,r17,120
	r11.s64 = r17.s64 + 120;
	// lwz r11,120(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 120);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,12
	ctx.r5.s64 = r11.s64 + 12;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r4,672(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 672);
	// lwz r30,220(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// bl 0x82780d30
	sub_82780D30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82785188
	if (cr6.eq) goto loc_82785188;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82785188:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827851b0
	if (!cr6.lt) goto loc_827851B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_827851B0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827852b8
	if (cr6.eq) goto loc_827852B8;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x827852b8
	if (!cr6.gt) goto loc_827852B8;
loc_827851C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r7,r11,-32
	ctx.r7.s64 = r11.s64 + -32;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// blt cr6,0x827852b0
	if (cr6.lt) goto loc_827852B0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bgt cr6,0x82785200
	if (cr6.gt) goto loc_82785200;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82785200:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x8278526c
	if (!cr6.eq) goto loc_8278526C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82785224
	if (cr6.gt) goto loc_82785224;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82785224:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// stb r16,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, r16.u8);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,229
	ctx.r7.s64 = ctx.r1.s64 + 229;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
loc_8278526C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82785290
	if (!cr6.lt) goto loc_82785290;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// b 0x827852b0
	goto loc_827852B0;
loc_82785290:
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_827852B0:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x827851c0
	if (!cr0.eq) goto loc_827851C0;
loc_827852B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x827852d8
	if (cr6.lt) goto loc_827852D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_827852D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827852ec
	if (cr6.eq) goto loc_827852EC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82766ee0
	sub_82766EE0(ctx, base);
loc_827852EC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827852fc
	if (cr6.eq) goto loc_827852FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827852FC:
	// lbz r11,176(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 176);
	// mr r15,r16
	r15.u64 = r16.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x827871ac
	if (cr6.eq) goto loc_827871AC;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277c510
	sub_8277C510(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82787e68
	sub_82787E68(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// b 0x827871ac
	goto loc_827871AC;
loc_82785344:
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// li r31,49
	r31.s64 = 49;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x827853e0
	if (cr6.gt) goto loc_827853E0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8278542c
	if (cr6.eq) goto loc_8278542C;
	// bdz 0x827853d0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827853D0;
	// bdz 0x8278538c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8278538C;
	// bdz 0x827853e0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827853E0;
	// bdz 0x827853e0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827853E0;
	// bdz 0x82785384
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82785384;
	// bdz 0x827853c0
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_827853C0;
	// bdz 0x82785394
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_82785394;
	// b 0x827853d8
	goto loc_827853D8;
loc_82785384:
	// li r31,53
	r31.s64 = 53;
	// b 0x8278542c
	goto loc_8278542C;
loc_8278538C:
	// li r31,55
	r31.s64 = 55;
	// b 0x8278542c
	goto loc_8278542C;
loc_82785394:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827853c8
	if (cr6.eq) goto loc_827853C8;
	// lwz r11,104(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r3,r3,104
	ctx.r3.s64 = ctx.r3.s64 + 104;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x827853c8
	if (cr6.eq) goto loc_827853C8;
loc_827853C0:
	// li r31,57
	r31.s64 = 57;
	// b 0x8278542c
	goto loc_8278542C;
loc_827853C8:
	// li r31,56
	r31.s64 = 56;
	// b 0x8278542c
	goto loc_8278542C;
loc_827853D0:
	// li r31,50
	r31.s64 = 50;
	// b 0x8278542c
	goto loc_8278542C;
loc_827853D8:
	// li r31,58
	r31.s64 = 58;
	// b 0x8278542c
	goto loc_8278542C;
loc_827853E0:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x827853f4
	if (cr6.eq) goto loc_827853F4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x827853f8
	if (!cr6.eq) goto loc_827853F8;
loc_827853F4:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_827853F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8278540c
	if (cr6.eq) goto loc_8278540C;
	// li r31,54
	r31.s64 = 54;
	// b 0x8278542c
	goto loc_8278542C;
loc_8278540C:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8278542c
	if (cr6.eq) goto loc_8278542C;
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,312(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8278542C:
	// addi r10,r31,2
	ctx.r10.s64 = r31.s64 + 2;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r11,r17,120
	r11.s64 = r17.s64 + 120;
	// lwz r11,120(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 120);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_8278544C:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82785494
	if (cr6.eq) goto loc_82785494;
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82785480
	if (!cr6.eq) goto loc_82785480;
	// bl 0x8276eb80
	sub_8276EB80(ctx, base);
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785480:
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x827562d8
	sub_827562D8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785494:
	// lwz r31,8(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r16,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r16.u8);
	// b 0x827865c4
	goto loc_827865C4;
loc_827854A8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82782ac8
	sub_82782AC8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827854B8:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x827854d8
	if (cr6.gt) goto loc_827854D8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_827854D8:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82769070
	sub_82769070(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_8278550C:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x8278552c
	if (cr6.gt) goto loc_8278552C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8278552C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82785544
	if (cr6.gt) goto loc_82785544;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82785544:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827693c0
	sub_827693C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82756388
	sub_82756388(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785584:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82768868
	sub_82768868(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785594:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lbz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x827688c0
	sub_827688C0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827855A8:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r30,8(r17)
	r30.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x827855d0
	if (cr6.lt) goto loc_827855D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_827855D0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827855E8:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82785600
	if (cr6.gt) goto loc_82785600;
	// lwz r4,20(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 20);
loc_82785600:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82785628
	if (cr6.gt) goto loc_82785628;
	// lwz r3,20(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 20);
loc_82785628:
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785648:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r27,r17,8
	r27.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82785664
	if (cr6.gt) goto loc_82785664;
	// lwz r31,12(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 12);
loc_82785664:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8278572c
	if (!cr6.eq) goto loc_8278572C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82780f50
	sub_82780F50(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82785710
	if (cr6.eq) goto loc_82785710;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82785710
	if (cr6.eq) goto loc_82785710;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277d888
	sub_8277D888(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827856f4
	if (!cr6.eq) goto loc_827856F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r16,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r16.u8);
loc_827856F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82785914
	goto loc_82785914;
loc_82785710:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r16,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r16.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82785914
	goto loc_82785914;
loc_8278572C:
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82785744
	if (cr6.eq) goto loc_82785744;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x82785748
	if (!cr6.eq) goto loc_82785748;
loc_82785744:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82785748:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82785850
	if (cr6.eq) goto loc_82785850;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x82785850
	if (!cr6.eq) goto loc_82785850;
	// addic. r30,r28,-16
	xer.ca = r28.u32 > 15;
	r30.s64 = r28.s64 + -16;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82785788
	if (cr0.eq) goto loc_82785788;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
loc_82785788:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82785798
	if (cr6.eq) goto loc_82785798;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82785798:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8278580c
	if (!cr6.lt) goto loc_8278580C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x8278f308
	sub_8278F308(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x827857fc
	if (!cr6.eq) goto loc_827857FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r16,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r16.u8);
loc_827857FC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x82785840
	goto loc_82785840;
loc_8278580C:
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82785838
	if (!cr6.lt) goto loc_82785838;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82785838
	if (cr6.eq) goto loc_82785838;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// b 0x82785840
	goto loc_82785840;
loc_82785838:
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r16,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r16.u8);
loc_82785840:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82785910
	if (cr6.eq) goto loc_82785910;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8278590c
	goto loc_8278590C;
loc_82785850:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x82785898
	if (cr6.eq) goto loc_82785898;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x82785888
	if (cr6.eq) goto loc_82785888;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x8278588c
	if (!cr6.eq) goto loc_8278588C;
loc_82785888:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8278588C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827858d4
	if (cr6.eq) goto loc_827858D4;
loc_82785898:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827858c0
	if (cr6.eq) goto loc_827858C0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_827858C0:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x827858d0
	if (cr6.eq) goto loc_827858D0;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827858D0:
	// mr r15,r30
	r15.u64 = r30.u64;
loc_827858D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r16,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r16.u8);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277d888
	sub_8277D888(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82785910
	if (cr6.eq) goto loc_82785910;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_8278590C:
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82785910:
	// mr r15,r16
	r15.u64 = r16.u64;
loc_82785914:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8278593c
	if (!cr6.lt) goto loc_8278593C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_8278593C:
	// lbz r11,176(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 176);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277c510
	sub_8277C510(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82787e68
	sub_82787E68(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785980:
	// addi r29,r17,8
	r29.s64 = r17.s64 + 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827890e0
	sub_827890E0(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82785ab8
	if (cr6.eq) goto loc_82785AB8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x827859bc
	if (cr6.gt) goto loc_827859BC;
	// lwz r31,12(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 12);
loc_827859BC:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x827859d4
	if (cr6.eq) goto loc_827859D4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x827859d8
	if (!cr6.eq) goto loc_827859D8;
loc_827859D4:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_827859D8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82785a6c
	if (cr6.eq) goto loc_82785A6C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x82785a6c
	if (!cr6.eq) goto loc_82785A6C;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,-16
	r30.s64 = r30.s64 + -16;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x82785a34
	if (cr6.lt) goto loc_82785A34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82774218
	sub_82774218(ctx, base);
	// b 0x82785ab8
	goto loc_82785AB8;
loc_82785A34:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// stb r16,230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 230, r16.u8);
	// addi r7,r1,230
	ctx.r7.s64 = ctx.r1.s64 + 230;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82791680
	sub_82791680(ctx, base);
	// b 0x82785aac
	goto loc_82785AAC;
loc_82785A6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// stb r16,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, r16.u8);
	// addi r7,r1,228
	ctx.r7.s64 = ctx.r1.s64 + 228;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82785AAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
loc_82785AB8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8278c630
	sub_8278C630(ctx, base);
	// lbz r11,176(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 176);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277c510
	sub_8277C510(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82787e68
	sub_82787E68(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785B04:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82769240
	sub_82769240(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785B18:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82778538
	sub_82778538(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82785B2C:
	// addi r30,r17,8
	r30.s64 = r17.s64 + 8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827890e0
	sub_827890E0(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// stfd f1,432(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.f1.u64);
	// li r12,2047
	r12.s64 = 2047;
	// stfd f1,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.f1.u64);
	// li r11,2047
	r11.s64 = 2047;
	// rldicr r12,r12,52,11
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r10,r11,52,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFF0000000000000;
	// mr r11,r21
	r11.u64 = r21.u64;
	// ld r9,432(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 432);
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & r12.u64;
	// cmpld cr6,r8,r10
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r10.u64, xer);
	// beq cr6,0x82785b74
	if (cr6.eq) goto loc_82785B74;
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82785B74:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82785b90
	if (!cr6.eq) goto loc_82785B90;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// lwz r25,220(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// b 0x82785b94
	goto loc_82785B94;
loc_82785B90:
	// mr r25,r16
	r25.u64 = r16.u64;
loc_82785B94:
	// stb r16,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r16.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r26,r16
	r26.u64 = r16.u64;
	// addi r5,r11,-16
	ctx.r5.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82785bcc
	if (cr6.gt) goto loc_82785BCC;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_82785BCC:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82767588
	sub_82767588(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827862c4
	if (cr6.eq) goto loc_827862C4;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827862c4
	if (cr6.eq) goto loc_827862C4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bgt cr6,0x82785c10
	if (cr6.gt) goto loc_82785C10;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_82785C10:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x82785c28
	if (cr6.eq) goto loc_82785C28;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x82785c2c
	if (!cr6.eq) goto loc_82785C2C;
loc_82785C28:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82785C2C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82785eb0
	if (!cr6.eq) goto loc_82785EB0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82785c50
	if (cr6.gt) goto loc_82785C50;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_82785C50:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82785eb0
	if (cr6.eq) goto loc_82785EB0;
	// stb r16,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, r16.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82785d10
	if (cr6.eq) goto loc_82785D10;
	// addic. r29,r26,-16
	xer.ca = r26.u32 > 15;
	r29.s64 = r26.s64 + -16;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82785c9c
	if (cr0.eq) goto loc_82785C9C;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
loc_82785C9C:
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// addi r4,r17,120
	ctx.r4.s64 = r17.s64 + 120;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x8278f800
	sub_8278F800(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82785ccc
	if (cr6.eq) goto loc_82785CCC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82785CCC:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82785cdc
	if (cr6.eq) goto loc_82785CDC;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82785CDC:
	// mr r15,r31
	r15.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82785d04
	if (cr6.eq) goto loc_82785D04;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8278bb48
	sub_8278BB48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// mr r15,r16
	r15.u64 = r16.u64;
	// b 0x82785d08
	goto loc_82785D08;
loc_82785D04:
	// mr r26,r16
	r26.u64 = r16.u64;
loc_82785D08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82785D10:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82785ea0
	if (cr6.eq) goto loc_82785EA0;
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277d888
	sub_8277D888(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82785e7c
	if (cr6.eq) goto loc_82785E7C;
	// lbz r11,576(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 576);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x82785d50
	if (cr6.eq) goto loc_82785D50;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x82785d54
	if (!cr6.eq) goto loc_82785D54;
loc_82785D50:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82785D54:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82785d78
	if (!cr6.eq) goto loc_82785D78;
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82785ea0
	if (cr6.eq) goto loc_82785EA0;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// b 0x82785e90
	goto loc_82785E90;
loc_82785D78:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82785e3c
	if (cr6.eq) goto loc_82785E3C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r1,512
	ctx.r9.s64 = ctx.r1.s64 + 512;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// subf r6,r8,r11
	ctx.r6.s64 = r11.s64 - ctx.r8.s64;
	// stw r9,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r9.u32);
	// rlwinm r11,r7,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r16,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r16.u32);
	// srawi r10,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// stw r17,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, r17.u32);
	// stw r19,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r19.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stb r16,548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 548, r16.u8);
	// stw r26,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, r26.u32);
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r16,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r16.u32);
	// stw r25,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, r25.u32);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, r11.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,528(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_82785E3C:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82785e60
	if (cr6.eq) goto loc_82785E60;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_82785E60:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_82785E7C:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82785ea0
	if (cr6.eq) goto loc_82785EA0;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
loc_82785E90:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_82785EA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_82785EB0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bgt cr6,0x82785ec8
	if (cr6.gt) goto loc_82785EC8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_82785EC8:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x82785ee0
	if (cr6.eq) goto loc_82785EE0;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x82785ee4
	if (!cr6.eq) goto loc_82785EE4;
loc_82785EE0:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82785EE4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827860a8
	if (cr6.eq) goto loc_827860A8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r11,-16
	r29.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82785f08
	if (cr6.gt) goto loc_82785F08;
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_82785F08:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82786008
	if (cr6.eq) goto loc_82786008;
	// addi r26,r3,16
	r26.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8278600c
	if (cr6.eq) goto loc_8278600C;
	// stb r16,576(r1)
	PPC_STORE_U8(ctx.r1.u32 + 576, r16.u8);
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277d888
	sub_8277D888(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82786074
	if (cr6.eq) goto loc_82786074;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82786034
	if (cr6.eq) goto loc_82786034;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r8,r11,-3
	ctx.r8.s64 = r11.s64 + -3;
	// bl 0x82771bf8
	sub_82771BF8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,144(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_82786008:
	// mr r26,r16
	r26.u64 = r16.u64;
loc_8278600C:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82786500
	if (cr6.eq) goto loc_82786500;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,352(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_82786034:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82786058
	if (cr6.eq) goto loc_82786058;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_82786058:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_82786074:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82786098
	if (cr6.eq) goto loc_82786098;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_82786098:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_827860A8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82780f50
	sub_82780F50(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x82786290
	if (!cr6.eq) goto loc_82786290;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
	// bne cr6,0x827860e0
	if (!cr6.eq) goto loc_827860E0;
	// mr r29,r16
	r29.u64 = r16.u64;
loc_827860E0:
	// stb r16,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, r16.u8);
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277d888
	sub_8277D888(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8278624c
	if (cr6.eq) goto loc_8278624C;
	// lbz r10,496(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 496);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// beq cr6,0x82786128
	if (cr6.eq) goto loc_82786128;
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82786270
	if (cr6.eq) goto loc_82786270;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// b 0x82786260
	goto loc_82786260;
loc_82786128:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827861fc
	if (cr6.eq) goto loc_827861FC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// subf r7,r9,r11
	ctx.r7.s64 = r11.s64 - ctx.r9.s64;
	// stw r10,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r10.u32);
	// rlwinm r11,r8,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r19,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, r19.u32);
	// srawi r10,r7,4
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 4;
	// stb r16,548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 548, r16.u8);
	// stw r16,540(r1)
	PPC_STORE_U32(ctx.r1.u32 + 540, r16.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r16,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, r16.u32);
	// stw r17,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, r17.u32);
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// stw r25,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, r25.u32);
	// stw r29,536(r1)
	PPC_STORE_U32(ctx.r1.u32 + 536, r29.u32);
	// addi r6,r11,-3
	ctx.r6.s64 = r11.s64 + -3;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r6,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r6.u32);
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,528(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 528);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r16
	r26.u64 = r16.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_827861FC:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82786220
	if (cr6.eq) goto loc_82786220;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_82786220:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r16
	r26.u64 = r16.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_8278624C:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82786270
	if (cr6.eq) goto loc_82786270;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
loc_82786260:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_82786270:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r16
	r26.u64 = r16.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_82786290:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827862b4
	if (cr6.eq) goto loc_827862B4;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,304(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_827862B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x82786500
	goto loc_82786500;
loc_827862C4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x827862dc
	if (cr6.gt) goto loc_827862DC;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_827862DC:
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x827862f8
	if (cr6.eq) goto loc_827862F8;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827862F8:
	// stb r16,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, r16.u8);
	// mr r27,r16
	r27.u64 = r16.u64;
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x827863bc
	if (!cr6.eq) goto loc_827863BC;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82786334
	if (cr6.eq) goto loc_82786334;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82786334:
	// mr r27,r31
	r27.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x827863bc
	if (cr6.eq) goto loc_827863BC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827863bc
	if (cr6.eq) goto loc_827863BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r17,120
	ctx.r5.s64 = r17.s64 + 120;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82766758
	sub_82766758(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82767990
	sub_82767990(ctx, base);
	// b 0x827863e4
	goto loc_827863E4;
loc_827863BC:
	// addi r11,r17,120
	r11.s64 = r17.s64 + 120;
	// lwz r11,120(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// addi r4,r11,244
	ctx.r4.s64 = r11.s64 + 244;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82781dd0
	sub_82781DD0(ctx, base);
loc_827863E4:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x827863fc
	if (cr6.eq) goto loc_827863FC;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x82786400
	if (!cr6.eq) goto loc_82786400;
loc_827863FC:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82786400:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827864b8
	if (cr6.eq) goto loc_827864B8;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827864a8
	if (cr6.eq) goto loc_827864A8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r5,r1,496
	ctx.r5.s64 = ctx.r1.s64 + 496;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r9,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r8,4
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// addi r11,r11,-32
	r11.s64 = r11.s64 + -32;
	// addi r8,r11,-3
	ctx.r8.s64 = r11.s64 + -3;
	// bl 0x82771bf8
	sub_82771BF8(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827864A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// b 0x827864d4
	goto loc_827864D4;
loc_827864B8:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827864d4
	if (cr6.eq) goto loc_827864D4;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,344(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_827864D4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827864fc
	if (cr6.eq) goto loc_827864FC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827864FC:
	// mr r15,r16
	r15.u64 = r16.u64;
loc_82786500:
	// addi r4,r25,2
	ctx.r4.s64 = r25.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// lbz r11,176(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 176);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82786558
	if (cr6.eq) goto loc_82786558;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277c510
	sub_8277C510(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82787e68
	sub_82787E68(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
loc_82786558:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x827865a0
	if (cr6.eq) goto loc_827865A0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8278f0b0
	sub_8278F0B0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82786580
	if (cr6.eq) goto loc_82786580;
	// lbz r11,102(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 102);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827865a0
	if (!cr6.eq) goto loc_827865A0;
loc_82786580:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x827794d8
	sub_827794D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827865a0
	if (cr6.eq) goto loc_827865A0;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
loc_827865A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82767618
	sub_82767618(ctx, base);
loc_827865C0:
	// lwz r25,240(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
loc_827865C4:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// blt cr6,0x82782fd0
	if (cr6.lt) goto loc_82782FD0;
	// lwz r28,852(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// lwz r27,836(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
loc_827865E0:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x827866c4
	if (!cr6.gt) goto loc_827866C4;
	// mr r30,r11
	r30.u64 = r11.u64;
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
loc_827865F4:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// bl 0x8277c5c8
	sub_8277C5C8(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r9,288(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	r11.s64 = ctx.r6.s32 >> 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82786638
	if (!cr6.gt) goto loc_82786638;
	// subf r4,r9,r11
	ctx.r4.s64 = r11.s64 - ctx.r9.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
loc_82786638:
	// lwz r11,280(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827866bc
	if (cr6.eq) goto loc_827866BC;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r5,r10,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r3,r8,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 | ctx.r6.u64;
	// lbz r8,198(r17)
	ctx.r8.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// or r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 | ctx.r4.u64;
	// lwz r6,284(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// ori r4,r8,128
	ctx.r4.u64 = ctx.r8.u64 | 128;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stb r4,198(r17)
	PPC_STORE_U8(r17.u32 + 198, ctx.r4.u8);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// lbz r6,5(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// rotlwi r11,r10,8
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r6,r11,r6
	ctx.r6.u64 = r11.u64 | ctx.r6.u64;
	// bl 0x82782ca0
	sub_82782CA0(ctx, base);
	// lbz r10,198(r17)
	ctx.r10.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// clrlwi r9,r10,25
	ctx.r9.u64 = ctx.r10.u32 & 0x7F;
	// stb r9,198(r17)
	PPC_STORE_U8(r17.u32 + 198, ctx.r9.u8);
loc_827866BC:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bgt 0x827865f4
	if (cr0.gt) goto loc_827865F4;
loc_827866C4:
	// lwz r11,192(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 192);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,192(r17)
	PPC_STORE_U32(r17.u32 + 192, r11.u32);
	// bne 0x827866e8
	if (!cr0.eq) goto loc_827866E8;
	// lbz r11,176(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 176);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x827866e8
	if (cr6.eq) goto loc_827866E8;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82778908
	sub_82778908(ctx, base);
loc_827866E8:
	// lbz r10,231(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 231);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82787dec
	if (cr6.eq) goto loc_82787DEC;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x827792a0
	sub_827792A0(ctx, base);
	// b 0x82787e08
	goto loc_82787E08;
loc_82786704:
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r29,r17,8
	r29.s64 = r17.s64 + 8;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82786730
	if (cr6.gt) goto loc_82786730;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 12);
loc_82786730:
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827890e0
	sub_827890E0(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827682c8
	sub_827682C8(ctx, base);
	// stfd f1,408(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.f1.u64);
	// li r12,2047
	r12.s64 = 2047;
	// stfd f1,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.f1.u64);
	// li r11,2047
	r11.s64 = 2047;
	// rldicr r12,r12,52,11
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFF0000000000000;
	// rldicr r8,r11,52,11
	ctx.r8.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFF0000000000000;
	// mr r11,r21
	r11.u64 = r21.u64;
	// ld r10,408(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 408);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & r12.u64;
	// cmpld cr6,r9,r8
	cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, xer);
	// beq cr6,0x82786780
	if (cr6.eq) goto loc_82786780;
	// mr r11,r16
	r11.u64 = r16.u64;
loc_82786780:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8278679c
	if (!cr6.eq) goto loc_8278679C;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// lwz r27,220(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// b 0x827867a0
	goto loc_827867A0;
loc_8278679C:
	// mr r27,r16
	r27.u64 = r16.u64;
loc_827867A0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8278c630
	sub_8278C630(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lbz r11,0(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82786848
	if (cr6.eq) goto loc_82786848;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x827867e4
	if (!cr6.eq) goto loc_827867E4;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82786848
	if (cr6.eq) goto loc_82786848;
loc_827867E4:
	// stb r16,496(r1)
	PPC_STORE_U8(ctx.r1.u32 + 496, r16.u8);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r28,r1,496
	r28.s64 = ctx.r1.s64 + 496;
	// bl 0x82767888
	sub_82767888(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82786820
	if (cr6.eq) goto loc_82786820;
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277d888
	sub_8277D888(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82786878
	if (!cr6.eq) goto loc_82786878;
loc_82786820:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82786878
	if (cr6.eq) goto loc_82786878;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,328(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
	// b 0x82786878
	goto loc_82786878;
loc_82786848:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82766758
	sub_82766758(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
loc_82786878:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x82786890
	if (cr6.eq) goto loc_82786890;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// mr r11,r16
	r11.u64 = r16.u64;
	// bne cr6,0x82786894
	if (!cr6.eq) goto loc_82786894;
loc_82786890:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82786894:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827868ec
	if (cr6.eq) goto loc_827868EC;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,592
	ctx.r3.s64 = ctx.r1.s64 + 592;
	// bl 0x827678d8
	sub_827678D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82780700
	sub_82780700(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x827868dc
	if (cr6.eq) goto loc_827868DC;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827868DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278c080
	sub_8278C080(ctx, base);
	// b 0x8278691c
	goto loc_8278691C;
loc_827868EC:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x827868fc
	if (cr6.eq) goto loc_827868FC;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827868FC:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// mr r30,r16
	r30.u64 = r16.u64;
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8278691c
	if (cr6.eq) goto loc_8278691C;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,360(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8278691C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82786948
	if (cr6.lt) goto loc_82786948;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82786948:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8278695c
	if (cr6.eq) goto loc_8278695C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82766ee0
	sub_82766EE0(ctx, base);
loc_8278695C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8278696c
	if (cr6.eq) goto loc_8278696C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8278696C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r15,r16
	r15.u64 = r16.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// lbz r11,176(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 176);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x827869e0
	if (cr6.eq) goto loc_827869E0;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277c510
	sub_8277C510(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x82787e68
	sub_82787E68(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
loc_827869E0:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x827794d8
	sub_827794D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827865c0
	if (cr6.eq) goto loc_827865C0;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// b 0x827865c0
	goto loc_827865C0;
loc_82786A04:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8277e938
	sub_8277E938(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786A10:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82786a30
	if (cr6.gt) goto loc_82786A30;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786A30:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82778688
	sub_82778688(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786A64:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82786a84
	if (cr6.gt) goto loc_82786A84;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786A84:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827786e0
	sub_827786E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786AB8:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82786ad8
	if (cr6.gt) goto loc_82786AD8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786AD8:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82778738
	sub_82778738(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786B0C:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82786b2c
	if (cr6.gt) goto loc_82786B2C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786B2C:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82778790
	sub_82778790(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786B60:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82786b80
	if (cr6.gt) goto loc_82786B80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786B80:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827787e8
	sub_827787E8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786BB4:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82786bd4
	if (cr6.gt) goto loc_82786BD4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786BD4:
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82778840
	sub_82778840(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786C08:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r29,r11
	r29.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bgt cr6,0x82786c28
	if (cr6.gt) goto loc_82786C28;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786C28:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x827784e8
	sub_827784E8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bne cr6,0x82786c88
	if (!cr6.eq) goto loc_82786C88;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82786c54
	if (cr6.gt) goto loc_82786C54;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786C54:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82756388
	sub_82756388(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786C88:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82786c94
	if (cr6.gt) goto loc_82786C94;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786C94:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r11,-16
	r30.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82786cac
	if (cr6.gt) goto loc_82786CAC;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786CAC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x827693c0
	sub_827693C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82756388
	sub_82756388(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786CF0:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// extsw r6,r11
	ctx.r6.s64 = r11.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// bgt cr6,0x82786d10
	if (cr6.gt) goto loc_82786D10;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786D10:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82769b08
	sub_82769B08(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82786d3c
	if (cr6.gt) goto loc_82786D3C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786D3C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82786d6c
	if (!cr6.lt) goto loc_82786D6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82786D6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786D7C:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82786d98
	if (cr6.gt) goto loc_82786D98;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786D98:
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82768238
	sub_82768238(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lbz r6,212(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 212);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82768238
	sub_82768238(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r28,r11,-16
	r28.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82786ddc
	if (cr6.gt) goto loc_82786DDC;
	// lwz r28,12(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82786DDC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827660c8
	sub_827660C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82756388
	sub_82756388(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82786e1c
	if (!cr6.lt) goto loc_82786E1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82786E1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786E38:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8277e640
	sub_8277E640(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786E44:
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// addi r10,r5,-129
	ctx.r10.s64 = ctx.r5.s64 + -129;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// rotlwi r6,r9,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// cmplwi cr6,r10,30
	cr6.compare<uint32_t>(ctx.r10.u32, 30, xer);
	// or r27,r6,r7
	r27.u64 = ctx.r6.u64 | ctx.r7.u64;
	// add r9,r27,r28
	ctx.r9.u64 = r27.u64 + r28.u64;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// stw r6,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r6.u32);
	// bgt cr6,0x827865c4
	if (cr6.gt) goto loc_827865C4;
	// lis r12,-32136
	r12.s64 = -2106064896;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,28292
	r12.s64 = r12.s64 + 28292;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82786F00;
	case 1:
		goto loc_827865C4;
	case 2:
		goto loc_82786F60;
	case 3:
		goto loc_827865C4;
	case 4:
		goto loc_827865C4;
	case 5:
		goto loc_827865C4;
	case 6:
		goto loc_82787030;
	case 7:
		goto loc_827870A8;
	case 8:
		goto loc_827865C4;
	case 9:
		goto loc_827870C0;
	case 10:
		goto loc_827870D0;
	case 11:
		goto loc_82787178;
	case 12:
		goto loc_827870C0;
	case 13:
		goto loc_827871D0;
	case 14:
		goto loc_827871E0;
	case 15:
		goto loc_827865C4;
	case 16:
		goto loc_827865C4;
	case 17:
		goto loc_827865C4;
	case 18:
		goto loc_827865C4;
	case 19:
		goto loc_8278724C;
	case 20:
		goto loc_827865C4;
	case 21:
		goto loc_82787354;
	case 22:
		goto loc_827865C4;
	case 23:
		goto loc_827865C4;
	case 24:
		goto loc_827878C0;
	case 25:
		goto loc_82787950;
	case 26:
		goto loc_82787B80;
	case 27:
		goto loc_827865C4;
	case 28:
		goto loc_82787B90;
	case 29:
		goto loc_82787C2C;
	case 30:
		goto loc_82787D24;
	default:
		__builtin_unreachable();
	}
	// lwz r19,28416(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 28416);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,28512(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 28512);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,28720(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 28720);
	// lwz r19,28840(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 28840);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,28864(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 28864);
	// lwz r19,28880(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 28880);
	// lwz r19,29048(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 29048);
	// lwz r19,28864(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 28864);
	// lwz r19,29136(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 29136);
	// lwz r19,29152(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 29152);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,29260(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 29260);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,29524(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 29524);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,30912(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 30912);
	// lwz r19,31056(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 31056);
	// lwz r19,31616(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 31616);
	// lwz r19,26052(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 26052);
	// lwz r19,31632(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 31632);
	// lwz r19,31788(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 31788);
	// lwz r19,32036(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 32036);
loc_82786F00:
	// lbz r10,198(r17)
	ctx.r10.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82786f3c
	if (!cr6.eq) goto loc_82786F3C;
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82786f3c
	if (cr6.eq) goto loc_82786F3C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lwz r6,288(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// or r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 | ctx.r8.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82786F3C:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x827794d8
	sub_827794D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_82786F60:
	// addi r31,r11,3
	r31.s64 = r11.s64 + 3;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82786F68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82786f68
	if (!cr6.eq) goto loc_82786F68;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82787000
	if (!cr6.eq) goto loc_82787000;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,268(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r31,10
	ctx.r5.s64 = r31.s64 + 10;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_82787000:
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x827abd60
	sub_827ABD60(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82787030:
	// lbz r10,214(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82787064
	if (cr6.eq) goto loc_82787064;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r31,8(r17)
	r31.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277aba0
	sub_8277ABA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82787064:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x8278708c
	if (cr6.lt) goto loc_8278708C;
	// cmpwi cr6,r5,4
	cr6.compare<int32_t>(ctx.r5.s32, 4, xer);
	// bge cr6,0x8278708c
	if (!cr6.lt) goto loc_8278708C;
	// rlwinm r11,r5,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_8278708C:
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,336(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827870A8:
	// addi r4,r17,120
	ctx.r4.s64 = r17.s64 + 120;
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x8277c2b0
	sub_8277C2B0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827870C0:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8277d6b0
	sub_8277D6B0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827870D0:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// addi r31,r11,3
	r31.s64 = r11.s64 + 3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827870f0
	if (!cr6.eq) goto loc_827870F0;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x827792a0
	sub_827792A0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827870F0:
	// addi r11,r17,120
	r11.s64 = r17.s64 + 120;
	// lwz r11,120(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 120);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82756238
	sub_82756238(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277ac10
	sub_8277AC10(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82787160
	if (!cr6.eq) goto loc_82787160;
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82787144
	if (cr6.eq) goto loc_82787144;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_82787144:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x827792e8
	sub_827792E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82787160:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x827792a0
	sub_827792A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82787178:
	// lbz r10,198(r17)
	ctx.r10.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827871ac
	if (!cr6.eq) goto loc_827871AC;
	// lwz r10,116(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// addi r31,r11,3
	r31.s64 = r11.s64 + 3;
	// addi r3,r10,104
	ctx.r3.s64 = ctx.r10.s64 + 104;
	// bl 0x8278f180
	sub_8278F180(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827871ac
	if (cr6.eq) goto loc_827871AC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x827b8fd8
	sub_827B8FD8(ctx, base);
loc_827871AC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x827794d8
	sub_827794D8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
loc_827871C4:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// b 0x827865c4
	goto loc_827865C4;
loc_827871D0:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x827801a8
	sub_827801A8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_827871E0:
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277c510
	sub_8277C510(ctx, base);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// lwz r9,28(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 28);
	// addi r3,r17,164
	ctx.r3.s64 = r17.s64 + 164;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,8(r17)
	ctx.r7.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r6,12(r17)
	ctx.r6.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r11,3
	ctx.r8.s64 = r11.s64 + 3;
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// subf r11,r6,r7
	r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r8,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// srawi r9,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r9.s64 = r11.s32 >> 4;
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// stw r6,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r6.u32);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r8,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r8.u32);
	// bl 0x8278a070
	sub_8278A070(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_8278724C:
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82787264
	if (cr6.eq) goto loc_82787264;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bge cr6,0x82787320
	if (!cr6.lt) goto loc_82787320;
loc_82787264:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r30,r11,r6
	r30.u64 = r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r7,7
	cr6.compare<uint32_t>(ctx.r7.u32, 7, xer);
	// bne cr6,0x827872b8
	if (!cr6.eq) goto loc_827872B8;
	// bl 0x827662f0
	sub_827662F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827872ac
	if (cr6.eq) goto loc_827872AC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_827872AC:
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r30.u32);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// b 0x827872e8
	goto loc_827872E8;
loc_827872B8:
	// bl 0x827676f0
	sub_827676F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r3,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827872dc
	if (cr6.eq) goto loc_827872DC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_827872DC:
	// oris r30,r30,32768
	r30.u64 = r30.u64 | 2147483648;
	// addi r4,r1,376
	ctx.r4.s64 = ctx.r1.s64 + 376;
	// stw r30,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r30.u32);
loc_827872E8:
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8278bff8
	sub_8278BFF8(ctx, base);
	// rlwinm r11,r30,1,31,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82787310
	if (cr6.eq) goto loc_82787310;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82787320
	if (cr6.eq) goto loc_82787320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
	// b 0x82787320
	goto loc_82787320;
loc_82787310:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82787320
	if (cr6.eq) goto loc_82787320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee08
	sub_8274EE08(ctx, base);
loc_82787320:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82787354:
	// add r11,r28,r8
	r11.u64 = r28.u64 + ctx.r8.u64;
loc_82787358:
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x82787484
	if (!cr6.eq) goto loc_82787484;
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// add r10,r28,r8
	ctx.r10.u64 = r28.u64 + ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// rlwinm r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lbz r30,3(r10)
	r30.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// beq cr6,0x827873d0
	if (cr6.eq) goto loc_827873D0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x8277aba0
	sub_8277ABA0(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x827873b8
	if (cr6.lt) goto loc_827873B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_827873B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827878a4
	if (cr6.eq) goto loc_827878A4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// b 0x827878a4
	goto loc_827878A4;
loc_827873D0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82787424
	if (cr6.lt) goto loc_82787424;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bge cr6,0x82787424
	if (!cr6.lt) goto loc_82787424;
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82787404
	if (cr6.lt) goto loc_82787404;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82787404:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827878a4
	if (cr6.eq) goto loc_827878A4;
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r17
	r11.u64 = r11.u64 + r17.u64;
	// addi r4,r11,40
	ctx.r4.s64 = r11.s64 + 40;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
	// b 0x827878a4
	goto loc_827878A4;
loc_82787424:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stb r16,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r16.u8);
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8278744c
	if (cr6.lt) goto loc_8278744C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8278744C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82787460
	if (cr6.eq) goto loc_82787460;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
loc_82787460:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82787898
	if (cr6.eq) goto loc_82787898;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
	// b 0x82787898
	goto loc_82787898;
loc_82787484:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x827874f8
	if (!cr6.eq) goto loc_827874F8;
	// add r11,r28,r8
	r11.u64 = r28.u64 + ctx.r8.u64;
	// lwz r10,16(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 16);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82787840
	if (!cr6.lt) goto loc_82787840;
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// rlwinm r29,r5,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r30,12(r14)
	r30.u64 = PPC_LOAD_U32(r14.u32 + 12);
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x827874d0
	if (cr6.lt) goto loc_827874D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_827874D0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827878a4
	if (cr6.eq) goto loc_827878A4;
	// stb r18,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r18.u8);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// b 0x827878a4
	goto loc_827878A4;
loc_827874F8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82787588
	if (!cr6.eq) goto loc_82787588;
	// addi r11,r17,120
	r11.s64 = r17.s64 + 120;
	// lwz r11,120(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 120);
	// add r10,r28,r8
	ctx.r10.u64 = r28.u64 + ctx.r8.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// bl 0x82756238
	sub_82756238(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r9,16(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// add r11,r10,r28
	r11.u64 = ctx.r10.u64 + r28.u64;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
	// blt cr6,0x82787550
	if (cr6.lt) goto loc_82787550;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82787550:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82787578
	if (cr6.eq) goto loc_82787578;
	// stb r18,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r18.u8);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_82787578:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827878a4
	goto loc_827878A4;
loc_82787588:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x827875fc
	if (!cr6.eq) goto loc_827875FC;
	// add r10,r28,r8
	ctx.r10.u64 = r28.u64 + ctx.r8.u64;
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r9,16(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lwz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3);
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,24,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// rlwinm r4,r6,8,0,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r3.u32);
	// blt cr6,0x827875e0
	if (cr6.lt) goto loc_827875E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_827875E0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827878a4
	if (cr6.eq) goto loc_827878A4;
	// lfs f0,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	f0.f64 = double(temp.f32);
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
	// stfd f0,8(r11)
	PPC_STORE_U64(r11.u32 + 8, f0.u64);
	// b 0x827878a4
	goto loc_827878A4;
loc_827875FC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82787618
	if (!cr6.eq) goto loc_82787618;
	// stb r16,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r16.u8);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r21,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r21.u8);
	// b 0x82787860
	goto loc_82787860;
loc_82787618:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8278785c
	if (cr6.eq) goto loc_8278785C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82787678
	if (!cr6.eq) goto loc_82787678;
	// add r10,r28,r8
	ctx.r10.u64 = r28.u64 + ctx.r8.u64;
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r9,16(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lbz r8,3(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r30,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r30.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// blt cr6,0x82787660
	if (cr6.lt) goto loc_82787660;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82787660:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827878a4
	if (cr6.eq) goto loc_827878A4;
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// stb r22,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r22.u8);
	// b 0x827878a4
	goto loc_827878A4;
loc_82787678:
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x82787748
	if (!cr6.eq) goto loc_82787748;
	// add r11,r28,r8
	r11.u64 = r28.u64 + ctx.r8.u64;
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// li r12,255
	r12.s64 = 255;
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// rldicr r12,r12,48,15
	r12.u64 = __builtin_rotateleft64(r12.u64, 48) & 0xFFFF000000000000;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// lwz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 3);
	// lwz r8,7(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 7);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r9,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r9.u32);
	// stw r8,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r8.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// ld r11,296(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// and r7,r11,r12
	ctx.r7.u64 = r11.u64 & r12.u64;
	// li r12,255
	r12.s64 = 255;
	// rldicl r6,r11,48,16
	ctx.r6.u64 = __builtin_rotateleft64(r11.u64, 48) & 0xFFFFFFFFFFFF;
	// rlwinm r5,r11,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF00;
	// rldicr r12,r12,40,23
	r12.u64 = __builtin_rotateleft64(r12.u64, 40) & 0xFFFFFF0000000000;
	// or r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rldimi r5,r11,16,0
	ctx.r5.u64 = (__builtin_rotateleft64(r11.u64, 16) & 0xFFFFFFFFFFFF0000) | (ctx.r5.u64 & 0xFFFF);
	// and r3,r11,r12
	ctx.r3.u64 = r11.u64 & r12.u64;
	// li r12,255
	r12.s64 = 255;
	// rlwinm r10,r11,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF0000;
	// rldicl r9,r4,48,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u64, 48) & 0xFFFFFFFFFFFF;
	// rldicr r8,r5,16,47
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 16) & 0xFFFFFFFFFFFF0000;
	// rldicr r12,r12,32,31
	r12.u64 = __builtin_rotateleft64(r12.u64, 32) & 0xFFFFFFFF00000000;
	// or r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r7,r9,r3
	ctx.r7.u64 = ctx.r9.u64 | ctx.r3.u64;
	// and r5,r11,r12
	ctx.r5.u64 = r11.u64 & r12.u64;
	// rlwinm r4,r11,0,0,7
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF000000;
	// rldicl r3,r7,48,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u64, 48) & 0xFFFFFFFFFFFF;
	// rldicr r11,r6,16,47
	r11.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r9,r11,r4
	ctx.r9.u64 = r11.u64 | ctx.r4.u64;
	// rldicl r8,r10,56,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFFFFFFFFFFFFFF;
	// rldicr r7,r9,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// std r6,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r6.u64);
	// blt cr6,0x8278772c
	if (cr6.lt) goto loc_8278772C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_8278772C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827878a4
	if (cr6.eq) goto loc_827878A4;
	// lfd f0,296(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// stb r24,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r24.u8);
	// stfd f0,8(r11)
	PPC_STORE_U64(r11.u32 + 8, f0.u64);
	// b 0x827878a4
	goto loc_827878A4;
loc_82787748:
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// bne cr6,0x827877c0
	if (!cr6.eq) goto loc_827877C0;
	// add r11,r28,r8
	r11.u64 = r28.u64 + ctx.r8.u64;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r9,16(r17)
	ctx.r9.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lbz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 6);
	// lbz r7,5(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// rlwinm r11,r3,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r11,r5
	ctx.r10.u64 = r11.u64 | ctx.r5.u64;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r30,r9,r4
	r30.u64 = ctx.r9.u64 | ctx.r4.u64;
	// blt cr6,0x827877a4
	if (cr6.lt) goto loc_827877A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_827877A4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827878a4
	if (cr6.eq) goto loc_827878A4;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x827878a4
	goto loc_827878A4;
loc_827877C0:
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x827878a4
	if (!cr6.eq) goto loc_827878A4;
	// add r11,r28,r8
	r11.u64 = r28.u64 + ctx.r8.u64;
	// lwz r10,16(r14)
	ctx.r10.u64 = PPC_LOAD_U32(r14.u32 + 16);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r7,r9,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x82787840
	if (!cr6.lt) goto loc_82787840;
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// rlwinm r30,r5,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r29,12(r14)
	r29.u64 = PPC_LOAD_U32(r14.u32 + 12);
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82787818
	if (cr6.lt) goto loc_82787818;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82787818:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827878a4
	if (cr6.eq) goto loc_827878A4;
	// stb r18,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r18.u8);
	// lwzx r10,r30,r29
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// b 0x827878a4
	goto loc_827878A4;
loc_82787840:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8278785c
	if (cr6.eq) goto loc_8278785C;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8278785C:
	// stb r16,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r16.u8);
loc_82787860:
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// lwz r10,16(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 16);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// blt cr6,0x82787884
	if (cr6.lt) goto loc_82787884;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827596d8
	sub_827596D8(ctx, base);
loc_82787884:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82787898
	if (cr6.eq) goto loc_82787898;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// bl 0x82766a20
	sub_82766A20(ctx, base);
loc_82787898:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
loc_827878A4:
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r8,168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// subf r10,r11,r28
	ctx.r10.s64 = r28.s64 - r11.s64;
	// add r11,r28,r8
	r11.u64 = r28.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// blt cr6,0x82787358
	if (cr6.lt) goto loc_82787358;
	// b 0x827865c4
	goto loc_827865C4;
loc_827878C0:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r7,8(r14)
	ctx.r7.u64 = PPC_LOAD_U32(r14.u32 + 8);
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// or r11,r4,r9
	r11.u64 = ctx.r4.u64 | ctx.r9.u64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// blt cr6,0x827865c4
	if (cr6.lt) goto loc_827865C4;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// bl 0x827792a0
	sub_827792A0(ctx, base);
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8278791c
	if (cr6.eq) goto loc_8278791C;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r5,180(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// addi r4,r11,-19164
	ctx.r4.s64 = r11.s64 + -19164;
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
loc_8278791C:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x8278792c
	if (cr6.eq) goto loc_8278792C;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8278792C:
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// addi r8,r10,-21540
	ctx.r8.s64 = ctx.r10.s64 + -21540;
	// stw r11,160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 160, r11.u32);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// bl 0x8278bfb8
	sub_8278BFB8(ctx, base);
	// b 0x82787e50
	goto loc_82787E50;
loc_82787950:
	// li r7,0
	ctx.r7.s64 = 0;
	// lbz r30,3(r11)
	r30.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r4,8(r17)
	ctx.r4.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r10,12(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r4,r11,-16
	ctx.r4.s64 = r11.s64 + -16;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82787988
	if (cr6.gt) goto loc_82787988;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_82787988:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82787a20
	if (!cr6.eq) goto loc_82787A20;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,268(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82787b18
	if (cr6.eq) goto loc_82787B18;
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r29,0(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r29,10
	ctx.r5.s64 = r29.s64 + 10;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82787b18
	goto loc_82787B18;
loc_82787A20:
	// clrlwi r11,r30,30
	r11.u64 = r30.u32 & 0x3;
	// mr r29,r16
	r29.u64 = r16.u64;
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82787a44
	if (cr6.eq) goto loc_82787A44;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82787a48
	if (!cr6.eq) goto loc_82787A48;
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x82787a48
	goto loc_82787A48;
loc_82787A44:
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82787A48:
	// lwz r11,324(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r11.u32);
	// bl 0x8276a820
	sub_8276A820(ctx, base);
	// subfic r10,r3,6
	xer.ca = ctx.r3.u32 <= 6;
	ctx.r10.s64 = 6 - ctx.r3.s64;
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// bl 0x827a1bb8
	sub_827A1BB8(ctx, base);
	// rlwinm r6,r30,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82787ab8
	if (cr6.eq) goto loc_82787AB8;
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r28,0(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x827a8518
	sub_827A8518(ctx, base);
	// b 0x82787b18
	goto loc_82787B18;
loc_82787AB8:
	// rlwinm r11,r30,0,25,25
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82787adc
	if (!cr6.eq) goto loc_82787ADC;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82787b18
	if (cr6.eq) goto loc_82787B18;
	// lwz r11,236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82787b18
	if (!cr6.eq) goto loc_82787B18;
loc_82787ADC:
	// lwz r3,116(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r28,0(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x827abd60
	sub_827ABD60(ctx, base);
loc_82787B18:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r3,-32
	ctx.r10.s64 = ctx.r3.s64 + -32;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82787b3c
	if (!cr6.lt) goto loc_82787B3C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759860
	sub_82759860(ctx, base);
	// b 0x82787b64
	goto loc_82787B64;
loc_82787B3C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82787B64:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x827764f8
	sub_827764F8(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82787B80:
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8277fda0
	sub_8277FDA0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82787B90:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// extsh r30,r7
	r30.s64 = ctx.r7.s16;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,8(r17)
	ctx.r3.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwz r6,12(r17)
	ctx.r6.u64 = PPC_LOAD_U32(r17.u32 + 12);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,8(r17)
	PPC_STORE_U32(r17.u32 + 8, r11.u32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82787be4
	if (!cr6.lt) goto loc_82787BE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
loc_82787BE4:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// extsh r11,r30
	r11.s64 = r30.s16;
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// cmpw cr6,r5,r6
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, xer);
	// ble cr6,0x827865c4
	if (!cr6.gt) goto loc_827865C4;
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827865c4
	if (cr6.eq) goto loc_827865C4;
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82787C2C:
	// lbz r11,198(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// lwz r10,116(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// rlwinm r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r10.u32);
	// bne cr6,0x827865c4
	if (!cr6.eq) goto loc_827865C4;
	// stw r16,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r16.u32);
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// addi r6,r1,236
	ctx.r6.s64 = ctx.r1.s64 + 236;
	// lwz r5,8(r17)
	ctx.r5.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// bl 0x8277ae90
	sub_8277AE90(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82787c9c
	if (cr6.eq) goto loc_82787C9C;
	// lwz r11,236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// addi r3,r11,104
	ctx.r3.s64 = r11.s64 + 104;
	// bl 0x8278f180
	sub_8278F180(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82787cf4
	if (cr6.eq) goto loc_82787CF4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r10,324(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 324);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82787cf4
	goto loc_82787CF4;
loc_82787C9C:
	// lbz r11,214(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 214);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82787cf4
	if (cr6.eq) goto loc_82787CF4;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// addi r3,r1,252
	ctx.r3.s64 = ctx.r1.s64 + 252;
	// bl 0x82767b40
	sub_82767B40(ctx, base);
	// lwz r11,252(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lwz r4,340(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8277b3d0
	sub_8277B3D0(ctx, base);
	// lwz r11,252(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82787cf4
	if (!cr0.eq) goto loc_82787CF4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82787CF4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827865c4
	if (!cr6.lt) goto loc_827865C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827865c4
	goto loc_827865C4;
loc_82787D24:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// mr r29,r16
	r29.u64 = r16.u64;
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// clrlwi r28,r7,31
	r28.u64 = ctx.r7.u32 & 0x1;
	// beq cr6,0x82787d50
	if (cr6.eq) goto loc_82787D50;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r29,r8,r9
	r29.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_82787D50:
	// stw r16,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r16.u32);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// lwz r11,116(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 116);
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// lwz r5,8(r17)
	ctx.r5.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r31,r17,8
	r31.s64 = r17.s64 + 8;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// bl 0x8277ae90
	sub_8277AE90(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82787dbc
	if (cr6.eq) goto loc_82787DBC;
	// lwz r30,216(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r11,232(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,292(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 292);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82787DBC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82758cf0
	sub_82758CF0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x827871ac
	if (!cr6.lt) goto loc_827871AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82759778
	sub_82759778(ctx, base);
	// b 0x827871ac
	goto loc_827871AC;
loc_82787DEC:
	// lbz r11,198(r17)
	r11.u64 = PPC_LOAD_U8(r17.u32 + 198);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// ori r10,r11,64
	ctx.r10.u64 = r11.u64 | 64;
	// stb r10,198(r17)
	PPC_STORE_U8(r17.u32 + 198, ctx.r10.u8);
	// stw r3,116(r17)
	PPC_STORE_U32(r17.u32 + 116, ctx.r3.u32);
	// bl 0x8276a820
	sub_8276A820(ctx, base);
	// stb r3,124(r17)
	PPC_STORE_U8(r17.u32 + 124, ctx.r3.u8);
loc_82787E08:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x82787e18
	if (cr6.eq) goto loc_82787E18;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82787E18:
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r9,160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r8,r10,-21540
	ctx.r8.s64 = ctx.r10.s64 + -21540;
	// stw r11,160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 160, r11.u32);
	// stw r8,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82787e50
	if (cr6.eq) goto loc_82787E50;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r31,r11
	r31.u64 = r11.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_82787E50:
	// lwz r3,604(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
}

__attribute__((alias("__imp__sub_82787E64"))) PPC_WEAK_FUNC(sub_82787E64);
PPC_FUNC_IMPL(__imp__sub_82787E64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82787E68"))) PPC_WEAK_FUNC(sub_82787E68);
PPC_FUNC_IMPL(__imp__sub_82787E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
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
	// bl 0x828e93e0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// addi r23,r3,176
	r23.s64 = ctx.r3.s64 + 176;
	// li r15,0
	r15.s64 = 0;
	// li r17,10
	r17.s64 = 10;
	// addi r16,r11,-21200
	r16.s64 = r11.s64 + -21200;
loc_82787EA4:
	// lbz r11,0(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// mr r27,r15
	r27.u64 = r15.u64;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x8278831c
	if (cr6.eq) goto loc_8278831C;
	// lwz r14,0(r18)
	r14.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// ble cr6,0x82788310
	if (!cr6.gt) goto loc_82788310;
loc_82787EC0:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82788310
	if (!cr6.eq) goto loc_82788310;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// addi r3,r30,164
	ctx.r3.s64 = r30.s64 + 164;
	// lwz r10,164(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r31,-12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// lwz r25,-8(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// lwz r29,-4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// bl 0x82789fd0
	sub_82789FD0(ctx, base);
	// lwz r11,0(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,0(r18)
	PPC_STORE_U32(r18.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// rlwinm r10,r7,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r11,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	r11.s64 = ctx.r6.s32 >> 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// ble cr6,0x82787f48
	if (!cr6.gt) goto loc_82787F48;
	// subf r4,r29,r11
	ctx.r4.s64 = r11.s64 - r29.s64;
	// bl 0x82759860
	sub_82759860(ctx, base);
loc_82787F48:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82788290
	if (cr6.eq) goto loc_82788290;
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// mr r26,r15
	r26.u64 = r15.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82787fb4
	if (cr6.eq) goto loc_82787FB4;
	// lbz r5,7(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// blt cr6,0x82787f94
	if (cr6.lt) goto loc_82787F94;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82789378
	sub_82789378(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// b 0x827880d4
	goto loc_827880D4;
loc_82787F94:
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// b 0x827880d4
	goto loc_827880D4;
loc_82787FB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,204(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8277a6f8
	sub_8277A6F8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82787fe0
	if (cr6.eq) goto loc_82787FE0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82787FE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8277f8d8
	sub_8277F8D8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82788004
	if (cr6.eq) goto loc_82788004;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_82788004:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8278801c
	if (cr6.eq) goto loc_8278801C;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r11,0,4,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r10,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r10.u32);
loc_8278801C:
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8278802c
	if (cr6.eq) goto loc_8278802C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8278802C:
	// stw r27,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r27.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82788a88
	sub_82788A88(ctx, base);
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82788098
	if (cr6.eq) goto loc_82788098;
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82788098
	if (cr6.eq) goto loc_82788098;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8277ecb0
	sub_8277ECB0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82788090
	if (!cr6.eq) goto loc_82788090;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827805f8
	sub_827805F8(ctx, base);
	// b 0x82788098
	goto loc_82788098;
loc_82788090:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
loc_82788098:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x827880b4
	if (!cr0.eq) goto loc_827880B4;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827880B4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x827880c4
	if (cr6.eq) goto loc_827880C4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827880C4:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x827880d4
	if (cr6.eq) goto loc_827880D4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827880D4:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// stb r17,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r17.u8);
	// lbz r11,198(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 198);
	// clrlwi r10,r11,25
	ctx.r10.u64 = r11.u32 & 0x7F;
	// stb r10,198(r30)
	PPC_STORE_U8(r30.u32 + 198, ctx.r10.u8);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbz r11,2(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r11,r11,r5
	r11.u64 = r11.u64 | ctx.r5.u64;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
	// or r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 | ctx.r10.u64;
	// bl 0x82782ca0
	sub_82782CA0(ctx, base);
	// lbz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// li r27,1
	r27.s64 = 1;
	// lbz r3,5(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rotlwi r11,r5,8
	r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// rotlwi r9,r4,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// or r11,r11,r3
	r11.u64 = r11.u64 | ctx.r3.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// rotlwi r6,r8,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// or r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 | ctx.r7.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r24,r11,r25
	r24.u64 = r11.u64 + r25.u64;
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x827881fc
	if (cr6.eq) goto loc_827881FC;
	// stb r15,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r15.u8);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x827881a0
	if (cr6.eq) goto loc_827881A0;
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x827881a0
	if (cr6.eq) goto loc_827881A0;
	// lbz r5,7(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// b 0x827881a4
	goto loc_827881A4;
loc_827881A0:
	// li r5,-1
	ctx.r5.s64 = -1;
loc_827881A4:
	// lwz r6,108(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// blt cr6,0x827881d4
	if (cr6.lt) goto loc_827881D4;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82789378
	sub_82789378(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// b 0x82788290
	goto loc_82788290;
loc_827881D4:
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// b 0x82788290
	goto loc_82788290;
loc_827881FC:
	// lwz r28,204(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// addi r29,r30,200
	r29.s64 = r30.s64 + 200;
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(r26.u32, r28.u32, xer);
	// bge cr6,0x82788238
	if (!cr6.lt) goto loc_82788238;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r26,r28
	ctx.r4.s64 = r28.s64 - r26.s64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82793af8
	sub_82793AF8(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// bge cr6,0x82788258
	if (!cr6.lt) goto loc_82788258;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// b 0x8278824c
	goto loc_8278824C;
loc_82788238:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82788258
	if (cr6.lt) goto loc_82788258;
	// rlwinm r11,r26,30,2,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r26
	ctx.r5.u64 = r11.u64 + r26.u64;
loc_8278824C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82793b58
	sub_82793B58(ctx, base);
loc_82788258:
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(r26.u32, r28.u32, xer);
	// ble cr6,0x82788290
	if (!cr6.gt) goto loc_82788290;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r28,r26
	ctx.r10.s64 = r26.s64 - r28.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// beq 0x82788290
	if (cr0.eq) goto loc_82788290;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8278827C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82788288
	if (cr6.eq) goto loc_82788288;
	// stw r15,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r15.u32);
loc_82788288:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8278827c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8278827C;
loc_82788290:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82788308
	if (cr6.eq) goto loc_82788308;
	// lbz r11,198(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 198);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// ori r6,r11,128
	ctx.r6.u64 = r11.u64 | 128;
	// lbz r5,3(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// rotlwi r3,r10,8
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// stb r6,198(r30)
	PPC_STORE_U8(r30.u32 + 198, ctx.r6.u8);
	// rotlwi r6,r4,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// or r11,r3,r5
	r11.u64 = ctx.r3.u64 | ctx.r5.u64;
	// lbz r5,6(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rotlwi r6,r5,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r29,5(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r5,r11,r25
	ctx.r5.u64 = r11.u64 + r25.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// or r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 | r29.u64;
	// bl 0x82782ca0
	sub_82782CA0(ctx, base);
	// lbz r5,198(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 198);
	// clrlwi r4,r5,25
	ctx.r4.u64 = ctx.r5.u32 & 0x7F;
	// stb r4,198(r30)
	PPC_STORE_U8(r30.u32 + 198, ctx.r4.u8);
loc_82788308:
	// addic. r14,r14,-1
	xer.ca = r14.u32 > 0;
	r14.s64 = r14.s64 + -1;
	cr0.compare<int32_t>(r14.s32, 0, xer);
	// bgt 0x82787ec0
	if (cr0.gt) goto loc_82787EC0;
loc_82788310:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82788334
	if (cr6.eq) goto loc_82788334;
loc_8278831C:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82787ea4
	if (!cr6.eq) goto loc_82787EA4;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x828e9430
	return;
loc_82788334:
	// lwz r11,8(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_82788340"))) PPC_WEAK_FUNC(sub_82788340);
PPC_FUNC_IMPL(__imp__sub_82788340) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82788344"))) PPC_WEAK_FUNC(sub_82788344);
PPC_FUNC_IMPL(__imp__sub_82788344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788348"))) PPC_WEAK_FUNC(sub_82788348);
PPC_FUNC_IMPL(__imp__sub_82788348) {
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
	// lwz r11,672(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 672);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r4,644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 644, ctx.r4.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r9,20(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stb r10,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r10.u8);
	// stw r9,648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 648, ctx.r9.u32);
	// bne cr6,0x827883c0
	if (!cr6.eq) goto loc_827883C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827883a8
	if (cr6.eq) goto loc_827883A8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82788b48
	sub_82788B48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x827883ac
	goto loc_827883AC;
loc_827883A8:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_827883AC:
	// lwz r3,672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827883bc
	if (cr6.eq) goto loc_827883BC;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827883BC:
	// stw r30,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r30.u32);
loc_827883C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827883e4
	if (cr6.eq) goto loc_827883E4;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82790f08
	sub_82790F08(ctx, base);
	// b 0x827883e8
	goto loc_827883E8;
loc_827883E4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_827883E8:
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, r28.u8);
	// li r4,52
	ctx.r4.s64 = 52;
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r28.u32);
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82788418
	if (cr6.eq) goto loc_82788418;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8279f890
	sub_8279F890(ctx, base);
	// b 0x8278841c
	goto loc_8278841C;
loc_82788418:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_8278841C:
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r28.u8);
	// li r4,80
	ctx.r4.s64 = 80;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82788450
	if (cr6.eq) goto loc_82788450;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x827922f8
	sub_827922F8(ctx, base);
	// b 0x82788454
	goto loc_82788454;
loc_82788450:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82788454:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8278848c
	if (cr6.eq) goto loc_8278848C;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8279f910
	sub_8279F910(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82788490
	goto loc_82788490;
loc_8278848C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_82788490:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r29,r31,632
	r29.s64 = r31.s64 + 632;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x827783e8
	sub_827783E8(ctx, base);
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827783e8
	sub_827783E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82788550
	if (cr6.eq) goto loc_82788550;
	// lis r11,-32133
	r11.s64 = -2105868288;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r5,r11,28104
	ctx.r5.s64 = r11.s64 + 28104;
	// bl 0x8279f2b8
	sub_8279F2B8(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// addi r8,r10,-21612
	ctx.r8.s64 = ctx.r10.s64 + -21612;
	// addi r7,r9,-21700
	ctx.r7.s64 = ctx.r9.s64 + -21700;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r7,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r7.u32);
	// b 0x82788554
	goto loc_82788554;
loc_82788550:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82788554:
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r28,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, r28.u8);
	// li r4,88
	ctx.r4.s64 = 88;
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// lwz r3,648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8278858c
	if (cr6.eq) goto loc_8278858C;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x827c0840
	sub_827C0840(ctx, base);
	// b 0x82788590
	goto loc_82788590;
loc_8278858C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82788590:
	// li r11,6
	r11.s64 = 6;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827783e8
	sub_827783E8(ctx, base);
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bne cr6,0x827885c0
	if (!cr6.eq) goto loc_827885C0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_827885C0:
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,2984
	ctx.r5.s64 = r11.s64 + 2984;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x8277f218
	sub_8277F218(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r28.u8);
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,81
	ctx.r7.s64 = ctx.r1.s64 + 81;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r8,40(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r7,r1,82
	ctx.r7.s64 = ctx.r1.s64 + 82;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278db78
	sub_8278DB78(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278dc90
	sub_8278DC90(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278dda8
	sub_8278DDA8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278dec0
	sub_8278DEC0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278dfd8
	sub_8278DFD8(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278e0f0
	sub_8278E0F0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278e208
	sub_8278E208(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278e320
	sub_8278E320(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278e438
	sub_8278E438(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278e550
	sub_8278E550(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,672(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8278e668
	sub_8278E668(ctx, base);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r7,-18064
	ctx.r6.s64 = ctx.r7.s64 + -18064;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8277bbc0
	sub_8277BBC0(ctx, base);
	// stw r3,652(r31)
	PPC_STORE_U32(r31.u32 + 652, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278e780
	sub_8278E780(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,652(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// bl 0x8278e898
	sub_8278E898(ctx, base);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r6,-18080
	ctx.r6.s64 = ctx.r6.s64 + -18080;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8277bbc0
	sub_8277BBC0(ctx, base);
	// stw r3,660(r31)
	PPC_STORE_U32(r31.u32 + 660, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8278e9b0
	sub_8278E9B0(ctx, base);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r4,-18096
	ctx.r6.s64 = ctx.r4.s64 + -18096;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// bl 0x8277bbc0
	sub_8277BBC0(ctx, base);
	// stw r3,668(r31)
	PPC_STORE_U32(r31.u32 + 668, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8276ff70
	sub_8276FF70(ctx, base);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// addi r10,r3,-20944
	ctx.r10.s64 = ctx.r3.s64 + -20944;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// beq cr6,0x82788804
	if (cr6.eq) goto loc_82788804;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,0,4,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8FFFFFFF;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_82788804:
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82788844
	if (cr6.eq) goto loc_82788844;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82788844:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r11,-26548
	ctx.r10.s64 = r11.s64 + -26548;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// beq cr6,0x82788860
	if (cr6.eq) goto loc_82788860;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82788860:
	// lbz r11,136(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82788880
	if (!cr6.eq) goto loc_82788880;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82788880
	if (cr6.eq) goto loc_82788880;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82788880:
	// lbz r11,136(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827888a4
	if (!cr6.eq) goto loc_827888A4;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827888a4
	if (cr6.eq) goto loc_827888A4;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827888A4:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827888b8
	if (cr6.eq) goto loc_827888B8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827888B8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827888c8
	if (cr6.eq) goto loc_827888C8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827888C8:
	// lbz r11,120(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x827888e8
	if (!cr6.eq) goto loc_827888E8;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827888e8
	if (cr6.eq) goto loc_827888E8;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_827888E8:
	// lbz r11,120(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 120);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8278890c
	if (!cr6.eq) goto loc_8278890C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8278890c
	if (cr6.eq) goto loc_8278890C;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_8278890C:
	// lbz r11,152(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82788930
	if (!cr6.eq) goto loc_82788930;
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82788930
	if (cr6.eq) goto loc_82788930;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82788930:
	// lbz r11,152(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82788954
	if (!cr6.eq) goto loc_82788954;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82788954
	if (cr6.eq) goto loc_82788954;
	// bl 0x827594a0
	sub_827594A0(ctx, base);
loc_82788954:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82788958"))) PPC_WEAK_FUNC(sub_82788958);
PPC_FUNC_IMPL(__imp__sub_82788958) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8278895C"))) PPC_WEAK_FUNC(sub_8278895C);
PPC_FUNC_IMPL(__imp__sub_8278895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788960"))) PPC_WEAK_FUNC(sub_82788960);
PPC_FUNC_IMPL(__imp__sub_82788960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
}

__attribute__((alias("__imp__sub_82788978"))) PPC_WEAK_FUNC(sub_82788978);
PPC_FUNC_IMPL(__imp__sub_82788978) {
	PPC_FUNC_PROLOGUE();
	// b 0x82782ca0
	sub_82782CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8278897C"))) PPC_WEAK_FUNC(sub_8278897C);
PPC_FUNC_IMPL(__imp__sub_8278897C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788980"))) PPC_WEAK_FUNC(sub_82788980);
PPC_FUNC_IMPL(__imp__sub_82788980) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-21260
	ctx.r9.s64 = r11.s64 + -21260;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bl 0x827d89b8
	sub_827D89B8(ctx, base);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r7,r8,-19228
	ctx.r7.s64 = ctx.r8.s64 + -19228;
	// li r11,0
	r11.s64 = 0;
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,632(r31)
	PPC_STORE_U32(r31.u32 + 632, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,636(r31)
	PPC_STORE_U32(r31.u32 + 636, r11.u32);
	// stw r11,640(r31)
	PPC_STORE_U32(r31.u32 + 640, r11.u32);
	// stw r11,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r11.u32);
	// stb r11,676(r31)
	PPC_STORE_U8(r31.u32 + 676, r11.u8);
	// stw r11,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r11.u32);
	// bl 0x82788348
	sub_82788348(ctx, base);
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

__attribute__((alias("__imp__sub_82788A08"))) PPC_WEAK_FUNC(sub_82788A08);
PPC_FUNC_IMPL(__imp__sub_82788A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82788A0C"))) PPC_WEAK_FUNC(sub_82788A0C);
PPC_FUNC_IMPL(__imp__sub_82788A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788A10"))) PPC_WEAK_FUNC(sub_82788A10);
PPC_FUNC_IMPL(__imp__sub_82788A10) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	r11.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82766758
	sub_82766758(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,316
	ctx.r5.s64 = r11.s64 + 316;
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
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

__attribute__((alias("__imp__sub_82788A84"))) PPC_WEAK_FUNC(sub_82788A84);
PPC_FUNC_IMPL(__imp__sub_82788A84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82788A88"))) PPC_WEAK_FUNC(sub_82788A88);
PPC_FUNC_IMPL(__imp__sub_82788A88) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,120(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 120);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82788b2c
	if (cr6.eq) goto loc_82788B2C;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82788b2c
	if (!cr6.eq) goto loc_82788B2C;
	// lwz r10,120(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 120);
	// addi r4,r11,7
	ctx.r4.s64 = r11.s64 + 7;
	// addi r3,r10,596
	ctx.r3.s64 = ctx.r10.s64 + 596;
	// bl 0x82764cd8
	sub_82764CD8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x82788b10
	if (!cr0.eq) goto loc_82788B10;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82788B10:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bne 0x82788b2c
	if (!cr0.eq) goto loc_82788B2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82788B2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82788B44"))) PPC_WEAK_FUNC(sub_82788B44);
PPC_FUNC_IMPL(__imp__sub_82788B44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82788B48"))) PPC_WEAK_FUNC(sub_82788B48);
PPC_FUNC_IMPL(__imp__sub_82788B48) {
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
	// lwz r11,644(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 644);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,24
	ctx.r4.s64 = r11.s64 + 24;
	// bne cr6,0x82788b78
	if (!cr6.eq) goto loc_82788B78;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82788B78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82790948
	sub_82790948(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r9,r11,-21356
	ctx.r9.s64 = r11.s64 + -21356;
	// addi r8,r10,-21444
	ctx.r8.s64 = ctx.r10.s64 + -21444;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_82788BB4"))) PPC_WEAK_FUNC(sub_82788BB4);
PPC_FUNC_IMPL(__imp__sub_82788BB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82788BB8"))) PPC_WEAK_FUNC(sub_82788BB8);
PPC_FUNC_IMPL(__imp__sub_82788BB8) {
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
	// addi r4,r4,120
	ctx.r4.s64 = ctx.r4.s64 + 120;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,284(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 284);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82788c34
	if (!cr6.eq) goto loc_82788C34;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lbz r11,676(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82788c20
	if (cr6.eq) goto loc_82788C20;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r30,r10,27,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r9.u8);
	// b 0x82788c3c
	goto loc_82788C3C;
loc_82788C20:
	// bl 0x82766830
	sub_82766830(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82788c3c
	goto loc_82788C3C;
loc_82788C34:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x82790510
	sub_82790510(ctx, base);
loc_82788C3C:
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

__attribute__((alias("__imp__sub_82788C50"))) PPC_WEAK_FUNC(sub_82788C50);
PPC_FUNC_IMPL(__imp__sub_82788C50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82788C54"))) PPC_WEAK_FUNC(sub_82788C54);
PPC_FUNC_IMPL(__imp__sub_82788C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788C58"))) PPC_WEAK_FUNC(sub_82788C58);
PPC_FUNC_IMPL(__imp__sub_82788C58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_82788C5C"))) PPC_WEAK_FUNC(sub_82788C5C);
PPC_FUNC_IMPL(__imp__sub_82788C5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82788ef0
	sub_82788EF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82788C60"))) PPC_WEAK_FUNC(sub_82788C60);
PPC_FUNC_IMPL(__imp__sub_82788C60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_82788C8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82788c8c
	if (!cr6.eq) goto loc_82788C8C;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r10,588
	ctx.r3.s64 = ctx.r10.s64 + 588;
	// bl 0x82764ad0
	sub_82764AD0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r10.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// bne 0x82788d10
	if (!cr0.eq) goto loc_82788D10;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82788D10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82788D18"))) PPC_WEAK_FUNC(sub_82788D18);
PPC_FUNC_IMPL(__imp__sub_82788D18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82788D1C"))) PPC_WEAK_FUNC(sub_82788D1C);
PPC_FUNC_IMPL(__imp__sub_82788D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788D20"))) PPC_WEAK_FUNC(sub_82788D20);
PPC_FUNC_IMPL(__imp__sub_82788D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,120(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r9,284(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 284);
	// addi r30,r4,120
	r30.s64 = ctx.r4.s64 + 120;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x82788e68
	if (!cr6.eq) goto loc_82788E68;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r9,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stb r8,676(r10)
	PPC_STORE_U8(ctx.r10.u32 + 676, ctx.r8.u8);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lbz r7,676(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 676);
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bne cr6,0x82788de8
	if (!cr6.eq) goto loc_82788DE8;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,-21308
	ctx.r5.s64 = ctx.r10.s64 + -21308;
	// bl 0x827561c0
	sub_827561C0(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// stb r9,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r9.u8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r8,-21320
	ctx.r5.s64 = ctx.r8.s64 + -21320;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82788c60
	sub_82788C60(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r10.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// b 0x82788e20
	goto loc_82788E20;
loc_82788DE8:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r5,r10,-21320
	ctx.r5.s64 = ctx.r10.s64 + -21320;
	// bl 0x827561c0
	sub_827561C0(ctx, base);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addic. r10,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r10.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_82788E20:
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bne 0x82788e30
	if (!cr0.eq) goto loc_82788E30;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82788E30:
	// li r11,10
	r11.s64 = 10;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r11.u8);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82791680
	sub_82791680(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e945c
	return;
loc_82788E68:
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lbz r8,676(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 676);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// bne cr6,0x82788ecc
	if (!cr6.eq) goto loc_82788ECC;
	// lwz r10,288(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 288);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82788ecc
	if (!cr6.eq) goto loc_82788ECC;
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 116);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82788ecc
	if (cr6.eq) goto loc_82788ECC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82766560
	sub_82766560(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,2784(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2784);
	// ori r10,r11,2048
	ctx.r10.u64 = r11.u64 | 2048;
	// bne cr6,0x82788ec8
	if (!cr6.eq) goto loc_82788EC8;
	// rlwinm r10,r11,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
loc_82788EC8:
	// stw r10,2784(r27)
	PPC_STORE_U32(r27.u32 + 2784, ctx.r10.u32);
loc_82788ECC:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82791b20
	sub_82791B20(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82788EE8"))) PPC_WEAK_FUNC(sub_82788EE8);
PPC_FUNC_IMPL(__imp__sub_82788EE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82788EEC"))) PPC_WEAK_FUNC(sub_82788EEC);
PPC_FUNC_IMPL(__imp__sub_82788EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82788EF0"))) PPC_WEAK_FUNC(sub_82788EF0);
PPC_FUNC_IMPL(__imp__sub_82788EF0) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,-21356
	ctx.r9.s64 = r11.s64 + -21356;
	// addi r8,r10,-21444
	ctx.r8.s64 = ctx.r10.s64 + -21444;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x827915b0
	sub_827915B0(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82788f40
	if (cr6.eq) goto loc_82788F40;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82788F40:
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

__attribute__((alias("__imp__sub_82788F54"))) PPC_WEAK_FUNC(sub_82788F54);
PPC_FUNC_IMPL(__imp__sub_82788F54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82788F58"))) PPC_WEAK_FUNC(sub_82788F58);
PPC_FUNC_IMPL(__imp__sub_82788F58) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82788f88
	if (cr6.lt) goto loc_82788F88;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82788F88:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r4,r10
	ctx.r4.s64 = ctx.r10.s8;
	// bl 0x828eb800
	sub_828EB800(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82788fc0
	if (!cr6.eq) goto loc_82788FC0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82788f88
	if (cr6.lt) goto loc_82788F88;
loc_82788FC0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r10,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r10.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x82789004
	if (cr6.eq) goto loc_82789004;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82789004
	if (cr6.gt) goto loc_82789004;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r5,r30,r11
	ctx.r5.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r9,r10,0,0,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFC00;
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x82764bc0
	sub_82764BC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82789014
	goto loc_82789014;
loc_82789004:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r10,r11,0,0,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFC00;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,24(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
loc_82789014:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r8,r11,2
	ctx.r8.s64 = r11.s64 + 2;
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	r11.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x82789038
	if (!cr0.eq) goto loc_82789038;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82789038:
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bne 0x82789054
	if (!cr0.eq) goto loc_82789054;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82789054:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82789068"))) PPC_WEAK_FUNC(sub_82789068);
PPC_FUNC_IMPL(__imp__sub_82789068) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8278906C"))) PPC_WEAK_FUNC(sub_8278906C);
PPC_FUNC_IMPL(__imp__sub_8278906C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789070"))) PPC_WEAK_FUNC(sub_82789070);
PPC_FUNC_IMPL(__imp__sub_82789070) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_827890A0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// ble cr6,0x827890a0
	if (!cr6.gt) goto loc_827890A0;
}

__attribute__((alias("__imp__sub_827890DC"))) PPC_WEAK_FUNC(sub_827890DC);
PPC_FUNC_IMPL(__imp__sub_827890DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827890E0"))) PPC_WEAK_FUNC(sub_827890E0);
PPC_FUNC_IMPL(__imp__sub_827890E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r6,r8,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r9,r7,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r10,r6,4
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r10,4,23,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x1F0;
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_82789128"))) PPC_WEAK_FUNC(sub_82789128);
PPC_FUNC_IMPL(__imp__sub_82789128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278912C"))) PPC_WEAK_FUNC(sub_8278912C);
PPC_FUNC_IMPL(__imp__sub_8278912C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789130"))) PPC_WEAK_FUNC(sub_82789130);
PPC_FUNC_IMPL(__imp__sub_82789130) {
	PPC_FUNC_PROLOGUE();
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
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// beq cr6,0x82789184
	if (cr6.eq) goto loc_82789184;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_82789160:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x82789178
	if (!cr0.eq) goto loc_82789178;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82789178:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// bne 0x82789160
	if (!cr0.eq) goto loc_82789160;
loc_82789184:
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

__attribute__((alias("__imp__sub_82789198"))) PPC_WEAK_FUNC(sub_82789198);
PPC_FUNC_IMPL(__imp__sub_82789198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278919C"))) PPC_WEAK_FUNC(sub_8278919C);
PPC_FUNC_IMPL(__imp__sub_8278919C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827891A0"))) PPC_WEAK_FUNC(sub_827891A0);
PPC_FUNC_IMPL(__imp__sub_827891A0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x827891e0
	if (!cr6.eq) goto loc_827891E0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82789218
	if (cr6.eq) goto loc_82789218;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82789218
	goto loc_82789218;
loc_827891E0:
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r30,r10,0,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x82789204
	if (cr6.eq) goto loc_82789204;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x82789214
	goto loc_82789214;
loc_82789204:
	// li r11,323
	r11.s64 = 323;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8274e290
	sub_8274E290(ctx, base);
loc_82789214:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82789218:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
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

__attribute__((alias("__imp__sub_82789230"))) PPC_WEAK_FUNC(sub_82789230);
PPC_FUNC_IMPL(__imp__sub_82789230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789234"))) PPC_WEAK_FUNC(sub_82789234);
PPC_FUNC_IMPL(__imp__sub_82789234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789238"))) PPC_WEAK_FUNC(sub_82789238);
PPC_FUNC_IMPL(__imp__sub_82789238) {
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
	// cmplwi cr6,r5,32
	cr6.compare<uint32_t>(ctx.r5.u32, 32, xer);
	// bge cr6,0x8278927c
	if (!cr6.lt) goto loc_8278927C;
	// li r5,32
	ctx.r5.s64 = 32;
loc_8278925C:
	// addi r11,r5,15
	r11.s64 = ctx.r5.s64 + 15;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r30,r11,0,0,27
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x827892a0
	if (cr6.eq) goto loc_827892A0;
	// bl 0x8274e160
	sub_8274E160(ctx, base);
	// b 0x827892b8
	goto loc_827892B8;
loc_8278927C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8278925c
	if (!cr6.eq) goto loc_8278925C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827892bc
	if (cr6.eq) goto loc_827892BC;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x827892bc
	goto loc_827892BC;
loc_827892A0:
	// li r11,2
	r11.s64 = 2;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,27508(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27508);
	// bl 0x8274d820
	sub_8274D820(ctx, base);
loc_827892B8:
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_827892BC:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
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

__attribute__((alias("__imp__sub_827892D4"))) PPC_WEAK_FUNC(sub_827892D4);
PPC_FUNC_IMPL(__imp__sub_827892D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827892D8"))) PPC_WEAK_FUNC(sub_827892D8);
PPC_FUNC_IMPL(__imp__sub_827892D8) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x827663e0
	sub_827663E0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82789334
	if (cr6.eq) goto loc_82789334;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,34
	ctx.r4.s64 = 34;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82789334:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82789340"))) PPC_WEAK_FUNC(sub_82789340);
PPC_FUNC_IMPL(__imp__sub_82789340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789344"))) PPC_WEAK_FUNC(sub_82789344);
PPC_FUNC_IMPL(__imp__sub_82789344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789348"))) PPC_WEAK_FUNC(sub_82789348);
PPC_FUNC_IMPL(__imp__sub_82789348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// addi r10,r1,32
	ctx.r10.s64 = ctx.r1.s64 + 32;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82789370"))) PPC_WEAK_FUNC(sub_82789370);
PPC_FUNC_IMPL(__imp__sub_82789370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789374"))) PPC_WEAK_FUNC(sub_82789374);
PPC_FUNC_IMPL(__imp__sub_82789374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789378"))) PPC_WEAK_FUNC(sub_82789378);
PPC_FUNC_IMPL(__imp__sub_82789378) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,148(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827893e4
	if (cr6.eq) goto loc_827893E4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827893E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_827893F0"))) PPC_WEAK_FUNC(sub_827893F0);
PPC_FUNC_IMPL(__imp__sub_827893F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827893F4"))) PPC_WEAK_FUNC(sub_827893F4);
PPC_FUNC_IMPL(__imp__sub_827893F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827893F8"))) PPC_WEAK_FUNC(sub_827893F8);
PPC_FUNC_IMPL(__imp__sub_827893F8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bl 0x827ca720
	sub_827CA720(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82789470
	if (cr6.eq) goto loc_82789470;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827ca6e8
	sub_827CA6E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82789470
	if (cr6.eq) goto loc_82789470;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,51
	ctx.r4.s64 = 51;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82789470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82789480"))) PPC_WEAK_FUNC(sub_82789480);
PPC_FUNC_IMPL(__imp__sub_82789480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789484"))) PPC_WEAK_FUNC(sub_82789484);
PPC_FUNC_IMPL(__imp__sub_82789484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789488"))) PPC_WEAK_FUNC(sub_82789488);
PPC_FUNC_IMPL(__imp__sub_82789488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r3,-20
	ctx.r10.s64 = ctx.r3.s64 + -20;
	// bne cr6,0x827894d0
	if (!cr6.eq) goto loc_827894D0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_827894D0:
	// addic. r11,r10,20
	xer.ca = ctx.r10.u32 > 4294967275;
	r11.s64 = ctx.r10.s64 + 20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// bne 0x827894e0
	if (!cr0.eq) goto loc_827894E0;
	// li r11,0
	r11.s64 = 0;
loc_827894E0:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82789518
	if (cr6.eq) goto loc_82789518;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82789518
	if (cr6.eq) goto loc_82789518;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82789518:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82789524"))) PPC_WEAK_FUNC(sub_82789524);
PPC_FUNC_IMPL(__imp__sub_82789524) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789528"))) PPC_WEAK_FUNC(sub_82789528);
PPC_FUNC_IMPL(__imp__sub_82789528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r3,-20
	ctx.r10.s64 = ctx.r3.s64 + -20;
	// bne cr6,0x82789570
	if (!cr6.eq) goto loc_82789570;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82789570:
	// addic. r11,r10,20
	xer.ca = ctx.r10.u32 > 4294967275;
	r11.s64 = ctx.r10.s64 + 20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-20
	r11.s64 = r11.s64 + -20;
	// bne 0x82789580
	if (!cr0.eq) goto loc_82789580;
	// li r11,0
	r11.s64 = 0;
loc_82789580:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r9,r11,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x827895b8
	if (cr6.eq) goto loc_827895B8;
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827895b8
	if (cr6.eq) goto loc_827895B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,51
	ctx.r4.s64 = 51;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_827895B8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_827895C4"))) PPC_WEAK_FUNC(sub_827895C4);
PPC_FUNC_IMPL(__imp__sub_827895C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827895C8"))) PPC_WEAK_FUNC(sub_827895C8);
PPC_FUNC_IMPL(__imp__sub_827895C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x827895e4
	if (!cr6.eq) goto loc_827895E4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
loc_827895E4:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_827895F0:
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r8,-2
	cr6.compare<int32_t>(ctx.r8.s32, -2, xer);
	// bne cr6,0x82789610
	if (!cr6.eq) goto loc_82789610;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// add r8,r11,r9
	ctx.r8.u64 = r11.u64 + ctx.r9.u64;
	// ble cr6,0x827895f0
	if (!cr6.gt) goto loc_827895F0;
loc_82789610:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82789618"))) PPC_WEAK_FUNC(sub_82789618);
PPC_FUNC_IMPL(__imp__sub_82789618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8278961C"))) PPC_WEAK_FUNC(sub_8278961C);
PPC_FUNC_IMPL(__imp__sub_8278961C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789620"))) PPC_WEAK_FUNC(sub_82789620);
PPC_FUNC_IMPL(__imp__sub_82789620) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x8278965c
	if (!cr0.eq) goto loc_8278965C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8278965C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8279f3f8
	sub_8279F3F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82789674"))) PPC_WEAK_FUNC(sub_82789674);
PPC_FUNC_IMPL(__imp__sub_82789674) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82789678"))) PPC_WEAK_FUNC(sub_82789678);
PPC_FUNC_IMPL(__imp__sub_82789678) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x827896b8
	if (!cr0.eq) goto loc_827896B8;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_827896B8:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_827896CC"))) PPC_WEAK_FUNC(sub_827896CC);
PPC_FUNC_IMPL(__imp__sub_827896CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_827896D0"))) PPC_WEAK_FUNC(sub_827896D0);
PPC_FUNC_IMPL(__imp__sub_827896D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x82789710
	if (!cr0.eq) goto loc_82789710;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82789710:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x8279f3f8
	sub_8279F3F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82789724"))) PPC_WEAK_FUNC(sub_82789724);
PPC_FUNC_IMPL(__imp__sub_82789724) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82789728"))) PPC_WEAK_FUNC(sub_82789728);
PPC_FUNC_IMPL(__imp__sub_82789728) {
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
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// addi r4,r9,8
	ctx.r4.s64 = ctx.r9.s64 + 8;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r3,r10,8
	ctx.r3.s64 = ctx.r10.s64 + 8;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stw r6,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r6.u32);
	// bl 0x82766a20
	sub_82766A20(ctx, base);
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

__attribute__((alias("__imp__sub_82789784"))) PPC_WEAK_FUNC(sub_82789784);
PPC_FUNC_IMPL(__imp__sub_82789784) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789788"))) PPC_WEAK_FUNC(sub_82789788);
PPC_FUNC_IMPL(__imp__sub_82789788) {
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
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82766a20
	sub_82766A20(ctx, base);
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

__attribute__((alias("__imp__sub_827897DC"))) PPC_WEAK_FUNC(sub_827897DC);
PPC_FUNC_IMPL(__imp__sub_827897DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827897E0"))) PPC_WEAK_FUNC(sub_827897E0);
PPC_FUNC_IMPL(__imp__sub_827897E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x8278981c
	if (!cr0.eq) goto loc_8278981C;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_8278981C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82766c88
	sub_82766C88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82789834"))) PPC_WEAK_FUNC(sub_82789834);
PPC_FUNC_IMPL(__imp__sub_82789834) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82789838"))) PPC_WEAK_FUNC(sub_82789838);
PPC_FUNC_IMPL(__imp__sub_82789838) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,9(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789840"))) PPC_WEAK_FUNC(sub_82789840);
PPC_FUNC_IMPL(__imp__sub_82789840) {
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
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-21540
	ctx.r9.s64 = r11.s64 + -21540;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82789874
	if (cr6.eq) goto loc_82789874;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82789874:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82789884"))) PPC_WEAK_FUNC(sub_82789884);
PPC_FUNC_IMPL(__imp__sub_82789884) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789888"))) PPC_WEAK_FUNC(sub_82789888);
PPC_FUNC_IMPL(__imp__sub_82789888) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x827898b4
	if (cr6.eq) goto loc_827898B4;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_827898B4:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-21740
	ctx.r9.s64 = r11.s64 + -21740;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x827898d8
	if (cr6.eq) goto loc_827898D8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_827898D8:
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

__attribute__((alias("__imp__sub_827898EC"))) PPC_WEAK_FUNC(sub_827898EC);
PPC_FUNC_IMPL(__imp__sub_827898EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827898F0"))) PPC_WEAK_FUNC(sub_827898F0);
PPC_FUNC_IMPL(__imp__sub_827898F0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x82789940
	if (!cr6.lt) goto loc_82789940;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82770610
	sub_82770610(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x82789960
	if (!cr6.lt) goto loc_82789960;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x82789954
	goto loc_82789954;
loc_82789940:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82789960
	if (cr6.lt) goto loc_82789960;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_82789954:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8286ab28
	sub_8286AB28(ctx, base);
loc_82789960:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82789968"))) PPC_WEAK_FUNC(sub_82789968);
PPC_FUNC_IMPL(__imp__sub_82789968) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8278996C"))) PPC_WEAK_FUNC(sub_8278996C);
PPC_FUNC_IMPL(__imp__sub_8278996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789970"))) PPC_WEAK_FUNC(sub_82789970);
PPC_FUNC_IMPL(__imp__sub_82789970) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bge cr6,0x827899ac
	if (!cr6.lt) goto loc_827899AC;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bge cr6,0x827899c4
	if (!cr6.lt) goto loc_827899C4;
	// b 0x827899bc
	goto loc_827899BC;
loc_827899AC:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x827899c4
	if (cr6.lt) goto loc_827899C4;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_827899BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827891a0
	sub_827891A0(ctx, base);
loc_827899C4:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
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

__attribute__((alias("__imp__sub_827899DC"))) PPC_WEAK_FUNC(sub_827899DC);
PPC_FUNC_IMPL(__imp__sub_827899DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827899E0"))) PPC_WEAK_FUNC(sub_827899E0);
PPC_FUNC_IMPL(__imp__sub_827899E0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x82789a30
	if (!cr6.lt) goto loc_82789A30;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r5,r11
	ctx.r4.s64 = r11.s64 - ctx.r5.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82789130
	sub_82789130(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x82789a50
	if (!cr6.lt) goto loc_82789A50;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x82789a44
	goto loc_82789A44;
loc_82789A30:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82789a50
	if (cr6.lt) goto loc_82789A50;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_82789A44:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x827891a0
	sub_827891A0(ctx, base);
loc_82789A50:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82789A58"))) PPC_WEAK_FUNC(sub_82789A58);
PPC_FUNC_IMPL(__imp__sub_82789A58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82789A5C"))) PPC_WEAK_FUNC(sub_82789A5C);
PPC_FUNC_IMPL(__imp__sub_82789A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789A60"))) PPC_WEAK_FUNC(sub_82789A60);
PPC_FUNC_IMPL(__imp__sub_82789A60) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r9,8
	cr6.compare<uint32_t>(ctx.r9.u32, 8, xer);
	// blt cr6,0x82789a9c
	if (cr6.lt) goto loc_82789A9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x82789aa8
	goto loc_82789AA8;
loc_82789A9C:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x827cd278
	sub_827CD278(ctx, base);
loc_82789AA8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82789ad4
	if (cr6.eq) goto loc_82789AD4;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-21296
	ctx.r9.s64 = r11.s64 + -21296;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82789AD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82789AE4"))) PPC_WEAK_FUNC(sub_82789AE4);
PPC_FUNC_IMPL(__imp__sub_82789AE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789AE8"))) PPC_WEAK_FUNC(sub_82789AE8);
PPC_FUNC_IMPL(__imp__sub_82789AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x82789b6c
	if (cr6.eq) goto loc_82789B6C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82789b6c
	if (!cr6.eq) goto loc_82789B6C;
loc_82789B28:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 & ctx.r8.u64;
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// bne cr6,0x82789b48
	if (!cr6.eq) goto loc_82789B48;
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82789B48:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82789b6c
	if (cr6.eq) goto loc_82789B6C;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x82789b28
	goto loc_82789B28;
loc_82789B6C:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_82789B70"))) PPC_WEAK_FUNC(sub_82789B70);
PPC_FUNC_IMPL(__imp__sub_82789B70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789B74"))) PPC_WEAK_FUNC(sub_82789B74);
PPC_FUNC_IMPL(__imp__sub_82789B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789B78"))) PPC_WEAK_FUNC(sub_82789B78);
PPC_FUNC_IMPL(__imp__sub_82789B78) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82789c00
	if (cr6.eq) goto loc_82789C00;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// li r27,-2
	r27.s64 = -2;
	// addi r28,r11,1
	r28.s64 = r11.s64 + 1;
loc_82789BA4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,-2
	cr6.compare<int32_t>(r11.s32, -2, xer);
	// beq cr6,0x82789be4
	if (cr6.eq) goto loc_82789BE4;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82767080
	sub_82767080(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bne 0x82789be0
	if (!cr0.eq) goto loc_82789BE0;
	// bl 0x82764a50
	sub_82764A50(ctx, base);
loc_82789BE0:
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
loc_82789BE4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// bne 0x82789ba4
	if (!cr0.eq) goto loc_82789BA4;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82789C00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82789C04"))) PPC_WEAK_FUNC(sub_82789C04);
PPC_FUNC_IMPL(__imp__sub_82789C04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82789C08"))) PPC_WEAK_FUNC(sub_82789C08);
PPC_FUNC_IMPL(__imp__sub_82789C08) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r5,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x82789ccc
	if (cr6.eq) goto loc_82789CCC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82789ccc
	if (!cr6.eq) goto loc_82789CCC;
loc_82789C58:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bne cr6,0x82789ca0
	if (!cr6.eq) goto loc_82789CA0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82789c88
	if (!cr6.eq) goto loc_82789C88;
	// bl 0x827655c8
	sub_827655C8(ctx, base);
loc_82789C88:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82789cc0
	if (cr6.eq) goto loc_82789CC0;
loc_82789CA0:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82789ccc
	if (cr6.eq) goto loc_82789CCC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// b 0x82789c58
	goto loc_82789C58;
loc_82789CC0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82789CCC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82789CD4"))) PPC_WEAK_FUNC(sub_82789CD4);
PPC_FUNC_IMPL(__imp__sub_82789CD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82789CD8"))) PPC_WEAK_FUNC(sub_82789CD8);
PPC_FUNC_IMPL(__imp__sub_82789CD8) {
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
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-2
	cr6.compare<int32_t>(ctx.r9.s32, -2, xer);
	// beq cr6,0x82789dac
	if (cr6.eq) goto loc_82789DAC;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82789dac
	if (!cr6.eq) goto loc_82789DAC;
loc_82789D30:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// bne cr6,0x82789d78
	if (!cr6.eq) goto loc_82789D78;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82789d60
	if (!cr6.eq) goto loc_82789D60;
	// bl 0x827655c8
	sub_827655C8(ctx, base);
loc_82789D60:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82789da0
	if (cr6.eq) goto loc_82789DA0;
loc_82789D78:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82789dac
	if (cr6.eq) goto loc_82789DAC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// b 0x82789d30
	goto loc_82789D30;
loc_82789DA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82789DAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82789DB4"))) PPC_WEAK_FUNC(sub_82789DB4);
PPC_FUNC_IMPL(__imp__sub_82789DB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82789DB8"))) PPC_WEAK_FUNC(sub_82789DB8);
PPC_FUNC_IMPL(__imp__sub_82789DB8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-2
	cr6.compare<int32_t>(ctx.r10.s32, -2, xer);
	// beq cr6,0x82789e7c
	if (cr6.eq) goto loc_82789E7C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x82789e7c
	if (!cr6.eq) goto loc_82789E7C;
loc_82789E08:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r7,r28
	cr6.compare<uint32_t>(ctx.r7.u32, r28.u32, xer);
	// bne cr6,0x82789e50
	if (!cr6.eq) goto loc_82789E50;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82789e38
	if (!cr6.eq) goto loc_82789E38;
	// bl 0x827655c8
	sub_827655C8(ctx, base);
loc_82789E38:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x82789e70
	if (cr6.eq) goto loc_82789E70;
loc_82789E50:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82789e7c
	if (cr6.eq) goto loc_82789E7C;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// b 0x82789e08
	goto loc_82789E08;
loc_82789E70:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_82789E7C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82789E84"))) PPC_WEAK_FUNC(sub_82789E84);
PPC_FUNC_IMPL(__imp__sub_82789E84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82789E88"))) PPC_WEAK_FUNC(sub_82789E88);
PPC_FUNC_IMPL(__imp__sub_82789E88) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,-21112
	ctx.r10.s64 = r11.s64 + -21112;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82789ec0
	if (cr6.eq) goto loc_82789EC0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
loc_82789EC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274edf8
	sub_8274EDF8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82789ee0
	if (cr6.eq) goto loc_82789EE0;
	// bl 0x8274e1f8
	sub_8274E1F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82789EE0:
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

__attribute__((alias("__imp__sub_82789EF4"))) PPC_WEAK_FUNC(sub_82789EF4);
PPC_FUNC_IMPL(__imp__sub_82789EF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82789EF8"))) PPC_WEAK_FUNC(sub_82789EF8);
PPC_FUNC_IMPL(__imp__sub_82789EF8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82776920
	sub_82776920(ctx, base);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// ble cr6,0x82789f60
	if (!cr6.gt) goto loc_82789F60;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r30,r29
	ctx.r10.s64 = r29.s64 - r30.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// beq 0x82789f60
	if (cr0.eq) goto loc_82789F60;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82789F3C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82789f58
	if (cr6.eq) goto loc_82789F58;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
loc_82789F58:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82789f3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82789F3C;
loc_82789F60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82789F64"))) PPC_WEAK_FUNC(sub_82789F64);
PPC_FUNC_IMPL(__imp__sub_82789F64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82789F68"))) PPC_WEAK_FUNC(sub_82789F68);
PPC_FUNC_IMPL(__imp__sub_82789F68) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x827898f0
	sub_827898F0(ctx, base);
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// ble cr6,0x82789fc4
	if (!cr6.gt) goto loc_82789FC4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq 0x82789fc4
	if (cr0.eq) goto loc_82789FC4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r11,0
	r11.s64 = 0;
loc_82789FB0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82789fbc
	if (cr6.eq) goto loc_82789FBC;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
loc_82789FBC:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82789fb0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82789FB0;
loc_82789FC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82789FC8"))) PPC_WEAK_FUNC(sub_82789FC8);
PPC_FUNC_IMPL(__imp__sub_82789FC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82789FCC"))) PPC_WEAK_FUNC(sub_82789FCC);
PPC_FUNC_IMPL(__imp__sub_82789FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82789FD0"))) PPC_WEAK_FUNC(sub_82789FD0);
PPC_FUNC_IMPL(__imp__sub_82789FD0) {
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
	// lwz r29,4(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// bge cr6,0x8278a008
	if (!cr6.lt) goto loc_8278A008;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x8278a024
	if (!cr6.lt) goto loc_8278A024;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// b 0x8278a018
	goto loc_8278A018;
loc_8278A008:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8278a024
	if (cr6.lt) goto loc_8278A024;
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
loc_8278A018:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82842fd8
	sub_82842FD8(ctx, base);
loc_8278A024:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// ble cr6,0x8278a068
	if (!cr6.gt) goto loc_8278A068;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf. r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq 0x8278a068
	if (cr0.eq) goto loc_8278A068;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r11,0
	r11.s64 = 0;
loc_8278A054:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8278a060
	if (cr6.eq) goto loc_8278A060;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
loc_8278A060:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x8278a054
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8278A054;
loc_8278A068:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

