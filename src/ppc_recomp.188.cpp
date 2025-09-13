#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8263B41C"))) PPC_WEAK_FUNC(sub_8263B41C);
PPC_FUNC_IMPL(__imp__sub_8263B41C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B420"))) PPC_WEAK_FUNC(sub_8263B420);
PPC_FUNC_IMPL(__imp__sub_8263B420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,176(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 176);
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8263B42C"))) PPC_WEAK_FUNC(sub_8263B42C);
PPC_FUNC_IMPL(__imp__sub_8263B42C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B430"))) PPC_WEAK_FUNC(sub_8263B430);
PPC_FUNC_IMPL(__imp__sub_8263B430) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,176(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 176);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x8263b454
	if (!cr6.lt) goto loc_8263B454;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// blr 
	return;
loc_8263B454:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8263B464"))) PPC_WEAK_FUNC(sub_8263B464);
PPC_FUNC_IMPL(__imp__sub_8263B464) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B468"))) PPC_WEAK_FUNC(sub_8263B468);
PPC_FUNC_IMPL(__imp__sub_8263B468) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,176(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 176);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x8263b48c
	if (!cr6.lt) goto loc_8263B48C;
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// blr 
	return;
loc_8263B48C:
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// lwz r10,180(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8263B49C"))) PPC_WEAK_FUNC(sub_8263B49C);
PPC_FUNC_IMPL(__imp__sub_8263B49C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B4A0"))) PPC_WEAK_FUNC(sub_8263B4A0);
PPC_FUNC_IMPL(__imp__sub_8263B4A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B4A8"))) PPC_WEAK_FUNC(sub_8263B4A8);
PPC_FUNC_IMPL(__imp__sub_8263B4A8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,188(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r10,11580
	ctx.r5.s64 = ctx.r10.s64 + 11580;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,184(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,180(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r10,-11272
	ctx.r4.s64 = ctx.r10.s64 + -11272;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82629750
	sub_82629750(ctx, base);
	// lhz r11,518(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 518);
	// rlwinm r9,r11,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8263b54c
	if (!cr6.eq) goto loc_8263B54C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// lhz r7,516(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 516);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r6,512(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 512);
	// addi r5,r9,11564
	ctx.r5.s64 = ctx.r9.s64 + 11564;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263B54C:
	// lwz r5,532(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8263b5f8
	if (cr6.eq) goto loc_8263B5F8;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,11540
	ctx.r4.s64 = r11.s64 + 11540;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 14);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8263b5b4
	if (!cr6.eq) goto loc_8263B5B4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lhz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// rlwinm r8,r10,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r5,r7,11524
	ctx.r5.s64 = ctx.r7.s64 + 11524;
	// rotlwi r7,r4,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263B5B4:
	// lwz r11,532(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8263b5f8
	if (!cr6.eq) goto loc_8263B5F8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// rlwinm r8,r10,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r5,r7,11504
	ctx.r5.s64 = ctx.r7.s64 + 11504;
	// rotlwi r7,r4,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263B5F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,504(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 504);
	// addi r4,r10,11492
	ctx.r4.s64 = ctx.r10.s64 + 11492;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r8,-11464
	ctx.r5.s64 = ctx.r8.s64 + -11464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826575b0
	sub_826575B0(ctx, base);
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

__attribute__((alias("__imp__sub_8263B644"))) PPC_WEAK_FUNC(sub_8263B644);
PPC_FUNC_IMPL(__imp__sub_8263B644) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263B648"))) PPC_WEAK_FUNC(sub_8263B648);
PPC_FUNC_IMPL(__imp__sub_8263B648) {
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
	// lhz r9,516(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,512
	r31.s64 = ctx.r3.s64 + 512;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263b694
	if (!cr6.gt) goto loc_8263B694;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8263B678:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8263b6e8
	if (cr6.eq) goto loc_8263B6E8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263b678
	if (cr6.lt) goto loc_8263B678;
loc_8263B694:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// clrlwi r9,r11,18
	ctx.r9.u64 = r11.u32 & 0x3FFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8263b6b4
	if (!cr6.eq) goto loc_8263B6B4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7c70
	sub_82BF7C70(ctx, base);
loc_8263B6B4:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r8.u16);
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
loc_8263B6E8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8263b694
	if (cr6.lt) goto loc_8263B694;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
}

__attribute__((alias("__imp__sub_8263B6FC"))) PPC_WEAK_FUNC(sub_8263B6FC);
PPC_FUNC_IMPL(__imp__sub_8263B6FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8263b6d0
	// ERROR 8263B6D0
	return;
}

__attribute__((alias("__imp__sub_8263B700"))) PPC_WEAK_FUNC(sub_8263B700);
PPC_FUNC_IMPL(__imp__sub_8263B700) {
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
	// lwz r11,532(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263b77c
	if (!cr6.eq) goto loc_8263B77C;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263b774
	if (cr6.eq) goto loc_8263B774;
	// lis r11,0
	r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// sth r31,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r31.u16);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// sth r31,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, r31.u16);
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
	// b 0x8263b778
	goto loc_8263B778;
loc_8263B774:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8263B778:
	// stw r11,532(r30)
	PPC_STORE_U32(r30.u32 + 532, r11.u32);
loc_8263B77C:
	// lwz r10,532(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 532);
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r31,r10,8
	r31.s64 = ctx.r10.s64 + 8;
	// lhz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263b7bc
	if (!cr6.gt) goto loc_8263B7BC;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8263B79C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8263b7fc
	if (cr6.eq) goto loc_8263B7FC;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x8263b79c
	if (cr6.lt) goto loc_8263B79C;
loc_8263B7BC:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// clrlwi r10,r11,18
	ctx.r10.u64 = r11.u32 & 0x3FFF;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x8263b7d8
	if (!cr6.eq) goto loc_8263B7D8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7c70
	sub_82BF7C70(ctx, base);
loc_8263B7D8:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r29.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8263B7FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8263b7bc
	if (cr6.lt) goto loc_8263B7BC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8263B810"))) PPC_WEAK_FUNC(sub_8263B810);
PPC_FUNC_IMPL(__imp__sub_8263B810) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263B814"))) PPC_WEAK_FUNC(sub_8263B814);
PPC_FUNC_IMPL(__imp__sub_8263B814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263B818"))) PPC_WEAK_FUNC(sub_8263B818);
PPC_FUNC_IMPL(__imp__sub_8263B818) {
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
	// lwz r11,532(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263b894
	if (!cr6.eq) goto loc_8263B894;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263b88c
	if (cr6.eq) goto loc_8263B88C;
	// lis r11,0
	r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// sth r30,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r30.u16);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// sth r30,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, r30.u16);
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
	// b 0x8263b890
	goto loc_8263B890;
loc_8263B88C:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8263B890:
	// stw r11,532(r31)
	PPC_STORE_U32(r31.u32 + 532, r11.u32);
loc_8263B894:
	// lwz r8,532(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lhz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263b8c8
	if (!cr6.gt) goto loc_8263B8C8;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
loc_8263B8AC:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r29
	cr6.compare<uint32_t>(ctx.r7.u32, r29.u32, xer);
	// beq cr6,0x8263b8cc
	if (cr6.eq) goto loc_8263B8CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263b8ac
	if (cr6.lt) goto loc_8263B8AC;
loc_8263B8C8:
	// li r11,-1
	r11.s64 = -1;
loc_8263B8CC:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8263B8DC"))) PPC_WEAK_FUNC(sub_8263B8DC);
PPC_FUNC_IMPL(__imp__sub_8263B8DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263B8E0"))) PPC_WEAK_FUNC(sub_8263B8E0);
PPC_FUNC_IMPL(__imp__sub_8263B8E0) {
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
	// lwz r11,532(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263b95c
	if (!cr6.eq) goto loc_8263B95C;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263b954
	if (cr6.eq) goto loc_8263B954;
	// lis r11,0
	r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// sth r30,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r30.u16);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// sth r30,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, r30.u16);
	// sth r10,14(r3)
	PPC_STORE_U16(ctx.r3.u32 + 14, ctx.r10.u16);
	// b 0x8263b958
	goto loc_8263B958;
loc_8263B954:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8263B958:
	// stw r11,532(r31)
	PPC_STORE_U32(r31.u32 + 532, r11.u32);
loc_8263B95C:
	// lwz r31,532(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// mr r11,r30
	r11.u64 = r30.u64;
	// lhz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8263b998
	if (!cr6.gt) goto loc_8263B998;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8263B978:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8263b9d8
	if (cr6.eq) goto loc_8263B9D8;
	// lhz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x8263b978
	if (cr6.lt) goto loc_8263B978;
loc_8263B998:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// clrlwi r10,r11,18
	ctx.r10.u64 = r11.u32 & 0x3FFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x8263b9b4
	if (!cr6.eq) goto loc_8263B9B4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7c70
	sub_82BF7C70(ctx, base);
loc_8263B9B4:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stwx r29,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r29.u32);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// sth r8,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r8.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8263B9D8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8263b998
	if (cr6.lt) goto loc_8263B998;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8263B9EC"))) PPC_WEAK_FUNC(sub_8263B9EC);
PPC_FUNC_IMPL(__imp__sub_8263B9EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263B9F0"))) PPC_WEAK_FUNC(sub_8263B9F0);
PPC_FUNC_IMPL(__imp__sub_8263B9F0) {
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
	// lhz r11,176(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 176);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,184(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bge cr6,0x8263ba48
	if (!cr6.lt) goto loc_8263BA48;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8263ba38
	if (cr6.lt) goto loc_8263BA38;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8263BA38:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8263BA48:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 176);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263ba94
	if (cr6.eq) goto loc_8263BA94;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8263BA68:
	// lwz r7,172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stwx r5,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhz r4,176(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 176);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x8263ba68
	if (cr6.lt) goto loc_8263BA68;
loc_8263BA94:
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263bad4
	if (!cr6.gt) goto loc_8263BAD4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	r11.s64 = 0;
loc_8263BAAC:
	// lwz r8,180(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stwx r6,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r5,184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// blt cr6,0x8263baac
	if (cr6.lt) goto loc_8263BAAC;
loc_8263BAD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8263BAD8"))) PPC_WEAK_FUNC(sub_8263BAD8);
PPC_FUNC_IMPL(__imp__sub_8263BAD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263BADC"))) PPC_WEAK_FUNC(sub_8263BADC);
PPC_FUNC_IMPL(__imp__sub_8263BADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263BAE0"))) PPC_WEAK_FUNC(sub_8263BAE0);
PPC_FUNC_IMPL(__imp__sub_8263BAE0) {
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
	// lbz r11,232(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 232);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x8263bbac
	if (!cr6.eq) goto loc_8263BBAC;
	// lwz r11,184(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8263bb20
	if (!cr6.gt) goto loc_8263BB20;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8263c5d0
	sub_8263C5D0(ctx, base);
loc_8263BB20:
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263bbac
	if (!cr6.gt) goto loc_8263BBAC;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8263BB34:
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// li r11,0
	r11.s64 = 0;
	// lwzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// xor r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r10,r4,r31
	ctx.r10.u64 = ctx.r4.u64 ^ r31.u64;
	// lhz r8,176(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 176);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8263bb98
	if (!cr6.gt) goto loc_8263BB98;
	// lwz r7,172(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_8263BB64:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8263bb84
	if (cr6.eq) goto loc_8263BB84;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8263bb64
	if (cr6.lt) goto loc_8263BB64;
	// b 0x8263bb98
	goto loc_8263BB98;
loc_8263BB84:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r11,r7
	ctx.r7.u64 = r11.u64 + ctx.r7.u64;
	// sth r5,34(r7)
	PPC_STORE_U16(ctx.r7.u32 + 34, ctx.r5.u16);
loc_8263BB98:
	// lwz r11,184(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// blt cr6,0x8263bb34
	if (cr6.lt) goto loc_8263BB34;
loc_8263BBAC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263BBBC"))) PPC_WEAK_FUNC(sub_8263BBBC);
PPC_FUNC_IMPL(__imp__sub_8263BBBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263BBC0"))) PPC_WEAK_FUNC(sub_8263BBC0);
PPC_FUNC_IMPL(__imp__sub_8263BBC0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263bc3c
	if (cr6.eq) goto loc_8263BC3C;
	// lhz r9,516(r27)
	ctx.r9.u64 = PPC_LOAD_U16(r27.u32 + 516);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mr r11,r26
	r11.u64 = r26.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263bc14
	if (!cr6.gt) goto loc_8263BC14;
	// lwz r10,512(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 512);
loc_8263BBF8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8263bc18
	if (cr6.eq) goto loc_8263BC18;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263bbf8
	if (cr6.lt) goto loc_8263BBF8;
loc_8263BC14:
	// li r11,-1
	r11.s64 = -1;
loc_8263BC18:
	// lwz r10,512(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 512);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r26,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r26.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r26,152(r27)
	PPC_STORE_U32(r27.u32 + 152, r26.u32);
loc_8263BC3C:
	// lwz r11,100(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// addi r31,r27,96
	r31.s64 = r27.s64 + 96;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263bc90
	if (!cr6.eq) goto loc_8263BC90;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8263bc88
	if (!cr6.eq) goto loc_8263BC88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_8263BC88:
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_8263BC90:
	// lhz r11,176(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263bcf8
	if (!cr6.eq) goto loc_8263BCF8;
	// lhz r30,178(r27)
	r30.u64 = PPC_LOAD_U16(r27.u32 + 178);
	// addi r31,r27,172
	r31.s64 = r27.s64 + 172;
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263bce0
	if (!cr6.eq) goto loc_8263BCE0;
	// lwz r25,0(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r29,r30,18
	r29.u64 = r30.u32 & 0x3FFF;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r30,1,17,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x7FFE;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263BCE0:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// sth r26,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r26.u16);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
loc_8263BCF8:
	// lwz r11,184(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263bd48
	if (!cr6.eq) goto loc_8263BD48;
	// addi r31,r27,180
	r31.s64 = r27.s64 + 180;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,188(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 188);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,184(r27)
	PPC_STORE_U32(r27.u32 + 184, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8263bd40
	if (!cr6.eq) goto loc_8263BD40;
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
loc_8263BD40:
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_8263BD48:
	// lwz r11,196(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 196);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263bd98
	if (!cr6.eq) goto loc_8263BD98;
	// addi r31,r27,192
	r31.s64 = r27.s64 + 192;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,200(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 200);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,196(r27)
	PPC_STORE_U32(r27.u32 + 196, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8263bd90
	if (!cr6.eq) goto loc_8263BD90;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
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
loc_8263BD90:
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_8263BD98:
	// lhz r10,516(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 516);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r11,r26
	r11.u64 = r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263bdd8
	if (cr6.eq) goto loc_8263BDD8;
	// lwz r10,512(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 512);
loc_8263BDB0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8263bdd4
	if (!cr6.eq) goto loc_8263BDD4;
	// lhz r8,516(r27)
	ctx.r8.u64 = PPC_LOAD_U16(r27.u32 + 516);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8263bdb0
	if (cr6.lt) goto loc_8263BDB0;
	// b 0x8263bdd8
	goto loc_8263BDD8;
loc_8263BDD4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8263BDD8:
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263be34
	if (!cr6.eq) goto loc_8263BE34;
	// lhz r30,518(r27)
	r30.u64 = PPC_LOAD_U16(r27.u32 + 518);
	// addi r31,r27,512
	r31.s64 = r27.s64 + 512;
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263be1c
	if (!cr6.eq) goto loc_8263BE1C;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263BE1C:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// sth r26,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r26.u16);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
loc_8263BE34:
	// lwz r31,532(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 532);
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8263bed8
	if (cr6.eq) goto loc_8263BED8;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// mr r11,r26
	r11.u64 = r26.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263be80
	if (cr6.eq) goto loc_8263BE80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8263BE58:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8263be7c
	if (!cr6.eq) goto loc_8263BE7C;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263be58
	if (cr6.lt) goto loc_8263BE58;
	// b 0x8263be80
	goto loc_8263BE80;
loc_8263BE7C:
	// li r28,1
	r28.s64 = 1;
loc_8263BE80:
	// extsb r11,r28
	r11.s64 = r28.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263bed8
	if (!cr6.eq) goto loc_8263BED8;
	// lhz r30,6(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263bec0
	if (!cr6.eq) goto loc_8263BEC0;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263BEC0:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// sth r26,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r26.u16);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
loc_8263BED8:
	// lwz r11,532(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 532);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263bf80
	if (cr6.eq) goto loc_8263BF80;
	// addi r31,r11,8
	r31.s64 = r11.s64 + 8;
	// mr r11,r26
	r11.u64 = r26.u64;
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263bf28
	if (cr6.eq) goto loc_8263BF28;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8263BF00:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8263bf24
	if (!cr6.eq) goto loc_8263BF24;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263bf00
	if (cr6.lt) goto loc_8263BF00;
	// b 0x8263bf28
	goto loc_8263BF28;
loc_8263BF24:
	// li r29,1
	r29.s64 = 1;
loc_8263BF28:
	// extsb r11,r29
	r11.s64 = r29.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263bf80
	if (!cr6.eq) goto loc_8263BF80;
	// lhz r30,6(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263bf68
	if (!cr6.eq) goto loc_8263BF68;
	// lwz r25,0(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263BF68:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// sth r26,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r26.u16);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
loc_8263BF80:
	// extsb r11,r28
	r11.s64 = r28.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263c030
	if (!cr6.eq) goto loc_8263C030;
	// extsb r11,r29
	r11.s64 = r29.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263c030
	if (!cr6.eq) goto loc_8263C030;
	// lwz r31,532(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 532);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8263c02c
	if (cr6.eq) goto loc_8263C02C;
	// lhz r30,14(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 14);
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263bfd8
	if (!cr6.eq) goto loc_8263BFD8;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263BFD8:
	// lhz r30,6(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263c00c
	if (!cr6.eq) goto loc_8263C00C;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263C00C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,16
	ctx.r5.s64 = 16;
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
loc_8263C02C:
	// stw r26,532(r27)
	PPC_STORE_U32(r27.u32 + 532, r26.u32);
loc_8263C030:
	// lhz r11,524(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 524);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263c08c
	if (!cr6.eq) goto loc_8263C08C;
	// lhz r30,526(r27)
	r30.u64 = PPC_LOAD_U16(r27.u32 + 526);
	// addi r31,r27,520
	r31.s64 = r27.s64 + 520;
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263c074
	if (!cr6.eq) goto loc_8263C074;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263C074:
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// stw r26,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r26.u32);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	// sth r26,4(r31)
	PPC_STORE_U16(r31.u32 + 4, r26.u16);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
loc_8263C08C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8263C090"))) PPC_WEAK_FUNC(sub_8263C090);
PPC_FUNC_IMPL(__imp__sub_8263C090) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8263C094"))) PPC_WEAK_FUNC(sub_8263C094);
PPC_FUNC_IMPL(__imp__sub_8263C094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263C098"))) PPC_WEAK_FUNC(sub_8263C098);
PPC_FUNC_IMPL(__imp__sub_8263C098) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82657808
	sub_82657808(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,11628
	ctx.r6.s64 = r11.s64 + 11628;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,3792(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3792);
	f0.f64 = double(temp.f32);
	// ori r10,r7,32768
	ctx.r10.u64 = ctx.r7.u64 | 32768;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lfs f13,-15528(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -15528);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// stfs f0,144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 144, temp.u32);
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 148, temp.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// sth r11,176(r31)
	PPC_STORE_U16(r31.u32 + 176, r11.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,178(r31)
	PPC_STORE_U16(r31.u32 + 178, ctx.r10.u16);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// addi r8,r5,10812
	ctx.r8.s64 = ctx.r5.s64 + 10812;
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// stw r9,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r9.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r9,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// stb r3,223(r31)
	PPC_STORE_U8(r31.u32 + 223, ctx.r3.u8);
	// lfs f0,-25600(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r11,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,220(r31)
	PPC_STORE_U16(r31.u32 + 220, r11.u16);
	// stb r4,222(r31)
	PPC_STORE_U8(r31.u32 + 222, ctx.r4.u8);
	// stw r11,504(r31)
	PPC_STORE_U32(r31.u32 + 504, r11.u32);
	// stw r8,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r8.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(r31.u32 + 512, r11.u32);
	// sth r11,516(r31)
	PPC_STORE_U16(r31.u32 + 516, r11.u16);
	// sth r10,518(r31)
	PPC_STORE_U16(r31.u32 + 518, ctx.r10.u16);
	// stw r11,520(r31)
	PPC_STORE_U32(r31.u32 + 520, r11.u32);
	// sth r11,524(r31)
	PPC_STORE_U16(r31.u32 + 524, r11.u16);
	// sth r10,526(r31)
	PPC_STORE_U16(r31.u32 + 526, ctx.r10.u16);
	// stw r11,528(r31)
	PPC_STORE_U32(r31.u32 + 528, r11.u32);
	// stfs f0,156(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 156, temp.u32);
	// sth r6,168(r31)
	PPC_STORE_U16(r31.u32 + 168, ctx.r6.u16);
	// stw r11,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r11.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(r31.u32 + 532, r11.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// stw r5,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r5.u32);
	// stw r11,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r11.u32);
	// stb r11,209(r31)
	PPC_STORE_U8(r31.u32 + 209, r11.u8);
	// stw r11,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263C198"))) PPC_WEAK_FUNC(sub_8263C198);
PPC_FUNC_IMPL(__imp__sub_8263C198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C19C"))) PPC_WEAK_FUNC(sub_8263C19C);
PPC_FUNC_IMPL(__imp__sub_8263C19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263C1A0"))) PPC_WEAK_FUNC(sub_8263C1A0);
PPC_FUNC_IMPL(__imp__sub_8263C1A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82657768
	sub_82657768(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,11628
	ctx.r8.s64 = r11.s64 + 11628;
	// li r11,0
	r11.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// ori r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 32768;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// sth r11,176(r31)
	PPC_STORE_U16(r31.u32 + 176, r11.u16);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// sth r9,178(r31)
	PPC_STORE_U16(r31.u32 + 178, ctx.r9.u16);
	// addi r5,r7,10460
	ctx.r5.s64 = ctx.r7.s64 + 10460;
	// stw r11,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r11.u32);
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
	// addi r10,r31,224
	ctx.r10.s64 = r31.s64 + 224;
	// stw r8,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r8.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// lfs f0,-25600(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stw r11,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r11.u32);
	// stw r8,200(r31)
	PPC_STORE_U32(r31.u32 + 200, ctx.r8.u32);
	// stw r5,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r5.u32);
	// beq cr6,0x8263c230
	if (cr6.eq) goto loc_8263C230;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r7,r8,16
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// sth r7,286(r10)
	PPC_STORE_U16(ctx.r10.u32 + 286, ctx.r7.u16);
loc_8263C230:
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// addi r7,r8,10812
	ctx.r7.s64 = ctx.r8.s64 + 10812;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(r31.u32 + 512, r11.u32);
	// sth r11,516(r31)
	PPC_STORE_U16(r31.u32 + 516, r11.u16);
	// sth r9,518(r31)
	PPC_STORE_U16(r31.u32 + 518, ctx.r9.u16);
	// stw r11,520(r31)
	PPC_STORE_U32(r31.u32 + 520, r11.u32);
	// sth r11,524(r31)
	PPC_STORE_U16(r31.u32 + 524, r11.u16);
	// sth r9,526(r31)
	PPC_STORE_U16(r31.u32 + 526, ctx.r9.u16);
	// beq cr6,0x8263c324
	if (cr6.eq) goto loc_8263C324;
	// lbz r11,232(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x8263c324
	if (cr6.gt) goto loc_8263C324;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8263c29c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8263C29C;
	// bdzf 4*cr6+eq,0x8263c2c4
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8263C2C4;
	// bdzf 4*cr6+eq,0x8263c2d8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8263C2D8;
	// bdzf 4*cr6+eq,0x8263c2ec
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8263C2EC;
	// bne cr6,0x8263c300
	if (!cr6.eq) goto loc_8263C300;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263c324
	if (cr6.eq) goto loc_8263C324;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r9,r11,11052
	ctx.r9.s64 = r11.s64 + 11052;
	// b 0x8263c310
	goto loc_8263C310;
loc_8263C29C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263c324
	if (cr6.eq) goto loc_8263C324;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r8,11164
	ctx.r6.s64 = ctx.r8.s64 + 11164;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r9,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = r11.s32 >> 16;
	// sth r9,286(r10)
	PPC_STORE_U16(ctx.r10.u32 + 286, ctx.r9.u16);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// b 0x8263c324
	goto loc_8263C324;
loc_8263C2C4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263c324
	if (cr6.eq) goto loc_8263C324;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r9,r11,10692
	ctx.r9.s64 = r11.s64 + 10692;
	// b 0x8263c310
	goto loc_8263C310;
loc_8263C2D8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263c324
	if (cr6.eq) goto loc_8263C324;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r9,r11,10932
	ctx.r9.s64 = r11.s64 + 10932;
	// b 0x8263c310
	goto loc_8263C310;
loc_8263C2EC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263c324
	if (cr6.eq) goto loc_8263C324;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r9,r11,11276
	ctx.r9.s64 = r11.s64 + 11276;
	// b 0x8263c310
	goto loc_8263C310;
loc_8263C300:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263c324
	if (cr6.eq) goto loc_8263C324;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r9,r11,11388
	ctx.r9.s64 = r11.s64 + 11388;
loc_8263C310:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r7,r8,16
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 16;
	// sth r7,286(r10)
	PPC_STORE_U16(ctx.r10.u32 + 286, ctx.r7.u16);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8263C324:
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

__attribute__((alias("__imp__sub_8263C33C"))) PPC_WEAK_FUNC(sub_8263C33C);
PPC_FUNC_IMPL(__imp__sub_8263C33C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C340"))) PPC_WEAK_FUNC(sub_8263C340);
PPC_FUNC_IMPL(__imp__sub_8263C340) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r27,0
	r27.s64 = 0;
	// addi r10,r11,11628
	ctx.r10.s64 = r11.s64 + 11628;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8263c3c8
	if (cr6.eq) goto loc_8263C3C8;
	// lhz r9,516(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 516);
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mr r11,r27
	r11.u64 = r27.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263c3a0
	if (!cr6.gt) goto loc_8263C3A0;
	// lwz r10,512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 512);
loc_8263C384:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8263c3a4
	if (cr6.eq) goto loc_8263C3A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263c384
	if (cr6.lt) goto loc_8263C384;
loc_8263C3A0:
	// li r11,-1
	r11.s64 = -1;
loc_8263C3A4:
	// lwz r10,512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r27.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r27.u32);
loc_8263C3C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82657f00
	sub_82657F00(ctx, base);
	// lwz r30,532(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8263c404
	if (cr6.eq) goto loc_8263C404;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263c758
	sub_8263C758(ctx, base);
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
loc_8263C404:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263c414
	if (cr6.eq) goto loc_8263C414;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263C414:
	// stw r27,528(r31)
	PPC_STORE_U32(r31.u32 + 528, r27.u32);
	// lhz r30,526(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 526);
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263c44c
	if (!cr6.eq) goto loc_8263C44C;
	// lwz r29,520(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263C44C:
	// lhz r30,518(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 518);
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263c480
	if (!cr6.eq) goto loc_8263C480;
	// lwz r29,512(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263C480:
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x82655740
	sub_82655740(ctx, base);
	// addi r29,r31,192
	r29.s64 = r31.s64 + 192;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8263c4c4
	if (!cr6.eq) goto loc_8263C4C4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263C4C4:
	// lis r28,-32768
	r28.s64 = -2147483648;
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// addi r30,r31,180
	r30.s64 = r31.s64 + 180;
	// stw r28,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r28.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8263c50c
	if (!cr6.eq) goto loc_8263C50C;
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
loc_8263C50C:
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// lhz r30,178(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 178);
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263c554
	if (!cr6.eq) goto loc_8263C554;
	// lwz r28,172(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// clrlwi r29,r30,18
	r29.u64 = r30.u32 & 0x3FFF;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r30,1,17,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x7FFE;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263C554:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263c850
	sub_8263C850(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263C560"))) PPC_WEAK_FUNC(sub_8263C560);
PPC_FUNC_IMPL(__imp__sub_8263C560) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8263C564"))) PPC_WEAK_FUNC(sub_8263C564);
PPC_FUNC_IMPL(__imp__sub_8263C564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263C568"))) PPC_WEAK_FUNC(sub_8263C568);
PPC_FUNC_IMPL(__imp__sub_8263C568) {
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
	// bl 0x82655740
	sub_82655740(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263c5b4
	if (cr6.eq) goto loc_8263C5B4;
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
loc_8263C5B4:
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

__attribute__((alias("__imp__sub_8263C5CC"))) PPC_WEAK_FUNC(sub_8263C5CC);
PPC_FUNC_IMPL(__imp__sub_8263C5CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C5D0"))) PPC_WEAK_FUNC(sub_8263C5D0);
PPC_FUNC_IMPL(__imp__sub_8263C5D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
loc_8263C5E8:
	// add r11,r4,r28
	r11.u64 = ctx.r4.u64 + r28.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
loc_8263C600:
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,52(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
loc_8263C60C:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8263c624
	if (!cr6.lt) goto loc_8263C624;
	// li r11,1
	r11.s64 = 1;
	// b 0x8263c664
	goto loc_8263C664;
loc_8263C624:
	// ble cr6,0x8263c630
	if (!cr6.gt) goto loc_8263C630;
	// li r11,0
	r11.s64 = 0;
	// b 0x8263c664
	goto loc_8263C664;
loc_8263C630:
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r11,20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// xor r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 ^ r11.u64;
	// xor r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 ^ r29.u64;
	// xor r11,r6,r29
	r11.u64 = ctx.r6.u64 ^ r29.u64;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r6,212(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// subfc r3,r6,r10
	xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r3.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
loc_8263C664:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263c67c
	if (cr6.eq) goto loc_8263C67C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x8263c60c
	goto loc_8263C60C;
loc_8263C67C:
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
loc_8263C684:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x8263c69c
	if (!cr6.lt) goto loc_8263C69C;
	// li r11,1
	r11.s64 = 1;
	// b 0x8263c6dc
	goto loc_8263C6DC;
loc_8263C69C:
	// ble cr6,0x8263c6a8
	if (!cr6.gt) goto loc_8263C6A8;
	// li r11,0
	r11.s64 = 0;
	// b 0x8263c6dc
	goto loc_8263C6DC;
loc_8263C6A8:
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r11,20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// xor r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 ^ r11.u64;
	// xor r3,r10,r29
	ctx.r3.u64 = ctx.r10.u64 ^ r29.u64;
	// xor r11,r6,r29
	r11.u64 = ctx.r6.u64 ^ r29.u64;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r6,212(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// subfc r3,r10,r6
	xer.ca = ctx.r6.u32 >= ctx.r10.u32;
	ctx.r3.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
loc_8263C6DC:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263c6f4
	if (cr6.eq) goto loc_8263C6F4;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// b 0x8263c684
	goto loc_8263C684;
loc_8263C6F4:
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// blt cr6,0x8263c728
	if (cr6.lt) goto loc_8263C728;
	// beq cr6,0x8263c718
	if (cr6.eq) goto loc_8263C718;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// stwx r8,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r8.u32);
loc_8263C718:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// ble cr6,0x8263c600
	if (!cr6.gt) goto loc_8263C600;
loc_8263C728:
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x8263c73c
	if (!cr6.lt) goto loc_8263C73C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263c5d0
	sub_8263C5D0(ctx, base);
loc_8263C73C:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// bge cr6,0x8263c74c
	if (!cr6.lt) goto loc_8263C74C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x8263c5e8
	goto loc_8263C5E8;
loc_8263C74C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263C750"))) PPC_WEAK_FUNC(sub_8263C750);
PPC_FUNC_IMPL(__imp__sub_8263C750) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263C754"))) PPC_WEAK_FUNC(sub_8263C754);
PPC_FUNC_IMPL(__imp__sub_8263C754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263C758"))) PPC_WEAK_FUNC(sub_8263C758);
PPC_FUNC_IMPL(__imp__sub_8263C758) {
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
	// lhz r30,14(r3)
	r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263c79c
	if (!cr6.eq) goto loc_8263C79C;
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263C79C:
	// lhz r30,6(r31)
	r30.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// rlwinm r11,r30,0,0,16
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263c7d0
	if (!cr6.eq) goto loc_8263C7D0;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
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
loc_8263C7D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8263C7D4"))) PPC_WEAK_FUNC(sub_8263C7D4);
PPC_FUNC_IMPL(__imp__sub_8263C7D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263C7D8"))) PPC_WEAK_FUNC(sub_8263C7D8);
PPC_FUNC_IMPL(__imp__sub_8263C7D8) {
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
	// addi r31,r3,80
	r31.s64 = ctx.r3.s64 + 80;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8263c82c
	if (!cr6.eq) goto loc_8263C82C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_8263C82C:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_8263C84C"))) PPC_WEAK_FUNC(sub_8263C84C);
PPC_FUNC_IMPL(__imp__sub_8263C84C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C850"))) PPC_WEAK_FUNC(sub_8263C850);
PPC_FUNC_IMPL(__imp__sub_8263C850) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r28,r3,16
	r28.s64 = ctx.r3.s64 + 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,11604
	ctx.r10.s64 = r11.s64 + 11604;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8263c880
	if (cr6.eq) goto loc_8263C880;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263C880:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263c890
	if (cr6.eq) goto loc_8263C890;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263C890:
	// addi r31,r30,120
	r31.s64 = r30.s64 + 120;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8263c8d0
	if (!cr6.eq) goto loc_8263C8D0;
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
loc_8263C8D0:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r3,r30,116
	ctx.r3.s64 = r30.s64 + 116;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82bf78f8
	sub_82BF78F8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8263c7d8
	sub_8263C7D8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r10,-13048
	ctx.r9.s64 = ctx.r10.s64 + -13048;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263C8FC"))) PPC_WEAK_FUNC(sub_8263C8FC);
PPC_FUNC_IMPL(__imp__sub_8263C8FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263C900"))) PPC_WEAK_FUNC(sub_8263C900);
PPC_FUNC_IMPL(__imp__sub_8263C900) {
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
	// bl 0x8263c850
	sub_8263C850(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263c94c
	if (cr6.eq) goto loc_8263C94C;
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
loc_8263C94C:
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

__attribute__((alias("__imp__sub_8263C964"))) PPC_WEAK_FUNC(sub_8263C964);
PPC_FUNC_IMPL(__imp__sub_8263C964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C968"))) PPC_WEAK_FUNC(sub_8263C968);
PPC_FUNC_IMPL(__imp__sub_8263C968) {
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
	// bl 0x8263c340
	sub_8263C340(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263c9b4
	if (cr6.eq) goto loc_8263C9B4;
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
loc_8263C9B4:
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

__attribute__((alias("__imp__sub_8263C9CC"))) PPC_WEAK_FUNC(sub_8263C9CC);
PPC_FUNC_IMPL(__imp__sub_8263C9CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C9D0"))) PPC_WEAK_FUNC(sub_8263C9D0);
PPC_FUNC_IMPL(__imp__sub_8263C9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,216(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C9D8"))) PPC_WEAK_FUNC(sub_8263C9D8);
PPC_FUNC_IMPL(__imp__sub_8263C9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,216(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C9E0"))) PPC_WEAK_FUNC(sub_8263C9E0);
PPC_FUNC_IMPL(__imp__sub_8263C9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// slw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r4.u8 & 0x3F));
	// stb r10,214(r3)
	PPC_STORE_U8(ctx.r3.u32 + 214, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C9F0"))) PPC_WEAK_FUNC(sub_8263C9F0);
PPC_FUNC_IMPL(__imp__sub_8263C9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,214(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 214);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263C9FC"))) PPC_WEAK_FUNC(sub_8263C9FC);
PPC_FUNC_IMPL(__imp__sub_8263C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263CA00"))) PPC_WEAK_FUNC(sub_8263CA00);
PPC_FUNC_IMPL(__imp__sub_8263CA00) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8263ca2c
	if (cr6.eq) goto loc_8263CA2C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263CA2C:
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263ca3c
	if (cr6.eq) goto loc_8263CA3C;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263CA3C:
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
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

__attribute__((alias("__imp__sub_8263CA54"))) PPC_WEAK_FUNC(sub_8263CA54);
PPC_FUNC_IMPL(__imp__sub_8263CA54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263CA58"))) PPC_WEAK_FUNC(sub_8263CA58);
PPC_FUNC_IMPL(__imp__sub_8263CA58) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,204
	ctx.r4.s64 = 204;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x82655230
	sub_82655230(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263CA68"))) PPC_WEAK_FUNC(sub_8263CA68);
PPC_FUNC_IMPL(__imp__sub_8263CA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,8
	r11.s64 = 8;
	// li r10,80
	ctx.r10.s64 = 80;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263CA7C"))) PPC_WEAK_FUNC(sub_8263CA7C);
PPC_FUNC_IMPL(__imp__sub_8263CA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263CA80"))) PPC_WEAK_FUNC(sub_8263CA80);
PPC_FUNC_IMPL(__imp__sub_8263CA80) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263CA88"))) PPC_WEAK_FUNC(sub_8263CA88);
PPC_FUNC_IMPL(__imp__sub_8263CA88) {
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
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,11660
	ctx.r10.s64 = r11.s64 + 11660;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8263cab8
	if (cr6.eq) goto loc_8263CAB8;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263CAB8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263CAD4"))) PPC_WEAK_FUNC(sub_8263CAD4);
PPC_FUNC_IMPL(__imp__sub_8263CAD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263CAD8"))) PPC_WEAK_FUNC(sub_8263CAD8);
PPC_FUNC_IMPL(__imp__sub_8263CAD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v47{};
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
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
	// mflr r12
	// bl 0x828e941c
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// vor v4,v0,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// vspltisw v5,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_set1_epi32(int(0x0)));
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// addi r29,r10,7632
	r29.s64 = ctx.r10.s64 + 7632;
	// li r30,32
	r30.s64 = 32;
	// vmsum3fp128 v3,v4,v4
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r31,48
	r31.s64 = 48;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v3
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v3.f32))));
	// vmulfp128 v10,v3,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v6,v5,v3
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v3.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw v2,v13,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v1,v4,v2
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r8
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor v30,v31,v31
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v31.u8));
	// vmsum3fp128 v29,v30,v30
	_mm_store_ps(v29.f32, _mm_dp_ps(_mm_load_ps(v30.f32), _mm_load_ps(v30.f32), 0xEF));
	// stvx128 v31,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v29
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v29.f32))));
	// vmulfp128 v10,v29,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v7,v5,v29
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v29.f32)));
	// vnmsubfp v9,v10,v11,v13
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw v28,v13,0
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v27,v30,v28
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v30.f32), _mm_load_ps(v28.f32)));
	// vor v26,v27,v27
	_mm_store_si128((__m128i*)v26.u8, _mm_load_si128((__m128i*)v27.u8));
	// stvx128 v27,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v25,r0,r11
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v24,v25,135
	_mm_store_si128((__m128i*)v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x78));
	// vpermwi128 v23,v26,99
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v26.u32), 0x9C));
	// vpermwi128 v22,v26,135
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v26.u32), 0x78));
	// vpermwi128 v21,v25,99
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v25.u32), 0x9C));
	// vmulfp128 v20,v24,v23
	_mm_store_ps(v20.f32, _mm_mul_ps(_mm_load_ps(v24.f32), _mm_load_ps(v23.f32)));
	// vmulfp128 v19,v21,v22
	_mm_store_ps(v19.f32, _mm_mul_ps(_mm_load_ps(v21.f32), _mm_load_ps(v22.f32)));
	// vsubfp v18,v19,v20
	_mm_store_ps(v18.f32, _mm_sub_ps(_mm_load_ps(v19.f32), _mm_load_ps(v20.f32)));
	// stvx128 v18,r11,r30
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v17,r0,r4
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v17,r11,r31
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// lvx128 v16,r0,r7
	simd::store_shuffled(v16, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor v15,v16,v16
	_mm_store_si128((__m128i*)v15.u8, _mm_load_si128((__m128i*)v16.u8));
	// vmsum3fp128 v14,v15,v15
	_mm_store_ps(v14.f32, _mm_dp_ps(_mm_load_ps(v15.f32), _mm_load_ps(v15.f32), 0xEF));
	// stvx128 v16,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v14
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v14.f32))));
	// vmulfp128 v9,v14,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v14.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v8,v0,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v7,v5,v14
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v14.f32)));
	// vnmsubfp v6,v9,v8,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v63,v13,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v62,v15,v63
	_mm_store_ps(v62.f32, _mm_mul_ps(_mm_load_ps(v15.f32), _mm_load_ps(v63.f32)));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor128 v60,v61,v61
	_mm_store_si128((__m128i*)v60.u8, _mm_load_si128((__m128i*)v61.u8));
	// vmsum3fp128 v59,v60,v60
	_mm_store_ps(v59.f32, _mm_dp_ps(_mm_load_ps(v60.f32), _mm_load_ps(v60.f32), 0xEF));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp128 v0,v59
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v59.f32))));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v59,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v8,v5,v59
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v59.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v5,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw128 v58,v13,0
	_mm_store_si128((__m128i*)v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v57,v60,v58
	_mm_store_ps(v57.f32, _mm_mul_ps(_mm_load_ps(v60.f32), _mm_load_ps(v58.f32)));
	// vor128 v56,v57,v57
	_mm_store_si128((__m128i*)v56.u8, _mm_load_si128((__m128i*)v57.u8));
	// stvx128 v57,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v55,r0,r10
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v54,v55,135
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x78));
	// vpermwi128 v53,v56,99
	_mm_store_si128((__m128i*)v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x9C));
	// vpermwi128 v52,v56,135
	_mm_store_si128((__m128i*)v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v56.u32), 0x78));
	// vpermwi128 v51,v55,99
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0x9C));
	// vmulfp128 v50,v54,v53
	_mm_store_ps(v50.f32, _mm_mul_ps(_mm_load_ps(v54.f32), _mm_load_ps(v53.f32)));
	// vmulfp128 v49,v51,v52
	_mm_store_ps(v49.f32, _mm_mul_ps(_mm_load_ps(v51.f32), _mm_load_ps(v52.f32)));
	// vsubfp128 v48,v49,v50
	_mm_store_ps(v48.f32, _mm_sub_ps(_mm_load_ps(v49.f32), _mm_load_ps(v50.f32)));
	// stvx128 v48,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v47,r0,r5
	simd::store_shuffled(v47, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v47,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_8263CC84"))) PPC_WEAK_FUNC(sub_8263CC84);
PPC_FUNC_IMPL(__imp__sub_8263CC84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263CC88"))) PPC_WEAK_FUNC(sub_8263CC88);
PPC_FUNC_IMPL(__imp__sub_8263CC88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsb r11,r5
	r11.s64 = ctx.r5.s8;
	// stb r5,162(r3)
	PPC_STORE_U8(ctx.r3.u32 + 162, ctx.r5.u8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,182(r3)
	PPC_STORE_U8(ctx.r3.u32 + 182, ctx.r9.u8);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
}

__attribute__((alias("__imp__sub_8263CCD4"))) PPC_WEAK_FUNC(sub_8263CCD4);
PPC_FUNC_IMPL(__imp__sub_8263CCD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263CCD8"))) PPC_WEAK_FUNC(sub_8263CCD8);
PPC_FUNC_IMPL(__imp__sub_8263CCD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,-31496(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -31496);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263cd58
	if (cr6.eq) goto loc_8263CD58;
	// addi r4,r30,96
	ctx.r4.s64 = r30.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x82628b70
	sub_82628B70(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263cd58
	if (cr6.eq) goto loc_8263CD58;
	// lbz r11,162(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 162);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263cd50
	if (cr6.eq) goto loc_8263CD50;
	// lbz r11,194(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 194);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263cd58
	if (cr6.eq) goto loc_8263CD58;
loc_8263CD50:
	// li r11,1
	r11.s64 = 1;
	// b 0x8263cd5c
	goto loc_8263CD5C;
loc_8263CD58:
	// li r11,0
	r11.s64 = 0;
loc_8263CD5C:
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263CD7C"))) PPC_WEAK_FUNC(sub_8263CD7C);
PPC_FUNC_IMPL(__imp__sub_8263CD7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263CD80"))) PPC_WEAK_FUNC(sub_8263CD80);
PPC_FUNC_IMPL(__imp__sub_8263CD80) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r29,1
	r29.s64 = 1;
	// addi r10,r11,11660
	ctx.r10.s64 = r11.s64 + 11660;
	// li r30,0
	r30.s64 = 0;
	// sth r29,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r29.u16);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x8263d168
	sub_8263D168(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r9,r11,48
	ctx.r9.s64 = r11.s64 + 48;
	// addi r10,r31,96
	ctx.r10.s64 = r31.s64 + 96;
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// lfs f0,-25600(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25600);
	f0.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r28,64
	r28.s64 = 64;
	// stvx128 v0,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// li r27,68
	r27.s64 = 68;
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,21036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-25596(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -25596);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,15388(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 15388);
	ctx.f12.f64 = double(temp.f32);
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f0,136(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 136, temp.u32);
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v9,v10,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_setzero_si128());
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r30,210(r31)
	PPC_STORE_U8(r31.u32 + 210, r30.u8);
	// stfs f12,196(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// stb r30,195(r31)
	PPC_STORE_U8(r31.u32 + 195, r30.u8);
	// stfs f11,200(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// stb r30,183(r31)
	PPC_STORE_U8(r31.u32 + 183, r30.u8);
	// stfs f0,204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// stb r29,184(r31)
	PPC_STORE_U8(r31.u32 + 184, r29.u8);
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// sth r28,164(r31)
	PPC_STORE_U16(r31.u32 + 164, r28.u16);
	// sth r27,166(r31)
	PPC_STORE_U16(r31.u32 + 166, r27.u16);
	// sth r8,168(r31)
	PPC_STORE_U16(r31.u32 + 168, ctx.r8.u16);
	// stb r30,162(r31)
	PPC_STORE_U8(r31.u32 + 162, r30.u8);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 172, temp.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// stb r30,163(r31)
	PPC_STORE_U8(r31.u32 + 163, r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8263CE98"))) PPC_WEAK_FUNC(sub_8263CE98);
PPC_FUNC_IMPL(__imp__sub_8263CE98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8263CE9C"))) PPC_WEAK_FUNC(sub_8263CE9C);
PPC_FUNC_IMPL(__imp__sub_8263CE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263CEA0"))) PPC_WEAK_FUNC(sub_8263CEA0);
PPC_FUNC_IMPL(__imp__sub_8263CEA0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCVRegister v14{};
	PPCVRegister v15{};
	PPCVRegister v16{};
	PPCVRegister v17{};
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCVRegister v32{};
	PPCVRegister v33{};
	PPCVRegister v34{};
	PPCVRegister v35{};
	PPCVRegister v36{};
	PPCVRegister v37{};
	PPCVRegister v38{};
	PPCVRegister v39{};
	PPCVRegister v40{};
	PPCVRegister v41{};
	PPCVRegister v42{};
	PPCVRegister v43{};
	PPCVRegister v44{};
	PPCVRegister v45{};
	PPCVRegister v46{};
	PPCVRegister v47{};
	PPCVRegister v48{};
	PPCVRegister v49{};
	PPCVRegister v50{};
	PPCVRegister v51{};
	PPCVRegister v52{};
	PPCVRegister v53{};
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
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// li r12,-96
	r12.s64 = -96;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-64
	r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	r11.s64 = -2113536000;
	// vmsum3fp128 v3,v4,v4
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r11,7632
	ctx.r8.s64 = r11.s64 + 7632;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// vrsqrtefp v13,v3
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v3.f32))));
	// vmulfp128 v9,v3,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v5,v12,v3
	_mm_store_ps(ctx.v5.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v6,v9,v10,v0
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v10,v9,v11,v0
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v11,v13,v12,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v2,v11,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v127,v4,v2
	_mm_store_ps(v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v127,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f11
	f0.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x8263cf58
	if (!cr6.lt) goto loc_8263CF58;
	// li r11,0
	r11.s64 = 0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8263CF58:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x8263cf64
	if (!cr6.lt) goto loc_8263CF64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8263CF64:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vxor v13,v7,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v10,v11,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(v127.f32), 0xEF));
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// vpermwi128 v4,v127,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x78));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v3,v127,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x9C));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfsx f0,r8,r7
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	f0.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// lfsx f12,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stfsx f12,r8,r3
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, temp.u32);
	// vmsum3fp128 v1,v2,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v127.f32), 0xEF));
	// stfsx f13,r6,r9
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// addi r28,r5,7520
	r28.s64 = ctx.r5.s64 + 7520;
	// lvx128 v8,r0,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v29,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v27,v29,v0
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(ctx.v0.f32)));
	// vmrghw v28,v1,v13
	_mm_store_si128((__m128i*)v28.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v1.u32)));
	// vrsqrtefp v13,v29
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v29.f32))));
	// lvx128 v31,r0,r10
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r9,32
	ctx.r9.s64 = 32;
	// vmsum3fp128 v30,v31,v127
	_mm_store_ps(v30.f32, _mm_dp_ps(_mm_load_ps(v31.f32), _mm_load_ps(v127.f32), 0xEF));
	// vcmpeqfp v6,v12,v29
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v29.f32)));
	// li r8,48
	ctx.r8.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmrghw v26,v10,v30
	_mm_store_si128((__m128i*)v26.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v30.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v25,v26,v28
	_mm_store_si128((__m128i*)v25.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v28.u32), _mm_load_si128((__m128i*)v26.u32)));
	// vnmsubfp v5,v27,v11,v0
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// stvx128 v25,r31,r9
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v24,r0,r10
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r0,r4
	simd::store_shuffled(v23, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r28
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r0,r11
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v13,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v27,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v13,v0,v12,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v21,v13,0
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v126,v8,v21
	_mm_store_ps(v126.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v21.f32)));
	// vmsum3fp128 v20,v22,v126
	_mm_store_ps(v20.f32, _mm_dp_ps(_mm_load_ps(v22.f32), _mm_load_ps(v126.f32), 0xEF));
	// vpermwi128 v19,v126,99
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v126.u32), 0x9C));
	// vmsum3fp128 v18,v24,v126
	_mm_store_ps(v18.f32, _mm_dp_ps(_mm_load_ps(v24.f32), _mm_load_ps(v126.f32), 0xEF));
	// vmrghw v17,v20,v7
	_mm_store_si128((__m128i*)v17.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)v20.u32)));
	// vmsum3fp128 v16,v23,v126
	_mm_store_ps(v16.f32, _mm_dp_ps(_mm_load_ps(v23.f32), _mm_load_ps(v126.f32), 0xEF));
	// vpermwi128 v15,v126,135
	_mm_store_si128((__m128i*)v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v126.u32), 0x78));
	// vmulfp128 v14,v4,v19
	_mm_store_ps(v14.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(v19.f32)));
	// vmulfp128 v63,v3,v15
	_mm_store_ps(v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(v15.f32)));
	// vmrghw128 v62,v16,v18
	_mm_store_si128((__m128i*)v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v18.u32), _mm_load_si128((__m128i*)v16.u32)));
	// vsubfp128 v125,v63,v14
	_mm_store_ps(v125.f32, _mm_sub_ps(_mm_load_ps(v63.f32), _mm_load_ps(v14.f32)));
	// vmrghw128 v61,v62,v17
	_mm_store_si128((__m128i*)v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v17.u32), _mm_load_si128((__m128i*)v62.u32)));
	// stvx128 v61,r31,r8
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v59,r0,r4
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r0,r10
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r11
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v56,v60,v125
	_mm_store_ps(v56.f32, _mm_dp_ps(_mm_load_ps(v60.f32), _mm_load_ps(v125.f32), 0xEF));
	// vmsum3fp128 v57,v58,v125
	_mm_store_ps(v57.f32, _mm_dp_ps(_mm_load_ps(v58.f32), _mm_load_ps(v125.f32), 0xEF));
	// vmrghw128 v54,v56,v0
	_mm_store_si128((__m128i*)v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v56.u32)));
	// vmsum3fp128 v55,v59,v125
	_mm_store_ps(v55.f32, _mm_dp_ps(_mm_load_ps(v59.f32), _mm_load_ps(v125.f32), 0xEF));
	// vmrghw128 v53,v55,v57
	_mm_store_si128((__m128i*)v53.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v57.u32), _mm_load_si128((__m128i*)v55.u32)));
	// vmrghw128 v52,v53,v54
	_mm_store_si128((__m128i*)v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v54.u32), _mm_load_si128((__m128i*)v53.u32)));
	// stvx128 v52,r31,r6
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628128
	sub_82628128(ctx, base);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// addi r10,r30,32
	ctx.r10.s64 = r30.s64 + 32;
	// lvx128 v51,r0,r11
	simd::store_shuffled(v51, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// li r9,96
	ctx.r9.s64 = 96;
	// lvx128 v50,r0,r10
	simd::store_shuffled(v50, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v49,v51,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v49.f32, _mm_dp_ps(_mm_load_ps(v51.f32), _mm_load_ps(v127.f32), 0xEF));
	// lvx128 v48,r0,r30
	simd::store_shuffled(v48, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v47,v50,v127
	_mm_store_ps(v47.f32, _mm_dp_ps(_mm_load_ps(v50.f32), _mm_load_ps(v127.f32), 0xEF));
	// vmsum3fp128 v46,v48,v127
	_mm_store_ps(v46.f32, _mm_dp_ps(_mm_load_ps(v48.f32), _mm_load_ps(v127.f32), 0xEF));
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// li r8,112
	ctx.r8.s64 = 112;
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// vmrghw128 v45,v49,v0
	_mm_store_si128((__m128i*)v45.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v49.u32)));
	// vmrghw128 v44,v46,v47
	_mm_store_si128((__m128i*)v44.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v47.u32), _mm_load_si128((__m128i*)v46.u32)));
	// vmrghw128 v43,v44,v45
	_mm_store_si128((__m128i*)v43.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v45.u32), _mm_load_si128((__m128i*)v44.u32)));
	// stvx128 v43,r31,r9
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v41,r0,r10
	simd::store_shuffled(v41, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r0,r30
	simd::store_shuffled(v40, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r0,r11
	simd::store_shuffled(v42, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v37,v42,v126
	_mm_store_ps(v37.f32, _mm_dp_ps(_mm_load_ps(v42.f32), _mm_load_ps(v126.f32), 0xEF));
	// vmsum3fp128 v39,v40,v126
	_mm_store_ps(v39.f32, _mm_dp_ps(_mm_load_ps(v40.f32), _mm_load_ps(v126.f32), 0xEF));
	// vmrghw128 v35,v37,v0
	_mm_store_si128((__m128i*)v35.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v37.u32)));
	// vmsum3fp128 v38,v41,v126
	_mm_store_ps(v38.f32, _mm_dp_ps(_mm_load_ps(v41.f32), _mm_load_ps(v126.f32), 0xEF));
	// vmrghw128 v36,v39,v38
	_mm_store_si128((__m128i*)v36.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v38.u32), _mm_load_si128((__m128i*)v39.u32)));
	// vmrghw128 v34,v36,v35
	_mm_store_si128((__m128i*)v34.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v35.u32), _mm_load_si128((__m128i*)v36.u32)));
	// stvx128 v34,r31,r8
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v33,r0,r30
	simd::store_shuffled(v33, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v32,v33,v125
	_mm_store_ps(v32.f32, _mm_dp_ps(_mm_load_ps(v33.f32), _mm_load_ps(v125.f32), 0xEF));
	// vmsum3fp128 v11,v12,v125
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v125.f32), 0xEF));
	// vmsum3fp128 v10,v13,v125
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v125.f32), 0xEF));
	// vmrghw v9,v11,v0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw128 v8,v32,v10
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)v32.u32)));
	// vmrghw v7,v8,v9
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// stvx128 v7,r31,r7
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628128
	sub_82628128(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-96
	r0.s64 = -96;
	// lvx128 v125,r1,r0
	simd::store_shuffled(v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-64
	r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_8263D164"))) PPC_WEAK_FUNC(sub_8263D164);
PPC_FUNC_IMPL(__imp__sub_8263D164) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263D168"))) PPC_WEAK_FUNC(sub_8263D168);
PPC_FUNC_IMPL(__imp__sub_8263D168) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,18
	ctx.r9.s64 = 18;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// sth r9,144(r3)
	PPC_STORE_U16(ctx.r3.u32 + 144, ctx.r9.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// stb r11,146(r3)
	PPC_STORE_U8(ctx.r3.u32 + 146, r11.u8);
	// li r7,17
	ctx.r7.s64 = 17;
	// sth r10,148(r3)
	PPC_STORE_U16(ctx.r3.u32 + 148, ctx.r10.u16);
	// sth r10,150(r3)
	PPC_STORE_U16(ctx.r3.u32 + 150, ctx.r10.u16);
	// li r6,14
	ctx.r6.s64 = 14;
	// stb r11,166(r3)
	PPC_STORE_U8(ctx.r3.u32 + 166, r11.u8);
	// li r5,12
	ctx.r5.s64 = 12;
	// stb r11,168(r3)
	PPC_STORE_U8(ctx.r3.u32 + 168, r11.u8);
	// li r3,5
	ctx.r3.s64 = 5;
	// sth r7,164(r31)
	PPC_STORE_U16(r31.u32 + 164, ctx.r7.u16);
	// lfs f0,-25600(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stb r11,178(r31)
	PPC_STORE_U8(r31.u32 + 178, r11.u8);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// sth r6,176(r31)
	PPC_STORE_U16(r31.u32 + 176, ctx.r6.u16);
	// addi r11,r31,196
	r11.s64 = r31.s64 + 196;
	// sth r5,192(r31)
	PPC_STORE_U16(r31.u32 + 192, ctx.r5.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r3,196(r31)
	PPC_STORE_U16(r31.u32 + 196, ctx.r3.u16);
	// addi r3,r11,3
	ctx.r3.s64 = r11.s64 + 3;
	// stb r10,198(r31)
	PPC_STORE_U8(r31.u32 + 198, ctx.r10.u8);
	// bl 0x82628d30
	sub_82628D30(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,-12728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f0.f64 = double(temp.f32);
	// stfs f0,200(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263D20C"))) PPC_WEAK_FUNC(sub_8263D20C);
PPC_FUNC_IMPL(__imp__sub_8263D20C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D210"))) PPC_WEAK_FUNC(sub_8263D210);
PPC_FUNC_IMPL(__imp__sub_8263D210) {
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
	// lwz r3,176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,11660
	ctx.r10.s64 = r11.s64 + 11660;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8263d248
	if (cr6.eq) goto loc_8263D248;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263D248:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r9,r11,-13048
	ctx.r9.s64 = r11.s64 + -13048;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8263d280
	if (cr6.eq) goto loc_8263D280;
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
loc_8263D280:
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

__attribute__((alias("__imp__sub_8263D298"))) PPC_WEAK_FUNC(sub_8263D298);
PPC_FUNC_IMPL(__imp__sub_8263D298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D29C"))) PPC_WEAK_FUNC(sub_8263D29C);
PPC_FUNC_IMPL(__imp__sub_8263D29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263D2A0"))) PPC_WEAK_FUNC(sub_8263D2A0);
PPC_FUNC_IMPL(__imp__sub_8263D2A0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c458c8
	sub_82C458C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263D2B4"))) PPC_WEAK_FUNC(sub_8263D2B4);
PPC_FUNC_IMPL(__imp__sub_8263D2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263D2B8"))) PPC_WEAK_FUNC(sub_8263D2B8);
PPC_FUNC_IMPL(__imp__sub_8263D2B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r9,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r9.u32);
	// stw r8,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8263D30C"))) PPC_WEAK_FUNC(sub_8263D30C);
PPC_FUNC_IMPL(__imp__sub_8263D30C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D310"))) PPC_WEAK_FUNC(sub_8263D310);
PPC_FUNC_IMPL(__imp__sub_8263D310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,30(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lhz r11,28(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// addi r10,r11,52
	ctx.r10.s64 = r11.s64 + 52;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D328"))) PPC_WEAK_FUNC(sub_8263D328);
PPC_FUNC_IMPL(__imp__sub_8263D328) {
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
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8263D364"))) PPC_WEAK_FUNC(sub_8263D364);
PPC_FUNC_IMPL(__imp__sub_8263D364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D368"))) PPC_WEAK_FUNC(sub_8263D368);
PPC_FUNC_IMPL(__imp__sub_8263D368) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D370"))) PPC_WEAK_FUNC(sub_8263D370);
PPC_FUNC_IMPL(__imp__sub_8263D370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	r11.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// addi r8,r10,11732
	ctx.r8.s64 = ctx.r10.s64 + 11732;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// sth r30,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r30.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lfs f0,4580(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4580);
	f0.f64 = double(temp.f32);
	// sth r30,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, r30.u16);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// stb r11,36(r3)
	PPC_STORE_U8(ctx.r3.u32 + 36, r11.u8);
	// stb r11,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, r11.u8);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lwz r11,36(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// lbz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r10,28(r31)
	PPC_STORE_U16(r31.u32 + 28, ctx.r10.u16);
	// sth r9,30(r31)
	PPC_STORE_U16(r31.u32 + 30, ctx.r9.u16);
	// bl 0x826584f8
	sub_826584F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263D40C"))) PPC_WEAK_FUNC(sub_8263D40C);
PPC_FUNC_IMPL(__imp__sub_8263D40C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263D410"))) PPC_WEAK_FUNC(sub_8263D410);
PPC_FUNC_IMPL(__imp__sub_8263D410) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,11732
	ctx.r10.s64 = r11.s64 + 11732;
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8263d458
	if (cr6.eq) goto loc_8263D458;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x826584f8
	sub_826584F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826584f8
	sub_826584F8(ctx, base);
loc_8263D458:
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

__attribute__((alias("__imp__sub_8263D470"))) PPC_WEAK_FUNC(sub_8263D470);
PPC_FUNC_IMPL(__imp__sub_8263D470) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D474"))) PPC_WEAK_FUNC(sub_8263D474);
PPC_FUNC_IMPL(__imp__sub_8263D474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263D478"))) PPC_WEAK_FUNC(sub_8263D478);
PPC_FUNC_IMPL(__imp__sub_8263D478) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,11732
	ctx.r10.s64 = r11.s64 + 11732;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r9,-13048
	ctx.r8.s64 = ctx.r9.s64 + -13048;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263D4BC"))) PPC_WEAK_FUNC(sub_8263D4BC);
PPC_FUNC_IMPL(__imp__sub_8263D4BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D4C0"))) PPC_WEAK_FUNC(sub_8263D4C0);
PPC_FUNC_IMPL(__imp__sub_8263D4C0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// lhz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addic r7,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// subfe r6,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// beq cr6,0x8263d5b8
	if (cr6.eq) goto loc_8263D5B8;
	// stbx r5,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r5.u8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// bne cr6,0x8263d510
	if (!cr6.eq) goto loc_8263D510;
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// b 0x8263d51c
	goto loc_8263D51C;
loc_8263D510:
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r8,r8,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_8263D51C:
	// stb r8,18(r11)
	PPC_STORE_U8(r11.u32 + 18, ctx.r8.u8);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// lwz r31,24(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r8,r11,-11132
	ctx.r8.s64 = r11.s64 + -11132;
	// beq cr6,0x8263d58c
	if (cr6.eq) goto loc_8263D58C;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// beq cr6,0x8263d56c
	if (cr6.eq) goto loc_8263D56C;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82655058
	sub_82655058(ctx, base);
loc_8263D56C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659558
	sub_82659558(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8263D58C:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x8263d5ac
	if (cr6.eq) goto loc_8263D5AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82655130
	sub_82655130(ctx, base);
loc_8263D5AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659628
	sub_82659628(ctx, base);
loc_8263D5B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263D5C8"))) PPC_WEAK_FUNC(sub_8263D5C8);
PPC_FUNC_IMPL(__imp__sub_8263D5C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D5CC"))) PPC_WEAK_FUNC(sub_8263D5CC);
PPC_FUNC_IMPL(__imp__sub_8263D5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263D5D0"))) PPC_WEAK_FUNC(sub_8263D5D0);
PPC_FUNC_IMPL(__imp__sub_8263D5D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,76(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8263d6bc
	if (!cr6.eq) goto loc_8263D6BC;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f11,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f10,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f9,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f8,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f7,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// lfs f6,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f5,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f4,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfs f3,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,60(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r6,22
	cr6.compare<uint32_t>(ctx.r6.u32, 22, xer);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bne cr6,0x8263d6a8
	if (!cr6.eq) goto loc_8263D6A8;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82c47dd8
	sub_82C47DD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8263D6A8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82c45a78
	sub_82C45A78(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e946c
	return;
loc_8263D6BC:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c458c8
	sub_82C458C8(ctx, base);
	// lbz r11,36(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263d6f4
	if (cr6.eq) goto loc_8263D6F4;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x826464e8
	sub_826464E8(ctx, base);
loc_8263D6F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8263D6F8"))) PPC_WEAK_FUNC(sub_8263D6F8);
PPC_FUNC_IMPL(__imp__sub_8263D6F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263D6FC"))) PPC_WEAK_FUNC(sub_8263D6FC);
PPC_FUNC_IMPL(__imp__sub_8263D6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263D700"))) PPC_WEAK_FUNC(sub_8263D700);
PPC_FUNC_IMPL(__imp__sub_8263D700) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,76(r4)
	r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lhz r11,28(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lhz r28,30(r3)
	r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// lfs f31,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lbzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + r27.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8263d914
	if (!cr6.eq) goto loc_8263D914;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// fmr f13,f31
	ctx.f13.f64 = f31.f64;
	// fmr f11,f31
	ctx.f11.f64 = f31.f64;
	// blt cr6,0x8263d780
	if (cr6.lt) goto loc_8263D780;
	// addi r11,r28,-2
	r11.s64 = r28.s64 + -2;
	// addi r10,r27,-8
	ctx.r10.s64 = r27.s64 + -8;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8263D76C:
	// lfs f10,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f10,f10,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + f0.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// bdnz 0x8263d76c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263D76C;
loc_8263D780:
	// cmpw cr6,r9,r28
	cr6.compare<int32_t>(ctx.r9.s32, r28.s32, xer);
	// bge cr6,0x8263d794
	if (!cr6.lt) goto loc_8263D794;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f12,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
loc_8263D794:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fadds f0,f0,f11
	f0.f64 = double(float(f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x8263d914
	if (!cr6.gt) goto loc_8263D914;
	// li r11,1
	r11.s64 = 1;
	// fsqrts f30,f0
	f30.f64 = double(float(sqrt(f0.f64)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,72(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8263d4c0
	sub_8263D4C0(ctx, base);
	// lbz r9,37(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8263d914
	if (cr6.eq) goto loc_8263D914;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,48(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// addi r4,r5,7536
	ctx.r4.s64 = ctx.r5.s64 + 7536;
	// fdivs f9,f0,f30
	ctx.f9.f64 = double(float(f0.f64 / f30.f64));
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r9,16
	r11.s64 = ctx.r9.s64 + 16;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r8,52(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// lfs f6,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// lfs f3,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v10,r0,r6
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvx128 v9,r0,r3
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vspltw v11,v0,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvx128 v7,r0,r5
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v11,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vsubfp v8,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stfs f0,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvx128 v6,r0,r30
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v8,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v13,v0,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsubfp v5,v13,v0
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v13,v5,v9
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v13,v0,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsubfp v4,v13,v0
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v4,v7
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v7.f32)));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v0,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsubfp v3,v13,v0
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v3,v6
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v6.f32)));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v13,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8263D914:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8263d92c
	if (!cr6.gt) goto loc_8263D92C;
	// addi r11,r27,-8
	r11.s64 = r27.s64 + -8;
	// mtctr r28
	ctr.u64 = r28.u64;
loc_8263D924:
	// stfsu f31,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// bdnz 0x8263d924
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263D924;
loc_8263D92C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_8263D938"))) PPC_WEAK_FUNC(sub_8263D938);
PPC_FUNC_IMPL(__imp__sub_8263D938) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8263D93C"))) PPC_WEAK_FUNC(sub_8263D93C);
PPC_FUNC_IMPL(__imp__sub_8263D93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263D940"))) PPC_WEAK_FUNC(sub_8263D940);
PPC_FUNC_IMPL(__imp__sub_8263D940) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r10,r11,11732
	ctx.r10.s64 = r11.s64 + 11732;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// clrlwi r8,r30,31
	ctx.r8.u64 = r30.u32 & 0x1;
	// addi r7,r9,-13048
	ctx.r7.s64 = ctx.r9.s64 + -13048;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r7,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x8263d9a8
	if (cr6.eq) goto loc_8263D9A8;
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
loc_8263D9A8:
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

__attribute__((alias("__imp__sub_8263D9C0"))) PPC_WEAK_FUNC(sub_8263D9C0);
PPC_FUNC_IMPL(__imp__sub_8263D9C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263D9C4"))) PPC_WEAK_FUNC(sub_8263D9C4);
PPC_FUNC_IMPL(__imp__sub_8263D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263D9C8"))) PPC_WEAK_FUNC(sub_8263D9C8);
PPC_FUNC_IMPL(__imp__sub_8263D9C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f13,-12984(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12984);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r8,11800
	ctx.r5.s64 = ctx.r8.s64 + 11800;
	// sth r7,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r7.u16);
	// li r4,3
	ctx.r4.s64 = 3;
	// stb r6,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r6.u8);
	// lfs f0,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lfs f12,-12988(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12988);
	ctx.f12.f64 = double(temp.f32);
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DA18"))) PPC_WEAK_FUNC(sub_8263DA18);
PPC_FUNC_IMPL(__imp__sub_8263DA18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// fneg f0,f3
	ctx.fpscr.disableFlushMode();
	f0.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,11800
	ctx.r8.s64 = r11.s64 + 11800;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// li r7,3
	ctx.r7.s64 = 3;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f3,16(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r7,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r7.u8);
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f2,24(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
}

__attribute__((alias("__imp__sub_8263DA50"))) PPC_WEAK_FUNC(sub_8263DA50);
PPC_FUNC_IMPL(__imp__sub_8263DA50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DA54"))) PPC_WEAK_FUNC(sub_8263DA54);
PPC_FUNC_IMPL(__imp__sub_8263DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263DA58"))) PPC_WEAK_FUNC(sub_8263DA58);
PPC_FUNC_IMPL(__imp__sub_8263DA58) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r9,-13024
	ctx.r7.s64 = ctx.r9.s64 + -13024;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r8,-13004
	ctx.r4.s64 = ctx.r8.s64 + -13004;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// sth r5,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r5.u16);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r9,r11,11800
	ctx.r9.s64 = r11.s64 + 11800;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263DAF4"))) PPC_WEAK_FUNC(sub_8263DAF4);
PPC_FUNC_IMPL(__imp__sub_8263DAF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DAF8"))) PPC_WEAK_FUNC(sub_8263DAF8);
PPC_FUNC_IMPL(__imp__sub_8263DAF8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,11860
	ctx.r4.s64 = ctx.r10.s64 + 11860;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
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

__attribute__((alias("__imp__sub_8263DB4C"))) PPC_WEAK_FUNC(sub_8263DB4C);
PPC_FUNC_IMPL(__imp__sub_8263DB4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DB50"))) PPC_WEAK_FUNC(sub_8263DB50);
PPC_FUNC_IMPL(__imp__sub_8263DB50) {
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
	// addi r9,r11,11888
	ctx.r9.s64 = r11.s64 + 11888;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8263db84
	if (cr6.eq) goto loc_8263DB84;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8263DB84:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263DB94"))) PPC_WEAK_FUNC(sub_8263DB94);
PPC_FUNC_IMPL(__imp__sub_8263DB94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DB98"))) PPC_WEAK_FUNC(sub_8263DB98);
PPC_FUNC_IMPL(__imp__sub_8263DB98) {
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
	// addi r9,r11,11900
	ctx.r9.s64 = r11.s64 + 11900;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8263dbcc
	if (cr6.eq) goto loc_8263DBCC;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8263DBCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263DBDC"))) PPC_WEAK_FUNC(sub_8263DBDC);
PPC_FUNC_IMPL(__imp__sub_8263DBDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DBE0"))) PPC_WEAK_FUNC(sub_8263DBE0);
PPC_FUNC_IMPL(__imp__sub_8263DBE0) {
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
	// addi r9,r11,11916
	ctx.r9.s64 = r11.s64 + 11916;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8263dc14
	if (cr6.eq) goto loc_8263DC14;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8263DC14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263DC24"))) PPC_WEAK_FUNC(sub_8263DC24);
PPC_FUNC_IMPL(__imp__sub_8263DC24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DC28"))) PPC_WEAK_FUNC(sub_8263DC28);
PPC_FUNC_IMPL(__imp__sub_8263DC28) {
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
	// addi r9,r11,11928
	ctx.r9.s64 = r11.s64 + 11928;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8263dc5c
	if (cr6.eq) goto loc_8263DC5C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8263DC5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263DC6C"))) PPC_WEAK_FUNC(sub_8263DC6C);
PPC_FUNC_IMPL(__imp__sub_8263DC6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DC70"))) PPC_WEAK_FUNC(sub_8263DC70);
PPC_FUNC_IMPL(__imp__sub_8263DC70) {
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
	// addi r9,r11,11948
	ctx.r9.s64 = r11.s64 + 11948;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8263dca4
	if (cr6.eq) goto loc_8263DCA4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8263DCA4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263DCB4"))) PPC_WEAK_FUNC(sub_8263DCB4);
PPC_FUNC_IMPL(__imp__sub_8263DCB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DCB8"))) PPC_WEAK_FUNC(sub_8263DCB8);
PPC_FUNC_IMPL(__imp__sub_8263DCB8) {
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
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263dcf8
	if (cr6.eq) goto loc_8263DCF8;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263DCF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263DD08"))) PPC_WEAK_FUNC(sub_8263DD08);
PPC_FUNC_IMPL(__imp__sub_8263DD08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DD0C"))) PPC_WEAK_FUNC(sub_8263DD0C);
PPC_FUNC_IMPL(__imp__sub_8263DD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263DD10"))) PPC_WEAK_FUNC(sub_8263DD10);
PPC_FUNC_IMPL(__imp__sub_8263DD10) {
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
	// addi r9,r11,11980
	ctx.r9.s64 = r11.s64 + 11980;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8263dd44
	if (cr6.eq) goto loc_8263DD44;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8263DD44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263DD54"))) PPC_WEAK_FUNC(sub_8263DD54);
PPC_FUNC_IMPL(__imp__sub_8263DD54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DD58"))) PPC_WEAK_FUNC(sub_8263DD58);
PPC_FUNC_IMPL(__imp__sub_8263DD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,70
	r11.s64 = 70;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_8263DD60"))) PPC_WEAK_FUNC(sub_8263DD60);
PPC_FUNC_IMPL(__imp__sub_8263DD60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DD64"))) PPC_WEAK_FUNC(sub_8263DD64);
PPC_FUNC_IMPL(__imp__sub_8263DD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263DD68"))) PPC_WEAK_FUNC(sub_8263DD68);
PPC_FUNC_IMPL(__imp__sub_8263DD68) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// addi r4,r28,8
	ctx.r4.s64 = r28.s64 + 8;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,83
	ctx.r3.s64 = ctx.r1.s64 + 83;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8263de40
	if (cr6.eq) goto loc_8263DE40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263ddf0
	if (!cr6.eq) goto loc_8263DDF0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263DDF0:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8263debc
	if (!cr6.eq) goto loc_8263DEBC;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,81(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8263debc
	if (!cr6.eq) goto loc_8263DEBC;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x8263deac
	goto loc_8263DEAC;
loc_8263DE40:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263de60
	if (cr6.eq) goto loc_8263DE60;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263DE60:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8263debc
	if (!cr6.eq) goto loc_8263DEBC;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r4,r11,r31
	ctx.r4.u64 = r11.u64 + r31.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8263debc
	if (cr6.eq) goto loc_8263DEBC;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
loc_8263DEAC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263DEBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263DEC0"))) PPC_WEAK_FUNC(sub_8263DEC0);
PPC_FUNC_IMPL(__imp__sub_8263DEC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263DEC4"))) PPC_WEAK_FUNC(sub_8263DEC4);
PPC_FUNC_IMPL(__imp__sub_8263DEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263DEC8"))) PPC_WEAK_FUNC(sub_8263DEC8);
PPC_FUNC_IMPL(__imp__sub_8263DEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,16
	r11.s64 = 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DED8"))) PPC_WEAK_FUNC(sub_8263DED8);
PPC_FUNC_IMPL(__imp__sub_8263DED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_8263DEE0"))) PPC_WEAK_FUNC(sub_8263DEE0);
PPC_FUNC_IMPL(__imp__sub_8263DEE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DEE4"))) PPC_WEAK_FUNC(sub_8263DEE4);
PPC_FUNC_IMPL(__imp__sub_8263DEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263DEE8"))) PPC_WEAK_FUNC(sub_8263DEE8);
PPC_FUNC_IMPL(__imp__sub_8263DEE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f1,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
}

__attribute__((alias("__imp__sub_8263DEF0"))) PPC_WEAK_FUNC(sub_8263DEF0);
PPC_FUNC_IMPL(__imp__sub_8263DEF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263DEF4"))) PPC_WEAK_FUNC(sub_8263DEF4);
PPC_FUNC_IMPL(__imp__sub_8263DEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263DEF8"))) PPC_WEAK_FUNC(sub_8263DEF8);
PPC_FUNC_IMPL(__imp__sub_8263DEF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8265c150
	sub_8265C150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263DF00"))) PPC_WEAK_FUNC(sub_8263DF00);
PPC_FUNC_IMPL(__imp__sub_8263DF00) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8265c160
	sub_8265C160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263DF08"))) PPC_WEAK_FUNC(sub_8263DF08);
PPC_FUNC_IMPL(__imp__sub_8263DF08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8265c180
	sub_8265C180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263DF10"))) PPC_WEAK_FUNC(sub_8263DF10);
PPC_FUNC_IMPL(__imp__sub_8263DF10) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// lis r7,-32154
	ctx.r7.s64 = -2107244544;
	// addi r9,r10,-11536
	ctx.r9.s64 = ctx.r10.s64 + -11536;
	// li r11,0
	r11.s64 = 0;
	// addi r6,r8,4344
	ctx.r6.s64 = ctx.r8.s64 + 4344;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r7,5296
	ctx.r5.s64 = ctx.r7.s64 + 5296;
	// li r4,17
	ctx.r4.s64 = 17;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
loc_8263DF54:
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r7,r8,-6984
	ctx.r7.s64 = ctx.r8.s64 + -6984;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8263df54
	if (cr6.lt) goto loc_8263DF54;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x8263df88
	if (!cr6.lt) goto loc_8263DF88;
	// li r11,2
	r11.s64 = 2;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_8263DF88:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf84e8
	sub_82BF84E8(ctx, base);
	// ld r30,80(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r29,88(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7e30
	sub_82BF7E30(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7e30
	sub_82BF7E30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c56250
	sub_82C56250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c55e30
	sub_82C55E30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263DFE0"))) PPC_WEAK_FUNC(sub_8263DFE0);
PPC_FUNC_IMPL(__imp__sub_8263DFE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263DFE4"))) PPC_WEAK_FUNC(sub_8263DFE4);
PPC_FUNC_IMPL(__imp__sub_8263DFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263DFE8"))) PPC_WEAK_FUNC(sub_8263DFE8);
PPC_FUNC_IMPL(__imp__sub_8263DFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8263DFFC"))) PPC_WEAK_FUNC(sub_8263DFFC);
PPC_FUNC_IMPL(__imp__sub_8263DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E000"))) PPC_WEAK_FUNC(sub_8263E000);
PPC_FUNC_IMPL(__imp__sub_8263E000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8263E014"))) PPC_WEAK_FUNC(sub_8263E014);
PPC_FUNC_IMPL(__imp__sub_8263E014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E018"))) PPC_WEAK_FUNC(sub_8263E018);
PPC_FUNC_IMPL(__imp__sub_8263E018) {
	PPC_FUNC_PROLOGUE();
	// stb r5,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E020"))) PPC_WEAK_FUNC(sub_8263E020);
PPC_FUNC_IMPL(__imp__sub_8263E020) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E024"))) PPC_WEAK_FUNC(sub_8263E024);
PPC_FUNC_IMPL(__imp__sub_8263E024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E028"))) PPC_WEAK_FUNC(sub_8263E028);
PPC_FUNC_IMPL(__imp__sub_8263E028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E02C"))) PPC_WEAK_FUNC(sub_8263E02C);
PPC_FUNC_IMPL(__imp__sub_8263E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E030"))) PPC_WEAK_FUNC(sub_8263E030);
PPC_FUNC_IMPL(__imp__sub_8263E030) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E034"))) PPC_WEAK_FUNC(sub_8263E034);
PPC_FUNC_IMPL(__imp__sub_8263E034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E038"))) PPC_WEAK_FUNC(sub_8263E038);
PPC_FUNC_IMPL(__imp__sub_8263E038) {
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
	// lwz r3,444(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263e078
	if (cr6.eq) goto loc_8263E078;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 444);
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263E078:
	// stw r30,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8263e08c
	if (cr6.eq) goto loc_8263E08C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263E08C:
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

__attribute__((alias("__imp__sub_8263E0A0"))) PPC_WEAK_FUNC(sub_8263E0A0);
PPC_FUNC_IMPL(__imp__sub_8263E0A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E0A4"))) PPC_WEAK_FUNC(sub_8263E0A4);
PPC_FUNC_IMPL(__imp__sub_8263E0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E0A8"))) PPC_WEAK_FUNC(sub_8263E0A8);
PPC_FUNC_IMPL(__imp__sub_8263E0A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,444(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E0B0"))) PPC_WEAK_FUNC(sub_8263E0B0);
PPC_FUNC_IMPL(__imp__sub_8263E0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8263E0C0"))) PPC_WEAK_FUNC(sub_8263E0C0);
PPC_FUNC_IMPL(__imp__sub_8263E0C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8265b4c0
	sub_8265B4C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E0C4"))) PPC_WEAK_FUNC(sub_8263E0C4);
PPC_FUNC_IMPL(__imp__sub_8263E0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E0C8"))) PPC_WEAK_FUNC(sub_8263E0C8);
PPC_FUNC_IMPL(__imp__sub_8263E0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8263E0D8"))) PPC_WEAK_FUNC(sub_8263E0D8);
PPC_FUNC_IMPL(__imp__sub_8263E0D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8265b370
	sub_8265B370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E0DC"))) PPC_WEAK_FUNC(sub_8263E0DC);
PPC_FUNC_IMPL(__imp__sub_8263E0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E0E0"))) PPC_WEAK_FUNC(sub_8263E0E0);
PPC_FUNC_IMPL(__imp__sub_8263E0E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
}

__attribute__((alias("__imp__sub_8263E0E4"))) PPC_WEAK_FUNC(sub_8263E0E4);
PPC_FUNC_IMPL(__imp__sub_8263E0E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8265ae48
	sub_8265AE48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E0E8"))) PPC_WEAK_FUNC(sub_8263E0E8);
PPC_FUNC_IMPL(__imp__sub_8263E0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x8265ac80
	sub_8265AC80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E0F0"))) PPC_WEAK_FUNC(sub_8263E0F0);
PPC_FUNC_IMPL(__imp__sub_8263E0F0) {
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
	// bl 0x826284c0
	sub_826284C0(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263E124"))) PPC_WEAK_FUNC(sub_8263E124);
PPC_FUNC_IMPL(__imp__sub_8263E124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E128"))) PPC_WEAK_FUNC(sub_8263E128);
PPC_FUNC_IMPL(__imp__sub_8263E128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,188(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, r11.u32);
}

__attribute__((alias("__imp__sub_8263E134"))) PPC_WEAK_FUNC(sub_8263E134);
PPC_FUNC_IMPL(__imp__sub_8263E134) {
	PPC_FUNC_PROLOGUE();
	// b 0x82628520
	sub_82628520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E138"))) PPC_WEAK_FUNC(sub_8263E138);
PPC_FUNC_IMPL(__imp__sub_8263E138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E13C"))) PPC_WEAK_FUNC(sub_8263E13C);
PPC_FUNC_IMPL(__imp__sub_8263E13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E140"))) PPC_WEAK_FUNC(sub_8263E140);
PPC_FUNC_IMPL(__imp__sub_8263E140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E144"))) PPC_WEAK_FUNC(sub_8263E144);
PPC_FUNC_IMPL(__imp__sub_8263E144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E148"))) PPC_WEAK_FUNC(sub_8263E148);
PPC_FUNC_IMPL(__imp__sub_8263E148) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E150"))) PPC_WEAK_FUNC(sub_8263E150);
PPC_FUNC_IMPL(__imp__sub_8263E150) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8263E15C"))) PPC_WEAK_FUNC(sub_8263E15C);
PPC_FUNC_IMPL(__imp__sub_8263E15C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E160"))) PPC_WEAK_FUNC(sub_8263E160);
PPC_FUNC_IMPL(__imp__sub_8263E160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E164"))) PPC_WEAK_FUNC(sub_8263E164);
PPC_FUNC_IMPL(__imp__sub_8263E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E168"))) PPC_WEAK_FUNC(sub_8263E168);
PPC_FUNC_IMPL(__imp__sub_8263E168) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8263E174"))) PPC_WEAK_FUNC(sub_8263E174);
PPC_FUNC_IMPL(__imp__sub_8263E174) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E178"))) PPC_WEAK_FUNC(sub_8263E178);
PPC_FUNC_IMPL(__imp__sub_8263E178) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E17C"))) PPC_WEAK_FUNC(sub_8263E17C);
PPC_FUNC_IMPL(__imp__sub_8263E17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E180"))) PPC_WEAK_FUNC(sub_8263E180);
PPC_FUNC_IMPL(__imp__sub_8263E180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8263E18C"))) PPC_WEAK_FUNC(sub_8263E18C);
PPC_FUNC_IMPL(__imp__sub_8263E18C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E190"))) PPC_WEAK_FUNC(sub_8263E190);
PPC_FUNC_IMPL(__imp__sub_8263E190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E194"))) PPC_WEAK_FUNC(sub_8263E194);
PPC_FUNC_IMPL(__imp__sub_8263E194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E198"))) PPC_WEAK_FUNC(sub_8263E198);
PPC_FUNC_IMPL(__imp__sub_8263E198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// lwz r3,184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8263E1A4"))) PPC_WEAK_FUNC(sub_8263E1A4);
PPC_FUNC_IMPL(__imp__sub_8263E1A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8263E1A8"))) PPC_WEAK_FUNC(sub_8263E1A8);
PPC_FUNC_IMPL(__imp__sub_8263E1A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E1AC"))) PPC_WEAK_FUNC(sub_8263E1AC);
PPC_FUNC_IMPL(__imp__sub_8263E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E1B0"))) PPC_WEAK_FUNC(sub_8263E1B0);
PPC_FUNC_IMPL(__imp__sub_8263E1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8263E1D4"))) PPC_WEAK_FUNC(sub_8263E1D4);
PPC_FUNC_IMPL(__imp__sub_8263E1D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E1D8"))) PPC_WEAK_FUNC(sub_8263E1D8);
PPC_FUNC_IMPL(__imp__sub_8263E1D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8263E1EC"))) PPC_WEAK_FUNC(sub_8263E1EC);
PPC_FUNC_IMPL(__imp__sub_8263E1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E1F0"))) PPC_WEAK_FUNC(sub_8263E1F0);
PPC_FUNC_IMPL(__imp__sub_8263E1F0) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bne cr6,0x8263e234
	if (!cr6.eq) goto loc_8263E234;
	// bl 0x8262a218
	sub_8262A218(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x8262a218
	sub_8262A218(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8263E234:
	// bl 0x8262a208
	sub_8262A208(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x8262a208
	sub_8262A208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263E254"))) PPC_WEAK_FUNC(sub_8263E254);
PPC_FUNC_IMPL(__imp__sub_8263E254) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E258"))) PPC_WEAK_FUNC(sub_8263E258);
PPC_FUNC_IMPL(__imp__sub_8263E258) {
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
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x8262a238
	sub_8262A238(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8263E284"))) PPC_WEAK_FUNC(sub_8263E284);
PPC_FUNC_IMPL(__imp__sub_8263E284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E288"))) PPC_WEAK_FUNC(sub_8263E288);
PPC_FUNC_IMPL(__imp__sub_8263E288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r31,12
	r31.s64 = 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r31,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r31.u16);
	// bl 0x82662ce8
	sub_82662CE8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r31,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r31.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82662178
	sub_82662178(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r3,r5,12068
	ctx.r3.s64 = ctx.r5.s64 + 12068;
	// li r11,1
	r11.s64 = 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// addi r9,r4,11820
	ctx.r9.s64 = ctx.r4.s64 + 11820;
	// sth r11,6(r30)
	PPC_STORE_U16(r30.u32 + 6, r11.u16);
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r10,4(r30)
	PPC_STORE_U16(r30.u32 + 4, ctx.r10.u16);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// sth r11,14(r30)
	PPC_STORE_U16(r30.u32 + 14, r11.u16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r8,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82c56f08
	sub_82C56F08(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82c56f08
	sub_82C56F08(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c56f08
	sub_82C56F08(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263E398"))) PPC_WEAK_FUNC(sub_8263E398);
PPC_FUNC_IMPL(__imp__sub_8263E398) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263E39C"))) PPC_WEAK_FUNC(sub_8263E39C);
PPC_FUNC_IMPL(__imp__sub_8263E39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E3A0"))) PPC_WEAK_FUNC(sub_8263E3A0);
PPC_FUNC_IMPL(__imp__sub_8263E3A0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263e3e8
	if (cr6.eq) goto loc_8263E3E8;
	// li r11,19
	r11.s64 = 19;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_8263E3E8:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r28,r29,36
	r28.s64 = r29.s64 + 36;
	// addi r27,r30,36
	r27.s64 = r30.s64 + 36;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8263e490
	if (cr6.eq) goto loc_8263E490;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8263e490
	if (cr6.eq) goto loc_8263E490;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c586e8
	sub_82C586E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8263e490
	if (!cr6.eq) goto loc_8263E490;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x8263e480
	if (!cr6.eq) goto loc_8263E480;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8263E480:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82c55258
	sub_82C55258(ctx, base);
loc_8263E490:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8263E494"))) PPC_WEAK_FUNC(sub_8263E494);
PPC_FUNC_IMPL(__imp__sub_8263E494) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8263E498"))) PPC_WEAK_FUNC(sub_8263E498);
PPC_FUNC_IMPL(__imp__sub_8263E498) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263e4e4
	if (cr6.eq) goto loc_8263E4E4;
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8263E4E4:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,48(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8263E50C"))) PPC_WEAK_FUNC(sub_8263E50C);
PPC_FUNC_IMPL(__imp__sub_8263E50C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E510"))) PPC_WEAK_FUNC(sub_8263E510);
PPC_FUNC_IMPL(__imp__sub_8263E510) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263e55c
	if (cr6.eq) goto loc_8263E55C;
	// li r11,1
	r11.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_8263E55C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263afc8
	sub_8263AFC8(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8263e590
	if (!cr6.eq) goto loc_8263E590;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
loc_8263E590:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r30,240
	ctx.r5.s64 = r30.s64 + 240;
	// lfs f2,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82bf65a8
	sub_82BF65A8(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r29,234(r30)
	PPC_STORE_U16(r30.u32 + 234, r29.u16);
	// sth r29,236(r30)
	PPC_STORE_U16(r30.u32 + 236, r29.u16);
	// lwz r11,264(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r29,157(r31)
	PPC_STORE_U8(r31.u32 + 157, r29.u8);
	// stw r11,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r11.u32);
	// stw r11,212(r30)
	PPC_STORE_U32(r30.u32 + 212, r11.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264da40
	sub_8264DA40(ctx, base);
	// lbz r11,775(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 775);
	// lbz r10,233(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 233);
	// clrlwi r7,r11,30
	ctx.r7.u64 = r11.u32 & 0x3;
	// lbz r8,774(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 774);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// lbz r9,773(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 773);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x8263e600
	if (!cr6.lt) goto loc_8263E600;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
loc_8263E600:
	// rlwinm r9,r9,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8263e618
	if (!cr6.lt) goto loc_8263E618;
	// not r11,r8
	r11.u64 = ~ctx.r8.u64;
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// b 0x8263e61c
	goto loc_8263E61C;
loc_8263E618:
	// rlwinm r11,r8,14,0,17
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
loc_8263E61C:
	// lhz r10,234(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 234);
	// li r8,1
	ctx.r8.s64 = 1;
	// lhz r7,236(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 236);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi r6,r10,18
	ctx.r6.u64 = ctx.r10.u32 & 0x3FFF;
	// clrlwi r5,r7,18
	ctx.r5.u64 = ctx.r7.u32 & 0x3FFF;
	// or r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 | ctx.r9.u64;
	// or r11,r5,r11
	r11.u64 = ctx.r5.u64 | r11.u64;
	// sth r3,234(r30)
	PPC_STORE_U16(r30.u32 + 234, ctx.r3.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,236(r30)
	PPC_STORE_U16(r30.u32 + 236, r11.u16);
	// stb r8,157(r31)
	PPC_STORE_U8(r31.u32 + 157, ctx.r8.u8);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r7.u32);
	// bl 0x8264f590
	sub_8264F590(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658dc0
	sub_82658DC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826579e8
	sub_826579E8(ctx, base);
	// lwz r6,148(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8263e6c8
	if (!cr0.eq) goto loc_8263E6C8;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263e6c8
	if (!cr6.eq) goto loc_8263E6C8;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263e6a4
	if (cr6.eq) goto loc_8263E6A4;
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_8263E6A4:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8263e6c8
	if (!cr6.eq) goto loc_8263E6C8;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263e6c8
	if (cr6.eq) goto loc_8263E6C8;
	// stw r29,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r29.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_8263E6C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8263E6D0"))) PPC_WEAK_FUNC(sub_8263E6D0);
PPC_FUNC_IMPL(__imp__sub_8263E6D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263E6D4"))) PPC_WEAK_FUNC(sub_8263E6D4);
PPC_FUNC_IMPL(__imp__sub_8263E6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E6D8"))) PPC_WEAK_FUNC(sub_8263E6D8);
PPC_FUNC_IMPL(__imp__sub_8263E6D8) {
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
	// lwz r11,148(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263e728
	if (cr6.eq) goto loc_8263E728;
	// li r11,2
	r11.s64 = 2;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r10,0(r27)
	PPC_STORE_U8(r27.u32 + 0, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_8263E728:
	// li r29,1
	r29.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264f828
	sub_8264F828(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658e98
	sub_82658E98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82657ac0
	sub_82657AC0(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r28,157(r31)
	PPC_STORE_U8(r31.u32 + 157, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264db98
	sub_8264DB98(ctx, base);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263e778
	if (cr6.eq) goto loc_8263E778;
	// addi r3,r30,48
	ctx.r3.s64 = r30.s64 + 48;
	// bl 0x82c54b30
	sub_82C54B30(ctx, base);
loc_8263E778:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263e798
	if (!cr6.eq) goto loc_8263E798;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263E798:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// stb r29,157(r31)
	PPC_STORE_U8(r31.u32 + 157, r29.u8);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8263e7fc
	if (!cr0.eq) goto loc_8263E7FC;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8263e7fc
	if (!cr6.eq) goto loc_8263E7FC;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263e7d8
	if (cr6.eq) goto loc_8263E7D8;
	// stw r28,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r28.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_8263E7D8:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8263e7fc
	if (!cr6.eq) goto loc_8263E7FC;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263e7fc
	if (cr6.eq) goto loc_8263E7FC;
	// stw r28,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r28.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_8263E7FC:
	// stb r29,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r29.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8263E808"))) PPC_WEAK_FUNC(sub_8263E808);
PPC_FUNC_IMPL(__imp__sub_8263E808) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8263E80C"))) PPC_WEAK_FUNC(sub_8263E80C);
PPC_FUNC_IMPL(__imp__sub_8263E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263E810"))) PPC_WEAK_FUNC(sub_8263E810);
PPC_FUNC_IMPL(__imp__sub_8263E810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,292(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263e840
	if (!cr6.gt) goto loc_8263E840;
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
loc_8263E824:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263e844
	if (cr6.eq) goto loc_8263E844;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263e824
	if (cr6.lt) goto loc_8263E824;
loc_8263E840:
	// li r11,-1
	r11.s64 = -1;
loc_8263E844:
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E858"))) PPC_WEAK_FUNC(sub_8263E858);
PPC_FUNC_IMPL(__imp__sub_8263E858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,328(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263e888
	if (!cr6.gt) goto loc_8263E888;
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
loc_8263E86C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263e88c
	if (cr6.eq) goto loc_8263E88C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263e86c
	if (cr6.lt) goto loc_8263E86C;
loc_8263E888:
	// li r11,-1
	r11.s64 = -1;
loc_8263E88C:
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8263E89C"))) PPC_WEAK_FUNC(sub_8263E89C);
PPC_FUNC_IMPL(__imp__sub_8263E89C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E8A0"))) PPC_WEAK_FUNC(sub_8263E8A0);
PPC_FUNC_IMPL(__imp__sub_8263E8A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,304(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263e8d0
	if (!cr6.gt) goto loc_8263E8D0;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
loc_8263E8B4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263e8d4
	if (cr6.eq) goto loc_8263E8D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263e8b4
	if (cr6.lt) goto loc_8263E8B4;
loc_8263E8D0:
	// li r11,-1
	r11.s64 = -1;
loc_8263E8D4:
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8263E8E4"))) PPC_WEAK_FUNC(sub_8263E8E4);
PPC_FUNC_IMPL(__imp__sub_8263E8E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E8E8"))) PPC_WEAK_FUNC(sub_8263E8E8);
PPC_FUNC_IMPL(__imp__sub_8263E8E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,316(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263e918
	if (!cr6.gt) goto loc_8263E918;
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
loc_8263E8FC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263e91c
	if (cr6.eq) goto loc_8263E91C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263e8fc
	if (cr6.lt) goto loc_8263E8FC;
loc_8263E918:
	// li r11,-1
	r11.s64 = -1;
loc_8263E91C:
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8263E92C"))) PPC_WEAK_FUNC(sub_8263E92C);
PPC_FUNC_IMPL(__imp__sub_8263E92C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E930"))) PPC_WEAK_FUNC(sub_8263E930);
PPC_FUNC_IMPL(__imp__sub_8263E930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,352(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263e960
	if (!cr6.gt) goto loc_8263E960;
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
loc_8263E944:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263e964
	if (cr6.eq) goto loc_8263E964;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263e944
	if (cr6.lt) goto loc_8263E944;
loc_8263E960:
	// li r11,-1
	r11.s64 = -1;
loc_8263E964:
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8263E974"))) PPC_WEAK_FUNC(sub_8263E974);
PPC_FUNC_IMPL(__imp__sub_8263E974) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E978"))) PPC_WEAK_FUNC(sub_8263E978);
PPC_FUNC_IMPL(__imp__sub_8263E978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,388(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263e9a8
	if (!cr6.gt) goto loc_8263E9A8;
	// lwz r10,384(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
loc_8263E98C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263e9ac
	if (cr6.eq) goto loc_8263E9AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263e98c
	if (cr6.lt) goto loc_8263E98C;
loc_8263E9A8:
	// li r11,-1
	r11.s64 = -1;
loc_8263E9AC:
	// lwz r10,384(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263E9C0"))) PPC_WEAK_FUNC(sub_8263E9C0);
PPC_FUNC_IMPL(__imp__sub_8263E9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,364(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263e9f0
	if (!cr6.gt) goto loc_8263E9F0;
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
loc_8263E9D4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263e9f4
	if (cr6.eq) goto loc_8263E9F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263e9d4
	if (cr6.lt) goto loc_8263E9D4;
loc_8263E9F0:
	// li r11,-1
	r11.s64 = -1;
loc_8263E9F4:
	// lwz r10,360(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8263EA04"))) PPC_WEAK_FUNC(sub_8263EA04);
PPC_FUNC_IMPL(__imp__sub_8263EA04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263EA08"))) PPC_WEAK_FUNC(sub_8263EA08);
PPC_FUNC_IMPL(__imp__sub_8263EA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,376(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263ea38
	if (!cr6.gt) goto loc_8263EA38;
	// lwz r10,372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
loc_8263EA1C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263ea3c
	if (cr6.eq) goto loc_8263EA3C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263ea1c
	if (cr6.lt) goto loc_8263EA1C;
loc_8263EA38:
	// li r11,-1
	r11.s64 = -1;
loc_8263EA3C:
	// lwz r10,372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 372);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263EA50"))) PPC_WEAK_FUNC(sub_8263EA50);
PPC_FUNC_IMPL(__imp__sub_8263EA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,412(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263ea80
	if (!cr6.gt) goto loc_8263EA80;
	// lwz r10,408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
loc_8263EA64:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263ea84
	if (cr6.eq) goto loc_8263EA84;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263ea64
	if (cr6.lt) goto loc_8263EA64;
loc_8263EA80:
	// li r11,-1
	r11.s64 = -1;
loc_8263EA84:
	// lwz r10,408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 408);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263EA98"))) PPC_WEAK_FUNC(sub_8263EA98);
PPC_FUNC_IMPL(__imp__sub_8263EA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,400(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263eac8
	if (!cr6.gt) goto loc_8263EAC8;
	// lwz r10,396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
loc_8263EAAC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263eacc
	if (cr6.eq) goto loc_8263EACC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263eaac
	if (cr6.lt) goto loc_8263EAAC;
loc_8263EAC8:
	// li r11,-1
	r11.s64 = -1;
loc_8263EACC:
	// lwz r10,396(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263EAE0"))) PPC_WEAK_FUNC(sub_8263EAE0);
PPC_FUNC_IMPL(__imp__sub_8263EAE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,424(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263eb10
	if (!cr6.gt) goto loc_8263EB10;
	// lwz r10,420(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
loc_8263EAF4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263eb14
	if (cr6.eq) goto loc_8263EB14;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263eaf4
	if (cr6.lt) goto loc_8263EAF4;
loc_8263EB10:
	// li r11,-1
	r11.s64 = -1;
loc_8263EB14:
	// lwz r10,420(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263EB28"))) PPC_WEAK_FUNC(sub_8263EB28);
PPC_FUNC_IMPL(__imp__sub_8263EB28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,340(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263eb58
	if (!cr6.gt) goto loc_8263EB58;
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
loc_8263EB3C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263eb5c
	if (cr6.eq) goto loc_8263EB5C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263eb3c
	if (cr6.lt) goto loc_8263EB3C;
loc_8263EB58:
	// li r11,-1
	r11.s64 = -1;
loc_8263EB5C:
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8263EB6C"))) PPC_WEAK_FUNC(sub_8263EB6C);
PPC_FUNC_IMPL(__imp__sub_8263EB6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263EB70"))) PPC_WEAK_FUNC(sub_8263EB70);
PPC_FUNC_IMPL(__imp__sub_8263EB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,436(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8263eba0
	if (!cr6.gt) goto loc_8263EBA0;
	// lwz r10,432(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
loc_8263EB84:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x8263eba4
	if (cr6.eq) goto loc_8263EBA4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8263eb84
	if (cr6.lt) goto loc_8263EB84;
loc_8263EBA0:
	// li r11,-1
	r11.s64 = -1;
loc_8263EBA4:
	// lwz r10,432(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263EBB8"))) PPC_WEAK_FUNC(sub_8263EBB8);
PPC_FUNC_IMPL(__imp__sub_8263EBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x826284c0
	sub_826284C0(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// bl 0x826637d8
	sub_826637D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263ec54
	if (cr6.eq) goto loc_8263EC54;
	// lbz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// beq cr6,0x8263ec44
	if (cr6.eq) goto loc_8263EC44;
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8263ec54
	goto loc_8263EC54;
loc_8263EC44:
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263EC54:
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263EC80"))) PPC_WEAK_FUNC(sub_8263EC80);
PPC_FUNC_IMPL(__imp__sub_8263EC80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263EC84"))) PPC_WEAK_FUNC(sub_8263EC84);
PPC_FUNC_IMPL(__imp__sub_8263EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263EC88"))) PPC_WEAK_FUNC(sub_8263EC88);
PPC_FUNC_IMPL(__imp__sub_8263EC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x826284c0
	sub_826284C0(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r8.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8263ED00"))) PPC_WEAK_FUNC(sub_8263ED00);
PPC_FUNC_IMPL(__imp__sub_8263ED00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263ED04"))) PPC_WEAK_FUNC(sub_8263ED04);
PPC_FUNC_IMPL(__imp__sub_8263ED04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263ED08"))) PPC_WEAK_FUNC(sub_8263ED08);
PPC_FUNC_IMPL(__imp__sub_8263ED08) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826284c0
	sub_826284C0(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r8.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
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

__attribute__((alias("__imp__sub_8263ED70"))) PPC_WEAK_FUNC(sub_8263ED70);
PPC_FUNC_IMPL(__imp__sub_8263ED70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263ED74"))) PPC_WEAK_FUNC(sub_8263ED74);
PPC_FUNC_IMPL(__imp__sub_8263ED74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263ED78"))) PPC_WEAK_FUNC(sub_8263ED78);
PPC_FUNC_IMPL(__imp__sub_8263ED78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826284c0
	sub_826284C0(ctx, base);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r8,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r8.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
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

__attribute__((alias("__imp__sub_8263EDE0"))) PPC_WEAK_FUNC(sub_8263EDE0);
PPC_FUNC_IMPL(__imp__sub_8263EDE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263EDE4"))) PPC_WEAK_FUNC(sub_8263EDE4);
PPC_FUNC_IMPL(__imp__sub_8263EDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263EDE8"))) PPC_WEAK_FUNC(sub_8263EDE8);
PPC_FUNC_IMPL(__imp__sub_8263EDE8) {
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
	// bl 0x8265f230
	sub_8265F230(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8263ee64
	if (!cr6.eq) goto loc_8263EE64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263ee60
	if (cr6.eq) goto loc_8263EE60;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lbz r11,96(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x8263ee50
	if (cr6.eq) goto loc_8263EE50;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8263EE50:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263EE60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8263EE64:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8263EE68"))) PPC_WEAK_FUNC(sub_8263EE68);
PPC_FUNC_IMPL(__imp__sub_8263EE68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263EE6C"))) PPC_WEAK_FUNC(sub_8263EE6C);
PPC_FUNC_IMPL(__imp__sub_8263EE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263EE70"))) PPC_WEAK_FUNC(sub_8263EE70);
PPC_FUNC_IMPL(__imp__sub_8263EE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	r11.s64 = 16;
	// li r10,784
	ctx.r10.s64 = 784;
	// li r9,48
	ctx.r9.s64 = 48;
	// li r8,800
	ctx.r8.s64 = 800;
	// li r7,64
	ctx.r7.s64 = 64;
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + r11.u32) & ~0xF), VectorMaskL));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stvx128 v0,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,824(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 824);
	// stw r6,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// lvx128 v13,r3,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r4,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lvx128 v12,r3,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r4,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,120(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,84(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// lwz r29,124(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8263eed8
	if (cr6.eq) goto loc_8263EED8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263EED8:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263eee8
	if (cr6.eq) goto loc_8263EEE8;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263EEE8:
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// lwz r29,132(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8263ef00
	if (cr6.eq) goto loc_8263EF00;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263EF00:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263ef10
	if (cr6.eq) goto loc_8263EF10;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263EF10:
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// lwz r11,444(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263ef28
	if (cr6.eq) goto loc_8263EF28;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// b 0x8263ef2c
	goto loc_8263EF2C;
loc_8263EF28:
	// li r11,3
	r11.s64 = 3;
loc_8263EF2C:
	// stb r11,40(r31)
	PPC_STORE_U8(r31.u32 + 40, r11.u8);
	// lwz r11,444(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263ef44
	if (cr6.eq) goto loc_8263EF44;
	// addi r11,r11,52
	r11.s64 = r11.s64 + 52;
	// b 0x8263ef50
	goto loc_8263EF50;
loc_8263EF44:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
loc_8263EF50:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r11,41(r31)
	PPC_STORE_U8(r31.u32 + 41, r11.u8);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r8,80(r31)
	PPC_STORE_U8(r31.u32 + 80, ctx.r8.u8);
	// lbz r7,96(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 96);
	// stb r7,83(r31)
	PPC_STORE_U8(r31.u32 + 83, ctx.r7.u8);
	// lwz r6,128(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// lfs f0,7744(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7744);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// lwz r5,128(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// lfs f13,7748(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7748);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f12,204(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 204);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lfs f11,208(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,140(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 140, temp.u32);
	// lbz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 212);
	// stb r4,148(r31)
	PPC_STORE_U8(r31.u32 + 148, ctx.r4.u8);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263efb0
	if (cr6.eq) goto loc_8263EFB0;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263EFB0:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263efc0
	if (cr6.eq) goto loc_8263EFC0;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263EFC0:
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// lwz r10,816(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 816);
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// lwz r9,820(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 820);
	// stw r9,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// lbz r8,832(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 832);
	// stb r8,116(r31)
	PPC_STORE_U8(r31.u32 + 116, ctx.r8.u8);
	// lwz r7,120(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r6,109(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 109);
	// stb r6,117(r31)
	PPC_STORE_U8(r31.u32 + 117, ctx.r6.u8);
	// lfs f0,576(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 576);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f13,484(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f12,488(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 488);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,124(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 124, temp.u32);
	// lwz r5,756(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 756);
	// stw r5,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r5.u32);
	// lwz r4,760(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 760);
	// stw r4,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r4.u32);
	// lbz r3,772(r30)
	ctx.r3.u64 = PPC_LOAD_U8(r30.u32 + 772);
	// stb r3,136(r31)
	PPC_STORE_U8(r31.u32 + 136, ctx.r3.u8);
	// lbz r11,773(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 773);
	// stb r11,160(r31)
	PPC_STORE_U8(r31.u32 + 160, r11.u8);
	// lbz r10,774(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 774);
	// stb r10,161(r31)
	PPC_STORE_U8(r31.u32 + 161, ctx.r10.u8);
	// lbz r9,775(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 775);
	// stb r9,162(r31)
	PPC_STORE_U8(r31.u32 + 162, ctx.r9.u8);
	// lwz r8,120(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r7,112(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,152(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 152, temp.u32);
	// lwz r6,120(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r5,112(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 112);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lbz r11,108(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 108);
	// stb r11,149(r31)
	PPC_STORE_U8(r31.u32 + 149, r11.u8);
	// lbz r10,214(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 214);
	// stb r10,163(r31)
	PPC_STORE_U8(r31.u32 + 163, ctx.r10.u8);
	// lfs f10,220(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,168(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// lwz r9,224(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// stw r9,172(r31)
	PPC_STORE_U32(r31.u32 + 172, ctx.r9.u32);
	// lbz r8,228(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 228);
	// stb r8,176(r31)
	PPC_STORE_U8(r31.u32 + 176, ctx.r8.u8);
	// lwz r7,232(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// stw r7,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r7.u32);
	// lwz r6,236(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// stw r6,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r6.u32);
	// lfs f9,216(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 216);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,164(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 164, temp.u32);
	// lfs f8,244(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,188(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 188, temp.u32);
	// lfs f7,248(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,192(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f6,252(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 252);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,196(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 196, temp.u32);
	// lfs f5,256(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 256);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,200(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 200, temp.u32);
	// lbz r5,213(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 213);
	// stb r5,204(r31)
	PPC_STORE_U8(r31.u32 + 204, ctx.r5.u8);
	// lwz r4,240(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// stb r4,205(r31)
	PPC_STORE_U8(r31.u32 + 205, ctx.r4.u8);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lfs f4,36(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,216(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// lbz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 200);
	// stb r10,206(r31)
	PPC_STORE_U8(r31.u32 + 206, ctx.r10.u8);
	// lbz r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 176);
	// stb r9,212(r31)
	PPC_STORE_U8(r31.u32 + 212, ctx.r9.u8);
	// lwz r8,180(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// stw r8,208(r31)
	PPC_STORE_U32(r31.u32 + 208, ctx.r8.u32);
	// lwz r7,448(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 448);
	// addic r6,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r5,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r5,220(r31)
	PPC_STORE_U8(r31.u32 + 220, ctx.r5.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263F100"))) PPC_WEAK_FUNC(sub_8263F100);
PPC_FUNC_IMPL(__imp__sub_8263F100) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8263F104"))) PPC_WEAK_FUNC(sub_8263F104);
PPC_FUNC_IMPL(__imp__sub_8263F104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263F108"))) PPC_WEAK_FUNC(sub_8263F108);
PPC_FUNC_IMPL(__imp__sub_8263F108) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8263f134
	if (cr6.eq) goto loc_8263F134;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8263F134:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8263f144
	if (cr6.eq) goto loc_8263F144;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8263F144:
	// stw r31,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r31.u32);
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

