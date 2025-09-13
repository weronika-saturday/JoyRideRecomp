#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82610414"))) PPC_WEAK_FUNC(sub_82610414);
PPC_FUNC_IMPL(__imp__sub_82610414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610418"))) PPC_WEAK_FUNC(sub_82610418);
PPC_FUNC_IMPL(__imp__sub_82610418) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8261041C"))) PPC_WEAK_FUNC(sub_8261041C);
PPC_FUNC_IMPL(__imp__sub_8261041C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610420"))) PPC_WEAK_FUNC(sub_82610420);
PPC_FUNC_IMPL(__imp__sub_82610420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	// twi 31,r0,20
	if (r0.s32 < 20 || r0.s32 > 20 || r0.u32 == 20 || r0.u32 < 20 || r0.u32 > 20) __builtin_debugtrap();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82610428"))) PPC_WEAK_FUNC(sub_82610428);
PPC_FUNC_IMPL(__imp__sub_82610428) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x826110c0
	sub_826110C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82610460
	if (cr0.eq) goto loc_82610460;
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82610594
	goto loc_82610594;
loc_82610460:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826104a4
	if (!cr6.eq) goto loc_826104A4;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_826104A4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8314d54c
	__imp__KeQuerySystemTime(ctx, base);
	// lhz r11,70(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 70);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82610590
	if (cr0.eq) goto loc_82610590;
	// lhz r11,154(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 154);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82610590
	if (cr0.eq) goto loc_82610590;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x82610e60
	sub_82610E60(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82610590
	if (cr0.eq) goto loc_82610590;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// bl 0x82610e60
	sub_82610E60(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82610590
	if (cr0.eq) goto loc_82610590;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,152
	r11.s64 = 9961472;
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ori r11,r11,38528
	r11.u64 = r11.u64 | 38528;
	// mulli r8,r8,60
	ctx.r8.s64 = ctx.r8.s64 * 60;
	// mulli r6,r6,60
	ctx.r6.s64 = ctx.r6.s64 * 60;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mulld r11,r10,r11
	r11.s64 = ctx.r10.s64 * r11.s64;
	// mulld r8,r8,r4
	ctx.r8.s64 = ctx.r8.s64 * ctx.r4.s64;
	// mulld r10,r6,r4
	ctx.r10.s64 = ctx.r6.s64 * ctx.r4.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ld r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(r11.s64, ctx.r10.s64, xer);
	// bge cr6,0x82610578
	if (!cr6.lt) goto loc_82610578;
	// cmpd cr6,r9,r11
	cr6.compare<int64_t>(ctx.r9.s64, r11.s64, xer);
	// blt cr6,0x82610570
	if (cr6.lt) goto loc_82610570;
	// cmpd cr6,r9,r10
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, xer);
	// blt cr6,0x8261058c
	if (cr6.lt) goto loc_8261058C;
loc_82610570:
	// li r30,1
	r30.s64 = 1;
	// b 0x82610590
	goto loc_82610590;
loc_82610578:
	// cmpd cr6,r9,r10
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, xer);
	// blt cr6,0x8261058c
	if (cr6.lt) goto loc_8261058C;
	// cmpd cr6,r9,r11
	cr6.compare<int64_t>(ctx.r9.s64, r11.s64, xer);
	// li r30,1
	r30.s64 = 1;
	// blt cr6,0x82610590
	if (cr6.lt) goto loc_82610590;
loc_8261058C:
	// li r30,2
	r30.s64 = 2;
loc_82610590:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82610594:
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

__attribute__((alias("__imp__sub_826105A8"))) PPC_WEAK_FUNC(sub_826105A8);
PPC_FUNC_IMPL(__imp__sub_826105A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826105AC"))) PPC_WEAK_FUNC(sub_826105AC);
PPC_FUNC_IMPL(__imp__sub_826105AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826105B0"))) PPC_WEAK_FUNC(sub_826105B0);
PPC_FUNC_IMPL(__imp__sub_826105B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r31,-31917
	r31.s64 = -2091712512;
	// lwz r11,1540(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1540);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261062c
	if (cr0.eq) goto loc_8261062C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826105E8:
	// stdu r9,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	r11.u32 = ea;
	// bdnz 0x826105e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826105E8;
	// lwz r3,-28340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -28340);
	// li r11,48
	r11.s64 = 48;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82610630
	if (!cr6.eq) goto loc_82610630;
	// lis r3,12
	ctx.r3.s64 = 786432;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,4098
	ctx.r3.u64 = ctx.r3.u64 | 4098;
	// bl 0x82608fa0
	sub_82608FA0(ctx, base);
	// stw r3,-28340(r31)
	PPC_STORE_U32(r31.u32 + -28340, ctx.r3.u32);
	// b 0x82610630
	goto loc_82610630;
loc_8261062C:
	// lwz r3,-28340(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -28340);
loc_82610630:
	// addi r11,r3,0
	r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8261064C"))) PPC_WEAK_FUNC(sub_8261064C);
PPC_FUNC_IMPL(__imp__sub_8261064C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82610650"))) PPC_WEAK_FUNC(sub_82610650);
PPC_FUNC_IMPL(__imp__sub_82610650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r20{};
	PPCRegister r24{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r24,-10852(r20)
	r24.u64 = PPC_LOAD_U32(r20.u32 + -10852);
	// lwz r17,-13736(r3)
	r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + -13736);
	// mflr r12
	// bl 0x828e941c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8260df80
	sub_8260DF80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8260df80
	sub_8260DF80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8314d6dc
	__imp__ExTerminateThread(ctx, base);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82605f00
	sub_82605F00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82610658"))) PPC_WEAK_FUNC(sub_82610658);
PPC_FUNC_IMPL(__imp__sub_82610658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8260df80
	sub_8260DF80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8260df80
	sub_8260DF80(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8314d6dc
	__imp__ExTerminateThread(ctx, base);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82605f00
	sub_82605F00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_826106B4"))) PPC_WEAK_FUNC(sub_826106B4);
PPC_FUNC_IMPL(__imp__sub_826106B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82605f00
	sub_82605F00(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826106D8"))) PPC_WEAK_FUNC(sub_826106D8);
PPC_FUNC_IMPL(__imp__sub_826106D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826106fc
	if (cr6.eq) goto loc_826106FC;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x8261070c
	goto loc_8261070C;
loc_826106FC:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
loc_8261070C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82610720
	if (!cr6.eq) goto loc_82610720;
	// lis r11,2
	r11.s64 = 131072;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_82610720:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,8
	r11.s64 = 524288;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
}

__attribute__((alias("__imp__sub_82610734"))) PPC_WEAK_FUNC(sub_82610734);
PPC_FUNC_IMPL(__imp__sub_82610734) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82610738"))) PPC_WEAK_FUNC(sub_82610738);
PPC_FUNC_IMPL(__imp__sub_82610738) {
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
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826112e0
	sub_826112E0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82610774
	if (cr0.eq) goto loc_82610774;
	// li r11,0
	r11.s64 = 0;
	// stb r11,12284(r31)
	PPC_STORE_U8(r31.u32 + 12284, r11.u8);
	// b 0x82610794
	goto loc_82610794;
loc_82610774:
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826107a0
	if (cr0.eq) goto loc_826107A0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,12276(r31)
	PPC_STORE_U32(r31.u32 + 12276, r11.u32);
	// stw r11,12284(r31)
	PPC_STORE_U32(r31.u32 + 12284, r11.u32);
	// stw r11,12288(r31)
	PPC_STORE_U32(r31.u32 + 12288, r11.u32);
	// stw r11,12292(r31)
	PPC_STORE_U32(r31.u32 + 12292, r11.u32);
	// stw r11,12296(r31)
	PPC_STORE_U32(r31.u32 + 12296, r11.u32);
loc_82610794:
	// stw r11,12280(r31)
	PPC_STORE_U32(r31.u32 + 12280, r11.u32);
	// stw r11,12272(r31)
	PPC_STORE_U32(r31.u32 + 12272, r11.u32);
	// stw r11,12268(r31)
	PPC_STORE_U32(r31.u32 + 12268, r11.u32);
loc_826107A0:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826107B8"))) PPC_WEAK_FUNC(sub_826107B8);
PPC_FUNC_IMPL(__imp__sub_826107B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826107BC"))) PPC_WEAK_FUNC(sub_826107BC);
PPC_FUNC_IMPL(__imp__sub_826107BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826107C0"))) PPC_WEAK_FUNC(sub_826107C0);
PPC_FUNC_IMPL(__imp__sub_826107C0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,12304(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12304);
	// li r17,0
	r17.s64 = 0;
	// lwz r16,0(r5)
	r16.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// mr r24,r17
	r24.u64 = r17.u64;
	// mr r20,r17
	r20.u64 = r17.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r21,r17
	r21.u64 = r17.u64;
	// bne 0x82610804
	if (!cr0.eq) goto loc_82610804;
	// lwz r21,0(r7)
	r21.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82610804:
	// lwz r28,12272(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 12272);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8261084c
	if (cr6.eq) goto loc_8261084C;
	// cmplw cr6,r28,r16
	cr6.compare<uint32_t>(r28.u32, r16.u32, xer);
	// mr r31,r28
	r31.u64 = r28.u64;
	// blt cr6,0x82610820
	if (cr6.lt) goto loc_82610820;
	// mr r31,r16
	r31.u64 = r16.u64;
loc_82610820:
	// lwz r11,12264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12264);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r29,12268(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12268);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// stw r11,12272(r30)
	PPC_STORE_U32(r30.u32 + 12272, r11.u32);
	// mr r20,r31
	r20.u64 = r31.u64;
	// stw r10,12268(r30)
	PPC_STORE_U32(r30.u32 + 12268, ctx.r10.u32);
loc_8261084C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x82610860
	if (!cr6.eq) goto loc_82610860;
	// lwz r11,12280(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12280);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x82610af8
	if (!cr6.gt) goto loc_82610AF8;
loc_82610860:
	// lwz r26,12280(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 12280);
	// mr r31,r21
	r31.u64 = r21.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8261093c
	if (cr6.eq) goto loc_8261093C;
	// lwz r27,12276(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 12276);
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x82610890
	if (!cr6.eq) goto loc_82610890;
	// li r28,5
	r28.s64 = 5;
	// li r25,5
	r25.s64 = 5;
	// addi r29,r27,3
	r29.s64 = r27.s64 + 3;
	// b 0x8261089c
	goto loc_8261089C;
loc_82610890:
	// li r28,2
	r28.s64 = 2;
	// mr r25,r17
	r25.u64 = r17.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8261089C:
	// cmplw cr6,r26,r28
	cr6.compare<uint32_t>(r26.u32, r28.u32, xer);
	// bge cr6,0x826108d4
	if (!cr6.lt) goto loc_826108D4;
	// subf r31,r26,r28
	r31.s64 = r28.s64 - r26.s64;
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(r31.u32, r21.u32, xer);
	// blt cr6,0x826108b4
	if (cr6.lt) goto loc_826108B4;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_826108B4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// add r3,r26,r27
	ctx.r3.u64 = r26.u64 + r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r11,r26,r31
	r11.u64 = r26.u64 + r31.u64;
	// mr r24,r31
	r24.u64 = r31.u64;
	// stw r11,12280(r30)
	PPC_STORE_U32(r30.u32 + 12280, r11.u32);
	// subf r31,r31,r21
	r31.s64 = r21.s64 - r31.s64;
loc_826108D4:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82610940
	if (cr6.eq) goto loc_82610940;
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// subf r11,r24,r21
	r11.s64 = r21.s64 - r24.s64;
	// lbz r9,1(r29)
	ctx.r9.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r29,12280(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12280);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r31,r10,r28
	r31.u64 = ctx.r10.u64 + r28.u64;
	// subf r28,r29,r31
	r28.s64 = r31.s64 - r29.s64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8261090c
	if (cr6.lt) goto loc_8261090C;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_8261090C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// add r4,r24,r19
	ctx.r4.u64 = r24.u64 + r19.u64;
	// add r3,r29,r27
	ctx.r3.u64 = r29.u64 + r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// add r24,r28,r24
	r24.u64 = r28.u64 + r24.u64;
	// subfc r10,r31,r11
	xer.ca = r11.u32 >= r31.u32;
	ctx.r10.s64 = r11.s64 - r31.s64;
	// stw r11,12280(r30)
	PPC_STORE_U32(r30.u32 + 12280, r11.u32);
	// addze r11,r31
	temp.s64 = r31.s64 + xer.ca;
	xer.ca = temp.u32 < r31.u32;
	r11.s64 = temp.s64;
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// and r31,r11,r31
	r31.u64 = r11.u64 & r31.u64;
	// b 0x82610940
	goto loc_82610940;
loc_8261093C:
	// mr r27,r19
	r27.u64 = r19.u64;
loc_82610940:
	// lwz r11,12272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82610af8
	if (!cr6.eq) goto loc_82610AF8;
	// lwz r23,80(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82610950:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82610af8
	if (cr6.eq) goto loc_82610AF8;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r17.u32);
	// lbz r22,0(r27)
	r22.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r22,255
	cr6.compare<uint32_t>(r22.u32, 255, xer);
	// bne cr6,0x826109a8
	if (!cr6.eq) goto loc_826109A8;
	// li r26,5
	r26.s64 = 5;
	// li r25,5
	r25.s64 = 5;
	// cmplwi cr6,r31,5
	cr6.compare<uint32_t>(r31.u32, 5, xer);
	// blt cr6,0x826109a0
	if (cr6.lt) goto loc_826109A0;
	// lbz r11,3(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 3);
	// lbz r10,1(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// lbz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 4);
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// lbz r8,2(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// or r23,r10,r8
	r23.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r29,r11,10
	r29.s64 = r11.s64 + 10;
	// b 0x826109d8
	goto loc_826109D8;
loc_826109A0:
	// li r29,5
	r29.s64 = 5;
	// b 0x826109d8
	goto loc_826109D8;
loc_826109A8:
	// li r26,2
	r26.s64 = 2;
	// mr r25,r17
	r25.u64 = r17.u64;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// blt cr6,0x826109d4
	if (cr6.lt) goto loc_826109D4;
	// lbz r11,1(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 1);
	// rlwinm r10,r22,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 8) & 0xFFFFFF00;
	// lis r23,0
	r23.s64 = 0;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// ori r23,r23,32768
	r23.u64 = r23.u64 | 32768;
	// addi r29,r11,2
	r29.s64 = r11.s64 + 2;
	// b 0x826109d8
	goto loc_826109D8;
loc_826109D4:
	// li r29,2
	r29.s64 = 2;
loc_826109D8:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x82610a00
	if (!cr6.lt) goto loc_82610A00;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,12276(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12276);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// stw r31,12280(r30)
	PPC_STORE_U32(r30.u32 + 12280, r31.u32);
	// add r24,r31,r24
	r24.u64 = r31.u64 + r24.u64;
	// mr r31,r17
	r31.u64 = r17.u64;
	// b 0x82610aec
	goto loc_82610AEC;
loc_82610A00:
	// addi r11,r29,5
	r11.s64 = r29.s64 + 5;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82610a3c
	if (!cr6.lt) goto loc_82610A3C;
	// lwz r31,12276(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12276);
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// beq cr6,0x82610a3c
	if (cr6.eq) goto loc_82610A3C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x82610a3c
	if (!cr6.eq) goto loc_82610A3C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r24,r29,r24
	r24.u64 = r29.u64 + r24.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
	// stw r29,12280(r30)
	PPC_STORE_U32(r30.u32 + 12280, r29.u32);
loc_82610A3C:
	// subf r28,r20,r16
	r28.s64 = r16.s64 - r20.s64;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// bge cr6,0x82610a50
	if (!cr6.lt) goto loc_82610A50;
	// lwz r31,12264(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12264);
	// b 0x82610a54
	goto loc_82610A54;
loc_82610A50:
	// add r31,r20,r18
	r31.u64 = r20.u64 + r18.u64;
loc_82610A54:
	// subf r11,r25,r29
	r11.s64 = r29.s64 - r25.s64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// subf r6,r26,r11
	ctx.r6.s64 = r11.s64 - r26.s64;
	// add r5,r26,r27
	ctx.r5.u64 = r26.u64 + r27.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82611328
	sub_82611328(ctx, base);
	// lwz r11,12264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12264);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82610aac
	if (!cr6.eq) goto loc_82610AAC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r20,r18
	ctx.r3.u64 = r20.u64 + r18.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,12268(r30)
	PPC_STORE_U32(r30.u32 + 12268, r28.u32);
	// add r20,r28,r20
	r20.u64 = r28.u64 + r20.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// stw r11,12272(r30)
	PPC_STORE_U32(r30.u32 + 12272, r11.u32);
	// b 0x82610ab4
	goto loc_82610AB4;
loc_82610AAC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r20,r11,r20
	r20.u64 = r11.u64 + r20.u64;
loc_82610AB4:
	// lwz r11,12276(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12276);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bne cr6,0x82610acc
	if (!cr6.eq) goto loc_82610ACC;
	// add r27,r24,r19
	r27.u64 = r24.u64 + r19.u64;
	// stw r17,12280(r30)
	PPC_STORE_U32(r30.u32 + 12280, r17.u32);
	// b 0x82610ad4
	goto loc_82610AD4;
loc_82610ACC:
	// add r27,r29,r27
	r27.u64 = r29.u64 + r27.u64;
	// add r24,r29,r24
	r24.u64 = r29.u64 + r24.u64;
loc_82610AD4:
	// cmplwi cr6,r22,255
	cr6.compare<uint32_t>(r22.u32, 255, xer);
	// bne cr6,0x82610ae8
	if (!cr6.eq) goto loc_82610AE8;
	// li r11,1
	r11.s64 = 1;
	// mr r21,r24
	r21.u64 = r24.u64;
	// stb r11,12284(r30)
	PPC_STORE_U8(r30.u32 + 12284, r11.u8);
loc_82610AE8:
	// subf r31,r24,r21
	r31.s64 = r21.s64 - r24.s64;
loc_82610AEC:
	// lwz r11,12272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82610950
	if (cr6.eq) goto loc_82610950;
loc_82610AF8:
	// stw r20,0(r15)
	PPC_STORE_U32(r15.u32 + 0, r20.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,0(r14)
	PPC_STORE_U32(r14.u32 + 0, r24.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82610B08"))) PPC_WEAK_FUNC(sub_82610B08);
PPC_FUNC_IMPL(__imp__sub_82610B08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82610B0C"))) PPC_WEAK_FUNC(sub_82610B0C);
PPC_FUNC_IMPL(__imp__sub_82610B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610B10"))) PPC_WEAK_FUNC(sub_82610B10);
PPC_FUNC_IMPL(__imp__sub_82610B10) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x826106d8
	sub_826106D8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826116e0
	sub_826116E0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x82610b6c
	if (cr0.eq) goto loc_82610B6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82610738
	sub_82610738(ctx, base);
loc_82610B6C:
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

__attribute__((alias("__imp__sub_82610B80"))) PPC_WEAK_FUNC(sub_82610B80);
PPC_FUNC_IMPL(__imp__sub_82610B80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82610B84"))) PPC_WEAK_FUNC(sub_82610B84);
PPC_FUNC_IMPL(__imp__sub_82610B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610B88"))) PPC_WEAK_FUNC(sub_82610B88);
PPC_FUNC_IMPL(__imp__sub_82610B88) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826106d8
	sub_826106D8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,20
	ctx.r6.s64 = 20;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826116e0
	sub_826116E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82610BDC"))) PPC_WEAK_FUNC(sub_82610BDC);
PPC_FUNC_IMPL(__imp__sub_82610BDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82610BE0"))) PPC_WEAK_FUNC(sub_82610BE0);
PPC_FUNC_IMPL(__imp__sub_82610BE0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// li r15,0
	r15.s64 = 0;
	// lwz r17,0(r5)
	r17.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// addi r31,r3,20
	r31.s64 = ctx.r3.s64 + 20;
	// mr r23,r15
	r23.u64 = r15.u64;
	// mr r25,r15
	r25.u64 = r15.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82610c54
	if (!cr0.eq) goto loc_82610C54;
	// subf r11,r9,r8
	r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r17
	cr6.compare<uint32_t>(r11.u32, r17.u32, xer);
	// mr r25,r11
	r25.u64 = r11.u64;
	// blt cr6,0x82610c3c
	if (cr6.lt) goto loc_82610C3C;
	// mr r25,r17
	r25.u64 = r17.u64;
loc_82610C3C:
	// add r11,r20,r19
	r11.u64 = r20.u64 + r19.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// b 0x82610e50
	goto loc_82610E50;
loc_82610C54:
	// lwz r11,12268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12268);
	// mr r21,r26
	r21.u64 = r26.u64;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// bne cr6,0x82610cfc
	if (!cr6.eq) goto loc_82610CFC;
	// lwz r11,12272(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12272);
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// bne cr6,0x82610cfc
	if (!cr6.eq) goto loc_82610CFC;
	// lwz r11,12276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12276);
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// bne cr6,0x82610cfc
	if (!cr6.eq) goto loc_82610CFC;
	// lwz r10,12280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12280);
	// cmplw cr6,r19,r10
	cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, xer);
	// blt cr6,0x82610cfc
	if (cr6.lt) goto loc_82610CFC;
	// lwz r11,12296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12296);
	// subf r9,r10,r19
	ctx.r9.s64 = r19.s64 - ctx.r10.s64;
	// lwz r10,12284(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12284);
	// addic r7,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r7.s64 = r11.s64 + -1;
	// lwz r8,12292(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12292);
	// subf r6,r9,r11
	ctx.r6.s64 = r11.s64 - ctx.r9.s64;
	// lwz r23,12288(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 12288);
	// subfe r24,r7,r11
	temp.u8 = (~ctx.r7.u32 + r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + r11.u32 + xer.ca < xer.ca);
	r24.u64 = ~ctx.r7.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r7,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r6.s64;
	// rlwinm r7,r6,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// add r28,r10,r20
	r28.u64 = ctx.r10.u64 + r20.u64;
	// addme r7,r7
	temp.u64 = ctx.r7.u64 + xer.ca - 1;
	xer.ca = (ctx.r7.u64 > temp.u64) || (ctx.r7.u64 == temp.u64 && xer.ca);
	ctx.r7.u64 = temp.u64;
	// subf r27,r10,r18
	r27.s64 = r18.s64 - ctx.r10.s64;
	// and r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 & ctx.r6.u64;
	// add r29,r8,r11
	r29.u64 = ctx.r8.u64 + r11.u64;
	// cmplw cr6,r10,r17
	cr6.compare<uint32_t>(ctx.r10.u32, r17.u32, xer);
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// blt cr6,0x82610cd4
	if (cr6.lt) goto loc_82610CD4;
	// mr r30,r17
	r30.u64 = r17.u64;
loc_82610CD4:
	// lwz r11,12300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12300);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// subf r22,r10,r29
	r22.s64 = r29.s64 - ctx.r10.s64;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// add r21,r30,r26
	r21.u64 = r30.u64 + r26.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// b 0x82610e00
	goto loc_82610E00;
loc_82610CFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826112e0
	sub_826112E0(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r28,r20
	r28.u64 = r20.u64;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82610e00
	goto loc_82610E00;
loc_82610D1C:
	// cmplw cr6,r17,r25
	cr6.compare<uint32_t>(r17.u32, r25.u32, xer);
	// ble cr6,0x82610e08
	if (!cr6.gt) goto loc_82610E08;
	// stw r15,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r15.u32);
	// lhz r26,0(r28)
	r26.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x82610e08
	if (cr0.eq) goto loc_82610E08;
	// subf r29,r23,r16
	r29.s64 = r16.s64 - r23.s64;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r27,r27,-2
	r27.s64 = r27.s64 + -2;
	// cmplwi cr6,r29,32768
	cr6.compare<uint32_t>(r29.u32, 32768, xer);
	// blt cr6,0x82610d50
	if (cr6.lt) goto loc_82610D50;
	// lis r29,0
	r29.s64 = 0;
	// ori r29,r29,32768
	r29.u64 = r29.u64 | 32768;
loc_82610D50:
	// subf r11,r23,r19
	r11.s64 = r19.s64 - r23.s64;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bge cr6,0x82610d80
	if (!cr6.lt) goto loc_82610D80;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// addme r10,r10
	temp.u64 = ctx.r10.u64 + xer.ca - 1;
	xer.ca = (ctx.r10.u64 > temp.u64) || (ctx.r10.u64 == temp.u64 && xer.ca);
	ctx.r10.u64 = temp.u64;
	// and r22,r10,r11
	r22.u64 = ctx.r10.u64 & r11.u64;
	// b 0x82610d84
	goto loc_82610D84;
loc_82610D80:
	// mr r22,r29
	r22.u64 = r29.u64;
loc_82610D84:
	// subf r11,r22,r29
	r11.s64 = r29.s64 - r22.s64;
	// subf r30,r25,r17
	r30.s64 = r17.s64 - r25.s64;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x82610d98
	if (!cr6.lt) goto loc_82610D98;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82610D98:
	// subfc r11,r29,r30
	xer.ca = r30.u32 >= r29.u32;
	r11.s64 = r30.s64 - r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi. r24,r11,31
	r24.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x82610db0
	if (cr0.eq) goto loc_82610DB0;
	// lwz r7,12300(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12300);
	// b 0x82610db4
	goto loc_82610DB4;
loc_82610DB0:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
loc_82610DB4:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611328
	sub_82611328(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x82610dec
	if (cr6.eq) goto loc_82610DEC;
	// lwz r11,12300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12300);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// add r4,r11,r22
	ctx.r4.u64 = r11.u64 + r22.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_82610DEC:
	// subf r27,r26,r27
	r27.s64 = r27.s64 - r26.s64;
	// add r23,r29,r23
	r23.u64 = r29.u64 + r23.u64;
	// add r21,r30,r21
	r21.u64 = r30.u64 + r21.u64;
	// add r25,r30,r25
	r25.u64 = r30.u64 + r25.u64;
	// add r28,r26,r28
	r28.u64 = r26.u64 + r28.u64;
loc_82610E00:
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bgt cr6,0x82610d1c
	if (cr6.gt) goto loc_82610D1C;
loc_82610E08:
	// add r11,r25,r19
	r11.u64 = r25.u64 + r19.u64;
	// stw r20,12268(r31)
	PPC_STORE_U32(r31.u32 + 12268, r20.u32);
	// subf r10,r20,r28
	ctx.r10.s64 = r28.s64 - r20.s64;
	// stw r18,12272(r31)
	PPC_STORE_U32(r31.u32 + 12272, r18.u32);
	// stw r16,12276(r31)
	PPC_STORE_U32(r31.u32 + 12276, r16.u32);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// stw r11,12280(r31)
	PPC_STORE_U32(r31.u32 + 12280, r11.u32);
	// stw r10,12284(r31)
	PPC_STORE_U32(r31.u32 + 12284, ctx.r10.u32);
	// stw r23,12288(r31)
	PPC_STORE_U32(r31.u32 + 12288, r23.u32);
	// beq cr6,0x82610e48
	if (cr6.eq) goto loc_82610E48;
	// subf r11,r22,r29
	r11.s64 = r29.s64 - r22.s64;
	// add r10,r22,r30
	ctx.r10.u64 = r22.u64 + r30.u64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stw r10,12292(r31)
	PPC_STORE_U32(r31.u32 + 12292, ctx.r10.u32);
	// stw r11,12296(r31)
	PPC_STORE_U32(r31.u32 + 12296, r11.u32);
	// b 0x82610e50
	goto loc_82610E50;
loc_82610E48:
	// stw r15,12292(r31)
	PPC_STORE_U32(r31.u32 + 12292, r15.u32);
	// stw r15,12296(r31)
	PPC_STORE_U32(r31.u32 + 12296, r15.u32);
loc_82610E50:
	// stw r25,0(r14)
	PPC_STORE_U32(r14.u32 + 0, r25.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
}

__attribute__((alias("__imp__sub_82610E58"))) PPC_WEAK_FUNC(sub_82610E58);
PPC_FUNC_IMPL(__imp__sub_82610E58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82610E5C"))) PPC_WEAK_FUNC(sub_82610E5C);
PPC_FUNC_IMPL(__imp__sub_82610E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610E60"))) PPC_WEAK_FUNC(sub_82610E60);
PPC_FUNC_IMPL(__imp__sub_82610E60) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82611888
	sub_82611888(ctx, base);
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82610ec0
	if (cr0.eq) goto loc_82610EC0;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826117e8
	sub_826117E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x826110a8
	if (cr0.eq) goto loc_826110A8;
	// ld r11,0(r20)
	r11.u64 = PPC_LOAD_U64(r20.u32 + 0);
	// ld r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U64(r21.u32 + 0);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x826110a8
	if (cr6.lt) goto loc_826110A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826110ac
	goto loc_826110AC;
loc_82610EC0:
	// lha r22,6(r29)
	r22.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 6));
	// cmpwi cr6,r22,5
	cr6.compare<int32_t>(r22.s32, 5, xer);
	// bgt cr6,0x826110a8
	if (cr6.gt) goto loc_826110A8;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// beq cr6,0x826110a8
	if (cr6.eq) goto loc_826110A8;
	// li r23,0
	r23.s64 = 0;
	// lhz r25,2(r29)
	r25.u64 = PPC_LOAD_U16(r29.u32 + 2);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lhz r31,4(r29)
	r31.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// li r24,1
	r24.s64 = 1;
	// mr r26,r23
	r26.u64 = r23.u64;
	// bne 0x82610f20
	if (!cr0.eq) goto loc_82610F20;
	// lhz r11,114(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// extsh r10,r25
	ctx.r10.s64 = r25.s16;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82610f10
	if (!cr6.lt) goto loc_82610F10;
	// lhz r11,112(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsh r28,r11
	r28.s64 = r11.s16;
	// b 0x82610f24
	goto loc_82610F24;
loc_82610F10:
	// lhz r28,112(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// bgt cr6,0x82610f24
	if (cr6.gt) goto loc_82610F24;
	// mr r26,r24
	r26.u64 = r24.u64;
	// b 0x82610f24
	goto loc_82610F24;
loc_82610F20:
	// lhz r28,112(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
loc_82610F24:
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 10);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 12);
	// lhz r8,14(r29)
	ctx.r8.u64 = PPC_LOAD_U16(r29.u32 + 14);
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r28.u16);
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r25.u16);
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r24.u16);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r11.u16);
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r23,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, r23.u16);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// bl 0x8314d75c
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826110a8
	if (cr0.eq) goto loc_826110A8;
	// extsh r27,r31
	r27.s64 = r31.s16;
loc_82610F6C:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d53c
	__imp__RtlTimeToTimeFields(ctx, base);
	// lha r11,142(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 142));
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// ble cr6,0x82610f9c
	if (!cr6.gt) goto loc_82610F9C;
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 100));
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
loc_82610F94:
	// extsh r11,r11
	r11.s64 = r11.s16;
	// b 0x82610fb4
	goto loc_82610FB4;
loc_82610F9C:
	// bge cr6,0x82610fb0
	if (!cr6.lt) goto loc_82610FB0;
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82610f94
	goto loc_82610F94;
loc_82610FB0:
	// lhz r11,100(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
loc_82610FB4:
	// mr r30,r11
	r30.u64 = r11.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// ble cr6,0x82611010
	if (!cr6.gt) goto loc_82611010;
	// b 0x82610fcc
	goto loc_82610FCC;
loc_82610FC8:
	// lhz r11,100(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
loc_82610FCC:
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r11.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314d75c
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82611010
	if (cr0.eq) goto loc_82611010;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d53c
	__imp__RtlTimeToTimeFields(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsh r31,r11
	r31.s64 = r11.s16;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmpw cr6,r31,r22
	cr6.compare<int32_t>(r31.s32, r22.s32, xer);
	// lhz r30,132(r1)
	r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// blt cr6,0x82610fc8
	if (cr6.lt) goto loc_82610FC8;
loc_82611010:
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8314d75c
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826110a8
	if (cr0.eq) goto loc_826110A8;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826110b4
	if (cr0.eq) goto loc_826110B4;
	// lhz r11,118(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 100));
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x82611054
	if (cr6.lt) goto loc_82611054;
	// bne cr6,0x826110b4
	if (!cr6.eq) goto loc_826110B4;
	// ld r11,0(r21)
	r11.u64 = PPC_LOAD_U64(r21.u32 + 0);
	// cmpd cr6,r9,r11
	cr6.compare<int64_t>(ctx.r9.s64, r11.s64, xer);
	// bge cr6,0x826110b4
	if (!cr6.lt) goto loc_826110B4;
loc_82611054:
	// mr r11,r28
	r11.u64 = r28.u64;
	// lhz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U16(r29.u32 + 10);
	// lhz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lhz r8,14(r29)
	ctx.r8.u64 = PPC_LOAD_U16(r29.u32 + 14);
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r25.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// extsh r28,r11
	r28.s64 = r11.s16;
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// mr r26,r23
	r26.u64 = r23.u64;
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r28.u16);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r24.u16);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r11.u16);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// sth r23,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, r23.u16);
	// bl 0x8314d75c
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82610f6c
	if (!cr0.eq) goto loc_82610F6C;
loc_826110A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826110AC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e9448
	return;
loc_826110B4:
	// std r9,0(r20)
	PPC_STORE_U64(r20.u32 + 0, ctx.r9.u64);
}

__attribute__((alias("__imp__sub_826110B8"))) PPC_WEAK_FUNC(sub_826110B8);
PPC_FUNC_IMPL(__imp__sub_826110B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82610eb8
	// ERROR 82610EB8
	return;
}

__attribute__((alias("__imp__sub_826110BC"))) PPC_WEAK_FUNC(sub_826110BC);
PPC_FUNC_IMPL(__imp__sub_826110BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826110C0"))) PPC_WEAK_FUNC(sub_826110C0);
PPC_FUNC_IMPL(__imp__sub_826110C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82611114
	if (!cr0.lt) goto loc_82611114;
loc_8261110C:
	// bl 0x8314d55c
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x826112d8
	goto loc_826112D8;
loc_82611114:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8261110c
	if (cr0.lt) goto loc_8261110C;
	// li r11,4
	r11.s64 = 4;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// addi r9,r1,107
	ctx.r9.s64 = ctx.r1.s64 + 107;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82611150:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, r11.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82611150
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82611150;
	// sth r30,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, r30.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8261110c
	if (cr0.lt) goto loc_8261110C;
	// li r11,4
	r11.s64 = 4;
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// addi r9,r1,111
	ctx.r9.s64 = ctx.r1.s64 + 111;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82611194:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, r11.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82611194
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82611194;
	// sth r30,8(r10)
	PPC_STORE_U16(ctx.r10.u32 + 8, r30.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8261110c
	if (cr0.lt) goto loc_8261110C;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,5
	ctx.r4.s64 = 5;
	// sth r11,70(r31)
	PPC_STORE_U16(r31.u32 + 70, r11.u16);
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r8,76(r31)
	PPC_STORE_U16(r31.u32 + 76, ctx.r8.u16);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// sth r10,74(r31)
	PPC_STORE_U16(r31.u32 + 74, ctx.r10.u16);
	// sth r9,72(r31)
	PPC_STORE_U16(r31.u32 + 72, ctx.r9.u16);
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8261110c
	if (cr0.lt) goto loc_8261110C;
	// addi r3,r31,152
	ctx.r3.s64 = r31.s64 + 152;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r8,91(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,6
	ctx.r4.s64 = 6;
	// sth r11,154(r31)
	PPC_STORE_U16(r31.u32 + 154, r11.u16);
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r8,160(r31)
	PPC_STORE_U16(r31.u32 + 160, ctx.r8.u16);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// sth r10,158(r31)
	PPC_STORE_U16(r31.u32 + 158, ctx.r10.u16);
	// sth r9,156(r31)
	PPC_STORE_U16(r31.u32 + 156, ctx.r9.u16);
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8261110c
	if (cr0.lt) goto loc_8261110C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8261110c
	if (cr0.lt) goto loc_8261110C;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// beq cr6,0x826112d4
	if (cr6.eq) goto loc_826112D4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8314d22c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8261110c
	if (cr0.lt) goto loc_8261110C;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_826112D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826112D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826112DC"))) PPC_WEAK_FUNC(sub_826112DC);
PPC_FUNC_IMPL(__imp__sub_826112DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826112E0"))) PPC_WEAK_FUNC(sub_826112E0);
PPC_FUNC_IMPL(__imp__sub_826112E0) {
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
	// bl 0x82611630
	sub_82611630(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826116a8
	sub_826116A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611910
	sub_82611910(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,11972(r31)
	PPC_STORE_U32(r31.u32 + 11972, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82611320"))) PPC_WEAK_FUNC(sub_82611320);
PPC_FUNC_IMPL(__imp__sub_82611320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82611324"))) PPC_WEAK_FUNC(sub_82611324);
PPC_FUNC_IMPL(__imp__sub_82611324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611328"))) PPC_WEAK_FUNC(sub_82611328);
PPC_FUNC_IMPL(__imp__sub_82611328) {
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
	// stw r7,11020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11020, ctx.r7.u32);
	// add r11,r5,r6
	r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r5,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, ctx.r5.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,11016(r31)
	PPC_STORE_U32(r31.u32 + 11016, r11.u32);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// bl 0x8314d3bc
	__imp__MmQueryAddressProtect(ctx, base);
	// rlwinm r11,r3,0,21,22
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r11,12260(r31)
	PPC_STORE_U8(r31.u32 + 12260, r11.u8);
	// bl 0x82611d88
	sub_82611D88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611ab8
	sub_82611AB8(ctx, base);
	// lwz r10,11972(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11972);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,11972(r31)
	PPC_STORE_U32(r31.u32 + 11972, ctx.r10.u32);
	// bge 0x826113a4
	if (!cr0.lt) goto loc_826113A4;
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x826113b8
	goto loc_826113B8;
loc_826113A4:
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,11024(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11024);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,11024(r31)
	PPC_STORE_U32(r31.u32 + 11024, r11.u32);
loc_826113B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826113BC"))) PPC_WEAK_FUNC(sub_826113BC);
PPC_FUNC_IMPL(__imp__sub_826113BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826113C0"))) PPC_WEAK_FUNC(sub_826113C0);
PPC_FUNC_IMPL(__imp__sub_826113C0) {
	PPC_FUNC_PROLOGUE();
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
	// mflr r12
	// bl 0x828e93ec
	// lis r9,257
	ctx.r9.s64 = 16842752;
	// lis r8,771
	ctx.r8.s64 = 50528256;
	// ori r9,r9,514
	ctx.r9.u64 = ctx.r9.u64 | 514;
	// lis r6,1799
	ctx.r6.s64 = 117899264;
	// lis r7,1285
	ctx.r7.s64 = 84213760;
	// stw r9,12008(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12008, ctx.r9.u32);
	// ori r8,r8,1028
	ctx.r8.u64 = ctx.r8.u64 | 1028;
	// ori r7,r7,1542
	ctx.r7.u64 = ctx.r7.u64 | 1542;
	// ori r9,r6,2056
	ctx.r9.u64 = ctx.r6.u64 | 2056;
	// stw r8,12012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12012, ctx.r8.u32);
	// lis r5,2313
	ctx.r5.s64 = 151584768;
	// stw r7,12016(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12016, ctx.r7.u32);
	// lis r4,2827
	ctx.r4.s64 = 185270272;
	// stw r9,12020(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12020, ctx.r9.u32);
	// lis r31,3341
	r31.s64 = 218955776;
	// ori r8,r5,2570
	ctx.r8.u64 = ctx.r5.u64 | 2570;
	// ori r7,r4,3084
	ctx.r7.u64 = ctx.r4.u64 | 3084;
	// ori r9,r31,3598
	ctx.r9.u64 = r31.u64 | 3598;
	// stw r8,12024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12024, ctx.r8.u32);
	// lis r11,4369
	r11.s64 = 286326784;
	// stw r7,12028(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12028, ctx.r7.u32);
	// lis r30,3855
	r30.s64 = 252641280;
	// stw r9,12032(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12032, ctx.r9.u32);
	// ori r11,r11,4369
	r11.u64 = r11.u64 | 4369;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r30,4112
	ctx.r8.u64 = r30.u64 | 4112;
	// stw r11,12040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12040, r11.u32);
	// li r7,-2
	ctx.r7.s64 = -2;
	// stw r10,12004(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12004, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r8,12036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12036, ctx.r8.u32);
	// stw r11,12044(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12044, r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,12048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12048, r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,12052(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12052, r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r7,12056(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12056, ctx.r7.u32);
	// li r11,6
	r11.s64 = 6;
	// stw r9,12060(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12060, ctx.r9.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r10,12064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12064, ctx.r10.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r8,12068(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12068, ctx.r8.u32);
	// stw r6,12072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12072, ctx.r6.u32);
	// li r8,30
	ctx.r8.s64 = 30;
	// li r6,46
	ctx.r6.s64 = 46;
	// stw r5,12076(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12076, ctx.r5.u32);
	// stw r11,12080(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12080, r11.u32);
	// li r5,62
	ctx.r5.s64 = 62;
	// stw r7,12084(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12084, ctx.r7.u32);
	// li r11,94
	r11.s64 = 94;
	// stw r9,12088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12088, ctx.r9.u32);
	// li r7,126
	ctx.r7.s64 = 126;
	// stw r10,12092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12092, ctx.r10.u32);
	// li r9,190
	ctx.r9.s64 = 190;
	// li r10,254
	ctx.r10.s64 = 254;
	// stw r8,12096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12096, ctx.r8.u32);
	// stw r6,12100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12100, ctx.r6.u32);
	// li r8,382
	ctx.r8.s64 = 382;
	// li r6,510
	ctx.r6.s64 = 510;
	// stw r5,12104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12104, ctx.r5.u32);
	// stw r11,12108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12108, r11.u32);
	// li r5,766
	ctx.r5.s64 = 766;
	// stw r7,12112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12112, ctx.r7.u32);
	// li r11,1022
	r11.s64 = 1022;
	// stw r9,12116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12116, ctx.r9.u32);
	// li r7,1534
	ctx.r7.s64 = 1534;
	// stw r10,12120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12120, ctx.r10.u32);
	// li r9,2046
	ctx.r9.s64 = 2046;
	// li r10,3070
	ctx.r10.s64 = 3070;
	// stw r8,12124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12124, ctx.r8.u32);
	// stw r6,12128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12128, ctx.r6.u32);
	// li r8,4094
	ctx.r8.s64 = 4094;
	// stw r5,12132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12132, ctx.r5.u32);
	// li r6,6142
	ctx.r6.s64 = 6142;
	// stw r11,12136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12136, r11.u32);
	// stw r7,12140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12140, ctx.r7.u32);
	// stw r9,12144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12144, ctx.r9.u32);
	// stw r10,12148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12148, ctx.r10.u32);
	// lis r11,0
	r11.s64 = 0;
	// stw r8,12152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12152, ctx.r8.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r6,12156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12156, ctx.r6.u32);
	// ori r11,r11,49150
	r11.u64 = r11.u64 | 49150;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stw r11,12180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12180, r11.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,12184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12184, ctx.r10.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r9,r9,32766
	ctx.r9.u64 = ctx.r9.u64 | 32766;
	// ori r11,r8,65534
	r11.u64 = ctx.r8.u64 | 65534;
	// ori r10,r7,65534
	ctx.r10.u64 = ctx.r7.u64 | 65534;
	// stw r9,12188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12188, ctx.r9.u32);
	// lis r6,3
	ctx.r6.s64 = 196608;
	// stw r11,12192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12192, r11.u32);
	// lis r5,5
	ctx.r5.s64 = 327680;
	// stw r10,12196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12196, ctx.r10.u32);
	// lis r4,7
	ctx.r4.s64 = 458752;
	// ori r9,r6,65534
	ctx.r9.u64 = ctx.r6.u64 | 65534;
	// ori r11,r5,65534
	r11.u64 = ctx.r5.u64 | 65534;
	// ori r10,r4,65534
	ctx.r10.u64 = ctx.r4.u64 | 65534;
	// stw r9,12200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12200, ctx.r9.u32);
	// lis r31,9
	r31.s64 = 589824;
	// stw r11,12204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12204, r11.u32);
	// lis r30,11
	r30.s64 = 720896;
	// stw r10,12208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12208, ctx.r10.u32);
	// lis r29,13
	r29.s64 = 851968;
	// ori r9,r31,65534
	ctx.r9.u64 = r31.u64 | 65534;
	// ori r11,r30,65534
	r11.u64 = r30.u64 | 65534;
	// ori r10,r29,65534
	ctx.r10.u64 = r29.u64 | 65534;
	// stw r9,12212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12212, ctx.r9.u32);
	// lis r28,15
	r28.s64 = 983040;
	// stw r11,12216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12216, r11.u32);
	// lis r27,17
	r27.s64 = 1114112;
	// stw r10,12220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12220, ctx.r10.u32);
	// lis r26,19
	r26.s64 = 1245184;
	// ori r9,r28,65534
	ctx.r9.u64 = r28.u64 | 65534;
	// ori r11,r27,65534
	r11.u64 = r27.u64 | 65534;
	// ori r10,r26,65534
	ctx.r10.u64 = r26.u64 | 65534;
	// stw r9,12224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12224, ctx.r9.u32);
	// lis r25,21
	r25.s64 = 1376256;
	// stw r11,12228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12228, r11.u32);
	// lis r24,23
	r24.s64 = 1507328;
	// stw r10,12232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12232, ctx.r10.u32);
	// lis r23,25
	r23.s64 = 1638400;
	// li r19,8190
	r19.s64 = 8190;
	// li r18,12286
	r18.s64 = 12286;
	// ori r9,r25,65534
	ctx.r9.u64 = r25.u64 | 65534;
	// stw r19,12160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12160, r19.u32);
	// ori r11,r24,65534
	r11.u64 = r24.u64 | 65534;
	// stw r18,12164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12164, r18.u32);
	// ori r10,r23,65534
	ctx.r10.u64 = r23.u64 | 65534;
	// stw r9,12236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12236, ctx.r9.u32);
	// lis r22,27
	r22.s64 = 1769472;
	// stw r11,12240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12240, r11.u32);
	// lis r21,29
	r21.s64 = 1900544;
	// stw r10,12244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12244, ctx.r10.u32);
	// lis r20,31
	r20.s64 = 2031616;
	// li r17,16382
	r17.s64 = 16382;
	// li r19,24574
	r19.s64 = 24574;
	// li r18,32766
	r18.s64 = 32766;
	// stw r17,12168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12168, r17.u32);
	// ori r9,r22,65534
	ctx.r9.u64 = r22.u64 | 65534;
	// stw r19,12172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12172, r19.u32);
	// ori r11,r21,65534
	r11.u64 = r21.u64 | 65534;
	// stw r18,12176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12176, r18.u32);
	// ori r10,r20,65534
	ctx.r10.u64 = r20.u64 | 65534;
	// stw r9,12248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12248, ctx.r9.u32);
	// stw r11,12252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12252, r11.u32);
	// stw r10,12256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12256, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8261162C"))) PPC_WEAK_FUNC(sub_8261162C);
PPC_FUNC_IMPL(__imp__sub_8261162C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_82611630"))) PPC_WEAK_FUNC(sub_82611630);
PPC_FUNC_IMPL(__imp__sub_82611630) {
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
	// lbz r11,11957(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11957);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r3,r3,2584
	ctx.r3.s64 = ctx.r3.s64 + 2584;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lbz r11,11957(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11957);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r3,r31,11028
	ctx.r3.s64 = r31.s64 + 11028;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,249
	ctx.r5.s64 = 249;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3256
	ctx.r3.s64 = r31.s64 + 3256;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,249
	ctx.r5.s64 = 249;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11700
	ctx.r3.s64 = r31.s64 + 11700;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826116A4"))) PPC_WEAK_FUNC(sub_826116A4);
PPC_FUNC_IMPL(__imp__sub_826116A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826116A8"))) PPC_WEAK_FUNC(sub_826116A8);
PPC_FUNC_IMPL(__imp__sub_826116A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,11960(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11960, r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,11024(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11024, r11.u32);
	// stw r10,11988(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11988, ctx.r10.u32);
	// stw r11,11980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11980, r11.u32);
	// stw r11,11984(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11984, r11.u32);
	// stb r10,11958(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11958, ctx.r10.u8);
	// stw r11,11964(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11964, r11.u32);
	// stb r11,11959(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11959, r11.u8);
}

__attribute__((alias("__imp__sub_826116DC"))) PPC_WEAK_FUNC(sub_826116DC);
PPC_FUNC_IMPL(__imp__sub_826116DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826116E0"))) PPC_WEAK_FUNC(sub_826116E0);
PPC_FUNC_IMPL(__imp__sub_826116E0) {
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
	// addi r27,r5,261
	r27.s64 = ctx.r5.s64 + 261;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r11,r27,r6
	r11.u64 = r27.u64 + ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// clrlwi. r26,r7,31
	r26.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ori r28,r10,32768
	r28.u64 = ctx.r10.u64 | 32768;
	// addi r11,r11,12304
	r11.s64 = r11.s64 + 12304;
	// beq 0x8261171c
	if (cr0.eq) goto loc_8261171C;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r11,r11,-26614
	r11.s64 = r11.s64 + -26614;
	// b 0x82611728
	goto loc_82611728;
loc_8261171C:
	// rlwinm. r10,r25,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82611728
	if (cr0.eq) goto loc_82611728;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
loc_82611728:
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// beq cr6,0x826117e0
	if (cr6.eq) goto loc_826117E0;
	// add r31,r3,r6
	r31.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r31,12304
	r29.s64 = r31.s64 + 12304;
	// bl 0x826113c0
	sub_826113C0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// stw r11,11992(r31)
	PPC_STORE_U32(r31.u32 + 11992, r11.u32);
	// stw r11,11996(r31)
	PPC_STORE_U32(r31.u32 + 11996, r11.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,12000(r31)
	PPC_STORE_U32(r31.u32 + 12000, r11.u32);
	// stb r10,11957(r31)
	PPC_STORE_U8(r31.u32 + 11957, ctx.r10.u8);
loc_8261176C:
	// lbz r9,11957(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 11957);
	// li r8,1
	ctx.r8.s64 = 1;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + r31.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r7,12004(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 12004);
	// stb r9,11957(r31)
	PPC_STORE_U8(r31.u32 + 11957, ctx.r9.u8);
	// slw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// blt cr6,0x8261176c
	if (cr6.lt) goto loc_8261176C;
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r11,12268(r31)
	PPC_STORE_U32(r31.u32 + 12268, r11.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r10,12264(r31)
	PPC_STORE_U32(r31.u32 + 12264, ctx.r10.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,12272(r31)
	PPC_STORE_U32(r31.u32 + 12272, r11.u32);
	// stw r11,12276(r31)
	PPC_STORE_U32(r31.u32 + 12276, r11.u32);
	// stw r11,12280(r31)
	PPC_STORE_U32(r31.u32 + 12280, r11.u32);
	// stw r11,12284(r31)
	PPC_STORE_U32(r31.u32 + 12284, r11.u32);
	// stw r11,12288(r31)
	PPC_STORE_U32(r31.u32 + 12288, r11.u32);
	// stw r11,12292(r31)
	PPC_STORE_U32(r31.u32 + 12292, r11.u32);
	// stw r11,12296(r31)
	PPC_STORE_U32(r31.u32 + 12296, r11.u32);
	// beq cr6,0x826117d4
	if (cr6.eq) goto loc_826117D4;
	// stw r10,12276(r31)
	PPC_STORE_U32(r31.u32 + 12276, ctx.r10.u32);
	// b 0x826117e0
	goto loc_826117E0;
loc_826117D4:
	// rlwinm. r11,r25,0,0,0
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826117e0
	if (cr0.eq) goto loc_826117E0;
	// stw r10,12300(r31)
	PPC_STORE_U32(r31.u32 + 12300, ctx.r10.u32);
loc_826117E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826117E4"))) PPC_WEAK_FUNC(sub_826117E4);
PPC_FUNC_IMPL(__imp__sub_826117E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826117E8"))) PPC_WEAK_FUNC(sub_826117E8);
PPC_FUNC_IMPL(__imp__sub_826117E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// lhz r6,10(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// lhz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// lhz r11,14(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 14);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// sth r7,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// sth r6,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r6.u16);
	// sth r5,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r5.u16);
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, r11.u16);
	// bl 0x8314d75c
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82611860
	if (!cr0.eq) goto loc_82611860;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82611874
	goto loc_82611874;
loc_82611860:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82611874:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82611884"))) PPC_WEAK_FUNC(sub_82611884);
PPC_FUNC_IMPL(__imp__sub_82611884) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82611888"))) PPC_WEAK_FUNC(sub_82611888);
PPC_FUNC_IMPL(__imp__sub_82611888) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8314d53c
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,96(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r5,106(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// sth r8,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r6.u16);
	// sth r5,12(r31)
	PPC_STORE_U16(r31.u32 + 12, ctx.r5.u16);
	// sth r4,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r4.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8261190C"))) PPC_WEAK_FUNC(sub_8261190C);
PPC_FUNC_IMPL(__imp__sub_8261190C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82611910"))) PPC_WEAK_FUNC(sub_82611910);
PPC_FUNC_IMPL(__imp__sub_82611910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,11968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11968, r11.u32);
}

__attribute__((alias("__imp__sub_82611918"))) PPC_WEAK_FUNC(sub_82611918);
PPC_FUNC_IMPL(__imp__sub_82611918) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261191C"))) PPC_WEAK_FUNC(sub_8261191C);
PPC_FUNC_IMPL(__imp__sub_8261191C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611920"))) PPC_WEAK_FUNC(sub_82611920);
PPC_FUNC_IMPL(__imp__sub_82611920) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,6
	cr6.compare<int32_t>(ctx.r5.s32, 6, xer);
	// bgt cr6,0x82611950
	if (cr6.gt) goto loc_82611950;
	// lwz r11,11968(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11968);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stw r11,11968(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11968, r11.u32);
	// b 0x82611aac
	goto loc_82611AAC;
loc_82611950:
	// add r27,r31,r30
	r27.u64 = r31.u64 + r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r29,r27,-6
	r29.s64 = r27.s64 + -6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,232
	ctx.r4.s64 = 232;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,11968(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 11968);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r7,r11,-10
	ctx.r7.s64 = r11.s64 + -10;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r6,r11,-26848
	ctx.r6.s64 = r11.s64 + -26848;
loc_8261198C:
	// addi r11,r31,15
	r11.s64 = r31.s64 + 15;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x826119c0
	if (!cr6.lt) goto loc_826119C0;
loc_826119A4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r8,232
	cr6.compare<uint32_t>(ctx.r8.u32, 232, xer);
	// beq cr6,0x826119c0
	if (cr6.eq) goto loc_826119C0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x826119a4
	if (cr6.lt) goto loc_826119A4;
loc_826119C0:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x826119e4
	if (!cr6.eq) goto loc_826119E4;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// b 0x826119d8
	goto loc_826119D8;
loc_826119D0:
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_826119D8:
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vcmpequb. v13,v13,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_cmpeq_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	cr6.setFromMask(_mm_load_si128((__m128i*)ctx.v13.u8), 0xFFFF);
	// beq cr6,0x826119d0
	if (cr6.eq) goto loc_826119D0;
loc_826119E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// b 0x826119f4
	goto loc_826119F4;
loc_826119EC:
	// lbzu r9,1(r11)
	ea = 1 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_826119F4:
	// cmplwi cr6,r9,232
	cr6.compare<uint32_t>(ctx.r9.u32, 232, xer);
	// bne cr6,0x826119ec
	if (!cr6.eq) goto loc_826119EC;
	// lwz r9,11968(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 11968);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,11968(r28)
	PPC_STORE_U32(r28.u32 + 11968, ctx.r10.u32);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82611a94
	if (!cr6.lt) goto loc_82611A94;
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// lwz r8,11964(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 11964);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bge cr6,0x82611a58
	if (!cr6.lt) goto loc_82611A58;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// b 0x82611a6c
	goto loc_82611A6C;
loc_82611A58:
	// neg r5,r9
	ctx.r5.s64 = -ctx.r9.s64;
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82611a84
	if (cr6.gt) goto loc_82611A84;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_82611A6C:
	// rlwinm r5,r9,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwinm r4,r9,16,24,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// rlwinm r9,r9,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// stb r5,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r5.u8);
	// stb r4,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r4.u8);
	// stb r9,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r9.u8);
loc_82611A84:
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// stw r10,11968(r28)
	PPC_STORE_U32(r28.u32 + 11968, ctx.r10.u32);
	// b 0x8261198c
	goto loc_8261198C;
loc_82611A94:
	// addi r11,r7,10
	r11.s64 = ctx.r7.s64 + 10;
	// li r5,6
	ctx.r5.s64 = 6;
	// stw r11,11968(r28)
	PPC_STORE_U32(r28.u32 + 11968, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,-6
	ctx.r3.s64 = r27.s64 + -6;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_82611AAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82611AB0"))) PPC_WEAK_FUNC(sub_82611AB0);
PPC_FUNC_IMPL(__imp__sub_82611AB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82611AB4"))) PPC_WEAK_FUNC(sub_82611AB4);
PPC_FUNC_IMPL(__imp__sub_82611AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611AB8"))) PPC_WEAK_FUNC(sub_82611AB8);
PPC_FUNC_IMPL(__imp__sub_82611AB8) {
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
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x82611ce8
	goto loc_82611CE8;
loc_82611AD8:
	// lwz r11,11988(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11988);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82611cb8
	if (!cr6.eq) goto loc_82611CB8;
	// lbz r11,11958(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11958);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82611b38
	if (cr0.eq) goto loc_82611B38;
	// stb r27,11958(r31)
	PPC_STORE_U8(r31.u32 + 11958, r27.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611e68
	sub_82611E68(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82611b34
	if (cr0.eq) goto loc_82611B34;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611e68
	sub_82611E68(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611e68
	sub_82611E68(ctx, base);
	// rlwinm r11,r30,16,0,15
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r3,r11
	r11.u64 = ctx.r3.u64 | r11.u64;
	// stw r11,11964(r31)
	PPC_STORE_U32(r31.u32 + 11964, r11.u32);
	// b 0x82611b38
	goto loc_82611B38;
loc_82611B34:
	// stw r27,11964(r31)
	PPC_STORE_U32(r31.u32 + 11964, r27.u32);
loc_82611B38:
	// lwz r11,11984(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11984);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82611b50
	if (!cr6.eq) goto loc_82611B50;
	// stw r27,11984(r31)
	PPC_STORE_U32(r31.u32 + 11984, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611d28
	sub_82611D28(ctx, base);
loc_82611B50:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611e68
	sub_82611E68(ctx, base);
	// stw r3,11984(r31)
	PPC_STORE_U32(r31.u32 + 11984, ctx.r3.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611e68
	sub_82611E68(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611e68
	sub_82611E68(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611e68
	sub_82611E68(ctx, base);
	// rlwinm r11,r26,8,0,23
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,11984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11984);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// stw r11,11976(r31)
	PPC_STORE_U32(r31.u32 + 11976, r11.u32);
	// stw r11,11980(r31)
	PPC_STORE_U32(r31.u32 + 11980, r11.u32);
	// bne cr6,0x82611bb8
	if (!cr6.eq) goto loc_82611BB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826136a8
	sub_826136A8(ctx, base);
loc_82611BB8:
	// lwz r11,11984(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11984);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82611bec
	if (cr6.eq) goto loc_82611BEC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82611bec
	if (cr6.eq) goto loc_82611BEC;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82611be4
	if (!cr6.eq) goto loc_82611BE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82612088
	sub_82612088(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82611c1c
	if (!cr0.eq) goto loc_82611C1C;
loc_82611BE4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82611d1c
	goto loc_82611D1C;
loc_82611BEC:
	// lbz r11,11957(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11957);
	// addi r4,r31,2584
	ctx.r4.s64 = r31.s64 + 2584;
	// addi r3,r31,11028
	ctx.r3.s64 = r31.s64 + 11028;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// li r5,249
	ctx.r5.s64 = 249;
	// addi r4,r31,3256
	ctx.r4.s64 = r31.s64 + 3256;
	// addi r3,r31,11700
	ctx.r3.s64 = r31.s64 + 11700;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826135b8
	sub_826135B8(ctx, base);
loc_82611C1C:
	// li r11,2
	r11.s64 = 2;
	// stw r11,11988(r31)
	PPC_STORE_U32(r31.u32 + 11988, r11.u32);
	// b 0x82611cb8
	goto loc_82611CB8;
loc_82611C28:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82611cc4
	if (!cr6.gt) goto loc_82611CC4;
	// lwz r30,11980(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 11980);
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// blt cr6,0x82611c40
	if (cr6.lt) goto loc_82611C40;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_82611C40:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82611be4
	if (cr6.eq) goto loc_82611BE4;
	// lwz r11,11984(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11984);
	// lwz r4,11960(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 11960);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x82611c68
	if (!cr6.eq) goto loc_82611C68;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82612f58
	sub_82612F58(ctx, base);
	// b 0x82611c9c
	goto loc_82611C9C;
loc_82611C68:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82611c80
	if (!cr6.eq) goto loc_82611C80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82612740
	sub_82612740(ctx, base);
	// b 0x82611c9c
	goto loc_82611C9C;
loc_82611C80:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82611c98
	if (!cr6.eq) goto loc_82611C98;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611ea0
	sub_82611EA0(ctx, base);
	// b 0x82611c9c
	goto loc_82611C9C;
loc_82611C98:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82611C9C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82611be4
	if (!cr6.eq) goto loc_82611BE4;
	// lwz r11,11980(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11980);
	// subf r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// stw r11,11980(r31)
	PPC_STORE_U32(r31.u32 + 11980, r11.u32);
loc_82611CB8:
	// lwz r11,11980(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11980);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82611c28
	if (cr6.gt) goto loc_82611C28;
loc_82611CC4:
	// lwz r11,11980(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11980);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82611cd8
	if (!cr6.eq) goto loc_82611CD8;
	// li r11,1
	r11.s64 = 1;
	// stw r11,11988(r31)
	PPC_STORE_U32(r31.u32 + 11988, r11.u32);
loc_82611CD8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82611cec
	if (!cr6.eq) goto loc_82611CEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611d28
	sub_82611D28(ctx, base);
loc_82611CE8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
loc_82611CEC:
	// bgt cr6,0x82611ad8
	if (cr6.gt) goto loc_82611AD8;
	// lwz r11,11960(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11960);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82611d04
	if (!cr6.eq) goto loc_82611D04;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82611D04:
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82612fc8
	sub_82612FC8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_82611D1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82611D20"))) PPC_WEAK_FUNC(sub_82611D20);
PPC_FUNC_IMPL(__imp__sub_82611D20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82611D24"))) PPC_WEAK_FUNC(sub_82611D24);
PPC_FUNC_IMPL(__imp__sub_82611D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611D28"))) PPC_WEAK_FUNC(sub_82611D28);
PPC_FUNC_IMPL(__imp__sub_82611D28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,11984(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11984);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,11012(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// lwz r9,11016(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// li r8,16
	ctx.r8.s64 = 16;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r10,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, ctx.r10.u32);
	// stb r8,11956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11956, ctx.r8.u8);
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,11952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11952, r11.u32);
}

__attribute__((alias("__imp__sub_82611D80"))) PPC_WEAK_FUNC(sub_82611D80);
PPC_FUNC_IMPL(__imp__sub_82611D80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82611D84"))) PPC_WEAK_FUNC(sub_82611D84);
PPC_FUNC_IMPL(__imp__sub_82611D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611D88"))) PPC_WEAK_FUNC(sub_82611D88);
PPC_FUNC_IMPL(__imp__sub_82611D88) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_82611D88"))) PPC_WEAK_FUNC(sub_82611D88);
PPC_FUNC_IMPL(__imp__sub_82611D88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82611d28
	sub_82611D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82611D8C"))) PPC_WEAK_FUNC(sub_82611D8C);
PPC_FUNC_IMPL(__imp__sub_82611D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611D90"))) PPC_WEAK_FUNC(sub_82611D90);
PPC_FUNC_IMPL(__imp__sub_82611D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,11956(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11956);
	// lwz r10,11952(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// slw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,11952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11952, ctx.r9.u32);
	// stb r11,11956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11956, r11.u8);
	// bgtlr 
	if (cr0.gt) return;
	// lwz r8,11016(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r10,11012(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x82611e10
	if (!cr6.lt) goto loc_82611E10;
	// lbz r6,11956(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r11,r10,2
	r11.s64 = ctx.r10.s64 + 2;
	// lbz r7,1(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r5,r6
	ctx.r5.s64 = ctx.r6.s8;
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// stw r11,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, r11.u32);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// or r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 | ctx.r4.u64;
	// neg r6,r6
	ctx.r6.s64 = -ctx.r6.s64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// stb r10,11956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11956, ctx.r10.u8);
	// stw r9,11952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11952, ctx.r9.u32);
	// bgtlr 
	if (cr0.gt) return;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82611e1c
	if (cr6.lt) goto loc_82611E1C;
loc_82611E10:
	// li r11,1
	r11.s64 = 1;
	// stb r11,11959(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11959, r11.u8);
	// blr 
	return;
loc_82611E1C:
	// lbz r8,11956(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r6,11952(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stw r9,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, ctx.r9.u32);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stb r11,11956(r3)
	PPC_STORE_U8(ctx.r3.u32 + 11956, r11.u8);
	// stw r10,11952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11952, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82611E60"))) PPC_WEAK_FUNC(sub_82611E60);
PPC_FUNC_IMPL(__imp__sub_82611E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82611E64"))) PPC_WEAK_FUNC(sub_82611E64);
PPC_FUNC_IMPL(__imp__sub_82611E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82611E68"))) PPC_WEAK_FUNC(sub_82611E68);
PPC_FUNC_IMPL(__imp__sub_82611E68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r11,11952(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// subfic r10,r4,32
	xer.ca = ctx.r4.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r4.s64;
	// srw r31,r11,r10
	r31.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// bl 0x82611d90
	sub_82611D90(ctx, base);
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

__attribute__((alias("__imp__sub_82611E9C"))) PPC_WEAK_FUNC(sub_82611E9C);
PPC_FUNC_IMPL(__imp__sub_82611E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82611EA0"))) PPC_WEAK_FUNC(sub_82611EA0);
PPC_FUNC_IMPL(__imp__sub_82611EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,11012(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,11016(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r24,0(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r21,r3,11012
	r21.s64 = ctx.r3.s64 + 11012;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// lwz r20,4(r3)
	r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r22,r4,r5
	r22.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// blt cr6,0x82611edc
	if (cr6.lt) goto loc_82611EDC;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_82611EDC:
	// add r29,r24,r27
	r29.u64 = r24.u64 + r27.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// add r23,r22,r24
	r23.u64 = r22.u64 + r24.u64;
	// add r26,r29,r5
	r26.u64 = r29.u64 + ctx.r5.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// blt cr6,0x82611f1c
	if (cr6.lt) goto loc_82611F1C;
	// addi r11,r30,64
	r11.s64 = r30.s64 + 64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82611f1c
	if (!cr6.lt) goto loc_82611F1C;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82611ff8
	if (cr6.lt) goto loc_82611FF8;
	// rlwinm r11,r5,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// add r7,r11,r29
	ctx.r7.u64 = r11.u64 + r29.u64;
	// b 0x82611fbc
	goto loc_82611FBC;
loc_82611F1C:
	// rlwinm r11,r5,0,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r5,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFF0;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82611fbc
	if (!cr6.lt) goto loc_82611FBC;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r9,64
	ctx.r9.s64 = 64;
	// rlwinm r11,r11,26,6,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r11,48
	r11.s64 = 48;
loc_82611F54:
	// li r6,128
	ctx.r6.s64 = 128;
	// dcbt r6,r30
	// dcbt r6,r31
	// lvrx128 v62,r8,r30
	temp.u32 = ctx.r8.u32 + r30.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v63,r0,r30
	temp.u32 = r30.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// lvrx128 v61,r10,r30
	temp.u32 = ctx.r10.u32 + r30.u32;
	_mm_store_si128((__m128i*)v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v62,r8,r30
	temp.u32 = ctx.r8.u32 + r30.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v62,v61
	_mm_store_si128((__m128i*)v62.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v61.u8)));
	// lvrx128 v60,r11,r30
	temp.u32 = r11.u32 + r30.u32;
	_mm_store_si128((__m128i*)v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v61,r10,r30
	temp.u32 = ctx.r10.u32 + r30.u32;
	_mm_store_si128((__m128i*)v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v61,v60
	_mm_store_si128((__m128i*)v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v60.u8)));
	// lvrx128 v59,r9,r30
	temp.u32 = ctx.r9.u32 + r30.u32;
	_mm_store_si128((__m128i*)v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v60,r11,r30
	temp.u32 = r11.u32 + r30.u32;
	_mm_store_si128((__m128i*)v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// vor128 v60,v60,v59
	_mm_store_si128((__m128i*)v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v59.u8)));
	// stvrx128 v63,r31,r8
	ea = r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// stvlx128 v62,r31,r8
	ea = r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// stvrx128 v62,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v62.u8[i]);
	// stvlx128 v61,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v61.u8[15 - i]);
	// stvrx128 v61,r31,r11
	ea = r31.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v61.u8[i]);
	// stvlx128 v60,r31,r11
	ea = r31.u32 + r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v60.u8[15 - i]);
	// stvrx128 v60,r31,r9
	ea = r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v60.u8[i]);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// bdnz 0x82611f54
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82611F54;
loc_82611FBC:
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// bge cr6,0x82611ff8
	if (!cr6.lt) goto loc_82611FF8;
	// subf r11,r31,r7
	r11.s64 = ctx.r7.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,28,4,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82611FD8:
	// lvlx128 v63,r0,r30
	temp.u32 = r30.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r8,r30
	temp.u32 = ctx.r8.u32 + r30.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r31,r8
	ea = r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x82611fd8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82611FD8;
loc_82611FF8:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bge cr6,0x8261201c
	if (!cr6.lt) goto loc_8261201C;
	// subf r28,r31,r26
	r28.s64 = r26.s64 - r31.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ea638
	sub_828EA638(ctx, base);
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// add r31,r28,r31
	r31.u64 = r28.u64 + r31.u64;
loc_8261201C:
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// cmplw cr6,r26,r23
	cr6.compare<uint32_t>(r26.u32, r23.u32, xer);
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// beq cr6,0x82612034
	if (cr6.eq) goto loc_82612034;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8261207c
	goto loc_8261207C;
loc_82612034:
	// stw r30,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r30.u32);
	// cmpwi cr6,r22,257
	cr6.compare<int32_t>(r22.s32, 257, xer);
	// li r11,257
	r11.s64 = 257;
	// bgt cr6,0x82612048
	if (cr6.gt) goto loc_82612048;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82612048:
	// add r10,r27,r20
	ctx.r10.u64 = r27.u64 + r20.u64;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// add r3,r10,r24
	ctx.r3.u64 = ctx.r10.u64 + r24.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x8261206c
	if (!cr6.lt) goto loc_8261206C;
	// subf r4,r20,r3
	ctx.r4.s64 = ctx.r3.s64 - r20.s64;
	// subf r5,r3,r11
	ctx.r5.s64 = r11.s64 - ctx.r3.s64;
	// bl 0x828ea638
	sub_828EA638(ctx, base);
loc_8261206C:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// subf r3,r22,r31
	ctx.r3.s64 = r31.s64 - r22.s64;
	// and r11,r11,r31
	r11.u64 = r11.u64 & r31.u64;
	// stw r11,11960(r25)
	PPC_STORE_U32(r25.u32 + 11960, r11.u32);
loc_8261207C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82612080"))) PPC_WEAK_FUNC(sub_82612080);
PPC_FUNC_IMPL(__imp__sub_82612080) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_82612084"))) PPC_WEAK_FUNC(sub_82612084);
PPC_FUNC_IMPL(__imp__sub_82612084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82612088"))) PPC_WEAK_FUNC(sub_82612088);
PPC_FUNC_IMPL(__imp__sub_82612088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// lwz r11,11012(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
	// lwz r10,11016(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// stw r11,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, r11.u32);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x826120b0
	if (cr6.lt) goto loc_826120B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826120B0:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826120BC:
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x826120bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826120BC;
	// stw r11,11012(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11012, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_826120F8"))) PPC_WEAK_FUNC(sub_826120F8);
PPC_FUNC_IMPL(__imp__sub_826120F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826120FC"))) PPC_WEAK_FUNC(sub_826120FC);
PPC_FUNC_IMPL(__imp__sub_826120FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82612100"))) PPC_WEAK_FUNC(sub_82612100);
PPC_FUNC_IMPL(__imp__sub_82612100) {
	PPC_FUNC_PROLOGUE();
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
	// mflr r12
	// bl 0x828e93f4
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r21,11016(r3)
	r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lbz r8,11956(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r25,r3,3644
	r25.s64 = ctx.r3.s64 + 3644;
	// lwz r10,11952(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// addi r24,r3,9020
	r24.s64 = ctx.r3.s64 + 9020;
	// lwz r5,11012(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r23,r3,24
	r23.s64 = ctx.r3.s64 + 24;
	// addi r22,r3,2072
	r22.s64 = ctx.r3.s64 + 2072;
	// addi r27,r3,2584
	r27.s64 = ctx.r3.s64 + 2584;
	// addi r26,r3,3256
	r26.s64 = ctx.r3.s64 + 3256;
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x8261239c
	goto loc_8261239C;
loc_82612144:
	// rlwinm r9,r10,11,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r9,r23
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r23.u32));
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x82612184
	if (!cr0.lt) goto loc_82612184;
	// lis r9,32
	ctx.r9.s64 = 2097152;
loc_82612158:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r25
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + r25.u32));
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt 0x82612158
	if (cr0.lt) goto loc_82612158;
loc_82612184:
	// cmplw cr6,r5,r21
	cr6.compare<uint32_t>(ctx.r5.u32, r21.u32, xer);
	// bge cr6,0x826123b8
	if (!cr6.lt) goto loc_826123B8;
	// lbzx r9,r7,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + r27.u32);
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x826121cc
	if (cr0.gt) goto loc_826121CC;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = -ctx.r9.s64;
	// lbz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r3,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_826121CC:
	// addic. r6,r7,-256
	xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge 0x826121f0
	if (!cr0.lt) goto loc_826121F0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// stbx r7,r30,r4
	PPC_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r7,r9,r4
	PPC_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x8261239c
	goto loc_8261239C;
loc_826121F0:
	// clrlwi r3,r6,29
	ctx.r3.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x82612280
	if (!cr6.eq) goto loc_82612280;
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r9,r9,r22
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r22.u32));
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x8261223c
	if (!cr0.lt) goto loc_8261223C;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_82612210:
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r3,r3,27,5,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// xori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 ^ 1;
	// subf r9,r9,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r24
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r24.u32));
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x82612210
	if (cr0.lt) goto loc_82612210;
loc_8261223C:
	// lbzx r7,r9,r26
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r26.u32);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bgt 0x8261227c
	if (cr0.gt) goto loc_8261227C;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// neg r3,r7
	ctx.r3.s64 = -ctx.r7.s64;
	// lbz r31,0(r5)
	r31.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// slw r7,r31,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_8261227C:
	// addi r3,r9,7
	ctx.r3.s64 = ctx.r9.s64 + 7;
loc_82612280:
	// srawi r9,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// ble cr6,0x82612344
	if (!cr6.gt) goto loc_82612344;
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// ble cr6,0x8261232c
	if (!cr6.gt) goto loc_8261232C;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + r11.u64;
	// lbz r9,12004(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12004);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfic r6,r31,32
	xer.ca = r31.u32 <= 32;
	ctx.r6.s64 = 32 - r31.s64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// srw r6,r10,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// slw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// bgt 0x82612318
	if (cr0.gt) goto loc_82612318;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// addi r31,r9,16
	r31.s64 = ctx.r9.s64 + 16;
	// neg r19,r9
	r19.s64 = -ctx.r9.s64;
	// lbz r20,0(r5)
	r20.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r9,r8,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// extsb r8,r31
	ctx.r8.s64 = r31.s8;
	// or r31,r9,r20
	r31.u64 = ctx.r9.u64 | r20.u64;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// slw r31,r31,r19
	r31.u64 = r19.u8 & 0x20 ? 0 : (r31.u32 << (r19.u8 & 0x3F));
	// or r10,r31,r10
	ctx.r10.u64 = r31.u64 | ctx.r10.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bgt 0x82612318
	if (cr0.gt) goto loc_82612318;
	// lbz r8,1(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// neg r31,r9
	r31.s64 = -ctx.r9.s64;
	// lbz r20,0(r5)
	r20.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// or r20,r8,r20
	r20.u64 = ctx.r8.u64 | r20.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r20,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r20.u32 << (r31.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82612318:
	// addi r9,r7,3014
	ctx.r9.s64 = ctx.r7.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// b 0x82612330
	goto loc_82612330;
loc_8261232C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82612330:
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r7,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r7.u32);
	// stw r6,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r6.u32);
	// b 0x8261235c
	goto loc_8261235C;
loc_82612344:
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwzx r9,r6,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + r29.u32);
	// beq cr6,0x82612360
	if (cr6.eq) goto loc_82612360;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stwx r7,r6,r29
	PPC_STORE_U32(ctx.r6.u32 + r29.u32, ctx.r7.u32);
loc_8261235C:
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
loc_82612360:
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
loc_8261236C:
	// and r9,r7,r31
	ctx.r9.u64 = ctx.r7.u64 & r31.u64;
	// cmpwi cr6,r4,257
	cr6.compare<int32_t>(ctx.r4.s32, 257, xer);
	// lbzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + r30.u32);
	// stbx r9,r30,r4
	PPC_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r9.u8);
	// bge cr6,0x8261238c
	if (!cr6.lt) goto loc_8261238C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// stbx r9,r6,r4
	PPC_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r9.u8);
loc_8261238C:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bgt 0x8261236c
	if (cr0.gt) goto loc_8261236C;
loc_8261239C:
	// cmpw cr6,r4,r28
	cr6.compare<int32_t>(ctx.r4.s32, r28.s32, xer);
	// blt cr6,0x82612144
	if (cr6.lt) goto loc_82612144;
	// stb r8,11956(r11)
	PPC_STORE_U8(r11.u32 + 11956, ctx.r8.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,11952(r11)
	PPC_STORE_U32(r11.u32 + 11952, ctx.r10.u32);
	// stw r5,11012(r11)
	PPC_STORE_U32(r11.u32 + 11012, ctx.r5.u32);
	// b 0x828e9444
	return;
loc_826123B8:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_826123BC"))) PPC_WEAK_FUNC(sub_826123BC);
PPC_FUNC_IMPL(__imp__sub_826123BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x826123b4
	// ERROR 826123B4
	return;
}

__attribute__((alias("__imp__sub_826123C0"))) PPC_WEAK_FUNC(sub_826123C0);
PPC_FUNC_IMPL(__imp__sub_826123C0) {
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
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r16,11016(r3)
	r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lbz r31,11956(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r26,r3,11956
	r26.s64 = ctx.r3.s64 + 11956;
	// lwz r8,11952(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// addi r25,r3,11952
	r25.s64 = ctx.r3.s64 + 11952;
	// lwz r30,11012(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r24,r3,11012
	r24.s64 = ctx.r3.s64 + 11012;
	// addi r20,r3,3644
	r20.s64 = ctx.r3.s64 + 3644;
	// addi r19,r3,9020
	r19.s64 = ctx.r3.s64 + 9020;
	// addi r18,r3,24
	r18.s64 = ctx.r3.s64 + 24;
	// addi r17,r3,2072
	r17.s64 = ctx.r3.s64 + 2072;
	// addi r22,r3,2584
	r22.s64 = ctx.r3.s64 + 2584;
	// addi r21,r3,3256
	r21.s64 = ctx.r3.s64 + 3256;
	// addi r27,r3,12
	r27.s64 = ctx.r3.s64 + 12;
	// cmpw cr6,r4,r28
	cr6.compare<int32_t>(ctx.r4.s32, r28.s32, xer);
	// bge cr6,0x82612714
	if (!cr6.lt) goto loc_82612714;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r23,16
	r23.s64 = 16;
	// addi r10,r10,-26496
	ctx.r10.s64 = ctx.r10.s64 + -26496;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
loc_82612424:
	// rlwinm r10,r8,11,21,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x7FE;
	// lhax r9,r10,r18
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + r18.u32));
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82612464
	if (!cr0.lt) goto loc_82612464;
	// lis r10,32
	ctx.r10.s64 = 2097152;
loc_82612438:
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r7,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// xori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 ^ 1;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r20
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r20.u32));
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x82612438
	if (cr0.lt) goto loc_82612438;
loc_82612464:
	// cmplw cr6,r30,r16
	cr6.compare<uint32_t>(r30.u32, r16.u32, xer);
	// bge cr6,0x82612734
	if (!cr6.lt) goto loc_82612734;
	// lbzx r10,r9,r22
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r22.u32);
	// subf r7,r10,r31
	ctx.r7.s64 = r31.s64 - ctx.r10.s64;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// extsb r31,r7
	r31.s64 = ctx.r7.s8;
	// mr. r10,r31
	ctx.r10.u64 = r31.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt 0x826124ac
	if (cr0.gt) goto loc_826124AC;
	// lbz r7,1(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// neg r6,r10
	ctx.r6.s64 = -ctx.r10.s64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// slw r10,r7,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_826124AC:
	// addic. r7,r9,-256
	xer.ca = ctx.r9.u32 > 255;
	ctx.r7.s64 = ctx.r9.s64 + -256;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x826124c4
	if (!cr0.lt) goto loc_826124C4;
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// stbx r10,r29,r4
	PPC_STORE_U8(r29.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x8261270c
	goto loc_8261270C;
loc_826124C4:
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// cmpwi cr6,r6,7
	cr6.compare<int32_t>(ctx.r6.s32, 7, xer);
	// bne cr6,0x82612554
	if (!cr6.eq) goto loc_82612554;
	// rlwinm r10,r8,9,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 9) & 0x1FE;
	// lhax r10,r10,r17
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + r17.u32));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x82612510
	if (!cr0.lt) goto loc_82612510;
	// lis r9,128
	ctx.r9.s64 = 8388608;
loc_826124E4:
	// and r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r19
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + r19.u32));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt 0x826124e4
	if (cr0.lt) goto loc_826124E4;
loc_82612510:
	// lbzx r9,r10,r21
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r21.u32);
	// subf r6,r9,r31
	ctx.r6.s64 = r31.s64 - ctx.r9.s64;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r31,r6
	r31.s64 = ctx.r6.s8;
	// mr. r9,r31
	ctx.r9.u64 = r31.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x82612550
	if (cr0.gt) goto loc_82612550;
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// neg r5,r9
	ctx.r5.s64 = -ctx.r9.s64;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// extsb r31,r9
	r31.s64 = ctx.r9.s8;
	// or r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 | ctx.r3.u64;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// slw r9,r6,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_82612550:
	// addi r6,r10,7
	ctx.r6.s64 = ctx.r10.s64 + 7;
loc_82612554:
	// srawi r10,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 3;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// ble cr6,0x82612618
	if (!cr6.gt) goto loc_82612618;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// ble cr6,0x82612600
	if (!cr6.gt) goto loc_82612600;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// lbz r10,12004(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12004);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// subf r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	// subfic r7,r3,32
	xer.ca = ctx.r3.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r3.s64;
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// srw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r7.u8 & 0x3F));
	// mr. r10,r31
	ctx.r10.u64 = r31.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// slw r8,r8,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x826125ec
	if (cr0.gt) goto loc_826125EC;
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// neg r14,r10
	r14.s64 = -ctx.r10.s64;
	// lbz r15,0(r30)
	r15.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// extsb r31,r3
	r31.s64 = ctx.r3.s8;
	// or r5,r10,r15
	ctx.r5.u64 = ctx.r10.u64 | r15.u64;
	// mr. r10,r31
	ctx.r10.u64 = r31.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// slw r5,r5,r14
	ctx.r5.u64 = r14.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r14.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bgt 0x826125ec
	if (cr0.gt) goto loc_826125EC;
	// lbz r5,1(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// neg r3,r10
	ctx.r3.s64 = -ctx.r10.s64;
	// lbz r31,0(r30)
	r31.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 | r31.u64;
	// extsb r31,r10
	r31.s64 = ctx.r10.s8;
	// slw r10,r5,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r3.u8 & 0x3F));
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
loc_826125EC:
	// addi r10,r9,3014
	ctx.r10.s64 = ctx.r9.s64 + 3014;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// b 0x82612604
	goto loc_82612604;
loc_82612600:
	// lwz r9,12068(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12068);
loc_82612604:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r10,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r10.u32);
	// stw r7,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r7.u32);
	// b 0x82612630
	goto loc_82612630;
loc_82612618:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// beq cr6,0x82612634
	if (cr6.eq) goto loc_82612634;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stwx r7,r10,r27
	PPC_STORE_U32(ctx.r10.u32 + r27.u32, ctx.r7.u32);
loc_82612630:
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
loc_82612634:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// blt cr6,0x82612654
	if (cr6.lt) goto loc_82612654;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
loc_82612654:
	// subf r6,r9,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r9.s64;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bge cr6,0x82612680
	if (!cr6.lt) goto loc_82612680;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82612668:
	// lbzu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stbx r7,r29,r4
	PPC_STORE_U8(r29.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bgt 0x82612668
	if (cr0.gt) goto loc_82612668;
	// b 0x8261270c
	goto loc_8261270C;
loc_82612680:
	// cmpwi cr6,r10,16
	cr6.compare<int32_t>(ctx.r10.s32, 16, xer);
	// ble cr6,0x826126d0
	if (!cr6.gt) goto loc_826126D0;
	// addi r7,r10,-17
	ctx.r7.s64 = ctx.r10.s64 + -17;
	// add r3,r29,r4
	ctx.r3.u64 = r29.u64 + ctx.r4.u64;
	// rlwinm r7,r7,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// add r5,r9,r29
	ctx.r5.u64 = ctx.r9.u64 + r29.u64;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// rlwinm r7,r6,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 + ctx.r4.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
loc_826126B0:
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r23,r5
	temp.u32 = r23.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// stvlx128 v63,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r3,r23
	ea = ctx.r3.u32 + r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x826126b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826126B0;
loc_826126D0:
	// lvlx128 v63,r9,r29
	temp.u32 = ctx.r9.u32 + r29.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r7,r29,r4
	ctx.r7.u64 = r29.u64 + ctx.r4.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// lvlx128 v62,r29,r4
	temp.u32 = r29.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,-1
	ctx.r6.s64 = -1;
	// lvrx128 v61,r23,r7
	temp.u32 = r23.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v60,r23,r9
	temp.u32 = r23.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v0,v62,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v61.u8)));
	// lvsr v12,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vor128 v13,v63,v60
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v60.u8)));
	// vcmpgtub v12,v11,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_cmpgt_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvlx v12,r29,r4
	ea = r29.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stvrx v12,r7,r23
	ea = ctx.r7.u32 + r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
loc_8261270C:
	// cmpw cr6,r4,r28
	cr6.compare<int32_t>(ctx.r4.s32, r28.s32, xer);
	// blt cr6,0x82612424
	if (cr6.lt) goto loc_82612424;
loc_82612714:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r3,r28,r4
	ctx.r3.s64 = ctx.r4.s64 - r28.s64;
	// stb r31,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r31.u8);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// stw r8,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r30.u32);
	// stw r10,11960(r11)
	PPC_STORE_U32(r11.u32 + 11960, ctx.r10.u32);
	// b 0x828e9430
	return;
loc_82612734:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_82612738"))) PPC_WEAK_FUNC(sub_82612738);
PPC_FUNC_IMPL(__imp__sub_82612738) {
	PPC_FUNC_PROLOGUE();
	// b 0x82612730
	// ERROR 82612730
	return;
}

__attribute__((alias("__imp__sub_8261273C"))) PPC_WEAK_FUNC(sub_8261273C);
PPC_FUNC_IMPL(__imp__sub_8261273C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82612740"))) PPC_WEAK_FUNC(sub_82612740);
PPC_FUNC_IMPL(__imp__sub_82612740) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,257
	cr6.compare<int32_t>(ctx.r4.s32, 257, xer);
	// bge cr6,0x82612798
	if (!cr6.lt) goto loc_82612798;
	// subfic r5,r4,257
	xer.ca = ctx.r4.u32 <= 257;
	ctx.r5.s64 = 257 - ctx.r4.s64;
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// blt cr6,0x82612770
	if (cr6.lt) goto loc_82612770;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82612770:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82612100
	sub_82612100(ctx, base);
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// stw r3,11960(r29)
	PPC_STORE_U32(r29.u32 + 11960, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add. r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bgt 0x82612798
	if (cr0.gt) goto loc_82612798;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x826127a8
	goto loc_826127A8;
loc_82612798:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826123c0
	sub_826123C0(ctx, base);
loc_826127A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826127AC"))) PPC_WEAK_FUNC(sub_826127AC);
PPC_FUNC_IMPL(__imp__sub_826127AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826127B0"))) PPC_WEAK_FUNC(sub_826127B0);
PPC_FUNC_IMPL(__imp__sub_826127B0) {
	PPC_FUNC_PROLOGUE();
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
	// mflr r12
	// bl 0x828e93f0
	// lwz r19,11016(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r26,r4,r5
	r26.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lbz r9,11956(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r23,r3,3644
	r23.s64 = ctx.r3.s64 + 3644;
	// lwz r10,11952(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// addi r22,r3,9020
	r22.s64 = ctx.r3.s64 + 9020;
	// lwz r31,11012(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r21,r3,24
	r21.s64 = ctx.r3.s64 + 24;
	// addi r20,r3,2072
	r20.s64 = ctx.r3.s64 + 2072;
	// addi r25,r3,2584
	r25.s64 = ctx.r3.s64 + 2584;
	// addi r24,r3,3256
	r24.s64 = ctx.r3.s64 + 3256;
	// addi r28,r3,3508
	r28.s64 = ctx.r3.s64 + 3508;
	// addi r27,r3,3636
	r27.s64 = ctx.r3.s64 + 3636;
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// b 0x82612b00
	goto loc_82612B00;
loc_826127FC:
	// rlwinm r8,r10,11,21,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r8,r21
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + r21.u32));
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x8261283c
	if (!cr0.lt) goto loc_8261283C;
	// lis r8,32
	ctx.r8.s64 = 2097152;
loc_82612810:
	// and r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r23
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + r23.u32));
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt 0x82612810
	if (cr0.lt) goto loc_82612810;
loc_8261283C:
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(r31.u32, r19.u32, xer);
	// bge cr6,0x82612b1c
	if (!cr6.lt) goto loc_82612B1C;
	// lbzx r8,r7,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + r25.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt 0x82612884
	if (cr0.gt) goto loc_82612884;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r5,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_82612884:
	// addic. r6,r7,-256
	xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge 0x826128a8
	if (!cr0.lt) goto loc_826128A8;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// stbx r7,r30,r4
	PPC_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r7,r8,r4
	PPC_STORE_U8(ctx.r8.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82612b00
	goto loc_82612B00;
loc_826128A8:
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// bne cr6,0x82612938
	if (!cr6.eq) goto loc_82612938;
	// rlwinm r8,r10,9,23,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r8,r8,r20
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + r20.u32));
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x826128f4
	if (!cr0.lt) goto loc_826128F4;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_826128C8:
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r5,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r22
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + r22.u32));
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x826128c8
	if (cr0.lt) goto loc_826128C8;
loc_826128F4:
	// lbzx r7,r8,r24
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + r24.u32);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// mr. r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bgt 0x82612934
	if (cr0.gt) goto loc_82612934;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// neg r5,r7
	ctx.r5.s64 = -ctx.r7.s64;
	// lbz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// slw r7,r3,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_82612934:
	// addi r5,r8,7
	ctx.r5.s64 = ctx.r8.s64 + 7;
loc_82612938:
	// srawi r8,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 3;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// ble cr6,0x82612ab0
	if (!cr6.gt) goto loc_82612AB0;
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + r11.u64;
	// lbz r7,12004(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12004);
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// blt cr6,0x82612a30
	if (cr6.lt) goto loc_82612A30;
	// addic. r7,r7,-3
	xer.ca = ctx.r7.u32 > 2;
	ctx.r7.s64 = ctx.r7.s64 + -3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x826129c0
	if (cr0.eq) goto loc_826129C0;
	// lbz r8,12004(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12004);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// subf r8,r3,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r3.s64;
	// subfic r7,r9,35
	xer.ca = ctx.r9.u32 <= 35;
	ctx.r7.s64 = 35 - ctx.r9.s64;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// addi r3,r9,-3
	ctx.r3.s64 = ctx.r9.s64 + -3;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x826129c4
	if (cr0.gt) goto loc_826129C4;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// neg r3,r8
	ctx.r3.s64 = -ctx.r8.s64;
	// lbz r18,0(r31)
	r18.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r18,r9,r18
	r18.u64 = ctx.r9.u64 | r18.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r18,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// b 0x826129c4
	goto loc_826129C4;
loc_826129C0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_826129C4:
	// rlwinm r3,r10,7,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r6,3014
	ctx.r7.s64 = ctx.r6.s64 + 3014;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r3,r28
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + r28.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r9,r7,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + r27.u32);
	// subf r8,r9,r18
	ctx.r8.s64 = r18.s64 - ctx.r9.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt 0x82612a28
	if (cr0.gt) goto loc_82612A28;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// neg r3,r8
	ctx.r3.s64 = -ctx.r8.s64;
	// lbz r18,0(r31)
	r18.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r18,r9,r18
	r18.u64 = ctx.r9.u64 | r18.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r18,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_82612A28:
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x82612a9c
	goto loc_82612A9C;
loc_82612A30:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82612a98
	if (cr6.eq) goto loc_82612A98;
	// lbz r8,12004(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12004);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// subfic r8,r8,32
	xer.ca = ctx.r8.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r8.s64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// srw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// mr. r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x82612a84
	if (cr0.gt) goto loc_82612A84;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// neg r3,r8
	ctx.r3.s64 = -ctx.r8.s64;
	// lbz r18,0(r31)
	r18.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// or r18,r9,r18
	r18.u64 = ctx.r9.u64 | r18.u64;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// slw r8,r18,r3
	ctx.r8.u64 = ctx.r3.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_82612A84:
	// addi r8,r6,3014
	ctx.r8.s64 = ctx.r6.s64 + 3014;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// b 0x82612a9c
	goto loc_82612A9C;
loc_82612A98:
	// li r8,1
	ctx.r8.s64 = 1;
loc_82612A9C:
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r7,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r7.u32);
	// stw r6,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r6.u32);
	// b 0x82612ac0
	goto loc_82612AC0;
loc_82612AB0:
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r8,r7,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + r29.u32);
	// stwx r6,r7,r29
	PPC_STORE_U32(ctx.r7.u32 + r29.u32, ctx.r6.u32);
loc_82612AC0:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// subf r7,r8,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r8.s64;
loc_82612AD0:
	// and r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 & ctx.r3.u64;
	// cmpwi cr6,r4,257
	cr6.compare<int32_t>(ctx.r4.s32, 257, xer);
	// lbzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + r30.u32);
	// stbx r8,r30,r4
	PPC_STORE_U8(r30.u32 + ctx.r4.u32, ctx.r8.u8);
	// bge cr6,0x82612af0
	if (!cr6.lt) goto loc_82612AF0;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// stbx r8,r6,r4
	PPC_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r8.u8);
loc_82612AF0:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bgt 0x82612ad0
	if (cr0.gt) goto loc_82612AD0;
loc_82612B00:
	// cmpw cr6,r4,r26
	cr6.compare<int32_t>(ctx.r4.s32, r26.s32, xer);
	// blt cr6,0x826127fc
	if (cr6.lt) goto loc_826127FC;
	// stb r9,11956(r11)
	PPC_STORE_U8(r11.u32 + 11956, ctx.r9.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,11952(r11)
	PPC_STORE_U32(r11.u32 + 11952, ctx.r10.u32);
	// stw r31,11012(r11)
	PPC_STORE_U32(r11.u32 + 11012, r31.u32);
	// b 0x828e9440
	return;
loc_82612B1C:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_82612B20"))) PPC_WEAK_FUNC(sub_82612B20);
PPC_FUNC_IMPL(__imp__sub_82612B20) {
	PPC_FUNC_PROLOGUE();
	// b 0x82612b18
	// ERROR 82612B18
	return;
}

__attribute__((alias("__imp__sub_82612B24"))) PPC_WEAK_FUNC(sub_82612B24);
PPC_FUNC_IMPL(__imp__sub_82612B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82612B28"))) PPC_WEAK_FUNC(sub_82612B28);
PPC_FUNC_IMPL(__imp__sub_82612B28) {
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
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r14,11016(r3)
	r14.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lbz r8,11956(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r26,r3,11956
	r26.s64 = ctx.r3.s64 + 11956;
	// lwz r10,11952(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11952);
	// addi r25,r3,11952
	r25.s64 = ctx.r3.s64 + 11952;
	// lwz r30,11012(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r24,r3,11012
	r24.s64 = ctx.r3.s64 + 11012;
	// addi r18,r3,3644
	r18.s64 = ctx.r3.s64 + 3644;
	// addi r17,r3,9020
	r17.s64 = ctx.r3.s64 + 9020;
	// addi r16,r3,24
	r16.s64 = ctx.r3.s64 + 24;
	// addi r15,r3,2072
	r15.s64 = ctx.r3.s64 + 2072;
	// addi r20,r3,2584
	r20.s64 = ctx.r3.s64 + 2584;
	// addi r19,r3,3256
	r19.s64 = ctx.r3.s64 + 3256;
	// addi r23,r3,3508
	r23.s64 = ctx.r3.s64 + 3508;
	// addi r22,r3,3636
	r22.s64 = ctx.r3.s64 + 3636;
	// addi r27,r3,12
	r27.s64 = ctx.r3.s64 + 12;
	// cmpw cr6,r4,r28
	cr6.compare<int32_t>(ctx.r4.s32, r28.s32, xer);
	// bge cr6,0x82612f2c
	if (!cr6.lt) goto loc_82612F2C;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r21,16
	r21.s64 = 16;
	// addi r9,r9,-26496
	ctx.r9.s64 = ctx.r9.s64 + -26496;
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82612B94:
	// rlwinm r9,r10,11,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r9,r16
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r16.u32));
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge 0x82612bd4
	if (!cr0.lt) goto loc_82612BD4;
	// lis r9,32
	ctx.r9.s64 = 2097152;
loc_82612BA8:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r18
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + r18.u32));
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt 0x82612ba8
	if (cr0.lt) goto loc_82612BA8;
loc_82612BD4:
	// cmplw cr6,r30,r14
	cr6.compare<uint32_t>(r30.u32, r14.u32, xer);
	// bge cr6,0x82612f4c
	if (!cr6.lt) goto loc_82612F4C;
	// lbzx r9,r7,r20
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + r20.u32);
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x82612c1c
	if (cr0.gt) goto loc_82612C1C;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = -ctx.r9.s64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r5,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82612C1C:
	// addic. r6,r7,-256
	xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bge 0x82612c34
	if (!cr0.lt) goto loc_82612C34;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// stbx r9,r29,r4
	PPC_STORE_U8(r29.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x82612f24
	goto loc_82612F24;
loc_82612C34:
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r5,7
	cr6.compare<int32_t>(ctx.r5.s32, 7, xer);
	// bne cr6,0x82612cc4
	if (!cr6.eq) goto loc_82612CC4;
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r9,r9,r15
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r15.u32));
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x82612c80
	if (!cr0.lt) goto loc_82612C80;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_82612C54:
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r5,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r17
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r17.u32));
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x82612c54
	if (cr0.lt) goto loc_82612C54;
loc_82612C80:
	// lbzx r7,r9,r19
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + r19.u32);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bgt 0x82612cc0
	if (cr0.gt) goto loc_82612CC0;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// neg r5,r7
	ctx.r5.s64 = -ctx.r7.s64;
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// slw r7,r3,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_82612CC0:
	// addi r5,r9,7
	ctx.r5.s64 = ctx.r9.s64 + 7;
loc_82612CC4:
	// srawi r9,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// ble cr6,0x82612e40
	if (!cr6.gt) goto loc_82612E40;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + r11.u64;
	// lbz r7,12004(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12004);
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// blt cr6,0x82612db8
	if (cr6.lt) goto loc_82612DB8;
	// addic. r7,r7,-3
	xer.ca = ctx.r7.u32 > 2;
	ctx.r7.s64 = ctx.r7.s64 + -3;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82612d48
	if (cr0.eq) goto loc_82612D48;
	// lbz r9,12004(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12004);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// addi r3,r9,-3
	ctx.r3.s64 = ctx.r9.s64 + -3;
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subfic r7,r9,35
	xer.ca = ctx.r9.u32 <= 35;
	ctx.r7.s64 = 35 - ctx.r9.s64;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x82612d4c
	if (cr0.gt) goto loc_82612D4C;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = -ctx.r9.s64;
	// lbz r31,0(r30)
	r31.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x82612d4c
	goto loc_82612D4C;
loc_82612D48:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82612D4C:
	// rlwinm r3,r10,7,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r6,3014
	ctx.r7.s64 = ctx.r6.s64 + 3014;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r3,r23
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + r23.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r7,r22
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + r22.u32);
	// subf r8,r9,r31
	ctx.r8.s64 = r31.s64 - ctx.r9.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x82612db0
	if (cr0.gt) goto loc_82612DB0;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = -ctx.r9.s64;
	// lbz r31,0(r30)
	r31.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82612DB0:
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x82612e2c
	goto loc_82612E2C;
loc_82612DB8:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82612e20
	if (cr6.eq) goto loc_82612E20;
	// lbz r9,12004(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12004);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// subfic r7,r3,32
	xer.ca = ctx.r3.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r3.s64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x82612e0c
	if (cr0.gt) goto loc_82612E0C;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = -ctx.r9.s64;
	// lbz r31,0(r30)
	r31.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82612E0C:
	// addi r9,r6,3014
	ctx.r9.s64 = ctx.r6.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// b 0x82612e2c
	goto loc_82612E2C;
loc_82612E20:
	// addi r9,r6,3014
	ctx.r9.s64 = ctx.r6.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
loc_82612E2C:
	// lwz r7,4(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r7,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r7.u32);
	// stw r6,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r6.u32);
	// b 0x82612e50
	goto loc_82612E50;
loc_82612E40:
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwzx r9,r7,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + r27.u32);
	// stwx r6,r7,r27
	PPC_STORE_U32(ctx.r7.u32 + r27.u32, ctx.r6.u32);
loc_82612E50:
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r6,r9,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r9.s64;
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// and r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ctx.r7.u64;
	// subf r6,r7,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r7.s64;
	// cmplw cr6,r6,r9
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, xer);
	// bge cr6,0x82612e98
	if (!cr6.lt) goto loc_82612E98;
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// bge cr6,0x82612e98
	if (!cr6.lt) goto loc_82612E98;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82612E80:
	// lbzu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stbx r6,r29,r4
	PPC_STORE_U8(r29.u32 + ctx.r4.u32, ctx.r6.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bgt 0x82612e80
	if (cr0.gt) goto loc_82612E80;
	// b 0x82612f24
	goto loc_82612F24;
loc_82612E98:
	// cmpwi cr6,r9,16
	cr6.compare<int32_t>(ctx.r9.s32, 16, xer);
	// ble cr6,0x82612ee8
	if (!cr6.gt) goto loc_82612EE8;
	// addi r6,r9,-17
	ctx.r6.s64 = ctx.r9.s64 + -17;
	// add r31,r29,r4
	r31.u64 = r29.u64 + ctx.r4.u64;
	// rlwinm r6,r6,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// add r3,r7,r29
	ctx.r3.u64 = ctx.r7.u64 + r29.u64;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
loc_82612EC8:
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r21,r3
	temp.u32 = r21.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v62.u8)));
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvrx128 v63,r31,r21
	ea = r31.u32 + r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, v63.u8[i]);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x82612ec8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82612EC8;
loc_82612EE8:
	// lvlx128 v63,r7,r29
	temp.u32 = ctx.r7.u32 + r29.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r29,r4
	ctx.r6.u64 = r29.u64 + ctx.r4.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// lvlx128 v62,r29,r4
	temp.u32 = r29.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,-1
	ctx.r5.s64 = -1;
	// lvrx128 v61,r21,r6
	temp.u32 = r21.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)v61.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx128 v60,r21,r7
	temp.u32 = r21.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v0,v62,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v61.u8)));
	// lvsr v12,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vor128 v13,v63,v60
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v60.u8)));
	// vcmpgtub v12,v11,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_cmpgt_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvlx v12,r29,r4
	ea = r29.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvrx v12,r6,r21
	ea = ctx.r6.u32 + r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
loc_82612F24:
	// cmpw cr6,r4,r28
	cr6.compare<int32_t>(ctx.r4.s32, r28.s32, xer);
	// blt cr6,0x82612b94
	if (cr6.lt) goto loc_82612B94;
loc_82612F2C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r3,r28,r4
	ctx.r3.s64 = ctx.r4.s64 - r28.s64;
	// stb r8,0(r26)
	PPC_STORE_U8(r26.u32 + 0, ctx.r8.u8);
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r30,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r30.u32);
	// stw r9,11960(r11)
	PPC_STORE_U32(r11.u32 + 11960, ctx.r9.u32);
	// b 0x828e9430
	return;
loc_82612F4C:
	// li r3,-1
	ctx.r3.s64 = -1;
}

__attribute__((alias("__imp__sub_82612F50"))) PPC_WEAK_FUNC(sub_82612F50);
PPC_FUNC_IMPL(__imp__sub_82612F50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82612f48
	// ERROR 82612F48
	return;
}

__attribute__((alias("__imp__sub_82612F54"))) PPC_WEAK_FUNC(sub_82612F54);
PPC_FUNC_IMPL(__imp__sub_82612F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82612F58"))) PPC_WEAK_FUNC(sub_82612F58);
PPC_FUNC_IMPL(__imp__sub_82612F58) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,257
	cr6.compare<int32_t>(ctx.r4.s32, 257, xer);
	// bge cr6,0x82612fb0
	if (!cr6.lt) goto loc_82612FB0;
	// subfic r5,r4,257
	xer.ca = ctx.r4.u32 <= 257;
	ctx.r5.s64 = 257 - ctx.r4.s64;
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// blt cr6,0x82612f88
	if (cr6.lt) goto loc_82612F88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82612F88:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826127b0
	sub_826127B0(ctx, base);
	// subf r11,r3,r30
	r11.s64 = r30.s64 - ctx.r3.s64;
	// stw r3,11960(r29)
	PPC_STORE_U32(r29.u32 + 11960, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add. r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bgt 0x82612fb0
	if (cr0.gt) goto loc_82612FB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82612fc0
	goto loc_82612FC0;
loc_82612FB0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82612b28
	sub_82612B28(ctx, base);
loc_82612FC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82612FC4"))) PPC_WEAK_FUNC(sub_82612FC4);
PPC_FUNC_IMPL(__imp__sub_82612FC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82612FC8"))) PPC_WEAK_FUNC(sub_82612FC8);
PPC_FUNC_IMPL(__imp__sub_82612FC8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r31,11020(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11020);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82613064
	if (cr6.eq) goto loc_82613064;
	// lwz r11,11964(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11964);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82613008
	if (cr6.eq) goto loc_82613008;
	// lwz r11,11972(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11972);
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// blt cr6,0x8261300c
	if (cr6.lt) goto loc_8261300C;
loc_82613008:
	// li r28,0
	r28.s64 = 0;
loc_8261300C:
	// lbz r11,12260(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 12260);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82613028
	if (cr0.eq) goto loc_82613028;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8261306c
	if (cr6.eq) goto loc_8261306C;
	// lwz r31,12264(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12264);
loc_82613028:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82613064
	if (cr6.eq) goto loc_82613064;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82611920
	sub_82611920(ctx, base);
	// lbz r11,12260(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 12260);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82613064
	if (cr0.eq) goto loc_82613064;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,11020(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 11020);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82605698
	sub_82605698(ctx, base);
loc_82613064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8261306C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82605698
	sub_82605698(ctx, base);
}

__attribute__((alias("__imp__sub_82613074"))) PPC_WEAK_FUNC(sub_82613074);
PPC_FUNC_IMPL(__imp__sub_82613074) {
	PPC_FUNC_PROLOGUE();
	// b 0x82613030
	// ERROR 82613030
	return;
}

__attribute__((alias("__imp__sub_82613078"))) PPC_WEAK_FUNC(sub_82613078);
PPC_FUNC_IMPL(__imp__sub_82613078) {
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
	// stwu r1,-880(r1)
	ea = -880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
loc_82613098:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82611e68
	sub_82611E68(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// stbx r10,r31,r11
	PPC_STORE_U8(r31.u32 + r11.u32, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,20
	cr6.compare<int32_t>(r31.s32, 20, xer);
	// blt cr6,0x82613098
	if (cr6.lt) goto loc_82613098;
	// lbz r11,11959(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 11959);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826130d0
	if (cr0.eq) goto loc_826130D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826135b0
	goto loc_826135B0;
loc_826130D0:
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82613720
	sub_82613720(ctx, base);
	// lwz r11,11012(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 11012);
	// lwz r10,11952(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 11952);
	// li r4,0
	ctx.r4.s64 = 0;
	// lbz r7,11956(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 11956);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lbz r3,11959(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 11959);
	// lwz r31,11016(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 11016);
	// ble cr6,0x82613594
	if (!cr6.gt) goto loc_82613594;
loc_8261310C:
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// lhax r8,r9,r8
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r8.u32));
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x8261315c
	if (!cr0.lt) goto loc_8261315C;
	// lis r9,128
	ctx.r9.s64 = 8388608;
loc_82613124:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r5
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + ctx.r5.u32));
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x82613124
	if (cr0.lt) goto loc_82613124;
loc_8261315C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x826131e8
	if (cr0.gt) goto loc_826131E8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x826131b8
	if (!cr6.lt) goto loc_826131B8;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r26,r9
	r26.s64 = -ctx.r9.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// slw r6,r6,r26
	ctx.r6.u64 = r26.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r26.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bgt 0x826131e8
	if (cr0.gt) goto loc_826131E8;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x826131c0
	if (cr6.lt) goto loc_826131C0;
loc_826131B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826131e8
	goto loc_826131E8;
loc_826131C0:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = -ctx.r9.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// slw r9,r5,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_826131E8:
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82613594
	if (!cr0.eq) goto loc_82613594;
	// cmpwi cr6,r8,17
	cr6.compare<int32_t>(ctx.r8.s32, 17, xer);
	// bne cr6,0x826132c4
	if (!cr6.eq) goto loc_826132C4;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r8,r10,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x82613284
	if (cr0.gt) goto loc_82613284;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x82613254
	if (!cr6.lt) goto loc_82613254;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r26,r9
	r26.s64 = -ctx.r9.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// slw r6,r6,r26
	ctx.r6.u64 = r26.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r26.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bgt 0x82613284
	if (cr0.gt) goto loc_82613284;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x8261325c
	if (cr6.lt) goto loc_8261325C;
loc_82613254:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82613284
	goto loc_82613284;
loc_8261325C:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = -ctx.r9.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// slw r9,r5,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82613284:
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, r29.s32, xer);
	// blt cr6,0x82613298
	if (cr6.lt) goto loc_82613298;
	// subf r9,r4,r29
	ctx.r9.s64 = r29.s64 - ctx.r4.s64;
loc_82613298:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82613564
	if (!cr6.gt) goto loc_82613564;
	// add r8,r4,r28
	ctx.r8.u64 = ctx.r4.u64 + r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82613394
	if (cr0.eq) goto loc_82613394;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826132B8:
	// stbu r6,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x826132b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826132B8;
	// b 0x82613394
	goto loc_82613394;
loc_826132C4:
	// cmpwi cr6,r8,18
	cr6.compare<int32_t>(ctx.r8.s32, 18, xer);
	// bne cr6,0x8261339c
	if (!cr6.eq) goto loc_8261339C;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r8,r10,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// addi r9,r9,-5
	ctx.r9.s64 = ctx.r9.s64 + -5;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x82613358
	if (cr0.gt) goto loc_82613358;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x82613328
	if (!cr6.lt) goto loc_82613328;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r26,r9
	r26.s64 = -ctx.r9.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// slw r6,r6,r26
	ctx.r6.u64 = r26.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r26.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bgt 0x82613358
	if (cr0.gt) goto loc_82613358;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x82613330
	if (cr6.lt) goto loc_82613330;
loc_82613328:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82613358
	goto loc_82613358;
loc_82613330:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = -ctx.r9.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// slw r9,r5,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82613358:
	// addi r9,r8,20
	ctx.r9.s64 = ctx.r8.s64 + 20;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpw cr6,r8,r29
	cr6.compare<int32_t>(ctx.r8.s32, r29.s32, xer);
	// blt cr6,0x8261336c
	if (cr6.lt) goto loc_8261336C;
	// subf r9,r4,r29
	ctx.r9.s64 = r29.s64 - ctx.r4.s64;
loc_8261336C:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82613564
	if (!cr6.gt) goto loc_82613564;
	// add r8,r4,r28
	ctx.r8.u64 = ctx.r4.u64 + r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82613394
	if (cr0.eq) goto loc_82613394;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8261338C:
	// stbu r6,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8261338c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261338C;
loc_82613394:
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// b 0x82613564
	goto loc_82613564;
loc_8261339C:
	// cmpwi cr6,r8,19
	cr6.compare<int32_t>(ctx.r8.s32, 19, xer);
	// bne cr6,0x8261356c
	if (!cr6.eq) goto loc_8261356C;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mr. r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt 0x82613430
	if (cr0.gt) goto loc_82613430;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x82613400
	if (!cr6.lt) goto loc_82613400;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// neg r26,r10
	r26.s64 = -ctx.r10.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r10,r7,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// or r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 | ctx.r5.u64;
	// mr. r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// slw r6,r6,r26
	ctx.r6.u64 = r26.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r26.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bgt 0x82613430
	if (cr0.gt) goto loc_82613430;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x82613408
	if (cr6.lt) goto loc_82613408;
loc_82613400:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82613430
	goto loc_82613430;
loc_82613408:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// neg r6,r10
	ctx.r6.s64 = -ctx.r10.s64;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// slw r10,r5,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_82613430:
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// blt cr6,0x82613444
	if (cr6.lt) goto loc_82613444;
	// subf r5,r4,r29
	ctx.r5.s64 = r29.s64 - ctx.r4.s64;
loc_82613444:
	// rlwinm r10,r9,9,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x1FE;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bge 0x82613494
	if (!cr0.lt) goto loc_82613494;
	// lis r10,128
	ctx.r10.s64 = 8388608;
loc_8261345C:
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// addi r26,r1,112
	r26.s64 = ctx.r1.s64 + 112;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r8,r26
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + r26.u32));
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x8261345c
	if (cr0.lt) goto loc_8261345C;
loc_82613494:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x82613520
	if (cr0.gt) goto loc_82613520;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bge cr6,0x826134f0
	if (!cr6.lt) goto loc_826134F0;
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// neg r25,r9
	r25.s64 = -ctx.r9.s64;
	// lbz r26,0(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r9,r7,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// or r6,r9,r26
	ctx.r6.u64 = ctx.r9.u64 | r26.u64;
	// mr. r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// slw r6,r6,r25
	ctx.r6.u64 = r25.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r25.u8 & 0x3F));
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bgt 0x82613520
	if (cr0.gt) goto loc_82613520;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x826134f8
	if (cr6.lt) goto loc_826134F8;
loc_826134F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82613520
	goto loc_82613520;
loc_826134F8:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = -ctx.r9.s64;
	// lbz r26,0(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r7,r7,8
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// or r26,r7,r26
	r26.u64 = ctx.r7.u64 | r26.u64;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// slw r9,r26,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_82613520:
	// lbzx r9,r4,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + r27.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// blt cr6,0x82613538
	if (cr6.lt) goto loc_82613538;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
loc_82613538:
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82613564
	if (!cr6.gt) goto loc_82613564;
	// add r9,r4,r28
	ctx.r9.u64 = ctx.r4.u64 + r28.u64;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// beq 0x82613560
	if (cr0.eq) goto loc_82613560;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_82613558:
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82613558
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82613558;
loc_82613560:
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
loc_82613564:
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// b 0x82613588
	goto loc_82613588;
loc_8261356C:
	// lbzx r9,r4,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + r27.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r9,r9,17
	ctx.r9.s64 = ctx.r9.s64 + 17;
	// cmpwi cr6,r9,17
	cr6.compare<int32_t>(ctx.r9.s32, 17, xer);
	// blt cr6,0x82613584
	if (cr6.lt) goto loc_82613584;
	// addi r9,r9,-17
	ctx.r9.s64 = ctx.r9.s64 + -17;
loc_82613584:
	// stbx r9,r4,r28
	PPC_STORE_U8(ctx.r4.u32 + r28.u32, ctx.r9.u8);
loc_82613588:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r29
	cr6.compare<int32_t>(ctx.r4.s32, r29.s32, xer);
	// blt cr6,0x8261310c
	if (cr6.lt) goto loc_8261310C;
loc_82613594:
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// stw r11,11012(r30)
	PPC_STORE_U32(r30.u32 + 11012, r11.u32);
	// stb r3,11959(r30)
	PPC_STORE_U8(r30.u32 + 11959, ctx.r3.u8);
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r10,11952(r30)
	PPC_STORE_U32(r30.u32 + 11952, ctx.r10.u32);
	// stb r7,11956(r30)
	PPC_STORE_U8(r30.u32 + 11956, ctx.r7.u8);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_826135B0:
	// addi r1,r1,880
	ctx.r1.s64 = ctx.r1.s64 + 880;
}

__attribute__((alias("__imp__sub_826135B4"))) PPC_WEAK_FUNC(sub_826135B4);
PPC_FUNC_IMPL(__imp__sub_826135B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826135B8"))) PPC_WEAK_FUNC(sub_826135B8);
PPC_FUNC_IMPL(__imp__sub_826135B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r30,r3,2584
	r30.s64 = ctx.r3.s64 + 2584;
	// addi r5,r3,11028
	ctx.r5.s64 = ctx.r3.s64 + 11028;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82613078
	sub_82613078(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826135f4
	if (!cr0.eq) goto loc_826135F4;
loc_826135EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8261368c
	goto loc_8261368C;
loc_826135F4:
	// lbz r11,11957(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11957);
	// addi r6,r31,2840
	ctx.r6.s64 = r31.s64 + 2840;
	// addi r5,r31,11284
	ctx.r5.s64 = r31.s64 + 11284;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r4,r11,3
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 3);
	// bl 0x82613078
	sub_82613078(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826135ec
	if (cr0.eq) goto loc_826135EC;
	// lbz r11,11957(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11957);
	// addi r8,r31,3644
	ctx.r8.s64 = r31.s64 + 3644;
	// addi r7,r31,24
	ctx.r7.s64 = r31.s64 + 24;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// li r6,10
	ctx.r6.s64 = 10;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82613720
	sub_82613720(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826135ec
	if (cr0.eq) goto loc_826135EC;
	// addi r30,r31,3256
	r30.s64 = r31.s64 + 3256;
	// addi r5,r31,11700
	ctx.r5.s64 = r31.s64 + 11700;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82613078
	sub_82613078(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826135ec
	if (cr0.eq) goto loc_826135EC;
	// addi r8,r31,9020
	ctx.r8.s64 = r31.s64 + 9020;
	// addi r7,r31,2072
	ctx.r7.s64 = r31.s64 + 2072;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,249
	ctx.r4.s64 = 249;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82613720
	sub_82613720(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8261368C:
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

__attribute__((alias("__imp__sub_826136A0"))) PPC_WEAK_FUNC(sub_826136A0);
PPC_FUNC_IMPL(__imp__sub_826136A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826136A4"))) PPC_WEAK_FUNC(sub_826136A4);
PPC_FUNC_IMPL(__imp__sub_826136A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826136A8"))) PPC_WEAK_FUNC(sub_826136A8);
PPC_FUNC_IMPL(__imp__sub_826136A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r3,3636
	r29.s64 = ctx.r3.s64 + 3636;
loc_826136C0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82611e68
	sub_82611E68(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// stbx r11,r29,r30
	PPC_STORE_U8(r29.u32 + r30.u32, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,8
	cr6.compare<int32_t>(r30.s32, 8, xer);
	// blt cr6,0x826136c0
	if (cr6.lt) goto loc_826136C0;
	// lbz r11,11959(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11959);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826136f4
	if (cr0.eq) goto loc_826136F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82613714
	goto loc_82613714;
loc_826136F4:
	// addi r5,r31,3508
	ctx.r5.s64 = r31.s64 + 3508;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826139e0
	sub_826139E0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_82613714:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82613718"))) PPC_WEAK_FUNC(sub_82613718);
PPC_FUNC_IMPL(__imp__sub_82613718) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8261371C"))) PPC_WEAK_FUNC(sub_8261371C);
PPC_FUNC_IMPL(__imp__sub_8261371C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613720"))) PPC_WEAK_FUNC(sub_82613720);
PPC_FUNC_IMPL(__imp__sub_82613720) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	r11.s64 = 16;
	// li r26,0
	r26.s64 = 0;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
loc_82613750:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82613750
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82613750;
	// mr r11,r26
	r11.u64 = r26.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82613788
	if (cr6.eq) goto loc_82613788;
	// mtctr r25
	ctr.u64 = r25.u64;
loc_82613768:
	// lbzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r24.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// bdnz 0x82613768
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82613768;
loc_82613788:
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// li r28,1
	r28.s64 = 1;
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826137A0:
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// subfic r7,r10,16
	xer.ca = ctx.r10.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r10.s64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// slw r8,r4,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r7.u8 & 0x3F));
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwx r9,r11,r5
	PPC_STORE_U32(r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x826137a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826137A0;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x8261380c
	if (cr6.eq) goto loc_8261380C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82613804
	if (!cr6.eq) goto loc_82613804;
	// clrlwi r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// slw r11,r28,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// b 0x826139d0
	goto loc_826139D0;
loc_82613804:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826139d4
	goto loc_826139D4;
loc_8261380C:
	// clrlwi r31,r6,24
	r31.u64 = ctx.r6.u32 & 0xFF;
	// mr r11,r28
	r11.u64 = r28.u64;
	// subfic r10,r31,16
	xer.ca = r31.u32 <= 16;
	ctx.r10.s64 = 16 - r31.s64;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// blt cr6,0x82613868
	if (cr6.lt) goto loc_82613868;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8261382C:
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// subf r6,r11,r31
	ctx.r6.s64 = r31.s64 - r11.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// slw r6,r28,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r6,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// srw r6,r3,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// ble cr6,0x8261382c
	if (!cr6.gt) goto loc_8261382C;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bgt cr6,0x82613894
	if (cr6.gt) goto loc_82613894;
loc_82613868:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r10,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r10.s64 = 16 - r11.s64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// subfic r11,r11,17
	xer.ca = r11.u32 <= 17;
	r11.s64 = 17 - r11.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82613884:
	// slw r11,r28,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x82613884
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82613884;
loc_82613894:
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// clrlwi r30,r7,24
	r30.u64 = ctx.r7.u32 & 0xFF;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 >> (r30.u8 & 0x3F));
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beq cr6,0x826138cc
	if (cr6.eq) goto loc_826138CC;
	// slw r9,r28,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r28.u32 << (r31.u8 & 0x3F));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 + r29.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_826138CC:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// ble cr6,0x826139d0
	if (!cr6.gt) goto loc_826139D0;
loc_826138DC:
	// lbzx r9,r4,r24
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + r24.u32);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x826139c4
	if (cr0.eq) goto loc_826139C4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// bgt cr6,0x82613944
	if (cr6.gt) goto loc_82613944;
	// slw r9,r28,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r28.u32 << (r31.u8 & 0x3F));
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82613804
	if (cr6.gt) goto loc_82613804;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8261393c
	if (!cr6.lt) goto loc_8261393C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
	// add r11,r9,r29
	r11.u64 = ctx.r9.u64 + r29.u64;
	// extsh r9,r4
	ctx.r9.s64 = ctx.r4.s16;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
loc_82613934:
	// sthu r9,2(r11)
	ea = 2 + r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	r11.u32 = ea;
	// bdnz 0x82613934
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82613934;
loc_8261393C:
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// b 0x826139c4
	goto loc_826139C4;
loc_82613944:
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// subf r6,r31,r9
	ctx.r6.s64 = ctx.r9.s64 - r31.s64;
	// srw r10,r11,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 >> (r30.u8 & 0x3F));
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// slw r6,r11,r31
	ctx.r6.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 << (r31.u8 & 0x3F));
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// neg r7,r5
	ctx.r7.s64 = -ctx.r5.s64;
	// addi r11,r9,-4
	r11.s64 = ctx.r9.s64 + -4;
loc_82613970:
	// lhz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82613990
	if (!cr0.eq) goto loc_82613990;
	// sth r26,6(r11)
	PPC_STORE_U16(r11.u32 + 6, r26.u16);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sthu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U16(ea, r26.u16);
	r11.u32 = ea;
	// sth r7,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_82613990:
	// extsh. r9,r6
	ctx.r9.s64 = ctx.r6.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lha r9,0(r8)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r8.u32 + 0));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bge 0x826139ac
	if (!cr0.lt) goto loc_826139AC;
	// subf r9,r9,r27
	ctx.r9.s64 = r27.s64 - ctx.r9.s64;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// b 0x826139b0
	goto loc_826139B0;
loc_826139AC:
	// subf r8,r9,r27
	ctx.r8.s64 = r27.s64 - ctx.r9.s64;
loc_826139B0:
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82613970
	if (!cr0.eq) goto loc_82613970;
	// sth r4,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r4.u16);
loc_826139C4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r4,r25
	cr6.compare<int32_t>(ctx.r4.s32, r25.s32, xer);
	// blt cr6,0x826138dc
	if (cr6.lt) goto loc_826138DC;
loc_826139D0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_826139D4:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_826139D8"))) PPC_WEAK_FUNC(sub_826139D8);
PPC_FUNC_IMPL(__imp__sub_826139D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826139DC"))) PPC_WEAK_FUNC(sub_826139DC);
PPC_FUNC_IMPL(__imp__sub_826139DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826139E0"))) PPC_WEAK_FUNC(sub_826139E0);
PPC_FUNC_IMPL(__imp__sub_826139E0) {
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
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
loc_82613A00:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// sthx r31,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, r31.u16);
	// ble cr6,0x82613a00
	if (!cr6.gt) goto loc_82613A00;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82613A20:
	// lbzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r30.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// lhzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sthx r8,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// blt cr6,0x82613a20
	if (cr6.lt) goto loc_82613A20;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// sth r31,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, r31.u16);
loc_82613A54:
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subfic r6,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r6.s64 = 16 - r11.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r5,r1,130
	ctx.r5.s64 = ctx.r1.s64 + 130;
	// lhzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lhzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// slw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sthx r10,r8,r5
	PPC_STORE_U16(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u16);
	// ble cr6,0x82613a54
	if (!cr6.gt) goto loc_82613A54;
	// lhz r11,162(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 162);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82613aa4
	if (cr0.eq) goto loc_82613AA4;
loc_82613A9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82613b94
	goto loc_82613B94;
loc_82613AA4:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_82613AA8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subfic r8,r11,7
	xer.ca = r11.u32 <= 7;
	ctx.r8.s64 = 7 - r11.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// lhzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r6,r6,23,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x7FFFFF;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sthx r6,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u16);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// sthx r8,r10,r5
	PPC_STORE_U16(ctx.r10.u32 + ctx.r5.u32, ctx.r8.u16);
	// ble cr6,0x82613aa8
	if (!cr6.gt) goto loc_82613AA8;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bgt cr6,0x82613b10
	if (cr6.gt) goto loc_82613B10;
loc_82613AE8:
	// subfic r10,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r10.s64 = 16 - r11.s64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// sthx r10,r8,r6
	PPC_STORE_U16(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u16);
	// ble cr6,0x82613ae8
	if (!cr6.gt) goto loc_82613AE8;
loc_82613B10:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_82613B28:
	// lbzx r11,r5,r30
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82613b7c
	if (cr0.eq) goto loc_82613B7C;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lhzx r11,r9,r7
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r7.u32);
	// lhzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// bgt cr6,0x82613a9c
	if (cr6.gt) goto loc_82613A9C;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82613b78
	if (!cr6.lt) goto loc_82613B78;
loc_82613B64:
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stbx r6,r11,r29
	PPC_STORE_U8(r11.u32 + r29.u32, ctx.r6.u8);
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82613b64
	if (cr6.lt) goto loc_82613B64;
loc_82613B78:
	// sthx r10,r9,r7
	PPC_STORE_U16(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u16);
loc_82613B7C:
	// addi r11,r5,1
	r11.s64 = ctx.r5.s64 + 1;
	// clrlwi r6,r11,24
	ctx.r6.u64 = r11.u32 & 0xFF;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,8
	cr6.compare<uint32_t>(ctx.r6.u32, 8, xer);
	// blt cr6,0x82613b28
	if (cr6.lt) goto loc_82613B28;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82613B94:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82613B98"))) PPC_WEAK_FUNC(sub_82613B98);
PPC_FUNC_IMPL(__imp__sub_82613B98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82613B9C"))) PPC_WEAK_FUNC(sub_82613B9C);
PPC_FUNC_IMPL(__imp__sub_82613B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613BA0"))) PPC_WEAK_FUNC(sub_82613BA0);
PPC_FUNC_IMPL(__imp__sub_82613BA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,-13160(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -13160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82613bd0
	if (!cr0.eq) goto loc_82613BD0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82613c1c
	goto loc_82613C1C;
loc_82613BD0:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,0
	r11.s64 = 0;
	// li r9,-3606
	ctx.r9.s64 = -3606;
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
	// sth r9,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r9.u16);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x828ed0a8
	sub_828ED0A8(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// li r3,0
	ctx.r3.s64 = 0;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,30352(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30352);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82613C1C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82613C2C"))) PPC_WEAK_FUNC(sub_82613C2C);
PPC_FUNC_IMPL(__imp__sub_82613C2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82613C30"))) PPC_WEAK_FUNC(sub_82613C30);
PPC_FUNC_IMPL(__imp__sub_82613C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lbz r11,-13160(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -13160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82613c4c
	if (!cr0.eq) goto loc_82613C4C;
loc_82613C40:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82613C4C:
	// lhz r11,0(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,61930
	cr6.compare<uint32_t>(r11.u32, 61930, xer);
	// bne cr6,0x82613c40
	if (!cr6.eq) goto loc_82613C40;
	// lhz r11,2(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82613c6c
	if (cr6.eq) goto loc_82613C6C;
	// li r11,2
	r11.s64 = 2;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
loc_82613C6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82613C74"))) PPC_WEAK_FUNC(sub_82613C74);
PPC_FUNC_IMPL(__imp__sub_82613C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82613C78"))) PPC_WEAK_FUNC(sub_82613C78);
PPC_FUNC_IMPL(__imp__sub_82613C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82613c8c
	if (!cr6.eq) {
		sub_82613C8C(ctx, base);
		return;
	}
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82613C8C"))) PPC_WEAK_FUNC(sub_82613C8C);
PPC_FUNC_IMPL(__imp__sub_82613C8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82613ba0
	sub_82613BA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613C90"))) PPC_WEAK_FUNC(sub_82613C90);
PPC_FUNC_IMPL(__imp__sub_82613C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82613ca4
	if (!cr6.eq) {
		sub_82613CA4(ctx, base);
		return;
	}
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82613CA4"))) PPC_WEAK_FUNC(sub_82613CA4);
PPC_FUNC_IMPL(__imp__sub_82613CA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82613c30
	sub_82613C30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82613CA8"))) PPC_WEAK_FUNC(sub_82613CA8);
PPC_FUNC_IMPL(__imp__sub_82613CA8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r14,-31933
	r14.s64 = -2092761088;
	// lbz r11,-13160(r14)
	r11.u64 = PPC_LOAD_U8(r14.u32 + -13160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82613cd0
	if (cr0.eq) goto loc_82613CD0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x826140fc
	goto loc_826140FC;
loc_82613CD0:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r11,-13152
	r31.s64 = r11.s64 + -13152;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r11,-1
	r11.s64 = -1;
	// sth r30,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, r30.u16);
	// stb r30,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r30.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r30.u8);
	// mr r26,r30
	r26.u64 = r30.u64;
	// stb r30,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, r30.u8);
	// mr r24,r30
	r24.u64 = r30.u64;
	// sth r30,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, r30.u16);
	// mr r23,r30
	r23.u64 = r30.u64;
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// mr r20,r30
	r20.u64 = r30.u64;
	// stb r30,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, r30.u8);
	// mr r21,r30
	r21.u64 = r30.u64;
	// stb r30,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, r30.u8);
	// mr r18,r30
	r18.u64 = r30.u64;
	// sth r30,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, r30.u16);
	// mr r16,r30
	r16.u64 = r30.u64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// mr r22,r30
	r22.u64 = r30.u64;
	// stb r30,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r30.u8);
	// mr r19,r30
	r19.u64 = r30.u64;
	// stb r30,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, r30.u8);
	// mr r17,r30
	r17.u64 = r30.u64;
	// sth r30,138(r1)
	PPC_STORE_U16(ctx.r1.u32 + 138, r30.u16);
	// mr r15,r30
	r15.u64 = r30.u64;
	// stb r30,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r30.u8);
	// stb r30,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, r30.u8);
	// stb r30,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, r30.u8);
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// sth r10,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r10.u16);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// sth r10,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r10.u16);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// bl 0x825d7a90
	sub_825D7A90(ctx, base);
	// lis r11,-32761
	r11.s64 = -2147024896;
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ori r29,r11,14
	r29.u64 = r11.u64 | 14;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x825d7a90
	sub_825D7A90(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x825d7a90
	sub_825D7A90(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x825d7a90
	sub_825D7A90(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r3,r11,-26480
	ctx.r3.s64 = r11.s64 + -26480;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r27,r11,-19440
	r27.s64 = r11.s64 + -19440;
	// addi r3,r27,-5272
	ctx.r3.s64 = r27.s64 + -5272;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// addi r3,r27,-3648
	ctx.r3.s64 = r27.s64 + -3648;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// addi r3,r27,-2056
	ctx.r3.s64 = r27.s64 + -2056;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// addi r3,r27,-5792
	ctx.r3.s64 = r27.s64 + -5792;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// addi r3,r27,-4096
	ctx.r3.s64 = r27.s64 + -4096;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// addi r3,r27,-2576
	ctx.r3.s64 = r27.s64 + -2576;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// addi r3,r27,-528
	ctx.r3.s64 = r27.s64 + -528;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// lis r25,-31933
	r25.s64 = -2092761088;
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// stw r30,-13088(r25)
	PPC_STORE_U32(r25.u32 + -13088, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,128
	ctx.r4.s64 = 128;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r11,r30
	r11.u64 = r30.u64;
	// bl 0x825d5330
	sub_825D5330(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,-13088(r25)
	PPC_STORE_U32(r25.u32 + -13088, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82614024
	if (cr0.lt) goto loc_82614024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d52e0
	sub_825D52E0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,512
	ctx.r8.s64 = 512;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x82604a10
	sub_82604A10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13088(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + -13088);
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r20,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r20.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r22,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r22.u32);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// stw r26,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r26.u32);
	// stw r21,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r21.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r19,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r19.u32);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// stw r24,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r24.u32);
	// stw r18,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r18.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r17,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r17.u32);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// stw r23,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r23.u32);
	// stw r16,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r16.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r15,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r15.u32);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,-13160(r14)
	PPC_STORE_U8(r14.u32 + -13160, r11.u8);
loc_82614024:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82614034
	if (cr6.eq) goto loc_82614034;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82614034:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82614044
	if (cr6.eq) goto loc_82614044;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82614044:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82614054
	if (cr6.eq) goto loc_82614054;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82614054:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82614064
	if (cr6.eq) goto loc_82614064;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82614064:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82614074
	if (cr6.eq) goto loc_82614074;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82614074:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x82614084
	if (cr6.eq) goto loc_82614084;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82614084:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82614094
	if (cr6.eq) goto loc_82614094;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82614094:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x826140a4
	if (cr6.eq) goto loc_826140A4;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826140A4:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x826140b4
	if (cr6.eq) goto loc_826140B4;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826140B4:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x826140c4
	if (cr6.eq) goto loc_826140C4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826140C4:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x826140d4
	if (cr6.eq) goto loc_826140D4;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826140D4:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x826140e4
	if (cr6.eq) goto loc_826140E4;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826140E4:
	// lbz r11,-13160(r14)
	r11.u64 = PPC_LOAD_U8(r14.u32 + -13160);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
loc_826140FC:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_82614100"))) PPC_WEAK_FUNC(sub_82614100);
PPC_FUNC_IMPL(__imp__sub_82614100) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82614104"))) PPC_WEAK_FUNC(sub_82614104);
PPC_FUNC_IMPL(__imp__sub_82614104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82614108"))) PPC_WEAK_FUNC(sub_82614108);
PPC_FUNC_IMPL(__imp__sub_82614108) {
	PPC_FUNC_PROLOGUE();
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
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lbz r11,-13160(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + -13160);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82614130
	if (!cr0.eq) goto loc_82614130;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x826141c8
	goto loc_826141C8;
loc_82614130:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-13152
	r29.s64 = r11.s64 + -13152;
	// addi r31,r29,52
	r31.s64 = r29.s64 + 52;
loc_82614140:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82614154
	if (cr6.eq) goto loc_82614154;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r30,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r30.u32);
loc_82614154:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82614168
	if (cr6.eq) goto loc_82614168;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82614168:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261417c
	if (cr6.eq) goto loc_8261417C;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_8261417C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82614190
	if (cr6.eq) goto loc_82614190;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_82614190:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x82614140
	if (!cr6.lt) goto loc_82614140;
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r3,-13088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -13088);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826141bc
	if (cr6.eq) goto loc_826141BC;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r30,-13088(r31)
	PPC_STORE_U32(r31.u32 + -13088, r30.u32);
loc_826141BC:
	// mr r11,r30
	r11.u64 = r30.u64;
	// stb r30,-13160(r28)
	PPC_STORE_U8(r28.u32 + -13160, r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826141C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826141CC"))) PPC_WEAK_FUNC(sub_826141CC);
PPC_FUNC_IMPL(__imp__sub_826141CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826141D0"))) PPC_WEAK_FUNC(sub_826141D0);
PPC_FUNC_IMPL(__imp__sub_826141D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f14{};
	PPCRegister f15{};
	PPCRegister f16{};
	PPCRegister f17{};
	PPCRegister f18{};
	PPCRegister f19{};
	PPCRegister f20{};
	PPCRegister f21{};
	PPCRegister f22{};
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eaac0
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lbz r11,-13160(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -13160);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82614214
	if (!cr0.eq) goto loc_82614214;
loc_82614208:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x826152a0
	goto loc_826152A0;
loc_82614214:
	// lhz r11,0(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// cmplwi cr6,r11,61930
	cr6.compare<uint32_t>(r11.u32, 61930, xer);
	// bne cr6,0x82614208
	if (!cr6.eq) goto loc_82614208;
	// lhz r11,2(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 2);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82614234
	if (!cr6.eq) goto loc_82614234;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826152a0
	goto loc_826152A0;
loc_82614234:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,26360(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26360);
	f0.f64 = double(temp.f32);
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lfs f26,-15528(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -15528);
	f26.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-32364(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -32364);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f12,4932(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4932);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f30,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f30.f64 = double(temp.f32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f31,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lfs f10,26628(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26628);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// lfs f9,-19232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19232);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f8,-29224(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29224);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f7,876(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 876);
	ctx.f7.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,-19236(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19236);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f13,444(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stfs f13,452(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// li r11,0
	r11.s64 = 0;
	// stfs f9,472(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f8,476(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// stfs f7,480(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 480, temp.u32);
	// stfs f30,432(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f0,436(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f26,440(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f12,448(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f31,456(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stfs f11,460(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f10,464(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f31,468(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f11,484(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 484, temp.u32);
	// stfs f31,488(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stfs f31,492(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// stfs f31,496(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// stfs f31,500(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 500, temp.u32);
	// stfs f31,504(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 504, temp.u32);
	// stfs f31,508(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 508, temp.u32);
	// stfs f31,512(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 512, temp.u32);
	// stfs f31,516(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 516, temp.u32);
	// stfs f31,520(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 520, temp.u32);
	// stfs f31,524(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 524, temp.u32);
	// stfs f31,528(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 528, temp.u32);
	// stfs f31,532(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stfs f31,536(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// stfs f31,540(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 540, temp.u32);
	// std r11,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, r11.u64);
	// lfs f9,26708(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 26708);
	ctx.f9.f64 = double(temp.f32);
	// std r11,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, r11.u64);
	// lfs f6,-19244(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19244);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,-19240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19240);
	ctx.f8.f64 = double(temp.f32);
	// lfs f28,8892(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8892);
	f28.f64 = double(temp.f32);
	// lfs f13,-31316(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31316);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,-19248(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -19248);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f6,136(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f28,140(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f11,156(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f10,160(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f7,168(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stfs f0,180(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,188(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stfs f13,176(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// stfs f13,192(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stfs f31,196(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r11,r11,-19264
	r11.s64 = r11.s64 + -19264;
	// lfs f23,10696(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10696);
	f23.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f7,-19268(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -19268);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,-19272(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -19272);
	ctx.f11.f64 = double(temp.f32);
	// lis r28,-32229
	r28.s64 = -2112159744;
	// lfs f10,-19276(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -19276);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,-19296
	ctx.r10.s64 = ctx.r10.s64 + -19296;
	// lfs f9,-19280(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -19280);
	ctx.f9.f64 = double(temp.f32);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// vor128 v61,v63,v63
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v63.u8));
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// vor128 v60,v63,v63
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)v63.u8));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,-25600(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lfs f29,-13388(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -13388);
	f29.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f8,-19308(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19308);
	ctx.f8.f64 = double(temp.f32);
	// stfs f31,200(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f31,204(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,208(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f31,212(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f31,220(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,224(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f31,228(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f31,240(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f31,244(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f31,252(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f23,256(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f7,260(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f11,264(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f26,268(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f10,272(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f26,276(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f9,280(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f26,284(r1)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f31,288(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f29,292(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f0,296(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f13,300(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f0,304(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f8,308(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f0,312(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f31,316(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f31,320(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f31,324(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f31,328(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f31,332(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// stfs f31,336(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f31,340(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f31,344(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f31,348(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f31,352(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f31,356(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f31,360(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f31,364(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f16,-30928(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -30928);
	f16.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stfs f31,368(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stfs f31,372(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stfs f31,376(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f31,380(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// fmr f27,f0
	f27.f64 = f0.f64;
	// lfs f13,752(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 752);
	ctx.f13.f64 = double(temp.f32);
	// fmr f24,f0
	f24.f64 = f0.f64;
	// lfs f5,-19312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19312);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,20940(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20940);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,-19316(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -19316);
	ctx.f4.f64 = double(temp.f32);
	// stfs f23,560(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 560, temp.u32);
	// stfs f16,564(r1)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 564, temp.u32);
	// stfs f11,568(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 568, temp.u32);
	// stfs f12,572(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 572, temp.u32);
	// stfs f10,576(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 576, temp.u32);
	// stfs f13,580(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 580, temp.u32);
	// stfs f9,584(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 584, temp.u32);
	// stfs f12,588(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 588, temp.u32);
	// stfs f31,592(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 592, temp.u32);
	// stfs f5,596(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 596, temp.u32);
	// stfs f7,600(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 600, temp.u32);
	// stfs f4,604(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 604, temp.u32);
	// stfs f0,608(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 608, temp.u32);
	// stfs f8,612(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 612, temp.u32);
	// stfs f7,616(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 616, temp.u32);
	// stfs f31,620(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 620, temp.u32);
	// stfs f31,624(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// stfs f31,628(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 628, temp.u32);
	// stfs f31,632(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 632, temp.u32);
	// stfs f31,636(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 636, temp.u32);
	// stfs f31,640(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 640, temp.u32);
	// stfs f31,644(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 644, temp.u32);
	// stfs f31,648(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 648, temp.u32);
	// stfs f31,652(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 652, temp.u32);
	// stfs f31,656(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 656, temp.u32);
	// stfs f31,660(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 660, temp.u32);
	// stfs f31,664(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 664, temp.u32);
	// stfs f31,668(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 668, temp.u32);
	// stfs f31,672(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 672, temp.u32);
	// stfs f31,676(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// stfs f31,680(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 680, temp.u32);
	// stfs f31,684(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 684, temp.u32);
	// stfs f28,764(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 764, temp.u32);
	// stfs f6,780(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 780, temp.u32);
	// stfs f13,812(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 812, temp.u32);
	// stfs f13,796(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 796, temp.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r22,100
	r22.s64 = 100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f15,-19320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19320);
	f15.f64 = double(temp.f32);
	// lfs f21,-31496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31496);
	f21.f64 = double(temp.f32);
	// fmr f0,f15
	f0.f64 = f15.f64;
	// beq cr6,0x826145d8
	if (cr6.eq) goto loc_826145D8;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-19324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19324);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f21
	ctx.f13.f64 = double(float(ctx.f13.f64 * f21.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_826145D8:
	// stw r30,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r30.u32);
	// li r23,1
	r23.s64 = 1;
	// lhz r11,2(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 2);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826152b0
	if (!cr0.eq) goto loc_826152B0;
	// lfs f13,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f13,-25600(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,4(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x8261460c
	if (cr6.lt) goto loc_8261460C;
	// stfs f13,4(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r26.u32 + 4, temp.u32);
	// sth r23,2(r26)
	PPC_STORE_U16(r26.u32 + 2, r23.u16);
loc_8261460C:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f27,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	f27.f64 = double(temp.f32);
	// lfs f0,-19328(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19328);
	f0.f64 = double(temp.f32);
	// fmuls f0,f27,f0
	f0.f64 = double(float(f27.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfic r22,r11,1
	xer.ca = r11.u32 <= 1;
	r22.s64 = 1 - r11.s64;
loc_8261462C:
	// lfs f14,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f14.f64 = double(temp.f32);
	// lfs f18,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f18.f64 = double(temp.f32);
	// lvx128 v63,r0,r29
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v62,r0,r27
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vspltw128 v61,v63,0
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// li r11,48
	r11.s64 = 48;
	// vspltw128 v11,v63,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// vspltw128 v3,v63,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// addi r24,r1,704
	r24.s64 = ctx.r1.s64 + 704;
	// lvx128 v60,r29,r9
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r29.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v30,v63,3
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// lvx128 v63,r29,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r29.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// lvx128 v61,r29,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v59,v60,0
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xFF));
	// vspltw128 v58,v63,0
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// lvx128 v0,r27,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v57,v61,0
	_mm_store_si128((__m128i*)v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// lvx128 v13,r27,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r27.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw128 v9,v60,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0xAA));
	// lvx128 v12,r27,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r27.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v8,v59,v62
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v62.f32)));
	// vspltw128 v7,v63,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vmulfp128 v6,v58,v62
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v62.f32)));
	// vspltw128 v5,v61,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// vmulfp128 v4,v57,v62
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(v57.f32), _mm_load_ps(v62.f32)));
	// vspltw128 v2,v60,2
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x55));
	// vspltw128 v1,v63,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// addi r11,r1,720
	r11.s64 = ctx.r1.s64 + 720;
	// vspltw128 v31,v61,2
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// addi r10,r1,736
	ctx.r10.s64 = ctx.r1.s64 + 736;
	// vspltw128 v29,v60,3
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x0));
	// li r9,1
	ctx.r9.s64 = 1;
	// vspltw128 v28,v63,3
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// li r6,4
	ctx.r6.s64 = 4;
	// vmaddfp v11,v11,v0,v10
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// vspltw128 v27,v61,3
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x0));
	// rldicr r28,r9,63,63
	r28.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r5,r1,688
	ctx.r5.s64 = ctx.r1.s64 + 688;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// vmaddfp v10,v9,v0,v8
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v8.f32)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vmaddfp v9,v7,v0,v6
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v0,v5,v0,v4
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v3,v13,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v2,v13,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v9,v1,v13,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v31,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v30,v12,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v11,v29,v12,v10
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v28,v12,v9
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v27,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r24
	_mm_store_si128((__m128i*)(base + ((r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// rldicr r7,r7,62,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 62) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stfs f31,2176(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 2176, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r25,r11,-19344
	r25.s64 = r11.s64 + -19344;
	// rldicr r29,r10,59,63
	r29.u64 = __builtin_rotateleft64(ctx.r10.u64, 59) & 0xFFFFFFFFFFFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,2180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2180, temp.u32);
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,2184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2184, temp.u32);
	// lfs f0,12(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,2188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2188, temp.u32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// bl 0x825dc8f8
	sub_825DC8F8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dc990
	sub_825DC990(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dca20
	sub_825DCA20(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dd020
	sub_825DD020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dd060
	sub_825DD060(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,-13088(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -13088);
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,-13152
	r27.s64 = r11.s64 + -13152;
	// lwz r11,1152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// rlwimi r11,r23,11,19,21
	r11.u64 = (__builtin_rotateleft32(r23.u32, 11) & 0x1C00) | (r11.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// lwz r11,1152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// rlwimi r11,r23,14,16,18
	r11.u64 = (__builtin_rotateleft32(r23.u32, 14) & 0xE000) | (r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// lwz r4,52(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// bl 0x825d7770
	sub_825D7770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,60(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// bl 0x825d7568
	sub_825D7568(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcab0
	sub_825DCAB0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcb40
	sub_825DCB40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dca20
	sub_825DCA20(ctx, base);
	// li r11,4800
	r11.s64 = 4800;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	f0.f64 = double(temp.f32);
	// divwu r11,r30,r11
	r11.u32 = r30.u32 / r11.u32;
	// stfs f29,560(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 560, temp.u32);
	// li r9,1000
	ctx.r9.s64 = 1000;
	// mulli r11,r11,4800
	r11.s64 = r11.s64 * 4800;
	// lfs f22,26452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26452);
	f22.f64 = double(temp.f32);
	// fmuls f0,f0,f22
	f0.f64 = double(float(f0.f64 * f22.f64));
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divwu r10,r30,r9
	ctx.r10.u32 = r30.u32 / ctx.r9.u32;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// li r9,900
	ctx.r9.s64 = 900;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// mulli r11,r10,1000
	r11.s64 = ctx.r10.s64 * 1000;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// divwu r10,r30,r9
	ctx.r10.u32 = r30.u32 / ctx.r9.u32;
	// li r9,3
	ctx.r9.s64 = 3;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mulli r10,r10,900
	ctx.r10.s64 = ctx.r10.s64 * 900;
	// rldicr r24,r9,60,3
	r24.u64 = __builtin_rotateleft64(ctx.r9.u64, 60) & 0xF000000000000000;
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrldi r9,r11,32
	ctx.r9.u64 = r11.u64 & 0xFFFFFFFF;
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r21,6000
	r21.s64 = 6000;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// divwu r9,r11,r21
	ctx.r9.u32 = r11.u32 / r21.u32;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mulli r9,r9,6000
	ctx.r9.s64 = ctx.r9.s64 * 6000;
	// lfs f25,-19360(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -19360);
	f25.f64 = double(temp.f32);
	// frsp f11,f0
	ctx.f11.f64 = double(float(f0.f64));
	// lfs f0,-19356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19356);
	f0.f64 = double(temp.f32);
	// fmuls f17,f13,f0
	f17.f64 = double(float(ctx.f13.f64 * f0.f64));
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfs f30,15384(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15384);
	f30.f64 = double(temp.f32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// li r4,8
	ctx.r4.s64 = 8;
	// fmuls f12,f11,f21
	ctx.f12.f64 = double(float(ctx.f11.f64 * f21.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f11,f0
	ctx.f11.f64 = double(float(f0.f64));
	// lfs f0,-19364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19364);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f13,f17,f30
	ctx.f13.f64 = double(float(f17.f64 * f30.f64));
	// stfs f13,620(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 620, temp.u32);
	// fmuls f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f13,624(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 624, temp.u32);
	// fmuls f13,f11,f25
	ctx.f13.f64 = double(float(ctx.f11.f64 * f25.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stfs f0,628(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 628, temp.u32);
	// fmuls f0,f13,f30
	f0.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f0,592(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 592, temp.u32);
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// stfs f0,2192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2192, temp.u32);
	// li r11,6
	r11.s64 = 6;
	// stfs f14,2196(r31)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(r31.u32 + 2196, temp.u32);
	// stfs f18,2200(r31)
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(r31.u32 + 2200, temp.u32);
	// divw. r11,r22,r11
	r11.s32 = r22.s32 / r11.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,2204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2204, temp.u32);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// stfs f29,6016(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6016, temp.u32);
	// stfs f29,6020(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6020, temp.u32);
	// stfs f29,6024(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6024, temp.u32);
	// stfs f27,6028(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 6028, temp.u32);
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// beq 0x826149c4
	if (cr0.eq) goto loc_826149C4;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
loc_826149C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// bl 0x825d7770
	sub_825D7770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// bl 0x825d7568
	sub_825D7568(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcab0
	sub_825DCAB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcb40
	sub_825DCB40(ctx, base);
	// li r11,22200
	r11.s64 = 22200;
	// li r10,28000
	ctx.r10.s64 = 28000;
	// lwz r9,1152(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// divwu r11,r30,r11
	r11.u32 = r30.u32 / r11.u32;
	// divwu r10,r30,r10
	ctx.r10.u32 = r30.u32 / ctx.r10.u32;
	// mulli r11,r11,22200
	r11.s64 = r11.s64 * 22200;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mulli r10,r10,28000
	ctx.r10.s64 = ctx.r10.s64 * 28000;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// li r8,10100
	ctx.r8.s64 = 10100;
	// rlwinm r11,r9,0,22,18
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE3FF;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// fcfid f10,f0
	ctx.f10.f64 = double(f0.s64);
	// divwu r8,r30,r8
	ctx.r8.u32 = r30.u32 / ctx.r8.u32;
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// mulli r10,r8,10100
	ctx.r10.s64 = ctx.r8.s64 * 10100;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,1152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// rlwimi r11,r23,14,16,18
	r11.u64 = (__builtin_rotateleft32(r23.u32, 14) & 0xE000) | (r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// std r10,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// lfs f8,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f8,f8,f22
	ctx.f8.f64 = double(float(ctx.f8.f64 * f22.f64));
	// lfs f0,-512(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -512);
	f0.f64 = double(temp.f32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fctidz f8,f8
	ctx.f8.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// fmuls f0,f27,f0
	f0.f64 = double(float(f27.f64 * f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f12,-19368(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19368);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lfs f13,-19372(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19372);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lfs f0,-19376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19376);
	f0.f64 = double(temp.f32);
	// divwu r10,r11,r21
	ctx.r10.u32 = r11.u32 / r21.u32;
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// li r6,8
	ctx.r6.s64 = 8;
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// mulli r10,r10,6000
	ctx.r10.s64 = ctx.r10.s64 * 6000;
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// stfs f0,488(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 488, temp.u32);
	// stfs f13,492(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 492, temp.u32);
	// fmuls f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f13,496(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 496, temp.u32);
	// frsp f0,f11
	f0.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f0,f25
	f0.f64 = double(float(f0.f64 * f25.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stfs f0,456(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// li r6,80
	ctx.r6.s64 = 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f22,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	f22.f64 = double(temp.f32);
	// stfs f22,2192(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 2192, temp.u32);
	// lfs f21,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	f21.f64 = double(temp.f32);
	// stfs f21,2196(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 2196, temp.u32);
	// lfs f20,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	f20.f64 = double(temp.f32);
	// stfs f20,2200(r31)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(r31.u32 + 2200, temp.u32);
	// lfs f19,412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	f19.f64 = double(temp.f32);
	// stfs f19,2204(r31)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(r31.u32 + 2204, temp.u32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// stfs f29,6016(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6016, temp.u32);
	// stfs f29,6020(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6020, temp.u32);
	// stfs f29,6024(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6024, temp.u32);
	// stfs f0,6028(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 6028, temp.u32);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f13,436(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lfs f12,472(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// fmuls f26,f27,f26
	f26.f64 = double(float(f27.f64 * f26.f64));
	// li r4,8
	ctx.r4.s64 = 8;
	// lfd f0,-29928(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -29928);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * f0.f64;
	// fmul f0,f12,f0
	f0.f64 = ctx.f12.f64 * f0.f64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,436(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,472(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// stfs f22,2192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 2192, temp.u32);
	// stfs f21,2196(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 2196, temp.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stfs f20,2200(r31)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(r31.u32 + 2200, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f19,2204(r31)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(r31.u32 + 2204, temp.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// stfs f29,6016(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6016, temp.u32);
	// stfs f29,6020(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6020, temp.u32);
	// stfs f29,6024(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6024, temp.u32);
	// stfs f26,6028(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 6028, temp.u32);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x825d7988
	sub_825D7988(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x825d7770
	sub_825D7770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// bl 0x825d7568
	sub_825D7568(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dca20
	sub_825DCA20(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcab0
	sub_825DCAB0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcb40
	sub_825DCB40(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// divwu r10,r30,r21
	ctx.r10.u32 = r30.u32 / r21.u32;
	// li r9,8000
	ctx.r9.s64 = 8000;
	// mulli r10,r10,6000
	ctx.r10.s64 = ctx.r10.s64 * 6000;
	// lfs f0,26972(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26972);
	f0.f64 = double(temp.f32);
	// subf r11,r10,r30
	r11.s64 = r30.s64 - ctx.r10.s64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r7,9000
	ctx.r7.s64 = 9000;
	// lwz r11,1152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,-19380(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19380);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// rlwimi r11,r23,11,19,21
	r11.u64 = (__builtin_rotateleft32(r23.u32, 11) & 0x1C00) | (r11.u64 & 0xFFFFFFFFFFFFE3FF);
	// lfs f12,-19384(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -19384);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// li r10,7000
	ctx.r10.s64 = 7000;
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// fmuls f11,f11,f25
	ctx.f11.f64 = double(float(ctx.f11.f64 * f25.f64));
	// lwz r11,1152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1152);
	// rlwimi r11,r23,14,16,18
	r11.u64 = (__builtin_rotateleft32(r23.u32, 14) & 0xE000) | (r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r11,1152(r31)
	PPC_STORE_U32(r31.u32 + 1152, r11.u32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// lfs f10,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// divwu r9,r11,r9
	ctx.r9.u32 = r11.u32 / ctx.r9.u32;
	// lfs f0,-19388(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -19388);
	f0.f64 = double(temp.f32);
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// mulli r9,r9,8000
	ctx.r9.s64 = ctx.r9.s64 * 8000;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// li r23,3000
	r23.s64 = 3000;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f13,26860(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26860);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f30
	ctx.f11.f64 = double(float(ctx.f11.f64 * f30.f64));
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f11,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// divwu r9,r11,r7
	ctx.r9.u32 = r11.u32 / ctx.r7.u32;
	// mulli r9,r9,9000
	ctx.r9.s64 = ctx.r9.s64 * 9000;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f12,-19392(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -19392);
	ctx.f12.f64 = double(temp.f32);
	// li r9,4000
	ctx.r9.s64 = 4000;
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// lfs f11,-19396(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19396);
	ctx.f11.f64 = double(temp.f32);
	// divwu r8,r30,r10
	ctx.r8.u32 = r30.u32 / ctx.r10.u32;
	// divwu r9,r30,r9
	ctx.r9.u32 = r30.u32 / ctx.r9.u32;
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// mulli r8,r8,7000
	ctx.r8.s64 = ctx.r8.s64 * 7000;
	// mulli r11,r9,4000
	r11.s64 = ctx.r9.s64 * 4000;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// subf r9,r8,r30
	ctx.r9.s64 = r30.s64 - ctx.r8.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f0,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	f0.f64 = double(temp.f32);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lis r11,-32251
	r11.s64 = -2113601536;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// lfs f0,-19400(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19400);
	f0.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f9,-19404(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19404);
	ctx.f9.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// lfs f10,-19408(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -19408);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmuls f20,f24,f10
	f20.f64 = double(float(f24.f64 * ctx.f10.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// divwu r9,r11,r23
	ctx.r9.u32 = r11.u32 / r23.u32;
	// fcfid f13,f8
	ctx.f13.f64 = double(ctx.f8.s64);
	// fcfid f10,f7
	ctx.f10.f64 = double(ctx.f7.s64);
	// mulli r9,r9,3000
	ctx.r9.s64 = ctx.r9.s64 * 3000;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f12,12(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// mulli r10,r10,7000
	ctx.r10.s64 = ctx.r10.s64 * 7000;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// stfs f0,204(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// rlwinm r23,r22,2,0,29
	r23.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f26,384(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	f26.f64 = double(temp.f32);
	// stfs f26,2192(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 2192, temp.u32);
	// lfs f25,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	f25.f64 = double(temp.f32);
	// stfs f25,2196(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 2196, temp.u32);
	// lfs f22,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	f22.f64 = double(temp.f32);
	// stfs f22,2200(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 2200, temp.u32);
	// lfs f21,396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	f21.f64 = double(temp.f32);
	// stfs f21,2204(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 2204, temp.u32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// stfs f28,6016(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 6016, temp.u32);
	// stfs f28,6020(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 6020, temp.u32);
	// stfs f28,6024(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 6024, temp.u32);
	// stfs f20,6028(r31)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(r31.u32 + 6028, temp.u32);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// rldicr r7,r7,61,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 61) & 0xFFFFFFFFFFFFFFFF;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f0,-25596(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25596);
	f0.f64 = double(temp.f32);
	// li r4,8
	ctx.r4.s64 = 8;
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// subfic r11,r22,101
	xer.ca = r22.u32 <= 101;
	r11.s64 = 101 - r22.s64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f29,128(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f0,f24,f16
	f0.f64 = double(float(f24.f64 * f16.f64));
	// stfs f31,168(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stfs f28,6016(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 6016, temp.u32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// stfs f28,6020(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 6020, temp.u32);
	// addi r11,r11,-19424
	r11.s64 = r11.s64 + -19424;
	// stfs f28,6024(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 6024, temp.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stfs f0,6028(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 6028, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// stfs f31,2176(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 2176, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,2180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2180, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,2184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2184, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,2188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2188, temp.u32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// lfs f0,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	f0.f64 = double(temp.f32);
	// stfs f0,2192(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2192, temp.u32);
	// lfs f0,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	f0.f64 = double(temp.f32);
	// stfs f0,2196(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2196, temp.u32);
	// lfs f0,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	f0.f64 = double(temp.f32);
	// stfs f0,2200(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2200, temp.u32);
	// lfs f0,428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	f0.f64 = double(temp.f32);
	// stfs f0,2204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2204, temp.u32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// mulli r6,r23,5
	ctx.r6.s64 = r23.s64 * 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
	// stfs f31,2176(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 2176, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,4(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,2180(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2180, temp.u32);
	// lfs f0,8(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,2184(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2184, temp.u32);
	// lfs f0,12(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,2188(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2188, temp.u32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// stfs f26,2192(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 2192, temp.u32);
	// stfs f25,2196(r31)
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + 2196, temp.u32);
	// stfs f22,2200(r31)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + 2200, temp.u32);
	// stfs f21,2204(r31)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + 2204, temp.u32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// lwz r4,36(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// bl 0x825d7770
	sub_825D7770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,44(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// bl 0x825d7568
	sub_825D7568(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcab0
	sub_825DCAB0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcb40
	sub_825DCB40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dca20
	sub_825DCA20(ctx, base);
	// li r11,6300
	r11.s64 = 6300;
	// li r10,24000
	ctx.r10.s64 = 24000;
	// fmuls f0,f17,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f17.f64 * f30.f64));
	// divwu r11,r30,r11
	r11.u32 = r30.u32 / r11.u32;
	// stfs f0,316(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// divwu r10,r30,r10
	ctx.r10.u32 = r30.u32 / ctx.r10.u32;
	// mulli r11,r11,6300
	r11.s64 = r11.s64 * 6300;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// li r9,15000
	ctx.r9.s64 = 15000;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// mulli r11,r10,24000
	r11.s64 = ctx.r10.s64 * 24000;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divwu r9,r30,r9
	ctx.r9.u32 = r30.u32 / ctx.r9.u32;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// mulli r10,r9,15000
	ctx.r10.s64 = ctx.r9.s64 * 15000;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// fcfid f12,f0
	ctx.f12.f64 = double(f0.s64);
	// subf r10,r10,r30
	ctx.r10.s64 = r30.s64 - ctx.r10.s64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(f0.s64);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,-19440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19440);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-19428(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19428);
	f0.f64 = double(temp.f32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f13,-19432(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19432);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f11,f0
	f31.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f0,-19436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -19436);
	f0.f64 = double(temp.f32);
	// frsp f11,f10
	ctx.f11.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 * f30.f64));
	// stfs f12,320(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f28,f27,f0
	f28.f64 = double(float(f27.f64 * f0.f64));
	// fmuls f10,f31,f30
	ctx.f10.f64 = double(float(f31.f64 * f30.f64));
	// stfs f10,288(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f0,f13,f30
	f0.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f0,324(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f12,2192(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 2192, temp.u32);
	// stfs f14,2196(r31)
	temp.f32 = float(f14.f64);
	PPC_STORE_U32(r31.u32 + 2196, temp.u32);
	// stfs f18,2200(r31)
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(r31.u32 + 2200, temp.u32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,2204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 2204, temp.u32);
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r11,r11,r29
	r11.u64 = r11.u64 | r29.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// lfs f0,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f15
	f0.f64 = double(float(f0.f64 - f15.f64));
	// stfs f23,256(r1)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f0,288(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// stfs f29,6016(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6016, temp.u32);
	// srawi r11,r22,1
	xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r11.s64 = r22.s32 >> 1;
	// stfs f29,6020(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6020, temp.u32);
	// stfs f29,6024(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6024, temp.u32);
	// stfs f28,6028(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 6028, temp.u32);
	// addze. r30,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r30.s64 = temp.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// beq 0x826151d4
	if (cr0.eq) goto loc_826151D4;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
loc_826151D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dcb40
	sub_825DCB40(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fmuls f13,f31,f30
	ctx.f13.f64 = double(float(f31.f64 * f30.f64));
	// stfs f0,256(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f13,288(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lfs f0,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f0.f64 = double(temp.f32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// fmuls f31,f27,f0
	f31.f64 = double(float(f27.f64 * f0.f64));
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7180
	sub_825D7180(ctx, base);
	// stfs f29,6016(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6016, temp.u32);
	// stfs f29,6020(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6020, temp.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stfs f29,6024(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 6024, temp.u32);
	// stfs f31,6028(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 6028, temp.u32);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// beq cr6,0x82615248
	if (cr6.eq) goto loc_82615248;
	// rlwinm r6,r30,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
loc_82615248:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7988
	sub_825D7988(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7770
	sub_825D7770(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7568
	sub_825D7568(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// lhz r11,2(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 2);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// ori r10,r10,10
	ctx.r10.u64 = ctx.r10.u64 | 10;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
loc_826152A0:
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// addi r12,r1,-96
	r12.s64 = ctx.r1.s64 + -96;
	// bl 0x828eab0c
	// b 0x828e944c
	return;
loc_826152B0:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8261462c
	if (!cr6.eq) goto loc_8261462C;
	// lfs f13,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f30,f13
	f0.f64 = double(float(-(f0.f64 * f30.f64 - ctx.f13.f64)));
	// stfs f0,4(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 4, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x826152d8
	if (cr6.gt) goto loc_826152D8;
	// li r11,3
	r11.s64 = 3;
	// stfs f31,4(r26)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r26.u32 + 4, temp.u32);
	// sth r11,2(r26)
	PPC_STORE_U16(r26.u32 + 2, r11.u16);
loc_826152D8:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f13,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f18,f13,f30
	f18.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f18,96(r1)
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f27,f13
	f27.f64 = ctx.f13.f64;
	// fmr f24,f13
	f24.f64 = ctx.f13.f64;
	// lfs f0,-19328(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19328);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fmr f14,f18
	f14.f64 = f18.f64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfic r22,r11,1
	xer.ca = r11.u32 <= 1;
	r22.s64 = 1 - r11.s64;
}

__attribute__((alias("__imp__sub_8261530C"))) PPC_WEAK_FUNC(sub_8261530C);
PPC_FUNC_IMPL(__imp__sub_8261530C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82614634
	// ERROR 82614634
	return;
}

__attribute__((alias("__imp__sub_82615310"))) PPC_WEAK_FUNC(sub_82615310);
PPC_FUNC_IMPL(__imp__sub_82615310) {
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
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// std r7,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r7.u64);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// std r10,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r10.u64);
	// beq cr6,0x82615358
	if (cr6.eq) goto loc_82615358;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82615358
	if (cr6.eq) goto loc_82615358;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826141d0
	sub_826141D0(ctx, base);
	// b 0x82615360
	goto loc_82615360;
loc_82615358:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82615360:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8261536C"))) PPC_WEAK_FUNC(sub_8261536C);
PPC_FUNC_IMPL(__imp__sub_8261536C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82615370"))) PPC_WEAK_FUNC(sub_82615370);
PPC_FUNC_IMPL(__imp__sub_82615370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lbz r11,-13076(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -13076);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826153ac
	if (!cr0.eq) goto loc_826153AC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8261539C:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826153ec
	if (cr6.eq) goto loc_826153EC;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// b 0x826153f0
	goto loc_826153F0;
loc_826153AC:
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x826153c8
	if (!cr6.lt) goto loc_826153C8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826153c8
	if (cr6.eq) goto loc_826153C8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8314d80c
	__imp__XamAvatarGetManifestLocalUser(ctx, base);
	// b 0x826153d0
	goto loc_826153D0;
loc_826153C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_826153D0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8261539c
	if (cr6.lt) goto loc_8261539C;
	// subfic r11,r31,0
	xer.ca = r31.u32 <= 0;
	r11.s64 = 0 - r31.s64;
	// li r10,997
	ctx.r10.s64 = 997;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// b 0x826153f4
	goto loc_826153F4;
loc_826153EC:
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
loc_826153F0:
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_826153F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82615404"))) PPC_WEAK_FUNC(sub_82615404);
PPC_FUNC_IMPL(__imp__sub_82615404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82615408"))) PPC_WEAK_FUNC(sub_82615408);
PPC_FUNC_IMPL(__imp__sub_82615408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lbz r11,-13076(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -13076);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82615444
	if (!cr0.eq) goto loc_82615444;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82615434:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82615494
	if (cr6.eq) goto loc_82615494;
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// b 0x82615498
	goto loc_82615498;
loc_82615444:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82615470
	if (cr6.eq) goto loc_82615470;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82615470
	if (cr6.eq) goto loc_82615470;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82615470
	if (cr0.eq) goto loc_82615470;
	// rlwinm. r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82615470
	if (!cr0.eq) goto loc_82615470;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x8314d81c
	__imp__XamAvatarGetMetadataRandom(ctx, base);
	// b 0x82615478
	goto loc_82615478;
loc_82615470:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82615478:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82615434
	if (cr6.lt) goto loc_82615434;
	// subfic r11,r31,0
	xer.ca = r31.u32 <= 0;
	r11.s64 = 0 - r31.s64;
	// li r10,997
	ctx.r10.s64 = 997;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// b 0x8261549c
	goto loc_8261549C;
loc_82615494:
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
loc_82615498:
	// li r3,1627
	ctx.r3.s64 = 1627;
loc_8261549C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826154AC"))) PPC_WEAK_FUNC(sub_826154AC);
PPC_FUNC_IMPL(__imp__sub_826154AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826154B0"))) PPC_WEAK_FUNC(sub_826154B0);
PPC_FUNC_IMPL(__imp__sub_826154B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826154bc
	if (!cr6.eq) {
		sub_826154BC(ctx, base);
		return;
	}
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826154BC"))) PPC_WEAK_FUNC(sub_826154BC);
PPC_FUNC_IMPL(__imp__sub_826154BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d82c
	__imp__XamAvatarManifestGetBodyType(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826154C0"))) PPC_WEAK_FUNC(sub_826154C0);
PPC_FUNC_IMPL(__imp__sub_826154C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCVRegister v54{};
	PPCVRegister v55{};
	PPCVRegister v56{};
	PPCVRegister v57{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7104(r1)
	ea = -7104 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826154f0
	if (!cr6.eq) goto loc_826154F0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f1,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82615668
	goto loc_82615668;
loc_826154F0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b96fb8
	sub_82B96FB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d82c
	__imp__XamAvatarManifestGetBodyType(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82615890
	sub_82615890(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x82615878
	sub_82615878(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826165f0
	sub_826165F0(ctx, base);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,19
	ctx.r10.s64 = 19;
	// addi r11,r11,-19216
	r11.s64 = r11.s64 + -19216;
	// vupkd3d128 v62,v63,4
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	v62 = vTemp;
	// vpermwi128 v61,v62,254
	_mm_store_si128((__m128i*)v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v62.u32), 0x1));
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
loc_8261555C:
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mulli r11,r10,96
	r11.s64 = ctx.r10.s64 * 96;
	// vspltw128 v10,v63,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x55));
	// vspltw128 v9,v63,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xAA));
	// vspltw128 v8,v63,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xFF));
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f0,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	f0.f64 = double(temp.f32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lvx128 v63,r9,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v60,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v60.f32, _mm_add_ps(_mm_load_ps(v63.f32), _mm_load_ps(v63.f32)));
	// stfs f0,132(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vspltw128 v58,v63,3
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x0));
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vpermwi128 v59,v63,7
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xF8));
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v57,r0,r7
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// lfs f0,88(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,80(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// vmulfp128 v63,v63,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(v60.f32)));
	// vpermwi128 v55,v60,155
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x64));
	// vpermwi128 v60,v60,99
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v60.u32), 0x9C));
	// stfs f0,104(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lvx128 v56,r0,r6
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v59,v59,v55
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v59.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v55.f32)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v60,v58,v60
	_mm_store_ps(v60.f32, _mm_mul_ps(_mm_load_ps(v58.f32), _mm_load_ps(v60.f32)));
	// lvx128 v58,r0,r5
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v55,v63,64
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xBF));
	// vpermwi128 v63,v63,164
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0x5B));
	// vsubfp128 v55,v61,v55
	_mm_store_ps(v55.f32, _mm_sub_ps(_mm_load_ps(v61.f32), _mm_load_ps(v55.f32)));
	// vaddfp128 v54,v59,v60
	_mm_store_ps(v54.f32, _mm_add_ps(_mm_load_ps(v59.f32), _mm_load_ps(v60.f32)));
	// vsubfp128 v60,v59,v60
	_mm_store_ps(v60.f32, _mm_sub_ps(_mm_load_ps(v59.f32), _mm_load_ps(v60.f32)));
	// vsubfp128 v63,v55,v63
	_mm_store_ps(v63.f32, _mm_sub_ps(_mm_load_ps(v55.f32), _mm_load_ps(v63.f32)));
	// vpermwi128 v59,v54,66
	_mm_store_si128((__m128i*)v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v54.u32), 0xBD));
	// vsldoi128 v55,v60,v54,8
	_mm_store_si128((__m128i*)v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v54.u8), 8));
	// vrlimi128 v59,v60,6,3
	_mm_store_ps(v59.f32, _mm_blend_ps(_mm_load_ps(v59.f32), _mm_permute_ps(_mm_load_ps(v60.f32), 57), 6));
	// vpermwi128 v60,v55,136
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x77));
	// vrlimi128 v63,v62,1,3
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 57), 1));
	// vrlimi128 v60,v63,3,0
	_mm_store_ps(v60.f32, _mm_blend_ps(_mm_load_ps(v60.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 228), 3));
	// vpermwi128 v55,v63,7
	_mm_store_si128((__m128i*)v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v63.u32), 0xF8));
	// vrlimi128 v63,v59,6,3
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v59.f32), 57), 6));
	// vmulfp128 v13,v60,v56
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v56.f32)));
	// vmrglw128 v55,v59,v55
	_mm_store_si128((__m128i*)v55.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)v55.u32), _mm_load_si128((__m128i*)v59.u32)));
	// vmulfp128 v11,v55,v57
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v55.f32), _mm_load_ps(v57.f32)));
	// vmaddfp v0,v13,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v63,v58
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(v58.f32)));
	// vmaddfp v0,v9,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vor128 v63,v12,v12
	_mm_store_si128((__m128i*)v63.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vmaddcfp128 v63,v8,v63,v0
	_mm_store_ps(v63.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v63.f32)), _mm_load_ps(ctx.v0.f32)));
	// bne cr6,0x8261555c
	if (!cr6.eq) goto loc_8261555C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
loc_82615668:
	// addi r1,r1,7104
	ctx.r1.s64 = ctx.r1.s64 + 7104;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8261567C"))) PPC_WEAK_FUNC(sub_8261567C);
PPC_FUNC_IMPL(__imp__sub_8261567C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82615680"))) PPC_WEAK_FUNC(sub_82615680);
PPC_FUNC_IMPL(__imp__sub_82615680) {
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
	// bl 0x82614108
	sub_82614108(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// stb r11,-13075(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13075, r11.u8);
	// bl 0x826184c0
	sub_826184C0(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// stb r11,-13076(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13076, r11.u8);
	// bl 0x8314d83c
	__imp__XamAvatarShutdown(ctx, base);
	// bl 0x82616700
	sub_82616700(ctx, base);
	// bl 0x82616758
	sub_82616758(ctx, base);
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r3,-13072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -13072);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826156dc
	if (cr6.eq) goto loc_826156DC;
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-13072(r31)
	PPC_STORE_U32(r31.u32 + -13072, r11.u32);
loc_826156DC:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-13068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13068, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826156F8"))) PPC_WEAK_FUNC(sub_826156F8);
PPC_FUNC_IMPL(__imp__sub_826156F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826156FC"))) PPC_WEAK_FUNC(sub_826156FC);
PPC_FUNC_IMPL(__imp__sub_826156FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82615700"))) PPC_WEAK_FUNC(sub_82615700);
PPC_FUNC_IMPL(__imp__sub_82615700) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31933
	r25.s64 = -2092761088;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lbz r11,-13076(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + -13076);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8261573c
	if (cr0.eq) goto loc_8261573C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82615870
	goto loc_82615870;
loc_8261573C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8261574c
	if (cr6.eq) goto loc_8261574C;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x82615868
	if (!cr6.eq) goto loc_82615868;
loc_8261574C:
	// cmplwi cr6,r28,6
	cr6.compare<uint32_t>(r28.u32, 6, xer);
	// bge cr6,0x82615868
	if (!cr6.lt) goto loc_82615868;
	// clrlwi. r23,r27,31
	r23.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x82615774
	if (cr0.eq) goto loc_82615774;
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(r24.u32, 2, xer);
	// blt cr6,0x82615868
	if (cr6.lt) goto loc_82615868;
	// cmplwi cr6,r24,4
	cr6.compare<uint32_t>(r24.u32, 4, xer);
	// bgt cr6,0x82615868
	if (cr6.gt) goto loc_82615868;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82615868
	if (cr6.eq) goto loc_82615868;
loc_82615774:
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// lis r3,48
	ctx.r3.s64 = 3145728;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// lis r30,-31933
	r30.s64 = -2092761088;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,-13072(r30)
	PPC_STORE_U32(r30.u32 + -13072, ctx.r3.u32);
	// bne 0x8261579c
	if (!cr0.eq) goto loc_8261579C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8261585c
	goto loc_8261585C;
loc_8261579C:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// li r11,4
	r11.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-13068(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13068, r11.u32);
	// stw r29,28648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28648, r29.u32);
	// bl 0x82618f90
	sub_82618F90(ctx, base);
	// rlwinm. r11,r27,0,30,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826157dc
	if (cr0.eq) goto loc_826157DC;
	// lwz r31,-13072(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + -13072);
	// bl 0x82616700
	sub_82616700(ctx, base);
	// lis r4,48
	ctx.r4.s64 = 3145728;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826167b8
	sub_826167B8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8261585c
	if (cr0.lt) goto loc_8261585C;
loc_826157DC:
	// lis r8,48
	ctx.r8.s64 = 3145728;
	// lwz r7,-13072(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + -13072);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8314d84c
	__imp__XamAvatarInitialize(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8261585c
	if (cr0.lt) goto loc_8261585C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82615814
	if (cr6.eq) goto loc_82615814;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82613ca8
	sub_82613CA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82615814:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8261585c
	if (cr6.lt) goto loc_8261585C;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// stb r11,-13076(r25)
	PPC_STORE_U8(r25.u32 + -13076, r11.u8);
	// beq cr6,0x82615854
	if (cr6.eq) goto loc_82615854;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826185d8
	sub_826185D8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82618528
	sub_82618528(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// rlwinm r11,r3,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,-13075(r10)
	PPC_STORE_U8(ctx.r10.u32 + -13075, r11.u8);
loc_82615854:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x82615860
	if (!cr6.lt) goto loc_82615860;
loc_8261585C:
	// bl 0x82615680
	sub_82615680(ctx, base);
loc_82615860:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82615870
	goto loc_82615870;
loc_82615868:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82615870:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82615874"))) PPC_WEAK_FUNC(sub_82615874);
PPC_FUNC_IMPL(__imp__sub_82615874) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82615878"))) PPC_WEAK_FUNC(sub_82615878);
PPC_FUNC_IMPL(__imp__sub_82615878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_82615888"))) PPC_WEAK_FUNC(sub_82615888);
PPC_FUNC_IMPL(__imp__sub_82615888) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261588C"))) PPC_WEAK_FUNC(sub_8261588C);
PPC_FUNC_IMPL(__imp__sub_8261588C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82615890"))) PPC_WEAK_FUNC(sub_82615890);
PPC_FUNC_IMPL(__imp__sub_82615890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_826158A0"))) PPC_WEAK_FUNC(sub_826158A0);
PPC_FUNC_IMPL(__imp__sub_826158A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826158A4"))) PPC_WEAK_FUNC(sub_826158A4);
PPC_FUNC_IMPL(__imp__sub_826158A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826158A8"))) PPC_WEAK_FUNC(sub_826158A8);
PPC_FUNC_IMPL(__imp__sub_826158A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x826158c8
	if (cr6.lt) goto loc_826158C8;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x826158cc
	if (!cr6.gt) goto loc_826158CC;
loc_826158C8:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
loc_826158CC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r11,15808
	ctx.r9.s64 = r11.s64 + 15808;
	// addic. r11,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r11.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// blt 0x82615940
	if (cr0.lt) goto loc_82615940;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stfs f1,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stfs f1,-8(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// mulli r10,r11,96
	ctx.r10.s64 = r11.s64 * 96;
	// stfs f1,-12(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// add r11,r8,r3
	r11.u64 = ctx.r8.u64 + ctx.r3.u64;
loc_82615908:
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-96
	ctx.r10.s64 = ctx.r10.s64 + -96;
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// lvx128 v62,r0,r9
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddcfp128 v13,v63,v13,v0
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v63,v62,v13
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82615908
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615908;
loc_82615940:
	// lvx128 v63,r0,r3
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vsubfp128 v12,v63,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// stfs f1,-4(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// stfs f1,-8(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfs f1,-12(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// stfs f1,-16(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v63,v63,v0
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82615978"))) PPC_WEAK_FUNC(sub_82615978);
PPC_FUNC_IMPL(__imp__sub_82615978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261597C"))) PPC_WEAK_FUNC(sub_8261597C);
PPC_FUNC_IMPL(__imp__sub_8261597C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82615980"))) PPC_WEAK_FUNC(sub_82615980);
PPC_FUNC_IMPL(__imp__sub_82615980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9418
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r9,72
	ctx.r9.s64 = 72;
	// addi r11,r11,15808
	r11.s64 = r11.s64 + 15808;
	// addi r10,r3,1136
	ctx.r10.s64 = ctx.r3.s64 + 1136;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
loc_826159A4:
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// bdnz 0x826159a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826159A4;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r9,r9,-18528
	ctx.r9.s64 = ctx.r9.s64 + -18528;
	// addi r11,r11,-18544
	r11.s64 = r11.s64 + -18544;
	// addi r8,r8,-18560
	ctx.r8.s64 = ctx.r8.s64 + -18560;
	// addi r7,r7,-18576
	ctx.r7.s64 = ctx.r7.s64 + -18576;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r5,-18592
	ctx.r9.s64 = ctx.r5.s64 + -18592;
	// lvx128 v61,r0,r8
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lvx128 v60,r0,r7
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r6,r6,-18608
	ctx.r6.s64 = ctx.r6.s64 + -18608;
	// li r5,480
	ctx.r5.s64 = 480;
	// li r11,432
	r11.s64 = 432;
	// li r8,464
	ctx.r8.s64 = 464;
	// lvx128 v58,r0,r9
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r7,416
	ctx.r7.s64 = 416;
	// lfs f0,26628(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 26628);
	f0.f64 = double(temp.f32);
	// lvx128 v59,r0,r6
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r6,560
	ctx.r6.s64 = 560;
	// stvx128 v63,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,512
	ctx.r9.s64 = 512;
	// stvx128 v63,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,272
	ctx.r4.s64 = 272;
	// stvx128 v63,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r31,144
	r31.s64 = 144;
	// stvx128 v63,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,208
	r30.s64 = 208;
	// li r29,112
	r29.s64 = 112;
	// stfs f0,-52(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// li r5,384
	ctx.r5.s64 = 384;
	// stfs f0,-56(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// li r28,288
	r28.s64 = 288;
	// stfs f0,-60(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// li r8,160
	ctx.r8.s64 = 160;
	// stfs f0,-64(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stvx128 v63,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,72
	r11.s64 = 72;
	// stvx128 v63,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r11
	ctr.u64 = r11.u64;
	// stvx128 v61,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82615A8C:
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddcfp128 v13,v63,v13,v0
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x82615a8c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615A8C;
}

__attribute__((alias("__imp__sub_82615AAC"))) PPC_WEAK_FUNC(sub_82615AAC);
PPC_FUNC_IMPL(__imp__sub_82615AAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82615AB0"))) PPC_WEAK_FUNC(sub_82615AB0);
PPC_FUNC_IMPL(__imp__sub_82615AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x828e9414
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r9,72
	ctx.r9.s64 = 72;
	// addi r11,r11,15808
	r11.s64 = r11.s64 + 15808;
	// addi r10,r3,1136
	ctx.r10.s64 = ctx.r3.s64 + 1136;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
loc_82615AD4:
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// bdnz 0x82615ad4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615AD4;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r9,r9,-18448
	ctx.r9.s64 = ctx.r9.s64 + -18448;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// lfs f0,26628(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 26628);
	f0.f64 = double(temp.f32);
	// lvx128 v62,r0,r9
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-18464
	r11.s64 = r11.s64 + -18464;
	// addi r8,r8,-18480
	ctx.r8.s64 = ctx.r8.s64 + -18480;
	// stfs f0,-52(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// addi r7,r7,-18496
	ctx.r7.s64 = ctx.r7.s64 + -18496;
	// stfs f0,-56(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// addi r6,r6,-18512
	ctx.r6.s64 = ctx.r6.s64 + -18512;
	// stfs f0,-60(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// li r4,480
	ctx.r4.s64 = 480;
	// stfs f0,-64(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// li r9,432
	ctx.r9.s64 = 432;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r5,464
	ctx.r5.s64 = 464;
	// lvx128 v61,r0,r8
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r0,r7
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r8,416
	ctx.r8.s64 = 416;
	// lvx128 v58,r0,r6
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r31,560
	r31.s64 = 560;
	// stvx128 v62,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,512
	ctx.r7.s64 = 512;
	// stvx128 v62,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,272
	ctx.r6.s64 = 272;
	// stvx128 v62,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,144
	r30.s64 = 144;
	// li r29,208
	r29.s64 = 208;
	// vor128 v60,v63,v63
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)v63.u8));
	// li r28,112
	r28.s64 = 112;
	// stvx128 v62,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r27,384
	r27.s64 = 384;
	// stvx128 v62,r3,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,288
	ctx.r4.s64 = 288;
	// stvx128 v62,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,160
	ctx.r9.s64 = 160;
	// stvx128 v63,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v63,r3,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,72
	r11.s64 = 72;
	// stvx128 v63,r3,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r11
	ctr.u64 = r11.u64;
	// stvx128 v58,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82615BB4:
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddcfp128 v13,v63,v13,v0
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v63.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x82615bb4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615BB4;
}

__attribute__((alias("__imp__sub_82615BD4"))) PPC_WEAK_FUNC(sub_82615BD4);
PPC_FUNC_IMPL(__imp__sub_82615BD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82615BD8"))) PPC_WEAK_FUNC(sub_82615BD8);
PPC_FUNC_IMPL(__imp__sub_82615BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,72
	ctx.r10.s64 = 72;
	// addi r9,r11,15808
	ctx.r9.s64 = r11.s64 + 15808;
	// addi r11,r3,1136
	r11.s64 = ctx.r3.s64 + 1136;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82615BF0:
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x82615bf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615BF0;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,-13068(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13068);
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82615c50
	if (cr6.eq) goto loc_82615C50;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r10,r10,-18304
	ctx.r10.s64 = ctx.r10.s64 + -18304;
	// addi r11,r11,-18288
	r11.s64 = r11.s64 + -18288;
	// addi r9,r9,-18320
	ctx.r9.s64 = ctx.r9.s64 + -18320;
	// addi r8,r8,-18336
	ctx.r8.s64 = ctx.r8.s64 + -18336;
	// addi r7,r7,-18352
	ctx.r7.s64 = ctx.r7.s64 + -18352;
	// b 0x82615c78
	goto loc_82615C78;
loc_82615C50:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r10,r10,-18384
	ctx.r10.s64 = ctx.r10.s64 + -18384;
	// addi r11,r11,-18368
	r11.s64 = r11.s64 + -18368;
	// addi r9,r9,-18400
	ctx.r9.s64 = ctx.r9.s64 + -18400;
	// addi r8,r8,-18416
	ctx.r8.s64 = ctx.r8.s64 + -18416;
	// addi r7,r7,-18432
	ctx.r7.s64 = ctx.r7.s64 + -18432;
loc_82615C78:
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r5,432
	ctx.r5.s64 = 432;
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r6,480
	ctx.r6.s64 = 480;
	// lvx128 v58,r0,r7
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r7,272
	ctx.r7.s64 = 272;
	// lvx128 v59,r0,r8
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r8,512
	ctx.r8.s64 = 512;
	// lvx128 v60,r0,r9
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r9,560
	ctx.r9.s64 = 560;
	// li r10,416
	ctx.r10.s64 = 416;
	// stvx128 v62,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,464
	r11.s64 = 464;
	// stvx128 v62,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,64
	ctx.r7.s64 = 64;
	// stvx128 v62,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,160
	ctx.r8.s64 = 160;
	// stvx128 v62,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// stvx128 v62,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,384
	ctx.r10.s64 = 384;
	// stvx128 v62,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,112
	r11.s64 = 112;
	// li r5,208
	ctx.r5.s64 = 208;
	// vor128 v61,v63,v63
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v63.u8));
	// li r6,144
	ctx.r6.s64 = 144;
	// stvx128 v58,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82615D00"))) PPC_WEAK_FUNC(sub_82615D00);
PPC_FUNC_IMPL(__imp__sub_82615D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82615D04"))) PPC_WEAK_FUNC(sub_82615D04);
PPC_FUNC_IMPL(__imp__sub_82615D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82615D08"))) PPC_WEAK_FUNC(sub_82615D08);
PPC_FUNC_IMPL(__imp__sub_82615D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCVRegister v58{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,72
	ctx.r10.s64 = 72;
	// addi r9,r11,15808
	ctx.r9.s64 = r11.s64 + 15808;
	// addi r11,r3,1136
	r11.s64 = ctx.r3.s64 + 1136;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82615D20:
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x82615d20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615D20;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,-13068(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13068);
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82615d80
	if (cr6.eq) goto loc_82615D80;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r10,r10,-18176
	ctx.r10.s64 = ctx.r10.s64 + -18176;
	// addi r11,r11,-18160
	r11.s64 = r11.s64 + -18160;
	// addi r9,r9,-18192
	ctx.r9.s64 = ctx.r9.s64 + -18192;
	// addi r8,r8,-18208
	ctx.r8.s64 = ctx.r8.s64 + -18208;
	// addi r7,r7,-18224
	ctx.r7.s64 = ctx.r7.s64 + -18224;
	// b 0x82615da8
	goto loc_82615DA8;
loc_82615D80:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r10,r10,-18384
	ctx.r10.s64 = ctx.r10.s64 + -18384;
	// addi r11,r11,-18368
	r11.s64 = r11.s64 + -18368;
	// addi r9,r9,-18240
	ctx.r9.s64 = ctx.r9.s64 + -18240;
	// addi r8,r8,-18256
	ctx.r8.s64 = ctx.r8.s64 + -18256;
	// addi r7,r7,-18272
	ctx.r7.s64 = ctx.r7.s64 + -18272;
loc_82615DA8:
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r5,432
	ctx.r5.s64 = 432;
	// lvx128 v63,r0,r10
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r6,480
	ctx.r6.s64 = 480;
	// lvx128 v58,r0,r7
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r7,272
	ctx.r7.s64 = 272;
	// lvx128 v59,r0,r8
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r8,512
	ctx.r8.s64 = 512;
	// lvx128 v60,r0,r9
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r9,560
	ctx.r9.s64 = 560;
	// li r10,416
	ctx.r10.s64 = 416;
	// stvx128 v62,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,464
	r11.s64 = 464;
	// stvx128 v62,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,64
	ctx.r7.s64 = 64;
	// stvx128 v62,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,160
	ctx.r8.s64 = 160;
	// stvx128 v62,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// stvx128 v62,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,384
	ctx.r10.s64 = 384;
	// stvx128 v62,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,112
	r11.s64 = 112;
	// li r5,208
	ctx.r5.s64 = 208;
	// vor128 v61,v63,v63
	_mm_store_si128((__m128i*)v61.u8, _mm_load_si128((__m128i*)v63.u8));
	// li r6,144
	ctx.r6.s64 = 144;
	// stvx128 v58,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82615E30"))) PPC_WEAK_FUNC(sub_82615E30);
PPC_FUNC_IMPL(__imp__sub_82615E30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82615E34"))) PPC_WEAK_FUNC(sub_82615E34);
PPC_FUNC_IMPL(__imp__sub_82615E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82615E38"))) PPC_WEAK_FUNC(sub_82615E38);
PPC_FUNC_IMPL(__imp__sub_82615E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,72
	ctx.r10.s64 = 72;
	// addi r9,r11,15808
	ctx.r9.s64 = r11.s64 + 15808;
	// addi r11,r3,1136
	r11.s64 = ctx.r3.s64 + 1136;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82615E50:
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x82615e50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615E50;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-18128
	r11.s64 = r11.s64 + -18128;
	// addi r10,r10,-18144
	ctx.r10.s64 = ctx.r10.s64 + -18144;
	// li r9,304
	ctx.r9.s64 = 304;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82615E80"))) PPC_WEAK_FUNC(sub_82615E80);
PPC_FUNC_IMPL(__imp__sub_82615E80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82615E84"))) PPC_WEAK_FUNC(sub_82615E84);
PPC_FUNC_IMPL(__imp__sub_82615E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82615E88"))) PPC_WEAK_FUNC(sub_82615E88);
PPC_FUNC_IMPL(__imp__sub_82615E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,72
	ctx.r10.s64 = 72;
	// addi r9,r11,15808
	ctx.r9.s64 = r11.s64 + 15808;
	// addi r11,r3,1136
	r11.s64 = ctx.r3.s64 + 1136;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82615EA0:
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bdnz 0x82615ea0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615EA0;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r11,r11,-18144
	r11.s64 = r11.s64 + -18144;
	// addi r10,r10,-18112
	ctx.r10.s64 = ctx.r10.s64 + -18112;
	// li r9,304
	ctx.r9.s64 = 304;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82615ED0"))) PPC_WEAK_FUNC(sub_82615ED0);
PPC_FUNC_IMPL(__imp__sub_82615ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82615ED4"))) PPC_WEAK_FUNC(sub_82615ED4);
PPC_FUNC_IMPL(__imp__sub_82615ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82615ED8"))) PPC_WEAK_FUNC(sub_82615ED8);
PPC_FUNC_IMPL(__imp__sub_82615ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,2
	r11.s64 = 2;
	// addi r9,r10,-17872
	ctx.r9.s64 = ctx.r10.s64 + -17872;
	// addi r10,r1,-84
	ctx.r10.s64 = ctx.r1.s64 + -84;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r8,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r7,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r7.u32);
loc_82615F08:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v62.f32, _mm_add_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32)));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82615f08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615F08;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-17888
	ctx.r9.s64 = r11.s64 + -17888;
	// addi r11,r1,-84
	r11.s64 = ctx.r1.s64 + -84;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,22
	ctx.r7.s64 = 22;
	// stw r8,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r8.u32);
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r7,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r7.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r31,80
	r31.s64 = 80;
loc_82615F58:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v63,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82615f58
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615F58;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-17904
	ctx.r9.s64 = r11.s64 + -17904;
	// addi r8,r10,-17920
	ctx.r8.s64 = ctx.r10.s64 + -17920;
	// li r11,2
	r11.s64 = 2;
	// addi r10,r1,-84
	ctx.r10.s64 = ctx.r1.s64 + -84;
	// li r7,25
	ctx.r7.s64 = 25;
	// li r6,28
	ctx.r6.s64 = 28;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r8
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r7,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r7.u32);
	// stw r6,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r6.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r8,32
	ctx.r8.s64 = 32;
loc_82615FA8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// stvx128 v63,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82615fa8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82615FA8;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,4
	r11.s64 = 4;
	// addi r9,r10,-17936
	ctx.r9.s64 = ctx.r10.s64 + -17936;
	// li r6,33
	ctx.r6.s64 = 33;
	// li r7,36
	ctx.r7.s64 = 36;
	// li r4,31
	ctx.r4.s64 = 31;
	// stw r6,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r6.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r7,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r7.u32);
	// stw r4,-72(r1)
	PPC_STORE_U32(ctx.r1.u32 + -72, ctx.r4.u32);
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// stw r5,-68(r1)
	PPC_STORE_U32(ctx.r1.u32 + -68, ctx.r5.u32);
loc_8261600C:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32)));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x8261600c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261600C;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-17952
	ctx.r9.s64 = r11.s64 + -17952;
	// addi r11,r1,-84
	r11.s64 = ctx.r1.s64 + -84;
	// li r30,3
	r30.s64 = 3;
	// li r29,2
	r29.s64 = 2;
	// stw r30,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, r30.u32);
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r29,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, r29.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82616058:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v63,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82616058
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616058;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-17968
	ctx.r9.s64 = r11.s64 + -17968;
	// addi r30,r10,-17984
	r30.s64 = ctx.r10.s64 + -17984;
	// li r11,2
	r11.s64 = 2;
	// addi r10,r1,-84
	ctx.r10.s64 = ctx.r1.s64 + -84;
	// li r29,6
	r29.s64 = 6;
	// li r28,8
	r28.s64 = 8;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r30
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stw r29,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, r29.u32);
	// stw r28,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826160A4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// stvx128 v63,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x826160a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826160A4;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-18000
	ctx.r9.s64 = r11.s64 + -18000;
	// addi r30,r10,-18016
	r30.s64 = ctx.r10.s64 + -18016;
	// li r11,2
	r11.s64 = 2;
	// addi r10,r1,-84
	ctx.r10.s64 = ctx.r1.s64 + -84;
	// li r29,11
	r29.s64 = 11;
	// li r28,15
	r28.s64 = 15;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r30
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stw r29,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, r29.u32);
	// stw r28,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82616100:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// stvx128 v63,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82616100
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616100;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r7,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r7.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r6,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r6.u32);
	// addi r8,r11,-18032
	ctx.r8.s64 = r11.s64 + -18032;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-18048
	ctx.r7.s64 = ctx.r10.s64 + -18048;
	// li r6,1424
	ctx.r6.s64 = 1424;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-84
	r11.s64 = ctx.r1.s64 + -84;
	// lvx128 v62,r0,r8
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r7
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v62,r9,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82616160:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v63,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82616160
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616160;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r4,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r4.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r5.u32);
	// addi r9,r11,-18064
	ctx.r9.s64 = r11.s64 + -18064;
	// addi r11,r1,-84
	r11.s64 = ctx.r1.s64 + -84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82616198:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v63,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82616198
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616198;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-18080
	ctx.r9.s64 = r11.s64 + -18080;
	// addi r11,r1,-84
	r11.s64 = ctx.r1.s64 + -84;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_826161C8:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v63,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x826161c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826161C8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,2448
	ctx.r9.s64 = 2448;
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r11,r10,2640
	r11.s64 = ctx.r10.s64 + 2640;
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// lvx128 v63,r10,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r9,2736
	ctx.r9.s64 = 2736;
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// lfs f0,10696(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 10696);
	f0.f64 = double(temp.f32);
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// lfs f13,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lvlx128 v62,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v63,v62,8,0
	_mm_store_ps(v63.f32, _mm_blend_ps(_mm_load_ps(v63.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 228), 8));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,2928
	r11.s64 = ctx.r10.s64 + 2928;
	// lvx128 v63,r10,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r5,-18096
	ctx.r10.s64 = ctx.r5.s64 + -18096;
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// lvlx128 v63,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v62,v63,8,0
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 228), 8));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v62,v63,4,3
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 57), 4));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82616278"))) PPC_WEAK_FUNC(sub_82616278);
PPC_FUNC_IMPL(__imp__sub_82616278) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8261627C"))) PPC_WEAK_FUNC(sub_8261627C);
PPC_FUNC_IMPL(__imp__sub_8261627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82616280"))) PPC_WEAK_FUNC(sub_82616280);
PPC_FUNC_IMPL(__imp__sub_82616280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,2
	r11.s64 = 2;
	// addi r9,r10,-17872
	ctx.r9.s64 = ctx.r10.s64 + -17872;
	// addi r10,r1,-68
	ctx.r10.s64 = ctx.r1.s64 + -68;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r8,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r7,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r7.u32);
loc_826162B0:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v62.f32, _mm_sub_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32)));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x826162b0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826162B0;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-17632
	ctx.r9.s64 = r11.s64 + -17632;
	// addi r11,r1,-68
	r11.s64 = ctx.r1.s64 + -68;
	// li r8,20
	ctx.r8.s64 = 20;
	// li r7,22
	ctx.r7.s64 = 22;
	// stw r8,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r7,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r7.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r31,80
	r31.s64 = 80;
loc_82616300:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v63,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82616300
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616300;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-17648
	ctx.r9.s64 = r11.s64 + -17648;
	// addi r8,r10,-17664
	ctx.r8.s64 = ctx.r10.s64 + -17664;
	// li r11,2
	r11.s64 = 2;
	// addi r10,r1,-68
	ctx.r10.s64 = ctx.r1.s64 + -68;
	// li r7,25
	ctx.r7.s64 = 25;
	// li r6,28
	ctx.r6.s64 = 28;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r8
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r7,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r7.u32);
	// stw r6,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r6.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r8,32
	ctx.r8.s64 = 32;
loc_82616350:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// stvx128 v63,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82616350
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616350;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r11,4
	r11.s64 = 4;
	// addi r9,r10,-17680
	ctx.r9.s64 = ctx.r10.s64 + -17680;
	// li r6,33
	ctx.r6.s64 = 33;
	// li r7,36
	ctx.r7.s64 = 36;
	// li r4,31
	ctx.r4.s64 = 31;
	// stw r6,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r6.u32);
	// li r5,34
	ctx.r5.s64 = 34;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r7,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r7.u32);
	// stw r4,-56(r1)
	PPC_STORE_U32(ctx.r1.u32 + -56, ctx.r4.u32);
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
	// stw r5,-52(r1)
	PPC_STORE_U32(ctx.r1.u32 + -52, ctx.r5.u32);
loc_826163B4:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32)));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x826163b4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826163B4;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-17696
	ctx.r9.s64 = r11.s64 + -17696;
	// addi r11,r1,-68
	r11.s64 = ctx.r1.s64 + -68;
	// li r30,3
	r30.s64 = 3;
	// li r29,2
	r29.s64 = 2;
	// stw r30,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, r30.u32);
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r29,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, r29.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82616400:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v63,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82616400
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616400;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-17712
	ctx.r9.s64 = r11.s64 + -17712;
	// addi r30,r10,-17728
	r30.s64 = ctx.r10.s64 + -17728;
	// li r11,2
	r11.s64 = 2;
	// addi r10,r1,-68
	ctx.r10.s64 = ctx.r1.s64 + -68;
	// li r29,6
	r29.s64 = 6;
	// li r28,8
	r28.s64 = 8;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r30
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stw r29,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, r29.u32);
	// stw r28,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261644C:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// stvx128 v63,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x8261644c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261644C;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r11,-17744
	ctx.r9.s64 = r11.s64 + -17744;
	// addi r30,r10,-17760
	r30.s64 = ctx.r10.s64 + -17760;
	// li r11,2
	r11.s64 = 2;
	// addi r10,r1,-68
	ctx.r10.s64 = ctx.r1.s64 + -68;
	// li r29,11
	r29.s64 = 11;
	// li r28,15
	r28.s64 = 15;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r30
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stw r29,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, r29.u32);
	// stw r28,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, r28.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826164A8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,96
	r11.s64 = r11.s64 * 96;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v61,r0,r11
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v61,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v61.f32, _mm_mul_ps(_mm_load_ps(v61.f32), _mm_load_ps(v62.f32)));
	// stvx128 v63,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x826164a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826164A8;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r7,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r7.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r6,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r6.u32);
	// addi r8,r11,-17776
	ctx.r8.s64 = r11.s64 + -17776;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r10,-17792
	ctx.r7.s64 = ctx.r10.s64 + -17792;
	// li r6,1424
	ctx.r6.s64 = 1424;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-68
	r11.s64 = ctx.r1.s64 + -68;
	// lvx128 v62,r0,r8
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r7
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v62,r9,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82616508:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v63,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82616508
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616508;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r4,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r4.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r5.u32);
	// addi r9,r11,-17808
	ctx.r9.s64 = r11.s64 + -17808;
	// addi r11,r1,-68
	r11.s64 = ctx.r1.s64 + -68;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82616540:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v63,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82616540
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616540;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,-17824
	ctx.r9.s64 = r11.s64 + -17824;
	// addi r11,r1,-68
	r11.s64 = ctx.r1.s64 + -68;
	// li r8,27
	ctx.r8.s64 = 27;
	// li r7,30
	ctx.r7.s64 = 30;
	// stw r8,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, ctx.r8.u32);
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r7,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r7.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82616580:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stvx128 v63,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82616580
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616580;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r11,r11,2640
	r11.s64 = r11.s64 + 2640;
	// addi r10,r10,-17840
	ctx.r10.s64 = ctx.r10.s64 + -17840;
	// addi r9,r9,-17856
	ctx.r9.s64 = ctx.r9.s64 + -17856;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v63.f32, _mm_sub_ps(_mm_load_ps(v63.f32), _mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,2928
	r11.s64 = r11.s64 + 2928;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v63,v63,v62
	_mm_store_ps(v63.f32, _mm_add_ps(_mm_load_ps(v63.f32), _mm_load_ps(v62.f32)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// lvx128 v62,r0,r11
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v62,v63,4,3
	_mm_store_ps(v62.f32, _mm_blend_ps(_mm_load_ps(v62.f32), _mm_permute_ps(_mm_load_ps(v63.f32), 57), 4));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_826165EC"))) PPC_WEAK_FUNC(sub_826165EC);
PPC_FUNC_IMPL(__imp__sub_826165EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826165F0"))) PPC_WEAK_FUNC(sub_826165F0);
PPC_FUNC_IMPL(__imp__sub_826165F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8208(r1)
	ea = -8208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82619048
	sub_82619048(ctx, base);
	// lwz r11,1232(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1232);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r5,r11,96
	ctx.r5.s64 = r11.s64 * 96;
	// lwz r4,1236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1236);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f13,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// blt cr6,0x82616668
	if (cr6.lt) goto loc_82616668;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82615e38
	sub_82615E38(ctx, base);
	// b 0x82616670
	goto loc_82616670;
loc_82616668:
	// fneg f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f30.u64 ^ 0x8000000000000000;
	// bl 0x82615e88
	sub_82615E88(ctx, base);
loc_82616670:
	// bl 0x826158a8
	sub_826158A8(ctx, base);
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x826166ac
	if (!cr6.eq) goto loc_826166AC;
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f13.f64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x8261669c
	if (cr6.lt) goto loc_8261669C;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82615980
	sub_82615980(ctx, base);
loc_82616694:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x826166d8
	goto loc_826166D8;
loc_8261669C:
	// fneg f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f31.u64 ^ 0x8000000000000000;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82615bd8
	sub_82615BD8(ctx, base);
	// b 0x826166d8
	goto loc_826166D8;
loc_826166AC:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826166dc
	if (!cr6.eq) goto loc_826166DC;
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f13.f64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ble cr6,0x826166cc
	if (!cr6.gt) goto loc_826166CC;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82615ab0
	sub_82615AB0(ctx, base);
	// b 0x82616694
	goto loc_82616694;
loc_826166CC:
	// fneg f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = f31.u64 ^ 0x8000000000000000;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82615d08
	sub_82615D08(ctx, base);
loc_826166D8:
	// bl 0x826158a8
	sub_826158A8(ctx, base);
loc_826166DC:
	// addi r1,r1,8208
	ctx.r1.s64 = ctx.r1.s64 + 8208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826166F8"))) PPC_WEAK_FUNC(sub_826166F8);
PPC_FUNC_IMPL(__imp__sub_826166F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826166FC"))) PPC_WEAK_FUNC(sub_826166FC);
PPC_FUNC_IMPL(__imp__sub_826166FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82616700"))) PPC_WEAK_FUNC(sub_82616700);
PPC_FUNC_IMPL(__imp__sub_82616700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-13064
	ctx.r3.s64 = r11.s64 + -13064;
}

__attribute__((alias("__imp__sub_82616708"))) PPC_WEAK_FUNC(sub_82616708);
PPC_FUNC_IMPL(__imp__sub_82616708) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261670C"))) PPC_WEAK_FUNC(sub_8261670C);
PPC_FUNC_IMPL(__imp__sub_8261670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82616710"))) PPC_WEAK_FUNC(sub_82616710);
PPC_FUNC_IMPL(__imp__sub_82616710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17616
	r11.s64 = r11.s64 + -17616;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq 0x8261673c
	if (cr0.eq) goto loc_8261673C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8261673C:
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

__attribute__((alias("__imp__sub_82616750"))) PPC_WEAK_FUNC(sub_82616750);
PPC_FUNC_IMPL(__imp__sub_82616750) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82616754"))) PPC_WEAK_FUNC(sub_82616754);
PPC_FUNC_IMPL(__imp__sub_82616754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82616758"))) PPC_WEAK_FUNC(sub_82616758);
PPC_FUNC_IMPL(__imp__sub_82616758) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82616780
	if (cr6.eq) goto loc_82616780;
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_82616780:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82616794
	if (cr6.eq) goto loc_82616794;
	// lis r4,-20328
	ctx.r4.s64 = -1332215808;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_82616794:
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826167B4"))) PPC_WEAK_FUNC(sub_826167B4);
PPC_FUNC_IMPL(__imp__sub_826167B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826167B8"))) PPC_WEAK_FUNC(sub_826167B8);
PPC_FUNC_IMPL(__imp__sub_826167B8) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,1
	r11.s64 = 65536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r31,r11,51727
	r31.u64 = r11.u64 | 51727;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r31
	cr6.compare<uint32_t>(ctx.r4.u32, r31.u32, xer);
	// blt cr6,0x82616914
	if (cr6.lt) goto loc_82616914;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-17592
	ctx.r4.s64 = r11.s64 + -17592;
	// ori r5,r5,64090
	ctx.r5.u64 = ctx.r5.u64 | 64090;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8261d548
	sub_8261D548(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r29,r29,r31
	r29.u64 = r29.u64 + r31.u64;
	// bl 0x82619878
	sub_82619878(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8261690c
	if (cr0.eq) goto loc_8261690C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r10,r31,r28
	ctx.r10.s64 = r28.s64 - r31.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8261690c
	if (cr6.gt) goto loc_8261690C;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82619928
	sub_82619928(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8261686c
	if (!cr0.eq) goto loc_8261686C;
loc_82616854:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_8261685C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8261d4c8
	sub_8261D4C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8261691c
	goto loc_8261691C;
loc_8261686C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82616884
	if (cr6.eq) goto loc_82616884;
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
loc_82616884:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261689c
	if (cr6.eq) goto loc_8261689C;
	// lis r4,-20328
	ctx.r4.s64 = -1332215808;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r3.u32);
loc_8261689C:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826168f8
	if (cr6.eq) goto loc_826168F8;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826168f8
	if (cr6.eq) goto loc_826168F8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8261d148
	sub_8261D148(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826168dc
	if (!cr0.eq) goto loc_826168DC;
loc_826168D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82616758
	sub_82616758(ctx, base);
	// b 0x82616854
	goto loc_82616854;
loc_826168DC:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x826168d0
	if (!cr6.gt) goto loc_826168D0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8261d4c8
	sub_8261D4C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8261691c
	goto loc_8261691C;
loc_826168F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82616758
	sub_82616758(ctx, base);
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8261685c
	goto loc_8261685C;
loc_8261690C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8261d4c8
	sub_8261D4C8(ctx, base);
loc_82616914:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_8261691C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82616920"))) PPC_WEAK_FUNC(sub_82616920);
PPC_FUNC_IMPL(__imp__sub_82616920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82616924"))) PPC_WEAK_FUNC(sub_82616924);
PPC_FUNC_IMPL(__imp__sub_82616924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82616928"))) PPC_WEAK_FUNC(sub_82616928);
PPC_FUNC_IMPL(__imp__sub_82616928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826169b4
	if (cr6.eq) goto loc_826169B4;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82616948
	if (!cr6.eq) goto loc_82616948;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82616948:
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// blt cr6,0x82616954
	if (cr6.lt) goto loc_82616954;
	// li r4,12
	ctx.r4.s64 = 12;
loc_82616954:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// stw r11,812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 812, r11.u32);
	// ble cr6,0x82616984
	if (!cr6.gt) goto loc_82616984;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
	// addi r11,r3,812
	r11.s64 = ctx.r3.s64 + 812;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82616970:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x82616970
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82616970;
loc_82616984:
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bge cr6,0x826169b4
	if (!cr6.lt) goto loc_826169B4;
	// addi r11,r4,202
	r11.s64 = ctx.r4.s64 + 202;
	// subfic r10,r4,12
	xer.ca = ctx.r4.u32 <= 12;
	ctx.r10.s64 = 12 - ctx.r4.s64;
	// addi r9,r4,202
	ctx.r9.s64 = ctx.r4.s64 + 202;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826169A8:
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x826169a8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826169A8;
loc_826169B4:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_826169B8"))) PPC_WEAK_FUNC(sub_826169B8);
PPC_FUNC_IMPL(__imp__sub_826169B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826169BC"))) PPC_WEAK_FUNC(sub_826169BC);
PPC_FUNC_IMPL(__imp__sub_826169BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826169C0"))) PPC_WEAK_FUNC(sub_826169C0);
PPC_FUNC_IMPL(__imp__sub_826169C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaaf0
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r5,1684(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1684, ctx.r5.u32);
	// addi r11,r3,700
	r11.s64 = ctx.r3.s64 + 700;
	// stw r3,1668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1668, ctx.r3.u32);
	// li r5,80
	ctx.r5.s64 = 80;
	// stw r6,1692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1692, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 700, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r31.u32);
	// stb r31,4321(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4321, r31.u8);
	// stb r31,4322(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4322, r31.u8);
	// stb r31,4320(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4320, r31.u8);
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r11.u32);
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, r31.u32);
	// stw r31,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r31.u32);
	// stw r31,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r31.u32);
	// stw r31,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r31.u32);
	// stw r31,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r31.u32);
	// stw r31,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, r31.u32);
	// stw r31,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r31.u32);
	// stw r31,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r31.u32);
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r31.u32);
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r31.u32);
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r31.u32);
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r31.u32);
	// stw r31,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r31.u32);
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r31.u32);
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r31.u32);
	// stw r31,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r31.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r31.u32);
	// stw r31,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r31.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r3,r30,704
	ctx.r3.s64 = r30.s64 + 704;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// std r31,752(r30)
	PPC_STORE_U64(r30.u32 + 752, r31.u64);
	// std r31,760(r30)
	PPC_STORE_U64(r30.u32 + 760, r31.u64);
	// addi r3,r30,780
	ctx.r3.s64 = r30.s64 + 780;
	// std r31,768(r30)
	PPC_STORE_U64(r30.u32 + 768, r31.u64);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,776(r30)
	PPC_STORE_U32(r30.u32 + 776, r31.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r8,r11,-18944
	ctx.r8.s64 = r11.s64 + -18944;
	// addi r7,r10,-18928
	ctx.r7.s64 = ctx.r10.s64 + -18928;
	// addi r6,r9,-18912
	ctx.r6.s64 = ctx.r9.s64 + -18912;
	// addi r5,r1,1248
	ctx.r5.s64 = ctx.r1.s64 + 1248;
	// addi r4,r1,1264
	ctx.r4.s64 = ctx.r1.s64 + 1264;
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// lis r31,-32251
	r31.s64 = -2113601536;
	// lis r30,-32251
	r30.s64 = -2113601536;
	// lwz r29,4(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r28,8(r8)
	r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r27,4(r7)
	r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r26,12(r7)
	r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r11,-18944(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -18944);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r10,-18928(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -18928);
	// lwz r9,-18912(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -18912);
	// lwz r25,4(r6)
	r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r29,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r29.u32);
	// stw r28,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r28.u32);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r27,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r27.u32);
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r26.u32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r25.u32);
	// addi r26,r30,-18864
	r26.s64 = r30.s64 + -18864;
	// lwz r10,8(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r24,r1,1344
	r24.s64 = ctx.r1.s64 + 1344;
	// lwz r19,192(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r11,r3,-18896
	r11.s64 = ctx.r3.s64 + -18896;
	// lwz r9,12(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r24.u32);
	// lis r29,-32251
	r29.s64 = -2113601536;
	// lwz r6,-18896(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18896);
	// addi r8,r1,1280
	ctx.r8.s64 = ctx.r1.s64 + 1280;
	// lwz r24,4(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r5,r1,1296
	ctx.r5.s64 = ctx.r1.s64 + 1296;
	// lwz r3,-18880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -18880);
	// addi r31,r31,-18880
	r31.s64 = r31.s64 + -18880;
	// stw r10,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// addi r10,r29,-18848
	ctx.r10.s64 = r29.s64 + -18848;
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r23,r1,1360
	r23.s64 = ctx.r1.s64 + 1360;
	// lwz r27,8(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r25,r1,1328
	r25.s64 = ctx.r1.s64 + 1328;
	// stw r24,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r24.u32);
	// lwz r24,8(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r26,12(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// addi r9,r8,-18832
	ctx.r9.s64 = ctx.r8.s64 + -18832;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r26.u32);
	// addi r6,r1,1312
	ctx.r6.s64 = ctx.r1.s64 + 1312;
	// lwz r26,4(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r22,r3,-18816
	r22.s64 = ctx.r3.s64 + -18816;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// lis r27,-32251
	r27.s64 = -2113601536;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// lis r28,-32251
	r28.s64 = -2113601536;
	// lwz r15,4(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r18,r27,-18784
	r18.s64 = r27.s64 + -18784;
	// stw r26,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// addi r16,r5,-18768
	r16.s64 = ctx.r5.s64 + -18768;
	// lwz r26,8(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r20,r28,-18800
	r20.s64 = r28.s64 + -18800;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r14,8(r31)
	r14.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r21,180(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,-18864(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + -18864);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r29,-18848(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + -18848);
	// lwz r8,-18832(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18832);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r24,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r24.u32);
	// lwz r17,200(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r23,208(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r24,188(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r25,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r25.u32);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// stw r14,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r14.u32);
	// lwz r25,140(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r31,172(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r14,148(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r15,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r15.u32);
	// stw r5,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r5.u32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r15,116(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r27,108(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r7,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r7.u32);
	// stw r21,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r21.u32);
	// addi r21,r1,1008
	r21.s64 = ctx.r1.s64 + 1008;
	// stw r5,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r5.u32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// rotlwi r8,r30,0
	ctx.r8.u64 = __builtin_rotateleft32(r30.u32, 0);
	// lwz r21,148(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lis r30,-32251
	r30.s64 = -2113601536;
	// stw r11,12(r27)
	PPC_STORE_U32(r27.u32 + 12, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// rotlwi r7,r29,0
	ctx.r7.u64 = __builtin_rotateleft32(r29.u32, 0);
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r31,r11,-19184
	r31.s64 = r11.s64 + -19184;
	// stw r17,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r17.u32);
	// addi r17,r1,1024
	r17.s64 = ctx.r1.s64 + 1024;
	// lwz r21,-18784(r21)
	r21.u64 = PPC_LOAD_U32(r21.u32 + -18784);
	// lwz r11,-19184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -19184);
	// stw r19,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r19.u32);
	// stw r24,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r24.u32);
	// addi r24,r1,1408
	r24.s64 = ctx.r1.s64 + 1408;
	// stw r25,12(r23)
	PPC_STORE_U32(r23.u32 + 12, r25.u32);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// lwz r21,4(r18)
	r21.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// lwz r29,4(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// lwz r25,8(r22)
	r25.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// lwz r23,12(r22)
	r23.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// addi r22,r1,1424
	r22.s64 = ctx.r1.s64 + 1424;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r21.u32);
	// addi r21,r5,-19168
	r21.s64 = ctx.r5.s64 + -19168;
	// lwz r5,-19168(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19168);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r21.u32);
	// lwz r21,8(r18)
	r21.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// lwz r18,12(r18)
	r18.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r21.u32);
	// addi r21,r1,1376
	r21.s64 = ctx.r1.s64 + 1376;
	// stw r18,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r18.u32);
	// addi r18,r30,-19152
	r18.s64 = r30.s64 + -19152;
	// lwz r30,4(r16)
	r30.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// stw r21,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r21.u32);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r21,172(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// lis r30,-32251
	r30.s64 = -2113601536;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// lis r22,-32251
	r22.s64 = -2113601536;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// lwz r30,8(r16)
	r30.u64 = PPC_LOAD_U32(r16.u32 + 8);
	// stw r5,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r5.u32);
	// lwz r21,-18768(r21)
	r21.u64 = PPC_LOAD_U32(r21.u32 + -18768);
	// lwz r16,12(r16)
	r16.u64 = PPC_LOAD_U32(r16.u32 + 12);
	// lwz r5,208(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r14,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r14.u32);
	// lis r14,-32251
	r14.s64 = -2113601536;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r17.u32);
	// lis r17,-32251
	r17.s64 = -2113601536;
	// stw r15,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r15.u32);
	// addi r27,r1,1392
	r27.s64 = ctx.r1.s64 + 1392;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r19,4(r20)
	r19.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r15,8(r20)
	r15.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r21.u32);
	// lis r21,-32251
	r21.s64 = -2113601536;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r30.u32);
	// addi r30,r14,-19136
	r30.s64 = r14.s64 + -19136;
	// stw r16,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r16.u32);
	// addi r16,r17,-19120
	r16.s64 = r17.s64 + -19120;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// addi r22,r22,-19104
	r22.s64 = r22.s64 + -19104;
	// stw r5,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r5.u32);
	// lwz r3,-18816(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + -18816);
	// lwz r28,-18800(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + -18800);
	// lwz r20,12(r20)
	r20.u64 = PPC_LOAD_U32(r20.u32 + 12);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r6,200(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// addi r5,r1,1072
	ctx.r5.s64 = ctx.r1.s64 + 1072;
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r19,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r19.u32);
	// addi r19,r1,1040
	r19.s64 = ctx.r1.s64 + 1040;
	// stw r28,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r28.u32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r23.u32);
	// lwz r28,172(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r8,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// stw r15,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r15.u32);
	// lwz r15,152(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r19,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r19.u32);
	// addi r19,r1,1088
	r19.s64 = ctx.r1.s64 + 1088;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r28.u32);
	// stw r8,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// lwz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r25.u32);
	// stw r20,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r20.u32);
	// lis r20,-32251
	r20.s64 = -2113601536;
	// lwz r15,-19152(r15)
	r15.u64 = PPC_LOAD_U32(r15.u32 + -19152);
	// stw r8,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r8.u32);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r26,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r26.u32);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r3,r21,-19088
	ctx.r3.s64 = r21.s64 + -19088;
	// lwz r26,144(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r7,136(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r25,4(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r23,8(r26)
	r23.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r19,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r19.u32);
	// stw r7,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r7.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// lwz r26,12(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// rotlwi r8,r24,0
	ctx.r8.u64 = __builtin_rotateleft32(r24.u32, 0);
	// addi r24,r9,-19040
	r24.s64 = ctx.r9.s64 + -19040;
	// stw r9,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r7,r1,1056
	ctx.r7.s64 = ctx.r1.s64 + 1056;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r24,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r24.u32);
	// lwz r24,4(r18)
	r24.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// lwz r9,8(r18)
	ctx.r9.u64 = PPC_LOAD_U32(r18.u32 + 8);
	// lwz r18,12(r18)
	r18.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r19,188(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r21.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r21,140(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// rotlwi r10,r27,0
	ctx.r10.u64 = __builtin_rotateleft32(r27.u32, 0);
	// addi r27,r28,-18976
	r27.s64 = r28.s64 + -18976;
	// lwz r28,124(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r27.u32);
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,132(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r22,208(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r20,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r20.u32);
	// lwz r5,192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r20,200(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stw r23,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r23.u32);
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// stw r22,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r22.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// addi r5,r1,1120
	ctx.r5.s64 = ctx.r1.s64 + 1120;
	// stw r20,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r20.u32);
	// lwz r10,196(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r26.u32);
	// lwz r14,-19136(r14)
	r14.u64 = PPC_LOAD_U32(r14.u32 + -19136);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r14.u32);
	// lwz r14,4(r30)
	r14.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r14,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r14.u32);
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r16.u32);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r10,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r10,176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r26,92(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r23,116(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,204(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r10,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r14,8(r30)
	r14.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r31.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r17,-19120(r17)
	r17.u64 = PPC_LOAD_U32(r17.u32 + -19120);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r16,4(r16)
	r16.u64 = PPC_LOAD_U32(r16.u32 + 4);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r26,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r26.u32);
	// stw r23,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, r23.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r3.u32);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// addi r7,r8,-19008
	ctx.r7.s64 = ctx.r8.s64 + -19008;
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r28.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r21,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r21.u32);
	// addi r9,r1,1104
	ctx.r9.s64 = ctx.r1.s64 + 1104;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r6,-19104(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19104);
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r15.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r18,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r18.u32);
	// stw r25,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r25.u32);
	// stw r14,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r14.u32);
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r30.u32);
	// stw r17,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r17.u32);
	// stw r16,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r16.u32);
	// lwz r28,164(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lis r29,-32251
	r29.s64 = -2113601536;
	// lwz r22,172(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// rotlwi r19,r15,0
	r19.u64 = __builtin_rotateleft32(r15.u32, 0);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r30,8(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r31,r1,1136
	r31.s64 = ctx.r1.s64 + 1136;
	// addi r26,r9,-18960
	r26.s64 = ctx.r9.s64 + -18960;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lis r28,-32251
	r28.s64 = -2113601536;
	// lwz r21,4(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r27,r28,-18992
	r27.s64 = r28.s64 + -18992;
	// addi r30,r10,-19024
	r30.s64 = ctx.r10.s64 + -19024;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r26,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r26.u32);
	// lwz r26,204(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r6,r29,-19056
	ctx.r6.s64 = r29.s64 + -19056;
	// addi r24,r11,-19072
	r24.s64 = r11.s64 + -19072;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r29,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r29.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// lwz r14,156(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// lwz r28,160(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r24.u32);
	// lwz r24,196(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// lwz r21,8(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// lwz r22,12(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lwz r29,152(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r25,112(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r21.u32);
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r22.u32);
	// lwz r22,180(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r30,144(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r20,4(r7)
	r20.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r22,-18976(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + -18976);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r15,104(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r22.u32);
	// lwz r22,184(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r27,96(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r23,148(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r18,92(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,4(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// lwz r17,116(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r23,-19088(r23)
	r23.u64 = PPC_LOAD_U32(r23.u32 + -19088);
	// lwz r16,140(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r8,-19008(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19008);
	// stw r21,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r21.u32);
	// lwz r21,8(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// lwz r22,12(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// lwz r22,216(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r22,-19040(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + -19040);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// lwz r22,280(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r5,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r5.u32);
	// lwz r21,4(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// stw r21,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r21.u32);
	// lwz r21,8(r22)
	r21.u64 = PPC_LOAD_U32(r22.u32 + 8);
	// lwz r22,12(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,296(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r19,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r19.u32);
	// stw r18,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r18.u32);
	// stw r17,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r17.u32);
	// stw r16,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r16.u32);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// addi r6,r1,1184
	ctx.r6.s64 = ctx.r1.s64 + 1184;
	// stw r30,12(r25)
	PPC_STORE_U32(r25.u32 + 12, r30.u32);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// stw r24,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r24.u32);
	// addi r24,r1,1200
	r24.s64 = ctx.r1.s64 + 1200;
	// stw r26,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r26.u32);
	// stw r29,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r29.u32);
	// addi r29,r1,1152
	r29.s64 = ctx.r1.s64 + 1152;
	// lwz r4,-19056(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19056);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r25,4(r7)
	r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// ori r5,r5,61440
	ctx.r5.u64 = ctx.r5.u64 | 61440;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// addi r9,r1,1168
	ctx.r9.s64 = ctx.r1.s64 + 1168;
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r31.u32);
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r9.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r1,1232
	ctx.r10.s64 = ctx.r1.s64 + 1232;
	// lwz r30,156(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r11,r1,1216
	r11.s64 = ctx.r1.s64 + 1216;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r20.u32);
	// stw r25,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r25.u32);
	// lwz r20,-18992(r6)
	r20.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18992);
	// lwz r6,136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r15,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r15.u32);
	// lwz r16,4(r30)
	r16.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r15,8(r30)
	r15.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r17,-19024(r6)
	r17.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19024);
	// lwz r6,264(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stw r14,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r14.u32);
	// addi r3,r9,-19200
	ctx.r3.s64 = ctx.r9.s64 + -19200;
	// lwz r27,168(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r30,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r30.u32);
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r6,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// stw r5,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r5.u32);
	// lwz r26,160(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r6,296(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r23.u32);
	// lwz r23,8(r7)
	r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r19,4(r31)
	r19.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r18,8(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r4,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r4.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r11.u32);
	// lwz r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// lwz r25,216(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r14,184(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r30,-18960(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + -18960);
	// stw r30,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r30.u32);
	// lwz r30,4(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// lwz r11,264(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// stw r20,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r20.u32);
	// stw r19,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r19.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r30.u32);
	// lwz r30,8(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r27,12(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// stw r18,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r18.u32);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r31.u32);
	// stw r11,12(r24)
	PPC_STORE_U32(r24.u32 + 12, r11.u32);
	// lwz r11,296(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r27.u32);
	// lwz r27,124(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r3,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r3.u32);
	// stw r5,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r5.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r4,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r4.u32);
	// lwz r27,-19072(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + -19072);
	// lwz r10,280(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r23,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r23.u32);
	// stw r7,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r7.u32);
	// stw r21,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r21.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// lwz r27,4(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,216(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// stw r22,12(r25)
	PPC_STORE_U32(r25.u32 + 12, r22.u32);
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// lwz r27,8(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r26,12(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,184(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r14,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r14.u32);
	// stw r17,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r17.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// lwz r26,196(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r16,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r16.u32);
	// stw r15,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r15.u32);
	// stw r26,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r26.u32);
	// lwz r26,204(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// lwz r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// stw r26,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r26.u32);
	// lwz r28,152(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r28.u32);
	// lwz r28,144(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r28,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r28.u32);
	// lwz r28,96(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r28,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r28.u32);
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r28,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r28.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stw r9,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r9.u32);
	// bl 0x8261e218
	sub_8261E218(ctx, base);
	// lwz r20,1684(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1684);
	// lwz r28,1668(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1668);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r3.u32);
	// blt 0x826182a8
	if (cr0.lt) goto loc_826182A8;
	// lwz r11,1692(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1692);
	// li r29,1
	r29.s64 = 1;
	// rlwinm. r11,r11,0,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826173ec
	if (cr0.eq) goto loc_826173EC;
	// stb r29,4320(r28)
	PPC_STORE_U8(r28.u32 + 4320, r29.u8);
loc_826173EC:
	// lbz r11,4320(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 4320);
	// li r22,6
	r22.s64 = 6;
	// li r30,5
	r30.s64 = 5;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,9
	r11.s64 = 9;
	// li r21,3
	r21.s64 = 3;
	// li r25,8
	r25.s64 = 8;
	// stw r11,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x82617490
	if (cr0.eq) goto loc_82617490;
	// stw r25,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r25.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stw r25,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r25.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r11.u32);
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r11.u32);
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, r11.u32);
	// stw r25,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r25.u32);
	// stw r25,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, r25.u32);
	// stw r25,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r25.u32);
	// stw r25,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, r25.u32);
	// stw r25,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, r25.u32);
	// stw r25,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, r25.u32);
	// bl 0x82616928
	sub_82616928(ctx, base);
	// li r26,11
	r26.s64 = 11;
	// addi r27,r1,1424
	r27.s64 = ctx.r1.s64 + 1424;
	// addi r31,r28,748
	r31.s64 = r28.s64 + 748;
loc_82617458:
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// ori r5,r5,61440
	ctx.r5.u64 = ctx.r5.u64 | 61440;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8261e218
	sub_8261E218(ctx, base);
	// stw r3,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826182a8
	if (cr0.lt) goto loc_826182A8;
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// addi r27,r27,-16
	r27.s64 = r27.s64 + -16;
	// bge 0x82617458
	if (!cr0.lt) goto loc_82617458;
	// b 0x8261756c
	goto loc_8261756C;
loc_82617490:
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r22,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, r22.u32);
	// li r9,11
	ctx.r9.s64 = 11;
	// stw r30,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, r30.u32);
	// stw r10,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r10.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stw r10,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r10.u32);
	// li r4,11
	ctx.r4.s64 = 11;
	// stw r10,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r10.u32);
	// stw r11,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, r11.u32);
	// stw r9,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r9.u32);
	// stw r22,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r22.u32);
	// stw r22,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, r22.u32);
	// stw r22,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, r22.u32);
	// bl 0x82616928
	sub_82616928(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// mr r26,r22
	r26.u64 = r22.u64;
	// addi r27,r1,1104
	r27.s64 = ctx.r1.s64 + 1104;
	// addi r31,r28,776
	r31.s64 = r28.s64 + 776;
	// ori r24,r11,61440
	r24.u64 = r11.u64 | 61440;
loc_826174E0:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8261e218
	sub_8261E218(ctx, base);
	// stw r3,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826182a8
	if (cr0.lt) goto loc_826182A8;
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// addi r27,r27,-16
	r27.s64 = r27.s64 + -16;
	// bge 0x826174e0
	if (!cr0.lt) goto loc_826174E0;
	// mr r26,r21
	r26.u64 = r21.u64;
	// addi r27,r1,1232
	r27.s64 = ctx.r1.s64 + 1232;
	// addi r31,r28,808
	r31.s64 = r28.s64 + 808;
loc_8261751C:
	// addi r6,r31,-4
	ctx.r6.s64 = r31.s64 + -4;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,-16
	ctx.r3.s64 = r27.s64 + -16;
	// bl 0x8261e218
	sub_8261E218(ctx, base);
	// stw r3,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826182a8
	if (cr0.lt) goto loc_826182A8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8261e218
	sub_8261E218(ctx, base);
	// stw r3,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826182a8
	if (cr0.lt) goto loc_826182A8;
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// addi r27,r27,-32
	r27.s64 = r27.s64 + -32;
	// bge 0x8261751c
	if (!cr0.lt) goto loc_8261751C;
loc_8261756C:
	// lis r7,42
	ctx.r7.s64 = 2752512;
	// stb r21,837(r1)
	PPC_STORE_U8(ctx.r1.u32 + 837, r21.u8);
	// lis r11,42
	r11.s64 = 2752512;
	// stb r29,849(r1)
	PPC_STORE_U8(ctx.r1.u32 + 849, r29.u8);
	// lis r4,26
	ctx.r4.s64 = 1703936;
	// stb r30,885(r1)
	PPC_STORE_U8(ctx.r1.u32 + 885, r30.u8);
	// lis r6,26
	ctx.r6.s64 = 1703936;
	// stb r30,897(r1)
	PPC_STORE_U8(ctx.r1.u32 + 897, r30.u8);
	// lis r3,24
	ctx.r3.s64 = 1572864;
	// stb r29,898(r1)
	PPC_STORE_U8(ctx.r1.u32 + 898, r29.u8);
	// lis r10,44
	ctx.r10.s64 = 2883584;
	// stb r30,909(r1)
	PPC_STORE_U8(ctx.r1.u32 + 909, r30.u8);
	// ori r5,r7,8592
	ctx.r5.u64 = ctx.r7.u64 | 8592;
	// stb r30,921(r1)
	PPC_STORE_U8(ctx.r1.u32 + 921, r30.u8);
	// ori r8,r11,9145
	ctx.r8.u64 = r11.u64 | 9145;
	// stb r21,922(r1)
	PPC_STORE_U8(ctx.r1.u32 + 922, r21.u8);
	// ori r7,r4,8838
	ctx.r7.u64 = ctx.r4.u64 | 8838;
	// stw r5,832(r1)
	PPC_STORE_U32(ctx.r1.u32 + 832, ctx.r5.u32);
	// li r31,0
	r31.s64 = 0;
	// stw r8,820(r1)
	PPC_STORE_U32(ctx.r1.u32 + 820, ctx.r8.u32);
	// ori r10,r10,9055
	ctx.r10.u64 = ctx.r10.u64 | 9055;
	// stw r7,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r7.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r31,816(r1)
	PPC_STORE_U16(ctx.r1.u32 + 816, r31.u16);
	// li r26,12
	r26.s64 = 12;
	// sth r31,818(r1)
	PPC_STORE_U16(ctx.r1.u32 + 818, r31.u16);
	// li r19,16
	r19.s64 = 16;
	// stb r31,824(r1)
	PPC_STORE_U8(ctx.r1.u32 + 824, r31.u8);
	// ori r6,r6,8326
	ctx.r6.u64 = ctx.r6.u64 | 8326;
	// stb r31,825(r1)
	PPC_STORE_U8(ctx.r1.u32 + 825, r31.u8);
	// li r23,20
	r23.s64 = 20;
	// stb r31,826(r1)
	PPC_STORE_U8(ctx.r1.u32 + 826, r31.u8);
	// li r16,24
	r16.s64 = 24;
	// sth r31,828(r1)
	PPC_STORE_U16(ctx.r1.u32 + 828, r31.u16);
	// ori r3,r3,10374
	ctx.r3.u64 = ctx.r3.u64 | 10374;
	// sth r26,830(r1)
	PPC_STORE_U16(ctx.r1.u32 + 830, r26.u16);
	// li r17,10
	r17.s64 = 10;
	// stb r31,836(r1)
	PPC_STORE_U8(ctx.r1.u32 + 836, r31.u8);
	// li r18,28
	r18.s64 = 28;
	// stb r31,838(r1)
	PPC_STORE_U8(ctx.r1.u32 + 838, r31.u8);
	// li r4,32
	ctx.r4.s64 = 32;
	// sth r31,840(r1)
	PPC_STORE_U16(ctx.r1.u32 + 840, r31.u16);
	// li r15,36
	r15.s64 = 36;
	// sth r19,842(r1)
	PPC_STORE_U16(ctx.r1.u32 + 842, r19.u16);
	// lis r11,26
	r11.s64 = 1703936;
	// stw r6,844(r1)
	PPC_STORE_U32(ctx.r1.u32 + 844, ctx.r6.u32);
	// li r27,40
	r27.s64 = 40;
	// stb r31,848(r1)
	PPC_STORE_U8(ctx.r1.u32 + 848, r31.u8);
	// stb r31,850(r1)
	PPC_STORE_U8(ctx.r1.u32 + 850, r31.u8);
	// ori r11,r11,9126
	r11.u64 = r11.u64 | 9126;
	// sth r31,852(r1)
	PPC_STORE_U16(ctx.r1.u32 + 852, r31.u16);
	// li r24,44
	r24.s64 = 44;
	// sth r23,854(r1)
	PPC_STORE_U16(ctx.r1.u32 + 854, r23.u16);
	// stb r31,860(r1)
	PPC_STORE_U8(ctx.r1.u32 + 860, r31.u8);
	// stb r9,861(r1)
	PPC_STORE_U8(ctx.r1.u32 + 861, ctx.r9.u8);
	// stb r31,862(r1)
	PPC_STORE_U8(ctx.r1.u32 + 862, r31.u8);
	// sth r31,864(r1)
	PPC_STORE_U16(ctx.r1.u32 + 864, r31.u16);
	// sth r16,866(r1)
	PPC_STORE_U16(ctx.r1.u32 + 866, r16.u16);
	// stw r3,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r3.u32);
	// stb r31,872(r1)
	PPC_STORE_U8(ctx.r1.u32 + 872, r31.u8);
	// stb r17,873(r1)
	PPC_STORE_U8(ctx.r1.u32 + 873, r17.u8);
	// stb r31,874(r1)
	PPC_STORE_U8(ctx.r1.u32 + 874, r31.u8);
	// sth r31,876(r1)
	PPC_STORE_U16(ctx.r1.u32 + 876, r31.u16);
	// sth r18,878(r1)
	PPC_STORE_U16(ctx.r1.u32 + 878, r18.u16);
	// stw r10,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r10.u32);
	// stb r31,884(r1)
	PPC_STORE_U8(ctx.r1.u32 + 884, r31.u8);
	// stb r31,886(r1)
	PPC_STORE_U8(ctx.r1.u32 + 886, r31.u8);
	// sth r31,888(r1)
	PPC_STORE_U16(ctx.r1.u32 + 888, r31.u16);
	// sth r4,890(r1)
	PPC_STORE_U16(ctx.r1.u32 + 890, ctx.r4.u16);
	// stw r10,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r10.u32);
	// stb r31,896(r1)
	PPC_STORE_U8(ctx.r1.u32 + 896, r31.u8);
	// sth r31,900(r1)
	PPC_STORE_U16(ctx.r1.u32 + 900, r31.u16);
	// sth r15,902(r1)
	PPC_STORE_U16(ctx.r1.u32 + 902, r15.u16);
	// stw r10,904(r1)
	PPC_STORE_U32(ctx.r1.u32 + 904, ctx.r10.u32);
	// stb r31,908(r1)
	PPC_STORE_U8(ctx.r1.u32 + 908, r31.u8);
	// stb r9,910(r1)
	PPC_STORE_U8(ctx.r1.u32 + 910, ctx.r9.u8);
	// sth r31,912(r1)
	PPC_STORE_U16(ctx.r1.u32 + 912, r31.u16);
	// sth r27,914(r1)
	PPC_STORE_U16(ctx.r1.u32 + 914, r27.u16);
	// stw r10,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r10.u32);
	// stb r31,920(r1)
	PPC_STORE_U8(ctx.r1.u32 + 920, r31.u8);
	// sth r31,924(r1)
	PPC_STORE_U16(ctx.r1.u32 + 924, r31.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// std r28,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, r28.u64);
	// sth r24,926(r1)
	PPC_STORE_U16(ctx.r1.u32 + 926, r24.u16);
	// li r14,48
	r14.s64 = 48;
	// stb r9,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r9.u8);
	// li r24,7
	r24.s64 = 7;
	// li r27,255
	r27.s64 = 255;
	// stw r10,928(r1)
	PPC_STORE_U32(ctx.r1.u32 + 928, ctx.r10.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r31,932(r1)
	PPC_STORE_U8(ctx.r1.u32 + 932, r31.u8);
	// stb r30,933(r1)
	PPC_STORE_U8(ctx.r1.u32 + 933, r30.u8);
	// sth r31,936(r1)
	PPC_STORE_U16(ctx.r1.u32 + 936, r31.u16);
	// sth r14,938(r1)
	PPC_STORE_U16(ctx.r1.u32 + 938, r14.u16);
	// stw r10,940(r1)
	PPC_STORE_U32(ctx.r1.u32 + 940, ctx.r10.u32);
	// stb r31,944(r1)
	PPC_STORE_U8(ctx.r1.u32 + 944, r31.u8);
	// stb r30,945(r1)
	PPC_STORE_U8(ctx.r1.u32 + 945, r30.u8);
	// stb r30,946(r1)
	PPC_STORE_U8(ctx.r1.u32 + 946, r30.u8);
	// sth r29,948(r1)
	PPC_STORE_U16(ctx.r1.u32 + 948, r29.u16);
	// sth r31,950(r1)
	PPC_STORE_U16(ctx.r1.u32 + 950, r31.u16);
	// stw r11,952(r1)
	PPC_STORE_U32(ctx.r1.u32 + 952, r11.u32);
	// stb r31,956(r1)
	PPC_STORE_U8(ctx.r1.u32 + 956, r31.u8);
	// stb r30,957(r1)
	PPC_STORE_U8(ctx.r1.u32 + 957, r30.u8);
	// stb r22,958(r1)
	PPC_STORE_U8(ctx.r1.u32 + 958, r22.u8);
	// sth r29,960(r1)
	PPC_STORE_U16(ctx.r1.u32 + 960, r29.u16);
	// sth r19,962(r1)
	PPC_STORE_U16(ctx.r1.u32 + 962, r19.u16);
	// stw r11,964(r1)
	PPC_STORE_U32(ctx.r1.u32 + 964, r11.u32);
	// stb r31,968(r1)
	PPC_STORE_U8(ctx.r1.u32 + 968, r31.u8);
	// lbz r28,128(r1)
	r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// stb r30,969(r1)
	PPC_STORE_U8(ctx.r1.u32 + 969, r30.u8);
	// stb r24,970(r1)
	PPC_STORE_U8(ctx.r1.u32 + 970, r24.u8);
	// sth r29,972(r1)
	PPC_STORE_U16(ctx.r1.u32 + 972, r29.u16);
	// sth r4,974(r1)
	PPC_STORE_U16(ctx.r1.u32 + 974, ctx.r4.u16);
	// stb r28,934(r1)
	PPC_STORE_U8(ctx.r1.u32 + 934, r28.u8);
	// li r28,2
	r28.s64 = 2;
	// stw r11,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, r11.u32);
	// stb r31,980(r1)
	PPC_STORE_U8(ctx.r1.u32 + 980, r31.u8);
	// stb r30,981(r1)
	PPC_STORE_U8(ctx.r1.u32 + 981, r30.u8);
	// stb r25,982(r1)
	PPC_STORE_U8(ctx.r1.u32 + 982, r25.u8);
	// sth r27,984(r1)
	PPC_STORE_U16(ctx.r1.u32 + 984, r27.u16);
	// sth r31,986(r1)
	PPC_STORE_U16(ctx.r1.u32 + 986, r31.u16);
	// stw r9,988(r1)
	PPC_STORE_U32(ctx.r1.u32 + 988, ctx.r9.u32);
	// stb r31,992(r1)
	PPC_STORE_U8(ctx.r1.u32 + 992, r31.u8);
	// stb r31,993(r1)
	PPC_STORE_U8(ctx.r1.u32 + 993, r31.u8);
	// stb r31,994(r1)
	PPC_STORE_U8(ctx.r1.u32 + 994, r31.u8);
	// sth r31,672(r1)
	PPC_STORE_U16(ctx.r1.u32 + 672, r31.u16);
	// sth r31,674(r1)
	PPC_STORE_U16(ctx.r1.u32 + 674, r31.u16);
	// stw r8,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r8.u32);
	// stb r31,680(r1)
	PPC_STORE_U8(ctx.r1.u32 + 680, r31.u8);
	// stb r31,681(r1)
	PPC_STORE_U8(ctx.r1.u32 + 681, r31.u8);
	// stb r31,682(r1)
	PPC_STORE_U8(ctx.r1.u32 + 682, r31.u8);
	// sth r31,684(r1)
	PPC_STORE_U16(ctx.r1.u32 + 684, r31.u16);
	// sth r26,686(r1)
	PPC_STORE_U16(ctx.r1.u32 + 686, r26.u16);
	// stw r5,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r5.u32);
	// stb r31,692(r1)
	PPC_STORE_U8(ctx.r1.u32 + 692, r31.u8);
	// stb r21,693(r1)
	PPC_STORE_U8(ctx.r1.u32 + 693, r21.u8);
	// stb r31,694(r1)
	PPC_STORE_U8(ctx.r1.u32 + 694, r31.u8);
	// sth r31,696(r1)
	PPC_STORE_U16(ctx.r1.u32 + 696, r31.u16);
	// sth r19,698(r1)
	PPC_STORE_U16(ctx.r1.u32 + 698, r19.u16);
	// stw r6,700(r1)
	PPC_STORE_U32(ctx.r1.u32 + 700, ctx.r6.u32);
	// stb r31,704(r1)
	PPC_STORE_U8(ctx.r1.u32 + 704, r31.u8);
	// stb r29,705(r1)
	PPC_STORE_U8(ctx.r1.u32 + 705, r29.u8);
	// stb r31,706(r1)
	PPC_STORE_U8(ctx.r1.u32 + 706, r31.u8);
	// sth r31,708(r1)
	PPC_STORE_U16(ctx.r1.u32 + 708, r31.u16);
	// sth r23,710(r1)
	PPC_STORE_U16(ctx.r1.u32 + 710, r23.u16);
	// stw r7,712(r1)
	PPC_STORE_U32(ctx.r1.u32 + 712, ctx.r7.u32);
	// stb r31,716(r1)
	PPC_STORE_U8(ctx.r1.u32 + 716, r31.u8);
	// stb r28,717(r1)
	PPC_STORE_U8(ctx.r1.u32 + 717, r28.u8);
	// stb r31,718(r1)
	PPC_STORE_U8(ctx.r1.u32 + 718, r31.u8);
	// sth r31,720(r1)
	PPC_STORE_U16(ctx.r1.u32 + 720, r31.u16);
	// sth r16,722(r1)
	PPC_STORE_U16(ctx.r1.u32 + 722, r16.u16);
	// stw r3,724(r1)
	PPC_STORE_U32(ctx.r1.u32 + 724, ctx.r3.u32);
	// stb r31,728(r1)
	PPC_STORE_U8(ctx.r1.u32 + 728, r31.u8);
	// stb r17,729(r1)
	PPC_STORE_U8(ctx.r1.u32 + 729, r17.u8);
	// stb r31,730(r1)
	PPC_STORE_U8(ctx.r1.u32 + 730, r31.u8);
	// sth r31,732(r1)
	PPC_STORE_U16(ctx.r1.u32 + 732, r31.u16);
	// sth r18,734(r1)
	PPC_STORE_U16(ctx.r1.u32 + 734, r18.u16);
	// stw r10,736(r1)
	PPC_STORE_U32(ctx.r1.u32 + 736, ctx.r10.u32);
	// stb r31,740(r1)
	PPC_STORE_U8(ctx.r1.u32 + 740, r31.u8);
	// stb r30,741(r1)
	PPC_STORE_U8(ctx.r1.u32 + 741, r30.u8);
	// stb r31,742(r1)
	PPC_STORE_U8(ctx.r1.u32 + 742, r31.u8);
	// sth r31,744(r1)
	PPC_STORE_U16(ctx.r1.u32 + 744, r31.u16);
	// sth r15,758(r1)
	PPC_STORE_U16(ctx.r1.u32 + 758, r15.u16);
	// li r15,2
	r15.s64 = 2;
	// sth r4,746(r1)
	PPC_STORE_U16(ctx.r1.u32 + 746, ctx.r4.u16);
	// stw r10,748(r1)
	PPC_STORE_U32(ctx.r1.u32 + 748, ctx.r10.u32);
	// stb r31,752(r1)
	PPC_STORE_U8(ctx.r1.u32 + 752, r31.u8);
	// stb r30,753(r1)
	PPC_STORE_U8(ctx.r1.u32 + 753, r30.u8);
	// stb r29,754(r1)
	PPC_STORE_U8(ctx.r1.u32 + 754, r29.u8);
	// sth r31,756(r1)
	PPC_STORE_U16(ctx.r1.u32 + 756, r31.u16);
	// stw r10,760(r1)
	PPC_STORE_U32(ctx.r1.u32 + 760, ctx.r10.u32);
	// stb r31,764(r1)
	PPC_STORE_U8(ctx.r1.u32 + 764, r31.u8);
	// stb r30,765(r1)
	PPC_STORE_U8(ctx.r1.u32 + 765, r30.u8);
	// stb r15,766(r1)
	PPC_STORE_U8(ctx.r1.u32 + 766, r15.u8);
	// sth r29,768(r1)
	PPC_STORE_U16(ctx.r1.u32 + 768, r29.u16);
	// sth r31,770(r1)
	PPC_STORE_U16(ctx.r1.u32 + 770, r31.u16);
	// stw r11,772(r1)
	PPC_STORE_U32(ctx.r1.u32 + 772, r11.u32);
	// stb r31,776(r1)
	PPC_STORE_U8(ctx.r1.u32 + 776, r31.u8);
	// stb r30,777(r1)
	PPC_STORE_U8(ctx.r1.u32 + 777, r30.u8);
	// stb r22,778(r1)
	PPC_STORE_U8(ctx.r1.u32 + 778, r22.u8);
	// sth r29,780(r1)
	PPC_STORE_U16(ctx.r1.u32 + 780, r29.u16);
	// sth r19,782(r1)
	PPC_STORE_U16(ctx.r1.u32 + 782, r19.u16);
	// stw r11,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, r11.u32);
	// stb r31,788(r1)
	PPC_STORE_U8(ctx.r1.u32 + 788, r31.u8);
	// stb r30,789(r1)
	PPC_STORE_U8(ctx.r1.u32 + 789, r30.u8);
	// stb r24,790(r1)
	PPC_STORE_U8(ctx.r1.u32 + 790, r24.u8);
	// sth r29,792(r1)
	PPC_STORE_U16(ctx.r1.u32 + 792, r29.u16);
	// sth r4,794(r1)
	PPC_STORE_U16(ctx.r1.u32 + 794, ctx.r4.u16);
	// stw r11,796(r1)
	PPC_STORE_U32(ctx.r1.u32 + 796, r11.u32);
	// stb r31,800(r1)
	PPC_STORE_U8(ctx.r1.u32 + 800, r31.u8);
	// stb r30,801(r1)
	PPC_STORE_U8(ctx.r1.u32 + 801, r30.u8);
	// stb r25,802(r1)
	PPC_STORE_U8(ctx.r1.u32 + 802, r25.u8);
	// sth r27,804(r1)
	PPC_STORE_U16(ctx.r1.u32 + 804, r27.u16);
	// sth r31,806(r1)
	PPC_STORE_U16(ctx.r1.u32 + 806, r31.u16);
	// stw r9,808(r1)
	PPC_STORE_U32(ctx.r1.u32 + 808, ctx.r9.u32);
	// stb r31,812(r1)
	PPC_STORE_U8(ctx.r1.u32 + 812, r31.u8);
	// stb r31,813(r1)
	PPC_STORE_U8(ctx.r1.u32 + 813, r31.u8);
	// stb r31,814(r1)
	PPC_STORE_U8(ctx.r1.u32 + 814, r31.u8);
	// sth r31,528(r1)
	PPC_STORE_U16(ctx.r1.u32 + 528, r31.u16);
	// sth r31,530(r1)
	PPC_STORE_U16(ctx.r1.u32 + 530, r31.u16);
	// stw r8,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, ctx.r8.u32);
	// stb r31,536(r1)
	PPC_STORE_U8(ctx.r1.u32 + 536, r31.u8);
	// stb r31,537(r1)
	PPC_STORE_U8(ctx.r1.u32 + 537, r31.u8);
	// stb r31,538(r1)
	PPC_STORE_U8(ctx.r1.u32 + 538, r31.u8);
	// sth r31,540(r1)
	PPC_STORE_U16(ctx.r1.u32 + 540, r31.u16);
	// sth r26,542(r1)
	PPC_STORE_U16(ctx.r1.u32 + 542, r26.u16);
	// stw r5,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r5.u32);
	// stb r31,548(r1)
	PPC_STORE_U8(ctx.r1.u32 + 548, r31.u8);
	// stb r21,549(r1)
	PPC_STORE_U8(ctx.r1.u32 + 549, r21.u8);
	// stb r31,550(r1)
	PPC_STORE_U8(ctx.r1.u32 + 550, r31.u8);
	// sth r31,552(r1)
	PPC_STORE_U16(ctx.r1.u32 + 552, r31.u16);
	// sth r19,554(r1)
	PPC_STORE_U16(ctx.r1.u32 + 554, r19.u16);
	// stw r6,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// stb r31,560(r1)
	PPC_STORE_U8(ctx.r1.u32 + 560, r31.u8);
	// stb r29,561(r1)
	PPC_STORE_U8(ctx.r1.u32 + 561, r29.u8);
	// stb r31,562(r1)
	PPC_STORE_U8(ctx.r1.u32 + 562, r31.u8);
	// sth r31,564(r1)
	PPC_STORE_U16(ctx.r1.u32 + 564, r31.u16);
	// sth r23,566(r1)
	PPC_STORE_U16(ctx.r1.u32 + 566, r23.u16);
	// stw r7,568(r1)
	PPC_STORE_U32(ctx.r1.u32 + 568, ctx.r7.u32);
	// stb r31,572(r1)
	PPC_STORE_U8(ctx.r1.u32 + 572, r31.u8);
	// stb r15,573(r1)
	PPC_STORE_U8(ctx.r1.u32 + 573, r15.u8);
	// stb r31,574(r1)
	PPC_STORE_U8(ctx.r1.u32 + 574, r31.u8);
	// sth r31,576(r1)
	PPC_STORE_U16(ctx.r1.u32 + 576, r31.u16);
	// sth r16,578(r1)
	PPC_STORE_U16(ctx.r1.u32 + 578, r16.u16);
	// stw r3,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r3.u32);
	// stb r31,584(r1)
	PPC_STORE_U8(ctx.r1.u32 + 584, r31.u8);
	// stb r17,585(r1)
	PPC_STORE_U8(ctx.r1.u32 + 585, r17.u8);
	// stb r31,586(r1)
	PPC_STORE_U8(ctx.r1.u32 + 586, r31.u8);
	// sth r31,588(r1)
	PPC_STORE_U16(ctx.r1.u32 + 588, r31.u16);
	// sth r18,590(r1)
	PPC_STORE_U16(ctx.r1.u32 + 590, r18.u16);
	// stw r10,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r10.u32);
	// stb r31,596(r1)
	PPC_STORE_U8(ctx.r1.u32 + 596, r31.u8);
	// stb r30,597(r1)
	PPC_STORE_U8(ctx.r1.u32 + 597, r30.u8);
	// stb r31,598(r1)
	PPC_STORE_U8(ctx.r1.u32 + 598, r31.u8);
	// sth r31,600(r1)
	PPC_STORE_U16(ctx.r1.u32 + 600, r31.u16);
	// sth r4,602(r1)
	PPC_STORE_U16(ctx.r1.u32 + 602, ctx.r4.u16);
	// stw r10,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r10.u32);
	// stb r31,608(r1)
	PPC_STORE_U8(ctx.r1.u32 + 608, r31.u8);
	// stb r30,609(r1)
	PPC_STORE_U8(ctx.r1.u32 + 609, r30.u8);
	// stb r29,610(r1)
	PPC_STORE_U8(ctx.r1.u32 + 610, r29.u8);
	// sth r29,612(r1)
	PPC_STORE_U16(ctx.r1.u32 + 612, r29.u16);
	// sth r31,614(r1)
	PPC_STORE_U16(ctx.r1.u32 + 614, r31.u16);
	// stw r11,616(r1)
	PPC_STORE_U32(ctx.r1.u32 + 616, r11.u32);
	// lis r10,44
	ctx.r10.s64 = 2883584;
	// stb r31,620(r1)
	PPC_STORE_U8(ctx.r1.u32 + 620, r31.u8);
	// stb r30,621(r1)
	PPC_STORE_U8(ctx.r1.u32 + 621, r30.u8);
	// ori r10,r10,9125
	ctx.r10.u64 = ctx.r10.u64 | 9125;
	// stb r22,622(r1)
	PPC_STORE_U8(ctx.r1.u32 + 622, r22.u8);
	// sth r29,624(r1)
	PPC_STORE_U16(ctx.r1.u32 + 624, r29.u16);
	// sth r19,626(r1)
	PPC_STORE_U16(ctx.r1.u32 + 626, r19.u16);
	// stw r11,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, r11.u32);
	// stb r31,632(r1)
	PPC_STORE_U8(ctx.r1.u32 + 632, r31.u8);
	// stb r30,633(r1)
	PPC_STORE_U8(ctx.r1.u32 + 633, r30.u8);
	// stb r24,634(r1)
	PPC_STORE_U8(ctx.r1.u32 + 634, r24.u8);
	// sth r29,636(r1)
	PPC_STORE_U16(ctx.r1.u32 + 636, r29.u16);
	// sth r4,638(r1)
	PPC_STORE_U16(ctx.r1.u32 + 638, ctx.r4.u16);
	// stw r11,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, r11.u32);
	// stb r31,644(r1)
	PPC_STORE_U8(ctx.r1.u32 + 644, r31.u8);
	// stb r30,645(r1)
	PPC_STORE_U8(ctx.r1.u32 + 645, r30.u8);
	// stb r25,646(r1)
	PPC_STORE_U8(ctx.r1.u32 + 646, r25.u8);
	// sth r27,648(r1)
	PPC_STORE_U16(ctx.r1.u32 + 648, r27.u16);
	// sth r31,650(r1)
	PPC_STORE_U16(ctx.r1.u32 + 650, r31.u16);
	// stw r9,652(r1)
	PPC_STORE_U32(ctx.r1.u32 + 652, ctx.r9.u32);
	// stb r31,656(r1)
	PPC_STORE_U8(ctx.r1.u32 + 656, r31.u8);
	// stb r31,657(r1)
	PPC_STORE_U8(ctx.r1.u32 + 657, r31.u8);
	// stb r31,658(r1)
	PPC_STORE_U8(ctx.r1.u32 + 658, r31.u8);
	// sth r31,432(r1)
	PPC_STORE_U16(ctx.r1.u32 + 432, r31.u16);
	// sth r31,434(r1)
	PPC_STORE_U16(ctx.r1.u32 + 434, r31.u16);
	// stw r8,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r8.u32);
	// stb r31,440(r1)
	PPC_STORE_U8(ctx.r1.u32 + 440, r31.u8);
	// stb r31,441(r1)
	PPC_STORE_U8(ctx.r1.u32 + 441, r31.u8);
	// stb r31,442(r1)
	PPC_STORE_U8(ctx.r1.u32 + 442, r31.u8);
	// sth r31,444(r1)
	PPC_STORE_U16(ctx.r1.u32 + 444, r31.u16);
	// sth r26,446(r1)
	PPC_STORE_U16(ctx.r1.u32 + 446, r26.u16);
	// stw r5,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r5.u32);
	// stb r31,452(r1)
	PPC_STORE_U8(ctx.r1.u32 + 452, r31.u8);
	// stb r21,453(r1)
	PPC_STORE_U8(ctx.r1.u32 + 453, r21.u8);
	// stb r31,454(r1)
	PPC_STORE_U8(ctx.r1.u32 + 454, r31.u8);
	// sth r31,456(r1)
	PPC_STORE_U16(ctx.r1.u32 + 456, r31.u16);
	// sth r19,458(r1)
	PPC_STORE_U16(ctx.r1.u32 + 458, r19.u16);
	// stw r6,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// stb r31,464(r1)
	PPC_STORE_U8(ctx.r1.u32 + 464, r31.u8);
	// stb r29,465(r1)
	PPC_STORE_U8(ctx.r1.u32 + 465, r29.u8);
	// stb r31,466(r1)
	PPC_STORE_U8(ctx.r1.u32 + 466, r31.u8);
	// sth r31,468(r1)
	PPC_STORE_U16(ctx.r1.u32 + 468, r31.u16);
	// sth r23,470(r1)
	PPC_STORE_U16(ctx.r1.u32 + 470, r23.u16);
	// stw r7,472(r1)
	PPC_STORE_U32(ctx.r1.u32 + 472, ctx.r7.u32);
	// stb r31,476(r1)
	PPC_STORE_U8(ctx.r1.u32 + 476, r31.u8);
	// stb r15,477(r1)
	PPC_STORE_U8(ctx.r1.u32 + 477, r15.u8);
	// stb r31,478(r1)
	PPC_STORE_U8(ctx.r1.u32 + 478, r31.u8);
	// sth r29,480(r1)
	PPC_STORE_U16(ctx.r1.u32 + 480, r29.u16);
	// sth r31,482(r1)
	PPC_STORE_U16(ctx.r1.u32 + 482, r31.u16);
	// stw r11,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, r11.u32);
	// stb r31,488(r1)
	PPC_STORE_U8(ctx.r1.u32 + 488, r31.u8);
	// stb r30,489(r1)
	PPC_STORE_U8(ctx.r1.u32 + 489, r30.u8);
	// stb r22,490(r1)
	PPC_STORE_U8(ctx.r1.u32 + 490, r22.u8);
	// sth r29,492(r1)
	PPC_STORE_U16(ctx.r1.u32 + 492, r29.u16);
	// sth r19,494(r1)
	PPC_STORE_U16(ctx.r1.u32 + 494, r19.u16);
	// stw r11,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, r11.u32);
	// stb r31,500(r1)
	PPC_STORE_U8(ctx.r1.u32 + 500, r31.u8);
	// stb r30,501(r1)
	PPC_STORE_U8(ctx.r1.u32 + 501, r30.u8);
	// stb r24,502(r1)
	PPC_STORE_U8(ctx.r1.u32 + 502, r24.u8);
	// sth r29,504(r1)
	PPC_STORE_U16(ctx.r1.u32 + 504, r29.u16);
	// sth r4,506(r1)
	PPC_STORE_U16(ctx.r1.u32 + 506, ctx.r4.u16);
	// stw r11,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, r11.u32);
	// stb r31,512(r1)
	PPC_STORE_U8(ctx.r1.u32 + 512, r31.u8);
	// stb r30,513(r1)
	PPC_STORE_U8(ctx.r1.u32 + 513, r30.u8);
	// stb r25,514(r1)
	PPC_STORE_U8(ctx.r1.u32 + 514, r25.u8);
	// sth r27,516(r1)
	PPC_STORE_U16(ctx.r1.u32 + 516, r27.u16);
	// sth r31,518(r1)
	PPC_STORE_U16(ctx.r1.u32 + 518, r31.u16);
	// stw r9,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r9.u32);
	// stb r31,524(r1)
	PPC_STORE_U8(ctx.r1.u32 + 524, r31.u8);
	// stb r31,525(r1)
	PPC_STORE_U8(ctx.r1.u32 + 525, r31.u8);
	// stb r31,526(r1)
	PPC_STORE_U8(ctx.r1.u32 + 526, r31.u8);
	// sth r31,336(r1)
	PPC_STORE_U16(ctx.r1.u32 + 336, r31.u16);
	// sth r31,338(r1)
	PPC_STORE_U16(ctx.r1.u32 + 338, r31.u16);
	// stw r8,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r8.u32);
	// stb r31,344(r1)
	PPC_STORE_U8(ctx.r1.u32 + 344, r31.u8);
	// stb r31,345(r1)
	PPC_STORE_U8(ctx.r1.u32 + 345, r31.u8);
	// stb r31,346(r1)
	PPC_STORE_U8(ctx.r1.u32 + 346, r31.u8);
	// sth r31,348(r1)
	PPC_STORE_U16(ctx.r1.u32 + 348, r31.u16);
	// sth r26,350(r1)
	PPC_STORE_U16(ctx.r1.u32 + 350, r26.u16);
	// stw r10,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// stb r31,356(r1)
	PPC_STORE_U8(ctx.r1.u32 + 356, r31.u8);
	// stb r30,357(r1)
	PPC_STORE_U8(ctx.r1.u32 + 357, r30.u8);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// stb r31,358(r1)
	PPC_STORE_U8(ctx.r1.u32 + 358, r31.u8);
	// sth r27,360(r1)
	PPC_STORE_U16(ctx.r1.u32 + 360, r27.u16);
	// sth r31,362(r1)
	PPC_STORE_U16(ctx.r1.u32 + 362, r31.u16);
	// stw r9,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r9.u32);
	// stb r31,368(r1)
	PPC_STORE_U8(ctx.r1.u32 + 368, r31.u8);
	// stb r31,369(r1)
	PPC_STORE_U8(ctx.r1.u32 + 369, r31.u8);
	// stb r31,370(r1)
	PPC_STORE_U8(ctx.r1.u32 + 370, r31.u8);
	// bl 0x825d7a90
	sub_825D7A90(ctx, base);
	// lis r11,-32761
	r11.s64 = -2147024896;
	// addic r10,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// ld r28,264(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// ori r29,r11,14
	r29.u64 = r11.u64 | 14;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x8261815c
	if (cr0.lt) goto loc_8261815C;
	// addi r3,r1,816
	ctx.r3.s64 = ctx.r1.s64 + 816;
	// bl 0x825d7a90
	sub_825D7A90(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x8261813c
	if (cr0.lt) goto loc_8261813C;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x825d7a90
	sub_825D7A90(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618140
	if (cr0.lt) goto loc_82618140;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x825d7a90
	sub_825D7A90(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618144
	if (cr0.lt) goto loc_82618144;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x825d7a90
	sub_825D7A90(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r27,r11,-19032
	r27.s64 = r11.s64 + -19032;
	// addi r3,r27,2144
	ctx.r3.s64 = r27.s64 + 2144;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,9944
	ctx.r3.s64 = r27.s64 + 9944;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,5808
	ctx.r3.s64 = r27.s64 + 5808;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,15976
	ctx.r3.s64 = r27.s64 + 15976;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r3,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,17104
	ctx.r3.s64 = r27.s64 + 17104;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,18232
	ctx.r3.s64 = r27.s64 + 18232;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,20080
	ctx.r3.s64 = r27.s64 + 20080;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,21704
	ctx.r3.s64 = r27.s64 + 21704;
	// bl 0x825d9288
	sub_825D9288(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,7320
	ctx.r3.s64 = r27.s64 + 7320;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,3648
	ctx.r3.s64 = r27.s64 + 3648;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,11568
	ctx.r3.s64 = r27.s64 + 11568;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// stw r3,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,13760
	ctx.r3.s64 = r27.s64 + 13760;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r3,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,19704
	ctx.r3.s64 = r27.s64 + 19704;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,21208
	ctx.r3.s64 = r27.s64 + 21208;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// addi r3,r27,22224
	ctx.r3.s64 = r27.s64 + 22224;
	// bl 0x825d9060
	sub_825D9060(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// stw r3,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r3.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// lis r8,11552
	ctx.r8.s64 = 757071872;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,330
	ctx.r8.u64 = ctx.r8.u64 | 330;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x825d5330
	sub_825D5330(ctx, base);
	// addic r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
	// blt 0x82618148
	if (cr0.lt) goto loc_82618148;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,296
	ctx.r5.s64 = ctx.r1.s64 + 296;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825d52e0
	sub_825D52E0(ctx, base);
	// lwz r11,300(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// stw r31,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-2
	r31.s64 = r11.s64 + -2;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f30,3792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f30.f64 = double(temp.f32);
	// li r29,4095
	r29.s64 = 4095;
	// lfs f29,-23476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -23476);
	f29.f64 = double(temp.f32);
	// lfs f27,-25596(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25596);
	f27.f64 = double(temp.f32);
	// lfs f31,-25600(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f31.f64 = double(temp.f32);
	// lfs f28,3856(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 3856);
	f28.f64 = double(temp.f32);
loc_82617DF0:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8314d76c
	__imp__XeCryptRandom(ctx, base);
	// lwz r11,264(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// std r11,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, r11.u64);
	// lfd f0,280(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmsubs f0,f0,f28,f31
	f0.f64 = double(float(f0.f64 * f28.f64 - f31.f64));
	// fmuls f26,f0,f27
	f26.f64 = double(float(f0.f64 * f27.f64));
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// bl 0x828ea9d8
	sub_828EA9D8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f26
	ctx.f1.f64 = f26.f64;
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fmuls f26,f0,f30
	f26.f64 = double(float(f0.f64 * f30.f64));
	// bl 0x828ea8f8
	sub_828EA8F8(ctx, base);
	// fmuls f0,f26,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f26.f64 * f29.f64));
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// lhz r11,222(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 222);
	// fadds f0,f13,f31
	f0.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fmuls f0,f0,f29
	f0.f64 = double(float(f0.f64 * f29.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, f0.u64);
	// lhz r10,222(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 222);
	// rlwinm r10,r10,8,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF00;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// sthu r11,2(r31)
	ea = 2 + r31.u32;
	PPC_STORE_U16(ea, r11.u16);
	r31.u32 = ea;
	// bge 0x82617df0
	if (!cr0.lt) goto loc_82617DF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825d3820
	sub_825D3820(ctx, base);
	// addi r11,r28,72
	r11.s64 = r28.s64 + 72;
	// lwz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// li r29,4
	r29.s64 = 4;
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// lwz r9,228(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r7,272(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r11,252(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lwz r6,276(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r27,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r27.u32);
	// stw r26,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r26.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r21,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r21.u32);
	// stw r9,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r9.u32);
	// stw r26,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r26.u32);
	// stw r8,20(r28)
	PPC_STORE_U32(r28.u32 + 20, ctx.r8.u32);
	// stw r21,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r21.u32);
	// stw r16,28(r28)
	PPC_STORE_U32(r28.u32 + 28, r16.u32);
	// stw r24,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r24.u32);
	// stw r14,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r14.u32);
	// stw r21,40(r28)
	PPC_STORE_U32(r28.u32 + 40, r21.u32);
	// stw r17,44(r28)
	PPC_STORE_U32(r28.u32 + 44, r17.u32);
	// stw r24,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r24.u32);
	// stw r14,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r14.u32);
	// stw r21,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r21.u32);
	// stw r18,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r18.u32);
	// stw r25,64(r28)
	PPC_STORE_U32(r28.u32 + 64, r25.u32);
	// stw r7,68(r28)
	PPC_STORE_U32(r28.u32 + 68, ctx.r7.u32);
	// stw r11,72(r28)
	PPC_STORE_U32(r28.u32 + 72, r11.u32);
	// stw r6,76(r28)
	PPC_STORE_U32(r28.u32 + 76, ctx.r6.u32);
loc_82617EF8:
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -28);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,-24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -24);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,-20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -20);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwzu r3,-16(r31)
	ea = -16 + r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x82617ef8
	if (!cr0.lt) goto loc_82617EF8;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,3840
	r11.s64 = r11.s64 + 3840;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r10,r10,3824
	ctx.r10.s64 = ctx.r10.s64 + 3824;
	// addi r9,r9,3808
	ctx.r9.s64 = ctx.r9.s64 + 3808;
	// addi r8,r8,3792
	ctx.r8.s64 = ctx.r8.s64 + 3792;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r5,4336
	ctx.r5.s64 = 4336;
	// li r4,4352
	ctx.r4.s64 = 4352;
	// addi r7,r28,4368
	ctx.r7.s64 = r28.s64 + 4368;
	// lvx128 v62,r0,r10
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r6,r28,4384
	ctx.r6.s64 = r28.s64 + 4384;
	// lvx128 v61,r0,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lvx128 v60,r0,r8
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r28,r5
	_mm_store_si128((__m128i*)(base + ((r28.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r28,r4
	_mm_store_si128((__m128i*)(base + ((r28.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,28648(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28648);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82617fe8
	if (!cr6.eq) goto loc_82617FE8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r8,r11,3760
	ctx.r8.s64 = r11.s64 + 3760;
	// addi r9,r9,-13008
	ctx.r9.s64 = ctx.r9.s64 + -13008;
	// lwz r11,-12992(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12992);
	// clrlwi. r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x82617fb4
	if (!cr0.eq) goto loc_82617FB4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-12992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12992, r11.u32);
	// b 0x82617fb8
	goto loc_82617FB8;
loc_82617FB4:
	// lvx128 v63,r0,r9
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82617FB8:
	// lvx128 v62,r0,r7
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// clrlwi. r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// vmulfp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32)));
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne 0x82617fdc
	if (!cr0.eq) goto loc_82617FDC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lvx128 v63,r0,r8
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,-12992(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12992, r11.u32);
loc_82617FDC:
	// lvx128 v62,r0,r6
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(v62.f32), _mm_load_ps(v63.f32)));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82617FE8:
	// li r5,280
	ctx.r5.s64 = 280;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r28,84
	ctx.r3.s64 = r28.s64 + 84;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r28,644
	ctx.r3.s64 = r28.s64 + 644;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,280
	ctx.r5.s64 = 280;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r28,364
	ctx.r3.s64 = r28.s64 + 364;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// sth r15,128(r28)
	PPC_STORE_U16(r28.u32 + 128, r15.u16);
	// addi r9,r10,15808
	ctx.r9.s64 = ctx.r10.s64 + 15808;
	// sth r15,130(r28)
	PPC_STORE_U16(r28.u32 + 130, r15.u16);
	// addi r11,r11,3776
	r11.s64 = r11.s64 + 3776;
	// sth r30,698(r28)
	PPC_STORE_U16(r28.u32 + 698, r30.u16);
	// li r8,210
	ctx.r8.s64 = 210;
	// li r7,211
	ctx.r7.s64 = 211;
	// sth r8,688(r28)
	PPC_STORE_U16(r28.u32 + 688, ctx.r8.u16);
	// li r6,212
	ctx.r6.s64 = 212;
	// lvx128 v61,r0,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// sth r7,690(r28)
	PPC_STORE_U16(r28.u32 + 690, ctx.r7.u16);
	// li r5,213
	ctx.r5.s64 = 213;
	// lvx128 v63,r0,r11
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r9,215
	ctx.r9.s64 = 215;
	// sth r6,692(r28)
	PPC_STORE_U16(r28.u32 + 692, ctx.r6.u16);
	// li r8,216
	ctx.r8.s64 = 216;
	// sth r5,696(r28)
	PPC_STORE_U16(r28.u32 + 696, ctx.r5.u16);
	// li r7,217
	ctx.r7.s64 = 217;
	// sth r9,670(r28)
	PPC_STORE_U16(r28.u32 + 670, ctx.r9.u16);
	// li r10,72
	ctx.r10.s64 = 72;
	// sth r8,672(r28)
	PPC_STORE_U16(r28.u32 + 672, ctx.r8.u16);
	// li r11,214
	r11.s64 = 214;
	// sth r7,674(r28)
	PPC_STORE_U16(r28.u32 + 674, ctx.r7.u16);
	// li r6,218
	ctx.r6.s64 = 218;
	// vor128 v62,v63,v63
	_mm_store_si128((__m128i*)v62.u8, _mm_load_si128((__m128i*)v63.u8));
	// li r5,219
	ctx.r5.s64 = 219;
	// sth r11,694(r28)
	PPC_STORE_U16(r28.u32 + 694, r11.u16);
	// li r4,220
	ctx.r4.s64 = 220;
	// sth r6,676(r28)
	PPC_STORE_U16(r28.u32 + 676, ctx.r6.u16);
	// li r9,221
	ctx.r9.s64 = 221;
	// sth r5,678(r28)
	PPC_STORE_U16(r28.u32 + 678, ctx.r5.u16);
	// li r8,222
	ctx.r8.s64 = 222;
	// sth r4,680(r28)
	PPC_STORE_U16(r28.u32 + 680, ctx.r4.u16);
	// li r7,223
	ctx.r7.s64 = 223;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// addi r11,r28,4288
	r11.s64 = r28.s64 + 4288;
	// sth r9,682(r28)
	PPC_STORE_U16(r28.u32 + 682, ctx.r9.u16);
	// sth r8,684(r28)
	PPC_STORE_U16(r28.u32 + 684, ctx.r8.u16);
	// sth r7,686(r28)
	PPC_STORE_U16(r28.u32 + 686, ctx.r7.u16);
loc_826180BC:
	// li r10,-16
	ctx.r10.s64 = -16;
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r11,r19
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r10
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// bdnz 0x826180bc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826180BC;
	// lwz r11,232(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,260(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r23,4412(r28)
	PPC_STORE_U32(r28.u32 + 4412, r23.u32);
	// stw r11,4416(r28)
	PPC_STORE_U32(r28.u32 + 4416, r11.u32);
	// stw r10,4420(r28)
	PPC_STORE_U32(r28.u32 + 4420, ctx.r10.u32);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,4416(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4416);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,4420(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4420);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r11,240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r10,244(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// stw r22,4400(r28)
	PPC_STORE_U32(r28.u32 + 4400, r22.u32);
	// stw r11,4404(r28)
	PPC_STORE_U32(r28.u32 + 4404, r11.u32);
	// stw r10,4408(r28)
	PPC_STORE_U32(r28.u32 + 4408, ctx.r10.u32);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,4404(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4404);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,4408(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4408);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// stw r3,4424(r28)
	PPC_STORE_U32(r28.u32 + 4424, ctx.r3.u32);
	// bl 0x825e51f0
	sub_825E51F0(ctx, base);
	// b 0x82618148
	goto loc_82618148;
loc_8261813C:
	// lwz r24,308(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
loc_82618140:
	// lwz r22,288(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
loc_82618144:
	// lwz r23,224(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
loc_82618148:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82618168
	if (cr6.eq) goto loc_82618168;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// b 0x82618168
	goto loc_82618168;
loc_8261815C:
	// lwz r22,288(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r23,224(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r24,308(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
loc_82618168:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82618178
	if (cr6.eq) goto loc_82618178;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618178:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82618188
	if (cr6.eq) goto loc_82618188;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618188:
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618198
	if (cr6.eq) goto loc_82618198;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618198:
	// lwz r3,272(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826181a8
	if (cr6.eq) goto loc_826181A8;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826181A8:
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826181b8
	if (cr6.eq) goto loc_826181B8;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826181B8:
	// lwz r3,312(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826181c8
	if (cr6.eq) goto loc_826181C8;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826181C8:
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826181d8
	if (cr6.eq) goto loc_826181D8;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826181D8:
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826181e8
	if (cr6.eq) goto loc_826181E8;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826181E8:
	// lwz r3,276(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826181f8
	if (cr6.eq) goto loc_826181F8;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826181F8:
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618208
	if (cr6.eq) goto loc_82618208;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618208:
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618218
	if (cr6.eq) goto loc_82618218;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618218:
	// lwz r3,304(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618228
	if (cr6.eq) goto loc_82618228;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618228:
	// lwz r3,316(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618238
	if (cr6.eq) goto loc_82618238;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618238:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82618248
	if (cr6.eq) goto loc_82618248;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618248:
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618258
	if (cr6.eq) goto loc_82618258;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618258:
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618268
	if (cr6.eq) goto loc_82618268;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618268:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82618278
	if (cr6.eq) goto loc_82618278;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618278:
	// lwz r3,232(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618288
	if (cr6.eq) goto loc_82618288;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618288:
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618298
	if (cr6.eq) goto loc_82618298;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_82618298:
	// lwz r3,248(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826182a8
	if (cr6.eq) goto loc_826182A8;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
loc_826182A8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab3c
}

__attribute__((alias("__imp__sub_826182B8"))) PPC_WEAK_FUNC(sub_826182B8);
PPC_FUNC_IMPL(__imp__sub_826182B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_826182BC"))) PPC_WEAK_FUNC(sub_826182BC);
PPC_FUNC_IMPL(__imp__sub_826182BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826182C0"))) PPC_WEAK_FUNC(sub_826182C0);
PPC_FUNC_IMPL(__imp__sub_826182C0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,700(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 700);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826182f4
	if (cr6.eq) goto loc_826182F4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,700(r30)
	PPC_STORE_U32(r30.u32 + 700, r28.u32);
loc_826182F4:
	// li r29,11
	r29.s64 = 11;
	// addi r31,r30,748
	r31.s64 = r30.s64 + 748;
loc_826182FC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261831c
	if (cr6.eq) goto loc_8261831C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_8261831C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x826182fc
	if (!cr0.lt) goto loc_826182FC;
	// li r29,6
	r29.s64 = 6;
	// addi r31,r30,776
	r31.s64 = r30.s64 + 776;
loc_82618330:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618350
	if (cr6.eq) goto loc_82618350;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_82618350:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82618330
	if (!cr0.lt) goto loc_82618330;
	// li r29,3
	r29.s64 = 3;
	// addi r31,r30,808
	r31.s64 = r30.s64 + 808;
loc_82618364:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618384
	if (cr6.eq) goto loc_82618384;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r28.u32);
loc_82618384:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826183a4
	if (cr6.eq) goto loc_826183A4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_826183A4:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// bge 0x82618364
	if (!cr0.lt) goto loc_82618364;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826183c4
	if (cr6.eq) goto loc_826183C4;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r28.u32);
loc_826183C4:
	// li r29,4
	r29.s64 = 4;
	// addi r31,r30,72
	r31.s64 = r30.s64 + 72;
loc_826183CC:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826183e0
	if (cr6.eq) goto loc_826183E0;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r28.u32);
loc_826183E0:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826183f4
	if (cr6.eq) goto loc_826183F4;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r28.u32);
loc_826183F4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618408
	if (cr6.eq) goto loc_82618408;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
loc_82618408:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261841c
	if (cr6.eq) goto loc_8261841C;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
loc_8261841C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// bge 0x826183cc
	if (!cr0.lt) goto loc_826183CC;
	// lwz r3,4400(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4400);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261843c
	if (cr6.eq) goto loc_8261843C;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,4400(r30)
	PPC_STORE_U32(r30.u32 + 4400, r28.u32);
loc_8261843C:
	// lwz r3,4404(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4404);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618450
	if (cr6.eq) goto loc_82618450;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,4404(r30)
	PPC_STORE_U32(r30.u32 + 4404, r28.u32);
loc_82618450:
	// lwz r3,4408(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4408);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618464
	if (cr6.eq) goto loc_82618464;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,4408(r30)
	PPC_STORE_U32(r30.u32 + 4408, r28.u32);
loc_82618464:
	// lwz r3,4412(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4412);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618478
	if (cr6.eq) goto loc_82618478;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,4412(r30)
	PPC_STORE_U32(r30.u32 + 4412, r28.u32);
loc_82618478:
	// lwz r3,4416(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4416);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8261848c
	if (cr6.eq) goto loc_8261848C;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,4416(r30)
	PPC_STORE_U32(r30.u32 + 4416, r28.u32);
loc_8261848C:
	// lwz r3,4420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4420);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826184a0
	if (cr6.eq) goto loc_826184A0;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,4420(r30)
	PPC_STORE_U32(r30.u32 + 4420, r28.u32);
loc_826184A0:
	// lwz r3,4424(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4424);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826184b4
	if (cr6.eq) goto loc_826184B4;
	// bl 0x825e6040
	sub_825E6040(ctx, base);
	// stw r28,4424(r30)
	PPC_STORE_U32(r30.u32 + 4424, r28.u32);
loc_826184B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826184B8"))) PPC_WEAK_FUNC(sub_826184B8);
PPC_FUNC_IMPL(__imp__sub_826184B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826184BC"))) PPC_WEAK_FUNC(sub_826184BC);
PPC_FUNC_IMPL(__imp__sub_826184BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826184C0"))) PPC_WEAK_FUNC(sub_826184C0);
PPC_FUNC_IMPL(__imp__sub_826184C0) {
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
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r31,-13012(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13012);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x826184ec
	if (!cr6.eq) goto loc_826184EC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82618514
	goto loc_82618514;
loc_826184EC:
	// li r11,0
	r11.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,-13012(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13012, r11.u32);
	// beq 0x82618510
	if (cr0.eq) goto loc_82618510;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826182c0
	sub_826182C0(ctx, base);
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_82618510:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82618514:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82618524"))) PPC_WEAK_FUNC(sub_82618524);
PPC_FUNC_IMPL(__imp__sub_82618524) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82618528"))) PPC_WEAK_FUNC(sub_82618528);
PPC_FUNC_IMPL(__imp__sub_82618528) {
	PPC_FUNC_PROLOGUE();
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
	// lis r28,-31933
	r28.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,-13012(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -13012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82618558
	if (cr6.eq) goto loc_82618558;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x826185d0
	goto loc_826185D0;
loc_82618558:
	// li r29,0
	r29.s64 = 0;
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// li r3,4432
	ctx.r3.s64 = 4432;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82618590
	if (cr0.eq) goto loc_82618590;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826169c0
	sub_826169C0(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82618594
	goto loc_82618594;
loc_82618590:
	// li r31,0
	r31.s64 = 0;
loc_82618594:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x826185a8
	if (!cr6.eq) goto loc_826185A8;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x826185c8
	goto loc_826185C8;
loc_826185A8:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x826185c8
	if (!cr6.lt) goto loc_826185C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826182c0
	sub_826182C0(ctx, base);
	// lis r4,8344
	ctx.r4.s64 = 546832384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// li r31,0
	r31.s64 = 0;
loc_826185C8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,-13012(r28)
	PPC_STORE_U32(r28.u32 + -13012, r31.u32);
loc_826185D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826185D4"))) PPC_WEAK_FUNC(sub_826185D4);
PPC_FUNC_IMPL(__imp__sub_826185D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826185D8"))) PPC_WEAK_FUNC(sub_826185D8);
PPC_FUNC_IMPL(__imp__sub_826185D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,2
	cr6.compare<uint32_t>(ctx.r3.u32, 2, xer);
	// bge cr6,0x826185e8
	if (!cr6.lt) goto loc_826185E8;
	// li r11,2
	r11.s64 = 2;
	// b 0x826185f4
	goto loc_826185F4;
loc_826185E8:
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// ble cr6,0x82618600
	if (!cr6.gt) goto loc_82618600;
	// li r11,4
	r11.s64 = 4;
loc_826185F4:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// stw r11,28656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28656, r11.u32);
	// blr 
	return;
loc_82618600:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// stw r3,28656(r11)
	PPC_STORE_U32(r11.u32 + 28656, ctx.r3.u32);
}

__attribute__((alias("__imp__sub_82618608"))) PPC_WEAK_FUNC(sub_82618608);
PPC_FUNC_IMPL(__imp__sub_82618608) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261860C"))) PPC_WEAK_FUNC(sub_8261860C);
PPC_FUNC_IMPL(__imp__sub_8261860C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82618610"))) PPC_WEAK_FUNC(sub_82618610);
PPC_FUNC_IMPL(__imp__sub_82618610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82618624:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82618624
	if (!cr0.eq) goto loc_82618624;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82618668
	if (!cr6.eq) goto loc_82618668;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82618668
	if (cr6.eq) goto loc_82618668;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82618668:
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

__attribute__((alias("__imp__sub_8261867C"))) PPC_WEAK_FUNC(sub_8261867C);
PPC_FUNC_IMPL(__imp__sub_8261867C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82618680"))) PPC_WEAK_FUNC(sub_82618680);
PPC_FUNC_IMPL(__imp__sub_82618680) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// li r11,0
	r11.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// ori r10,r10,340
	ctx.r10.u64 = ctx.r10.u64 | 340;
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826186E8"))) PPC_WEAK_FUNC(sub_826186E8);
PPC_FUNC_IMPL(__imp__sub_826186E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826186EC"))) PPC_WEAK_FUNC(sub_826186EC);
PPC_FUNC_IMPL(__imp__sub_826186EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826186F0"))) PPC_WEAK_FUNC(sub_826186F0);
PPC_FUNC_IMPL(__imp__sub_826186F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x825fffa0
	sub_825FFFA0(ctx, base);
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r8,212(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_82618780"))) PPC_WEAK_FUNC(sub_82618780);
PPC_FUNC_IMPL(__imp__sub_82618780) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82618784"))) PPC_WEAK_FUNC(sub_82618784);
PPC_FUNC_IMPL(__imp__sub_82618784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82618788"))) PPC_WEAK_FUNC(sub_82618788);
PPC_FUNC_IMPL(__imp__sub_82618788) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwinm r10,r3,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r4,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// ble cr6,0x826187e4
	if (!cr6.gt) goto loc_826187E4;
loc_826187B8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826187c8
	if (!cr6.eq) goto loc_826187C8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826187e0
	if (cr6.eq) goto loc_826187E0;
loc_826187C8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x826187b8
	if (cr6.lt) goto loc_826187B8;
	// b 0x826187e4
	goto loc_826187E4;
loc_826187E0:
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_826187E4:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// li r11,0
	r11.s64 = 0;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8261882C"))) PPC_WEAK_FUNC(sub_8261882C);
PPC_FUNC_IMPL(__imp__sub_8261882C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82618830"))) PPC_WEAK_FUNC(sub_82618830);
PPC_FUNC_IMPL(__imp__sub_82618830) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bgt cr6,0x8261885c
	if (cr6.gt) goto loc_8261885C;
	// li r31,1
	r31.s64 = 1;
loc_8261885C:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825ff850
	sub_825FF850(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826188B4"))) PPC_WEAK_FUNC(sub_826188B4);
PPC_FUNC_IMPL(__imp__sub_826188B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826188B8"))) PPC_WEAK_FUNC(sub_826188B8);
PPC_FUNC_IMPL(__imp__sub_826188B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,36
	cr6.compare<uint32_t>(ctx.r5.u32, 36, xer);
	// ble cr6,0x826188c8
	if (!cr6.gt) goto loc_826188C8;
	// li r5,36
	ctx.r5.s64 = 36;
	// b 0x826188f8
	goto loc_826188F8;
loc_826188C8:
	// bge cr6,0x826188f8
	if (!cr6.lt) goto loc_826188F8;
	// subfic r11,r5,35
	xer.ca = ctx.r5.u32 <= 35;
	r11.s64 = 35 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x826188f8
	if (cr6.lt) goto loc_826188F8;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x826188f8
	if (cr0.eq) goto loc_826188F8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826188F0:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x826188f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826188F0;
loc_826188F8:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x82618920
	if (cr0.lt) goto loc_82618920;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82618910:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82618910
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82618910;
loc_82618920:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261893C:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261893c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261893C;
}

__attribute__((alias("__imp__sub_82618958"))) PPC_WEAK_FUNC(sub_82618958);
PPC_FUNC_IMPL(__imp__sub_82618958) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261895C"))) PPC_WEAK_FUNC(sub_8261895C);
PPC_FUNC_IMPL(__imp__sub_8261895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82618960"))) PPC_WEAK_FUNC(sub_82618960);
PPC_FUNC_IMPL(__imp__sub_82618960) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// ori r28,r3,256
	r28.u64 = ctx.r3.u64 | 256;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// addi r11,r1,116
	r11.s64 = ctx.r1.s64 + 116;
	// li r23,0
	r23.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r24,r11,21,31,31
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// beq cr6,0x82618a04
	if (cr6.eq) goto loc_82618A04;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825fffa0
	sub_825FFFA0(ctx, base);
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
loc_82618A04:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// ble cr6,0x82618a18
	if (!cr6.gt) goto loc_82618A18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82618a48
	goto loc_82618A48;
loc_82618A18:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// clrlwi r6,r28,26
	ctx.r6.u64 = r28.u32 & 0x3F;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82604a18
	sub_82604A18(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82618A48:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_82618A4C"))) PPC_WEAK_FUNC(sub_82618A4C);
PPC_FUNC_IMPL(__imp__sub_82618A4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82618A50"))) PPC_WEAK_FUNC(sub_82618A50);
PPC_FUNC_IMPL(__imp__sub_82618A50) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// rlwinm r28,r3,0,24,22
	r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// addi r11,r1,116
	r11.s64 = ctx.r1.s64 + 116;
	// li r23,0
	r23.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r24,r11,21,31,31
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// beq cr6,0x82618af4
	if (cr6.eq) goto loc_82618AF4;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x825fffa0
	sub_825FFFA0(ctx, base);
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r10,212(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
loc_82618AF4:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// ble cr6,0x82618b08
	if (!cr6.gt) goto loc_82618B08;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82618b38
	goto loc_82618B38;
loc_82618B08:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// clrlwi r6,r28,26
	ctx.r6.u64 = r28.u32 & 0x3F;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82604c78
	sub_82604C78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82618B38:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_82618B3C"))) PPC_WEAK_FUNC(sub_82618B3C);
PPC_FUNC_IMPL(__imp__sub_82618B3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82618B40"))) PPC_WEAK_FUNC(sub_82618B40);
PPC_FUNC_IMPL(__imp__sub_82618B40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bge cr6,0x82618b60
	if (!cr6.lt) goto loc_82618B60;
	// li r11,0
	r11.s64 = 0;
	// b 0x82618c6c
	goto loc_82618C6C;
loc_82618B60:
	// clrlwi r29,r4,27
	r29.u64 = ctx.r4.u32 & 0x1F;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r11,r29,r5
	r11.u64 = r29.u64 + ctx.r5.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// clrlwi r28,r10,27
	r28.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// addic. r11,r30,-1
	xer.ca = r30.u32 > 0;
	r11.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82618bb0
	if (cr0.lt) goto loc_82618BB0;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828ea638
	sub_828EA638(ctx, base);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
loc_82618BB0:
	// subfic r11,r30,1
	xer.ca = r30.u32 <= 1;
	r11.s64 = 1 - r30.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82618bd8
	if (cr6.lt) goto loc_82618BD8;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82618bd8
	if (cr0.eq) goto loc_82618BD8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82618BD0:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82618bd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82618BD0;
loc_82618BD8:
	// cmplwi cr6,r28,31
	cr6.compare<uint32_t>(r28.u32, 31, xer);
	// bge cr6,0x82618c08
	if (!cr6.lt) goto loc_82618C08;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
loc_82618C08:
	// addic. r10,r30,-2
	xer.ca = r30.u32 > 1;
	ctx.r10.s64 = r30.s64 + -2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt 0x82618c44
	if (cr0.lt) goto loc_82618C44;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r9,r29,32
	xer.ca = r29.u32 <= 32;
	ctx.r9.s64 = 32 - r29.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82618C20:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// srw r8,r8,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r29.u8 & 0x3F));
	// slw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bdnz 0x82618c20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82618C20;
loc_82618C44:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r10,r10,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r10,r11,24,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r10,r11,8,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r10,r11,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82618C6C:
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82618C74"))) PPC_WEAK_FUNC(sub_82618C74);
PPC_FUNC_IMPL(__imp__sub_82618C74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82618C78"))) PPC_WEAK_FUNC(sub_82618C78);
PPC_FUNC_IMPL(__imp__sub_82618C78) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82618e14
	if (cr6.eq) goto loc_82618E14;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82618e14
	if (cr0.eq) goto loc_82618E14;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,33
	ctx.r5.s64 = 33;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82618e14
	if (cr0.eq) goto loc_82618E14;
	// li r5,33
	ctx.r5.s64 = 33;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826188b8
	sub_826188B8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r26,r31,8
	r26.s64 = r31.s64 + 8;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r28,r31,20
	r28.s64 = r31.s64 + 20;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r20,r31,32
	r20.s64 = r31.s64 + 32;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// li r4,160
	ctx.r4.s64 = 160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,81
	ctx.r6.s64 = ctx.r1.s64 + 81;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,192
	ctx.r4.s64 = 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82618b40
	sub_82618B40(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,193
	ctx.r4.s64 = 193;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82618b40
	sub_82618B40(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,194
	ctx.r4.s64 = 194;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,226
	ctx.r4.s64 = 226;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r23,0
	r23.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r23,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r23.u32);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// stw r23,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r23.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// stw r23,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r23.u32);
	// ble cr6,0x82618e20
	if (!cr6.gt) goto loc_82618E20;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_82618E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82618E18:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x828e9440
	return;
loc_82618E20:
	// lbz r11,81(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82618e40
	if (cr0.eq) goto loc_82618E40;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_82618E38:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82618e18
	goto loc_82618E18;
loc_82618E40:
	// lbz r18,80(r1)
	r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r18,0
	cr0.compare<uint32_t>(r18.u32, 0, xer);
	// beq 0x82618e60
	if (cr0.eq) goto loc_82618E60;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82618e14
	if (cr6.eq) goto loc_82618E14;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82618e14
	if (cr6.lt) goto loc_82618E14;
loc_82618E60:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,28676(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28676);
	// rlwinm r3,r10,0,24,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r21,96(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(r11.u32, r21.u32, xer);
	// bne cr6,0x82618e14
	if (!cr6.eq) goto loc_82618E14;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r22,88(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r22
	cr6.compare<uint32_t>(r11.u32, r22.u32, xer);
	// bne cr6,0x82618e14
	if (!cr6.eq) goto loc_82618E14;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mullw r11,r11,r22
	r11.s64 = int64_t(r11.s32) * int64_t(r22.s32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82618e14
	if (cr6.gt) goto loc_82618E14;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82618e38
	if (!cr6.gt) goto loc_82618E38;
	// lis r24,-31965
	r24.s64 = -2094858240;
loc_82618ED8:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// bne cr6,0x82618ef0
	if (!cr6.eq) goto loc_82618EF0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mullw r10,r29,r10
	ctx.r10.s64 = int64_t(r29.s32) * int64_t(ctx.r10.s32);
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + r11.u64;
loc_82618EF0:
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82618f38
	if (cr6.eq) goto loc_82618F38;
loc_82618EFC:
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// mullw r11,r30,r11
	r11.s64 = int64_t(r30.s32) * int64_t(r11.s32);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82618e14
	if (cr0.eq) goto loc_82618E14;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r22
	cr6.compare<uint32_t>(r30.u32, r22.u32, xer);
	// blt cr6,0x82618efc
	if (cr6.lt) goto loc_82618EFC;
loc_82618F38:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x82618f7c
	if (cr6.eq) goto loc_82618F7C;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// lwz r30,28668(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 28668);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mullw r11,r8,r29
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r30
	ctr.u64 = r30.u64;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82618e14
	if (cr0.eq) goto loc_82618E14;
loc_82618F7C:
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82618ed8
	if (cr6.lt) goto loc_82618ED8;
}

__attribute__((alias("__imp__sub_82618F8C"))) PPC_WEAK_FUNC(sub_82618F8C);
PPC_FUNC_IMPL(__imp__sub_82618F8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82618e38
	// ERROR 82618E38
	return;
}

__attribute__((alias("__imp__sub_82618F90"))) PPC_WEAK_FUNC(sub_82618F90);
PPC_FUNC_IMPL(__imp__sub_82618F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32158
	ctx.r9.s64 = -2107506688;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r10,-32158
	ctx.r10.s64 = -2107506688;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lis r8,-32158
	ctx.r8.s64 = -2107506688;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r10,r10,-30368
	ctx.r10.s64 = ctx.r10.s64 + -30368;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lis r7,-32158
	ctx.r7.s64 = -2107506688;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r11,r9,-30128
	r11.s64 = ctx.r9.s64 + -30128;
	// lis r6,-32158
	ctx.r6.s64 = -2107506688;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r9,r8,-30992
	ctx.r9.s64 = ctx.r8.s64 + -30992;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// addi r10,r7,-30840
	ctx.r10.s64 = ctx.r7.s64 + -30840;
	// addi r11,r6,-30672
	r11.s64 = ctx.r6.s64 + -30672;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
}

__attribute__((alias("__imp__sub_82618FE4"))) PPC_WEAK_FUNC(sub_82618FE4);
PPC_FUNC_IMPL(__imp__sub_82618FE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82618FE8"))) PPC_WEAK_FUNC(sub_82618FE8);
PPC_FUNC_IMPL(__imp__sub_82618FE8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31965
	ctx.r9.s64 = -2094858240;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,5052
	ctx.r10.s64 = ctx.r10.s64 + 5052;
	// addi r9,r9,28688
	ctx.r9.s64 = ctx.r9.s64 + 28688;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// bl 0x8261da90
	sub_8261DA90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8261f0b8
	sub_8261F0B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82619044"))) PPC_WEAK_FUNC(sub_82619044);
PPC_FUNC_IMPL(__imp__sub_82619044) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619048"))) PPC_WEAK_FUNC(sub_82619048);
PPC_FUNC_IMPL(__imp__sub_82619048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-13068(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13068);
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
	// bl 0x82618fe8
	sub_82618FE8(ctx, base);
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

__attribute__((alias("__imp__sub_8261909C"))) PPC_WEAK_FUNC(sub_8261909C);
PPC_FUNC_IMPL(__imp__sub_8261909C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826190A0"))) PPC_WEAK_FUNC(sub_826190A0);
PPC_FUNC_IMPL(__imp__sub_826190A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,48
	cr6.compare<uint32_t>(ctx.r5.u32, 48, xer);
	// ble cr6,0x826190b0
	if (!cr6.gt) goto loc_826190B0;
	// li r5,48
	ctx.r5.s64 = 48;
	// b 0x826190e0
	goto loc_826190E0;
loc_826190B0:
	// bge cr6,0x826190e0
	if (!cr6.lt) goto loc_826190E0;
	// subfic r11,r5,47
	xer.ca = ctx.r5.u32 <= 47;
	r11.s64 = 47 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x826190e0
	if (cr6.lt) goto loc_826190E0;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x826190e0
	if (cr0.eq) goto loc_826190E0;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826190D8:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x826190d8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826190D8;
loc_826190E0:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x82619108
	if (cr0.lt) goto loc_82619108;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826190F8:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x826190f8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826190F8;
loc_82619108:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619124:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82619124
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619124;
}

__attribute__((alias("__imp__sub_82619140"))) PPC_WEAK_FUNC(sub_82619140);
PPC_FUNC_IMPL(__imp__sub_82619140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619144"))) PPC_WEAK_FUNC(sub_82619144);
PPC_FUNC_IMPL(__imp__sub_82619144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82619148"))) PPC_WEAK_FUNC(sub_82619148);
PPC_FUNC_IMPL(__imp__sub_82619148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,512
	cr6.compare<uint32_t>(ctx.r5.u32, 512, xer);
	// ble cr6,0x82619158
	if (!cr6.gt) goto loc_82619158;
	// li r5,512
	ctx.r5.s64 = 512;
	// b 0x82619188
	goto loc_82619188;
loc_82619158:
	// bge cr6,0x82619188
	if (!cr6.lt) goto loc_82619188;
	// subfic r11,r5,511
	xer.ca = ctx.r5.u32 <= 511;
	r11.s64 = 511 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82619188
	if (cr6.lt) goto loc_82619188;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82619188
	if (cr0.eq) goto loc_82619188;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619180:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82619180
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619180;
loc_82619188:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x826191b0
	if (cr0.lt) goto loc_826191B0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826191A0:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x826191a0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826191A0;
loc_826191B0:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826191CC:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826191cc
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826191CC;
}

__attribute__((alias("__imp__sub_826191E8"))) PPC_WEAK_FUNC(sub_826191E8);
PPC_FUNC_IMPL(__imp__sub_826191E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826191EC"))) PPC_WEAK_FUNC(sub_826191EC);
PPC_FUNC_IMPL(__imp__sub_826191EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826191F0"))) PPC_WEAK_FUNC(sub_826191F0);
PPC_FUNC_IMPL(__imp__sub_826191F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// ble cr6,0x82619200
	if (!cr6.gt) goto loc_82619200;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82619230
	goto loc_82619230;
loc_82619200:
	// bge cr6,0x82619230
	if (!cr6.lt) goto loc_82619230;
	// subfic r11,r5,7
	xer.ca = ctx.r5.u32 <= 7;
	r11.s64 = 7 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82619230
	if (cr6.lt) goto loc_82619230;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82619230
	if (cr0.eq) goto loc_82619230;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619228:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82619228
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619228;
loc_82619230:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x82619258
	if (cr0.lt) goto loc_82619258;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619248:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82619248
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619248;
loc_82619258:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619274:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82619274
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619274;
}

__attribute__((alias("__imp__sub_82619290"))) PPC_WEAK_FUNC(sub_82619290);
PPC_FUNC_IMPL(__imp__sub_82619290) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619294"))) PPC_WEAK_FUNC(sub_82619294);
PPC_FUNC_IMPL(__imp__sub_82619294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82619298"))) PPC_WEAK_FUNC(sub_82619298);
PPC_FUNC_IMPL(__imp__sub_82619298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,24
	cr6.compare<uint32_t>(ctx.r5.u32, 24, xer);
	// ble cr6,0x826192a8
	if (!cr6.gt) goto loc_826192A8;
	// li r5,24
	ctx.r5.s64 = 24;
	// b 0x826192d8
	goto loc_826192D8;
loc_826192A8:
	// bge cr6,0x826192d8
	if (!cr6.lt) goto loc_826192D8;
	// subfic r11,r5,23
	xer.ca = ctx.r5.u32 <= 23;
	r11.s64 = 23 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x826192d8
	if (cr6.lt) goto loc_826192D8;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x826192d8
	if (cr0.eq) goto loc_826192D8;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826192D0:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x826192d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826192D0;
loc_826192D8:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x82619300
	if (cr0.lt) goto loc_82619300;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826192F0:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x826192f0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826192F0;
loc_82619300:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261931C:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261931c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261931C;
}

__attribute__((alias("__imp__sub_82619338"))) PPC_WEAK_FUNC(sub_82619338);
PPC_FUNC_IMPL(__imp__sub_82619338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261933C"))) PPC_WEAK_FUNC(sub_8261933C);
PPC_FUNC_IMPL(__imp__sub_8261933C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82619340"))) PPC_WEAK_FUNC(sub_82619340);
PPC_FUNC_IMPL(__imp__sub_82619340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,12
	cr6.compare<uint32_t>(ctx.r5.u32, 12, xer);
	// ble cr6,0x82619350
	if (!cr6.gt) goto loc_82619350;
	// li r5,12
	ctx.r5.s64 = 12;
	// b 0x82619380
	goto loc_82619380;
loc_82619350:
	// bge cr6,0x82619380
	if (!cr6.lt) goto loc_82619380;
	// subfic r11,r5,11
	xer.ca = ctx.r5.u32 <= 11;
	r11.s64 = 11 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82619380
	if (cr6.lt) goto loc_82619380;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82619380
	if (cr0.eq) goto loc_82619380;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619378:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82619378
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619378;
loc_82619380:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x826193a8
	if (cr0.lt) goto loc_826193A8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619398:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82619398
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619398;
loc_826193A8:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_826193C4:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x826193c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826193C4;
}

__attribute__((alias("__imp__sub_826193E0"))) PPC_WEAK_FUNC(sub_826193E0);
PPC_FUNC_IMPL(__imp__sub_826193E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826193E4"))) PPC_WEAK_FUNC(sub_826193E4);
PPC_FUNC_IMPL(__imp__sub_826193E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826193E8"))) PPC_WEAK_FUNC(sub_826193E8);
PPC_FUNC_IMPL(__imp__sub_826193E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	uint32_t ea{};
	// cmplwi cr6,r5,56
	cr6.compare<uint32_t>(ctx.r5.u32, 56, xer);
	// ble cr6,0x826193f8
	if (!cr6.gt) goto loc_826193F8;
	// li r5,56
	ctx.r5.s64 = 56;
	// b 0x82619428
	goto loc_82619428;
loc_826193F8:
	// bge cr6,0x82619428
	if (!cr6.lt) goto loc_82619428;
	// subfic r11,r5,55
	xer.ca = ctx.r5.u32 <= 55;
	r11.s64 = 55 - ctx.r5.s64;
	// add r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 + ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82619428
	if (cr6.lt) goto loc_82619428;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82619428
	if (cr0.eq) goto loc_82619428;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619420:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82619420
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619420;
loc_82619428:
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt 0x82619450
	if (cr0.lt) goto loc_82619450;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619440:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82619440
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619440;
loc_82619450:
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8261946C:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8261946c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8261946C;
}

__attribute__((alias("__imp__sub_82619488"))) PPC_WEAK_FUNC(sub_82619488);
PPC_FUNC_IMPL(__imp__sub_82619488) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8261948C"))) PPC_WEAK_FUNC(sub_8261948C);
PPC_FUNC_IMPL(__imp__sub_8261948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82619490"))) PPC_WEAK_FUNC(sub_82619490);
PPC_FUNC_IMPL(__imp__sub_82619490) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bge cr6,0x826194b8
	if (!cr6.lt) goto loc_826194B8;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r11.u8);
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, r11.u8);
	// b 0x826195e4
	goto loc_826195E4;
loc_826194B8:
	// clrlwi r29,r4,27
	r29.u64 = ctx.r4.u32 & 0x1F;
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r10,r29,r5
	ctx.r10.u64 = r29.u64 + ctx.r5.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r28,r11,27
	r28.u64 = r11.u32 & 0x1F;
	// rlwinm r11,r10,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// addic. r11,r30,-1
	xer.ca = r30.u32 > 0;
	r11.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82619508
	if (cr0.lt) goto loc_82619508;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828ea638
	sub_828EA638(ctx, base);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
loc_82619508:
	// subfic r11,r30,1
	xer.ca = r30.u32 <= 1;
	r11.s64 = 1 - r30.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82619530
	if (cr6.lt) goto loc_82619530;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82619530
	if (cr0.eq) goto loc_82619530;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619528:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82619528
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619528;
loc_82619530:
	// cmplwi cr6,r28,31
	cr6.compare<uint32_t>(r28.u32, 31, xer);
	// bge cr6,0x82619560
	if (!cr6.lt) goto loc_82619560;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
loc_82619560:
	// addic. r10,r30,-2
	xer.ca = r30.u32 > 1;
	ctx.r10.s64 = r30.s64 + -2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt 0x8261959c
	if (cr0.lt) goto loc_8261959C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r9,r29,32
	xer.ca = r29.u32 <= 32;
	ctx.r9.s64 = 32 - r29.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82619578:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// srw r8,r8,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r29.u8 & 0x3F));
	// slw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bdnz 0x82619578
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619578;
loc_8261959C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// srw r10,r10,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFF;
	// rlwimi r10,r11,24,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r10,r11,8,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r10,r11,24,0,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r10.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r11,80(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// lbz r10,1(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r11,0(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
	// stb r10,1(r27)
	PPC_STORE_U8(r27.u32 + 1, ctx.r10.u8);
loc_826195E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826195E8"))) PPC_WEAK_FUNC(sub_826195E8);
PPC_FUNC_IMPL(__imp__sub_826195E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826195EC"))) PPC_WEAK_FUNC(sub_826195EC);
PPC_FUNC_IMPL(__imp__sub_826195EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826195F0"))) PPC_WEAK_FUNC(sub_826195F0);
PPC_FUNC_IMPL(__imp__sub_826195F0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bge cr6,0x82619620
	if (!cr6.lt) goto loc_82619620;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r11.u8);
	// stb r11,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, r11.u8);
	// stb r11,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, r11.u8);
	// stb r11,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, r11.u8);
	// b 0x82619734
	goto loc_82619734;
loc_82619620:
	// clrlwi r29,r4,27
	r29.u64 = ctx.r4.u32 & 0x1F;
	// add r11,r4,r5
	r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r10,r29,r5
	ctx.r10.u64 = r29.u64 + ctx.r5.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r4,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// addi r31,r10,1
	r31.s64 = ctx.r10.s64 + 1;
	// clrlwi r28,r9,27
	r28.u64 = ctx.r9.u32 & 0x1F;
	// addic. r11,r31,-1
	xer.ca = r31.u32 > 0;
	r11.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// blt 0x82619670
	if (cr0.lt) goto loc_82619670;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828ea638
	sub_828EA638(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
loc_82619670:
	// subfic r11,r31,1
	xer.ca = r31.u32 <= 1;
	r11.s64 = 1 - r31.s64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82619698
	if (cr6.lt) goto loc_82619698;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82619698
	if (cr0.eq) goto loc_82619698;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82619690:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82619690
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82619690;
loc_82619698:
	// cmplwi cr6,r28,31
	cr6.compare<uint32_t>(r28.u32, 31, xer);
	// bge cr6,0x826196c8
	if (!cr6.lt) goto loc_826196C8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// slw r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stw r10,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r10.u32);
loc_826196C8:
	// addic. r10,r31,-2
	xer.ca = r31.u32 > 1;
	ctx.r10.s64 = r31.s64 + -2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt 0x82619704
	if (cr0.lt) goto loc_82619704;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r9,r29,32
	xer.ca = r29.u32 <= 32;
	ctx.r9.s64 = 32 - r29.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826196E0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// srw r8,r8,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r29.u8 & 0x3F));
	// slw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bdnz 0x826196e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826196E0;
loc_82619704:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// srw r10,r10,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lbz r11,3(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// stb r11,3(r27)
	PPC_STORE_U8(r27.u32 + 3, r11.u8);
	// stb r10,0(r27)
	PPC_STORE_U8(r27.u32 + 0, ctx.r10.u8);
	// stb r8,1(r27)
	PPC_STORE_U8(r27.u32 + 1, ctx.r8.u8);
	// stb r9,2(r27)
	PPC_STORE_U8(r27.u32 + 2, ctx.r9.u8);
loc_82619734:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82619738"))) PPC_WEAK_FUNC(sub_82619738);
PPC_FUNC_IMPL(__imp__sub_82619738) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8261973C"))) PPC_WEAK_FUNC(sub_8261973C);
PPC_FUNC_IMPL(__imp__sub_8261973C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82619740"))) PPC_WEAK_FUNC(sub_82619740);
PPC_FUNC_IMPL(__imp__sub_82619740) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lhz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// bl 0x82619490
	sub_82619490(ctx, base);
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
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

__attribute__((alias("__imp__sub_82619794"))) PPC_WEAK_FUNC(sub_82619794);
PPC_FUNC_IMPL(__imp__sub_82619794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82619798"))) PPC_WEAK_FUNC(sub_82619798);
PPC_FUNC_IMPL(__imp__sub_82619798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,20
	ctx.r6.s64 = r31.s64 + 20;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,24
	ctx.r6.s64 = r31.s64 + 24;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,128
	ctx.r4.s64 = r30.s64 + 128;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r6,r31,44
	ctx.r6.s64 = r31.s64 + 44;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,134
	ctx.r4.s64 = r30.s64 + 134;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// addi r6,r31,48
	ctx.r6.s64 = r31.s64 + 48;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r30,140
	ctx.r4.s64 = r30.s64 + 140;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,28696
	ctx.r10.s64 = r11.s64 + 28696;
	// lfs f0,28696(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 28696);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82619870"))) PPC_WEAK_FUNC(sub_82619870);
PPC_FUNC_IMPL(__imp__sub_82619870) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82619874"))) PPC_WEAK_FUNC(sub_82619874);
PPC_FUNC_IMPL(__imp__sub_82619874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82619878"))) PPC_WEAK_FUNC(sub_82619878);
PPC_FUNC_IMPL(__imp__sub_82619878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619908
	if (cr0.eq) goto loc_82619908;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82619908
	if (cr0.eq) goto loc_82619908;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826190a0
	sub_826190A0(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,352
	ctx.r4.s64 = 352;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826195f0
	sub_826195F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8261990c
	goto loc_8261990C;
loc_82619908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8261990C:
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

