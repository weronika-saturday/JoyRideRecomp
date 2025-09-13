#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8260AC14"))) PPC_WEAK_FUNC(sub_8260AC14);
PPC_FUNC_IMPL(__imp__sub_8260AC14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AC18"))) PPC_WEAK_FUNC(sub_8260AC18);
PPC_FUNC_IMPL(__imp__sub_8260AC18) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260ab68
	sub_8260AB68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260AC18"))) PPC_WEAK_FUNC(sub_8260AC18);
PPC_FUNC_IMPL(__imp__sub_8260AC18) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8260AC1C"))) PPC_WEAK_FUNC(sub_8260AC1C);
PPC_FUNC_IMPL(__imp__sub_8260AC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AC20"))) PPC_WEAK_FUNC(sub_8260AC20);
PPC_FUNC_IMPL(__imp__sub_8260AC20) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8260AC20"))) PPC_WEAK_FUNC(sub_8260AC20);
PPC_FUNC_IMPL(__imp__sub_8260AC20) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260ab50
	sub_8260AB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260AC24"))) PPC_WEAK_FUNC(sub_8260AC24);
PPC_FUNC_IMPL(__imp__sub_8260AC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AC28"))) PPC_WEAK_FUNC(sub_8260AC28);
PPC_FUNC_IMPL(__imp__sub_8260AC28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x8260ac38
	if (!cr6.eq) goto loc_8260AC38;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8260AC38:
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	r11.s64 = r11.s64 * -10000;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
}

__attribute__((alias("__imp__sub_8260AC44"))) PPC_WEAK_FUNC(sub_8260AC44);
PPC_FUNC_IMPL(__imp__sub_8260AC44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AC48"))) PPC_WEAK_FUNC(sub_8260AC48);
PPC_FUNC_IMPL(__imp__sub_8260AC48) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,4(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260ac80
	if (cr0.eq) goto loc_8260AC80;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d55c
	__imp__RtlNtStatusToDosError(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// b 0x8260ac84
	goto loc_8260AC84;
loc_8260AC80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260AC84:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
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

__attribute__((alias("__imp__sub_8260ACA8"))) PPC_WEAK_FUNC(sub_8260ACA8);
PPC_FUNC_IMPL(__imp__sub_8260ACA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260ACAC"))) PPC_WEAK_FUNC(sub_8260ACAC);
PPC_FUNC_IMPL(__imp__sub_8260ACAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260ACB0"))) PPC_WEAK_FUNC(sub_8260ACB0);
PPC_FUNC_IMPL(__imp__sub_8260ACB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
}

__attribute__((alias("__imp__sub_8260ACCC"))) PPC_WEAK_FUNC(sub_8260ACCC);
PPC_FUNC_IMPL(__imp__sub_8260ACCC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// bl 0x8314d6dc
	__imp__ExTerminateThread(ctx, base);
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
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bl 0x8260f0f0
	sub_8260F0F0(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x8260ec30
	sub_8260EC30(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x8260e7a8
	sub_8260E7A8(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x8260e338
	sub_8260E338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r30.u32);
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

__attribute__((alias("__imp__sub_8260ACD0"))) PPC_WEAK_FUNC(sub_8260ACD0);
PPC_FUNC_IMPL(__imp__sub_8260ACD0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bl 0x8260f0f0
	sub_8260F0F0(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x8260ec30
	sub_8260EC30(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x8260e7a8
	sub_8260E7A8(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x8260e338
	sub_8260E338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r30.u32);
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r30.u32);
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

__attribute__((alias("__imp__sub_8260AD64"))) PPC_WEAK_FUNC(sub_8260AD64);
PPC_FUNC_IMPL(__imp__sub_8260AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AD68"))) PPC_WEAK_FUNC(sub_8260AD68);
PPC_FUNC_IMPL(__imp__sub_8260AD68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8260adec
	if (!cr0.eq) goto loc_8260ADEC;
	// lwz r11,40(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260adec
	if (cr0.eq) goto loc_8260ADEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8260add0
	if (!cr0.lt) goto loc_8260ADD0;
	// li r11,2048
	r11.s64 = 2048;
loc_8260ADD0:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and. r10,r11,r31
	ctx.r10.u64 = r11.u64 & r31.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8260ade4
	if (!cr0.eq) goto loc_8260ADE4;
	// and. r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260adec
	if (cr0.eq) goto loc_8260ADEC;
loc_8260ADE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8260adf0
	goto loc_8260ADF0;
loc_8260ADEC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8260ADF0:
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

__attribute__((alias("__imp__sub_8260AE04"))) PPC_WEAK_FUNC(sub_8260AE04);
PPC_FUNC_IMPL(__imp__sub_8260AE04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260AE08"))) PPC_WEAK_FUNC(sub_8260AE08);
PPC_FUNC_IMPL(__imp__sub_8260AE08) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r30,r4,56
	r30.s64 = ctx.r4.s64 + 56;
	// lwz r6,20(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,196
	ctx.r3.s64 = r29.s64 + 196;
	// bl 0x8260e840
	sub_8260E840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8260ae90
	if (cr0.eq) goto loc_8260AE90;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8314d61c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8260ae9c
	goto loc_8260AE9C;
loc_8260AE90:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8260AE9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8260AEAC"))) PPC_WEAK_FUNC(sub_8260AEAC);
PPC_FUNC_IMPL(__imp__sub_8260AEAC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8260AEB0"))) PPC_WEAK_FUNC(sub_8260AEB0);
PPC_FUNC_IMPL(__imp__sub_8260AEB0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8260aee8
	if (!cr0.eq) goto loc_8260AEE8;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,34
	ctx.r3.u64 = ctx.r3.u64 | 34;
	// b 0x8260af9c
	goto loc_8260AF9C;
loc_8260AEE8:
	// addi r3,r29,140
	ctx.r3.s64 = r29.s64 + 140;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8260f030
	sub_8260F030(ctx, base);
	// std r3,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r3.u64);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// bne cr6,0x8260af98
	if (!cr6.eq) goto loc_8260AF98;
	// li r11,-1
	r11.s64 = -1;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r31,56
	r30.s64 = r31.s64 + 56;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,196
	ctx.r3.s64 = r29.s64 + 196;
	// bl 0x8260e840
	sub_8260E840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8260af84
	if (cr0.eq) goto loc_8260AF84;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8314d61c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// b 0x8260af90
	goto loc_8260AF90;
loc_8260AF84:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8260AF90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8260AF98:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8260AF9C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8260AFA0"))) PPC_WEAK_FUNC(sub_8260AFA0);
PPC_FUNC_IMPL(__imp__sub_8260AFA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8260AFA4"))) PPC_WEAK_FUNC(sub_8260AFA4);
PPC_FUNC_IMPL(__imp__sub_8260AFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260AFA8"))) PPC_WEAK_FUNC(sub_8260AFA8);
PPC_FUNC_IMPL(__imp__sub_8260AFA8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8260afec
	if (cr6.eq) goto loc_8260AFEC;
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x8260aff4
	goto loc_8260AFF4;
loc_8260AFEC:
	// ld r11,48(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 48);
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_8260AFF4:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8260ad68
	sub_8260AD68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8260b018
	if (!cr0.eq) goto loc_8260B018;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x8260b258
	goto loc_8260B258;
loc_8260B018:
	// li r11,259
	r11.s64 = 259;
	// stw r31,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// li r11,-1
	r11.s64 = -1;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r24,1
	r24.s64 = 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r23.u32);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r25.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// rlwinm. r6,r6,0,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r31.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r31.u32);
	// bne 0x8260b08c
	if (!cr0.eq) goto loc_8260B08C;
	// stw r24,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r24.u32);
loc_8260B08C:
	// lwz r11,372(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8260b0a0
	if (!cr6.eq) goto loc_8260B0A0;
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// b 0x8260b0d8
	goto loc_8260B0D8;
loc_8260B0A0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8260b0d8
	if (cr6.eq) goto loc_8260B0D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8314d6ec
	__imp__MmLockAndMapSegmentArray(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8260b0d4
	if (!cr0.eq) goto loc_8260B0D4;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,154
	ctx.r3.u64 = ctx.r3.u64 | 154;
	// b 0x8260b258
	goto loc_8260B258;
loc_8260B0D4:
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r24.u32);
loc_8260B0D8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x8260b130
	if (!cr6.eq) goto loc_8260B130;
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8260b130
	if (cr0.eq) goto loc_8260B130;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// ld r27,48(r30)
	r27.u64 = PPC_LOAD_U64(r30.u32 + 48);
	// beq cr6,0x8260b124
	if (cr6.eq) goto loc_8260B124;
	// ld r11,0(r28)
	r11.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// b 0x8260b128
	goto loc_8260B128;
loc_8260B124:
	// std r27,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r27.u64);
loc_8260B128:
	// mr r29,r24
	r29.u64 = r24.u64;
	// b 0x8260b17c
	goto loc_8260B17C;
loc_8260B130:
	// ld r11,0(r28)
	r11.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, r11.u64);
	// beq cr6,0x8260b170
	if (cr6.eq) goto loc_8260B170;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// li r3,-2
	ctx.r3.s64 = -2;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260b258
	if (cr0.lt) goto loc_8260B258;
loc_8260B170:
	// mr r27,r31
	r27.u64 = r31.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r29,r31
	r29.u64 = r31.u64;
loc_8260B17C:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm. r11,r11,0,11,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8260b1a0
	if (!cr0.eq) goto loc_8260B1A0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8260b198
	if (!cr6.eq) goto loc_8260B198;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8260b1a0
	if (cr6.eq) goto loc_8260B1A0;
loc_8260B198:
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// b 0x8260b1ac
	goto loc_8260B1AC;
loc_8260B1A0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// bl 0x8314d4cc
	__imp__NtClearEvent(ctx, base);
loc_8260B1AC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x8260b1c4
	if (!cr6.eq) goto loc_8260B1C4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8260b1c4
	if (cr6.eq) goto loc_8260B1C4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8314d4cc
	__imp__NtClearEvent(ctx, base);
loc_8260B1C4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r22,196
	ctx.r3.s64 = r22.s64 + 196;
	// bl 0x8260e840
	sub_8260E840(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8260b22c
	if (cr6.eq) goto loc_8260B22C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8260b204
	if (cr6.eq) goto loc_8260B204;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8314d61c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// std r11,48(r30)
	PPC_STORE_U64(r30.u32 + 48, r11.u64);
	// b 0x8260b20c
	goto loc_8260B20C;
loc_8260B204:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
loc_8260B20C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// addi r3,r30,56
	ctx.r3.s64 = r30.s64 + 56;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8260b258
	goto loc_8260B258;
loc_8260B22C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8260b23c
	if (cr6.eq) goto loc_8260B23C;
	// li r3,259
	ctx.r3.s64 = 259;
	// b 0x8260b258
	goto loc_8260B258;
loc_8260B23C:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
loc_8260B258:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_8260B25C"))) PPC_WEAK_FUNC(sub_8260B25C);
PPC_FUNC_IMPL(__imp__sub_8260B25C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8260B260"))) PPC_WEAK_FUNC(sub_8260B260);
PPC_FUNC_IMPL(__imp__sub_8260B260) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r29,-16384
	r29.s64 = -1073741824;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ori r29,r29,1
	r29.u64 = r29.u64 | 1;
	// beq cr6,0x8260b2bc
	if (cr6.eq) goto loc_8260B2BC;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,-27156
	ctx.r3.s64 = ctx.r9.s64 + -27156;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8260B2BC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8260f580
	sub_8260F580(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260b2ec
	if (cr6.eq) goto loc_8260B2EC;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x8260b2ec
	if (cr6.lt) goto loc_8260B2EC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260B2EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260B2F4"))) PPC_WEAK_FUNC(sub_8260B2F4);
PPC_FUNC_IMPL(__imp__sub_8260B2F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8260B2F8"))) PPC_WEAK_FUNC(sub_8260B2F8);
PPC_FUNC_IMPL(__imp__sub_8260B2F8) {
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
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// beq cr6,0x8260b334
	if (cr6.eq) goto loc_8260B334;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8260b338
	goto loc_8260B338;
loc_8260B334:
	// lis r11,8
	r11.s64 = 524288;
loc_8260B338:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8260f118
	sub_8260F118(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r30,196
	ctx.r3.s64 = r30.s64 + 196;
	// lwz r28,32(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8260e7c0
	sub_8260E7C0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r30,268
	ctx.r3.s64 = r30.s64 + 268;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8260e380
	sub_8260E380(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8260aa50
	sub_8260AA50(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8260B394"))) PPC_WEAK_FUNC(sub_8260B394);
PPC_FUNC_IMPL(__imp__sub_8260B394) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8260B398"))) PPC_WEAK_FUNC(sub_8260B398);
PPC_FUNC_IMPL(__imp__sub_8260B398) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260b3e0
	if (cr6.eq) goto loc_8260B3E0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1540(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1540);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8260b3ec
	if (!cr0.eq) goto loc_8260B3EC;
loc_8260B3E0:
	// lis r31,-16384
	r31.s64 = -1073741824;
	// ori r31,r31,549
	r31.u64 = r31.u64 | 549;
	// b 0x8260b494
	goto loc_8260B494;
loc_8260B3EC:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-27136
	ctx.r3.s64 = r11.s64 + -27136;
	// bl 0x8314d6fc
	__imp__XexGetModuleHandle(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8260b494
	if (cr0.lt) goto loc_8260B494;
	// addi r5,r30,52
	ctx.r5.s64 = r30.s64 + 52;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,155
	ctx.r4.s64 = 155;
	// bl 0x8314d5cc
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8260b494
	if (cr0.lt) goto loc_8260B494;
	// addi r5,r30,56
	ctx.r5.s64 = r30.s64 + 56;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,156
	ctx.r4.s64 = 156;
	// bl 0x8314d5cc
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8260b494
	if (cr0.lt) goto loc_8260B494;
	// addi r5,r30,60
	ctx.r5.s64 = r30.s64 + 60;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,157
	ctx.r4.s64 = 157;
	// bl 0x8314d5cc
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8260b494
	if (cr0.lt) goto loc_8260B494;
	// addi r5,r30,64
	ctx.r5.s64 = r30.s64 + 64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,158
	ctx.r4.s64 = 158;
	// bl 0x8314d5cc
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8260b494
	if (cr0.lt) goto loc_8260B494;
	// addi r5,r30,68
	ctx.r5.s64 = r30.s64 + 68;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,159
	ctx.r4.s64 = 159;
	// bl 0x8314d5cc
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x8260b494
	if (cr0.lt) goto loc_8260B494;
	// addi r5,r30,72
	ctx.r5.s64 = r30.s64 + 72;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x8314d5cc
	__imp__XexGetProcedureAddress(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8260b4a4
	if (!cr0.lt) goto loc_8260B4A4;
loc_8260B494:
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_8260B4A4:
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

__attribute__((alias("__imp__sub_8260B4BC"))) PPC_WEAK_FUNC(sub_8260B4BC);
PPC_FUNC_IMPL(__imp__sub_8260B4BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260B4C0"))) PPC_WEAK_FUNC(sub_8260B4C0);
PPC_FUNC_IMPL(__imp__sub_8260B4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x828e9418
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lis r9,-32159
	ctx.r9.s64 = -2107572224;
	// lis r8,-32159
	ctx.r8.s64 = -2107572224;
	// addi r9,r9,816
	ctx.r9.s64 = ctx.r9.s64 + 816;
	// lis r7,-32159
	ctx.r7.s64 = -2107572224;
	// lis r6,-32159
	ctx.r6.s64 = -2107572224;
	// lwz r11,28316(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28316);
	// addi r8,r8,568
	ctx.r8.s64 = ctx.r8.s64 + 568;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lis r5,-32159
	ctx.r5.s64 = -2107572224;
	// addi r7,r7,368
	ctx.r7.s64 = ctx.r7.s64 + 368;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r9,r6,192
	ctx.r9.s64 = ctx.r6.s64 + 192;
	// lis r4,-32159
	ctx.r4.s64 = -2107572224;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lis r31,-32159
	r31.s64 = -2107572224;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r8,r5,-96
	ctx.r8.s64 = ctx.r5.s64 + -96;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r30,-32159
	r30.s64 = -2107572224;
	// addi r7,r4,-456
	ctx.r7.s64 = ctx.r4.s64 + -456;
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// addi r9,r31,-568
	ctx.r9.s64 = r31.s64 + -568;
	// lis r29,-32159
	r29.s64 = -2107572224;
	// stw r7,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// lis r28,-32159
	r28.s64 = -2107572224;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// lis r11,-32159
	r11.s64 = -2107572224;
	// addi r8,r30,-872
	ctx.r8.s64 = r30.s64 + -872;
	// addi r7,r29,-928
	ctx.r7.s64 = r29.s64 + -928;
	// addi r9,r28,-1856
	ctx.r9.s64 = r28.s64 + -1856;
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// addi r11,r11,-1992
	r11.s64 = r11.s64 + -1992;
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r3,28316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28316, ctx.r3.u32);
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8260B564"))) PPC_WEAK_FUNC(sub_8260B564);
PPC_FUNC_IMPL(__imp__sub_8260B564) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8260B568"))) PPC_WEAK_FUNC(sub_8260B568);
PPC_FUNC_IMPL(__imp__sub_8260B568) {
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
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8260b5a8
	if (cr6.eq) goto loc_8260B5A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,28316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28316, r11.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_8260B5A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8260B5B8"))) PPC_WEAK_FUNC(sub_8260B5B8);
PPC_FUNC_IMPL(__imp__sub_8260B5B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260B5BC"))) PPC_WEAK_FUNC(sub_8260B5BC);
PPC_FUNC_IMPL(__imp__sub_8260B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260B5C0"))) PPC_WEAK_FUNC(sub_8260B5C0);
PPC_FUNC_IMPL(__imp__sub_8260B5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm. r11,r10,26,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r10,r10,10,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3;
	// beq 0x8260b654
	if (cr0.eq) goto loc_8260B654;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260b654
	if (cr6.eq) goto loc_8260B654;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// mtctr r11
	ctr.u64 = r11.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r8,-27124
	ctx.r10.s64 = ctx.r8.s64 + -27124;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// subfic r11,r7,32
	xer.ca = ctx.r7.u32 <= 32;
	r11.s64 = 32 - ctx.r7.s64;
	// clrldi r6,r11,32
	ctx.r6.u64 = r11.u64 & 0xFFFFFFFF;
loc_8260B604:
	// mullw r11,r7,r9
	r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r4,r11,27
	ctx.r4.u64 = r11.u32 & 0x1F;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// subfic r11,r4,32
	xer.ca = ctx.r4.u32 <= 32;
	r11.s64 = 32 - ctx.r4.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r11,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srd r11,r31,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (r31.u64 >> (r11.u8 & 0x7F));
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// slw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// srd r11,r11,r6
	r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r6.u8 & 0x7F));
	// add r3,r11,r3
	ctx.r3.u64 = r11.u64 + ctx.r3.u64;
	// bdnz 0x8260b604
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260B604;
loc_8260B654:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8260B658"))) PPC_WEAK_FUNC(sub_8260B658);
PPC_FUNC_IMPL(__imp__sub_8260B658) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260B65C"))) PPC_WEAK_FUNC(sub_8260B65C);
PPC_FUNC_IMPL(__imp__sub_8260B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260B660"))) PPC_WEAK_FUNC(sub_8260B660);
PPC_FUNC_IMPL(__imp__sub_8260B660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,0,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFC0;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8260b6ac
	if (!cr0.eq) goto loc_8260B6AC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// b 0x8260b6b4
	goto loc_8260B6B4;
loc_8260B6AC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8260b5c0
	sub_8260B5C0(ctx, base);
loc_8260B6B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260B6C0"))) PPC_WEAK_FUNC(sub_8260B6C0);
PPC_FUNC_IMPL(__imp__sub_8260B6C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260B6C4"))) PPC_WEAK_FUNC(sub_8260B6C4);
PPC_FUNC_IMPL(__imp__sub_8260B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260B6C8"))) PPC_WEAK_FUNC(sub_8260B6C8);
PPC_FUNC_IMPL(__imp__sub_8260B6C8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// std r6,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r6.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// rlwinm. r6,r11,26,16,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xFFFF;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x8260b7bc
	if (!cr0.eq) goto loc_8260B7BC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// cmpd cr6,r11,r9
	cr6.compare<int64_t>(r11.s64, ctx.r9.s64, xer);
	// blt cr6,0x8260b744
	if (cr6.lt) goto loc_8260B744;
loc_8260B734:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x8260b900
	goto loc_8260B900;
loc_8260B744:
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r7,0
	ctx.r7.s64 = 0;
	// clrldi r10,r27,32
	ctx.r10.u64 = r27.u64 & 0xFFFFFFFF;
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// ori r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 32768;
	// rlwinm r8,r8,28,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x3;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// li r7,0
	ctx.r7.s64 = 0;
	// divdu r4,r11,r8
	ctx.r4.u64 = r11.u64 / ctx.r8.u64;
	// stw r7,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// divdu r3,r11,r8
	ctx.r3.u64 = r11.u64 / ctx.r8.u64;
	// mulld r7,r4,r8
	ctx.r7.s64 = ctx.r4.s64 * ctx.r8.s64;
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// subf r7,r7,r11
	ctx.r7.s64 = r11.s64 - ctx.r7.s64;
	// subf r11,r30,r9
	r11.s64 = ctx.r9.s64 - r30.s64;
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// tdllei r8,0
	if (ctx.r8.u64 <= 0) __builtin_debugtrap();
	// divdu r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 / ctx.r8.u64;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// stw r8,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// bge cr6,0x8260b7b0
	if (!cr6.lt) goto loc_8260B7B0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8260B7B0:
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x8260b918
	goto loc_8260B918;
loc_8260B7BC:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// rlwinm r4,r11,10,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x3;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// addi r29,r9,-27124
	r29.s64 = ctx.r9.s64 + -27124;
	// beq cr6,0x8260b848
	if (cr6.eq) goto loc_8260B848;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// subfic r5,r7,32
	xer.ca = ctx.r7.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r7.s64;
loc_8260B7F0:
	// mullw r9,r7,r11
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r31,r9,27
	r31.u64 = ctx.r9.u32 & 0x1F;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subfic r9,r31,32
	xer.ca = r31.u32 <= 32;
	ctx.r9.s64 = 32 - r31.s64;
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r28,4(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r9,r28,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r28.u32 >> (ctx.r9.u8 & 0x3F));
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// slw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r30
	cr6.compare<uint64_t>(ctx.r9.u64, r30.u64, xer);
	// bgt cr6,0x8260b848
	if (cr6.gt) goto loc_8260B848;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r30,r9,r30
	r30.s64 = r30.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// std r30,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, r30.u64);
	// blt cr6,0x8260b7f0
	if (cr6.lt) goto loc_8260B7F0;
loc_8260B848:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x8260b734
	if (cr6.eq) goto loc_8260B734;
	// lwz r9,268(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// blt cr6,0x8260b87c
	if (cr6.lt) goto loc_8260B87C;
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// b 0x8260b918
	goto loc_8260B918;
loc_8260B87C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r31,r27
	r31.u64 = r27.u64;
	// subf r8,r10,r27
	ctx.r8.s64 = r27.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x8260b8f0
	if (!cr6.lt) goto loc_8260B8F0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// subfic r4,r5,32
	xer.ca = ctx.r5.u32 <= 32;
	ctx.r4.s64 = 32 - ctx.r5.s64;
loc_8260B89C:
	// mullw r9,r5,r11
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r11.s32);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r30,r9,27
	r30.u64 = ctx.r9.u32 & 0x1F;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subfic r9,r30,32
	xer.ca = r30.u32 <= 32;
	ctx.r9.s64 = 32 - r30.s64;
	// rlwinm r7,r9,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r29,4(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r10,r10,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// srw r10,r10,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x8260b8ec
	if (!cr6.lt) goto loc_8260B8EC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x8260b89c
	if (cr6.lt) goto loc_8260B89C;
loc_8260B8EC:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
loc_8260B8F0:
	// bne cr6,0x8260b90c
	if (!cr6.eq) goto loc_8260B90C;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// subf r9,r8,r31
	ctx.r9.s64 = r31.s64 - ctx.r8.s64;
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
loc_8260B900:
	// lwz r11,316(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x8260b918
	goto loc_8260B918;
loc_8260B90C:
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
loc_8260B918:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8260B91C"))) PPC_WEAK_FUNC(sub_8260B91C);
PPC_FUNC_IMPL(__imp__sub_8260B91C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8260B920"))) PPC_WEAK_FUNC(sub_8260B920);
PPC_FUNC_IMPL(__imp__sub_8260B920) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r27,r3,196
	r27.s64 = ctx.r3.s64 + 196;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r23
	r26.u64 = r23.u64;
	// b 0x8260ba84
	goto loc_8260BA84;
loc_8260B950:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8260ba38
	if (!cr6.eq) goto loc_8260BA38;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8260b9a8
	if (!cr6.eq) goto loc_8260B9A8;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8260ba7c
	if (!cr6.eq) goto loc_8260BA7C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r3,r29,140
	ctx.r3.s64 = r29.s64 + 140;
	// bl 0x8260ee10
	sub_8260EE10(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8260ba34
	if (cr0.eq) goto loc_8260BA34;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8260b660
	sub_8260B660(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// std r3,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r3.u64);
	// b 0x8260ba7c
	goto loc_8260BA7C;
loc_8260B9A8:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8260ba38
	if (!cr6.eq) goto loc_8260BA38;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r30,r31,76
	r30.s64 = r31.s64 + 76;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8260ba7c
	if (cr6.eq) goto loc_8260BA7C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r3,r29,140
	ctx.r3.s64 = r29.s64 + 140;
	// bl 0x8260ee10
	sub_8260EE10(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x8260ba2c
	if (cr0.eq) goto loc_8260BA2C;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r22,r31,84
	r22.s64 = r31.s64 + 84;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r8,r31,72
	ctx.r8.s64 = r31.s64 + 72;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// ld r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// bl 0x8260b6c8
	sub_8260B6C8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8260ba7c
	if (cr6.eq) goto loc_8260BA7C;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// b 0x8260ba38
	goto loc_8260BA38;
loc_8260BA2C:
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8260BA34:
	// stw r23,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r23.u32);
loc_8260BA38:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8260bad4
	if (!cr6.eq) goto loc_8260BAD4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8260bad4
	if (!cr6.eq) goto loc_8260BAD4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8260ba7c
	if (!cr6.eq) goto loc_8260BA7C;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8260ba7c
	if (cr6.eq) goto loc_8260BA7C;
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x8260baa8
	if (cr6.gt) goto loc_8260BAA8;
loc_8260BA7C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8260BA84:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8260e9f8
	sub_8260E9F8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8260b950
	if (!cr0.eq) goto loc_8260B950;
	// li r11,-1
	r11.s64 = -1;
	// stw r23,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r23.u32);
loc_8260BA9C:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9450
	return;
loc_8260BAA8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8260ba9c
	goto loc_8260BA9C;
loc_8260BAD4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
}

__attribute__((alias("__imp__sub_8260BAEC"))) PPC_WEAK_FUNC(sub_8260BAEC);
PPC_FUNC_IMPL(__imp__sub_8260BAEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260bacc
	// ERROR 8260BACC
	return;
}

__attribute__((alias("__imp__sub_8260BAF0"))) PPC_WEAK_FUNC(sub_8260BAF0);
PPC_FUNC_IMPL(__imp__sub_8260BAF0) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r30,0
	r30.s64 = 0;
	// lis r27,-16384
	r27.s64 = -1073741824;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
	// beq cr6,0x8260bb5c
	if (cr6.eq) goto loc_8260BB5C;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r7,400(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r9,-27156
	ctx.r3.s64 = ctx.r9.s64 + -27156;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8260BB5C:
	// addi r29,r28,12
	r29.s64 = r28.s64 + 12;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b920
	sub_8260B920(ctx, base);
	// lwz r5,400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bl 0x8260e458
	sub_8260E458(ctx, base);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8260bc24
	if (!cr6.eq) goto loc_8260BC24;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8260bbcc
	if (!cr6.lt) goto loc_8260BBCC;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// b 0x8260bc24
	goto loc_8260BC24;
loc_8260BBCC:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lis r11,4085
	r11.s64 = 267714560;
	// ori r11,r11,4845
	r11.u64 = r11.u64 | 4845;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8260bc24
	if (!cr6.eq) goto loc_8260BC24;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lis r11,0
	r11.s64 = 0;
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r9,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3;
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8260bc24
	if (cr6.gt) goto loc_8260BC24;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8260ef08
	sub_8260EF08(ctx, base);
loc_8260BC24:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260bc48
	if (cr6.eq) goto loc_8260BC48;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x8260bc48
	if (cr6.lt) goto loc_8260BC48;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260BC48:
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8260BC58"))) PPC_WEAK_FUNC(sub_8260BC58);
PPC_FUNC_IMPL(__imp__sub_8260BC58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8260BC5C"))) PPC_WEAK_FUNC(sub_8260BC5C);
PPC_FUNC_IMPL(__imp__sub_8260BC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260BC60"))) PPC_WEAK_FUNC(sub_8260BC60);
PPC_FUNC_IMPL(__imp__sub_8260BC60) {
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
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// li r30,0
	r30.s64 = 0;
	// lis r27,-16384
	r27.s64 = -1073741824;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8260bd9c
	if (!cr6.eq) goto loc_8260BD9C;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260bcdc
	if (cr6.eq) goto loc_8260BCDC;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r7,400(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r3,r9,-27156
	ctx.r3.s64 = ctx.r9.s64 + -27156;
	// mtctr r11
	ctr.u64 = r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r30.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_8260BCDC:
	// stw r30,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r30.u32);
	// addi r29,r28,12
	r29.s64 = r28.s64 + 12;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b920
	sub_8260B920(ctx, base);
	// lwz r5,400(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// bl 0x8260e458
	sub_8260E458(ctx, base);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8260bd74
	if (!cr6.eq) goto loc_8260BD74;
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,0
	r11.s64 = 0;
	// lwz r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r9,r9,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3;
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8260bd5c
	if (cr6.gt) goto loc_8260BD5C;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x8260ef08
	sub_8260EF08(ctx, base);
loc_8260BD5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x8260b660
	sub_8260B660(ctx, base);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// std r3,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r3.u64);
loc_8260BD74:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260bd9c
	if (cr6.eq) goto loc_8260BD9C;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x8260bd9c
	if (cr6.lt) goto loc_8260BD9C;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260BD9C:
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8260BDA8"))) PPC_WEAK_FUNC(sub_8260BDA8);
PPC_FUNC_IMPL(__imp__sub_8260BDA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8260BDAC"))) PPC_WEAK_FUNC(sub_8260BDAC);
PPC_FUNC_IMPL(__imp__sub_8260BDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260BDB0"))) PPC_WEAK_FUNC(sub_8260BDB0);
PPC_FUNC_IMPL(__imp__sub_8260BDB0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	r16.s64 = 0;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r15,-16384
	r15.s64 = -1073741824;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r16.u32);
	// mr r26,r16
	r26.u64 = r16.u64;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// mr r25,r16
	r25.u64 = r16.u64;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r16.u32);
	// mr r14,r16
	r14.u64 = r16.u64;
	// li r30,-1
	r30.s64 = -1;
	// ori r15,r15,1
	r15.u64 = r15.u64 | 1;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8260be24
	if (!cr6.eq) goto loc_8260BE24;
	// lwz r11,76(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8260c344
	if (cr6.eq) goto loc_8260C344;
	// stw r16,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r16.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r30,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, r30.u32);
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8260ee10
	sub_8260EE10(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_8260BE24:
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r27,r31,76
	r27.s64 = r31.s64 + 76;
	// ori r21,r9,32768
	r21.u64 = ctx.r9.u64 | 32768;
	// addi r22,r11,-27156
	r22.s64 = r11.s64 + -27156;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x8260bfa4
	if (!cr6.eq) goto loc_8260BFA4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8260bf60
	if (!cr6.eq) goto loc_8260BF60;
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260be90
	if (cr6.eq) goto loc_8260BE90;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// stw r16,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r16.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r7,400(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 400);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r16,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r16.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
loc_8260BE90:
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r16.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r5,400(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 400);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r4,r31,12
	ctx.r4.s64 = r31.s64 + 12;
	// addi r3,r28,268
	ctx.r3.s64 = r28.s64 + 268;
	// bl 0x8260e458
	sub_8260E458(ctx, base);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8260bed4
	if (cr6.eq) goto loc_8260BED4;
	// mr r14,r11
	r14.u64 = r11.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// b 0x8260bf34
	goto loc_8260BF34;
loc_8260BED4:
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 400);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// slw r10,r21,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r10.u8 & 0x3F));
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x8260befc
	if (cr6.gt) goto loc_8260BEFC;
	// addi r3,r28,140
	ctx.r3.s64 = r28.s64 + 140;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8260ef08
	sub_8260EF08(ctx, base);
loc_8260BEFC:
	// lwz r26,8(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// rlwinm r10,r11,0,8,9
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC00000;
	// rlwinm r9,r11,26,16,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xFFFF;
	// subfic r11,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	r11.s64 = 0 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
loc_8260BF34:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260bf58
	if (cr6.eq) goto loc_8260BF58;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// blt cr6,0x8260bf58
	if (cr6.lt) goto loc_8260BF58;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260BF58:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// bne cr6,0x8260c34c
	if (!cr6.eq) goto loc_8260C34C;
loc_8260BF60:
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// ld r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r8,r31,72
	ctx.r8.s64 = r31.s64 + 72;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260b6c8
	sub_8260B6C8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8260c344
	if (cr6.eq) goto loc_8260C344;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_8260BFA4:
	// lwz r17,88(r31)
	r17.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x8260c32c
	if (cr6.eq) goto loc_8260C32C;
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r18,72(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// lwz r24,24(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r20,r16
	r20.u64 = r16.u64;
	// lwz r23,84(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r19,r16
	r19.u64 = r16.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260c040
	if (cr6.eq) goto loc_8260C040;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8260bff8
	if (!cr6.eq) goto loc_8260BFF8;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8260bffc
	if (!cr6.eq) goto loc_8260BFFC;
loc_8260BFF8:
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
loc_8260BFFC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8260c00c
	if (cr6.eq) goto loc_8260C00C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8260C00C:
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8260c01c
	if (cr0.eq) goto loc_8260C01C;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
loc_8260C01C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
loc_8260C040:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x8260c060
	if (!cr6.eq) goto loc_8260C060;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r3,r28,140
	ctx.r3.s64 = r28.s64 + 140;
	// bl 0x8260ee10
	sub_8260EE10(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x8260c080
	if (cr0.eq) goto loc_8260C080;
loc_8260C060:
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r10,28
	r11.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// addi r11,r11,15
	r11.s64 = r11.s64 + 15;
	// slw r25,r21,r10
	r25.u64 = ctx.r10.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r10.u8 & 0x3F));
	// slw r30,r9,r11
	r30.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// b 0x8260c084
	goto loc_8260C084;
loc_8260C080:
	// mr r25,r30
	r25.u64 = r30.u64;
loc_8260C084:
	// lwz r11,420(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 420);
	// mr r22,r25
	r22.u64 = r25.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bgt cr6,0x8260c2f4
	if (cr6.gt) goto loc_8260C2F4;
	// lwz r11,400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 400);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bgt cr6,0x8260c2f4
	if (cr6.gt) goto loc_8260C2F4;
	// lwz r11,372(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 372);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x8260c0f0
	if (cr6.eq) goto loc_8260C0F0;
	// lwz r11,420(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 420);
	// lwz r10,416(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 416);
	// lwz r9,424(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 424);
	// lwz r3,360(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 360);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r30.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// bl 0x8260ab00
	sub_8260AB00(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r7,368(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 368);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,364(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 364);
	// bl 0x8260aad0
	sub_8260AAD0(ctx, base);
	// stw r3,360(r28)
	PPC_STORE_U32(r28.u32 + 360, ctx.r3.u32);
	// stw r30,372(r28)
	PPC_STORE_U32(r28.u32 + 372, r30.u32);
loc_8260C0F0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addic r6,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r6.s64 = r11.s64 + -1;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// rlwinm r29,r10,10,30,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// bgt cr6,0x8260c2bc
	if (cr6.gt) goto loc_8260C2BC;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r26,r28,268
	r26.s64 = r28.s64 + 268;
	// addi r27,r10,-27124
	r27.s64 = ctx.r10.s64 + -27124;
loc_8260C150:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8260c168
	if (!cr6.lt) goto loc_8260C168;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// b 0x8260c188
	goto loc_8260C188;
loc_8260C168:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260b920
	sub_8260B920(ctx, base);
	// lwz r22,400(r28)
	r22.u64 = PPC_LOAD_U32(r28.u32 + 400);
	// lwz r20,60(r28)
	r20.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// lwz r19,64(r28)
	r19.u64 = PPC_LOAD_U32(r28.u32 + 64);
loc_8260C188:
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8260e458
	sub_8260E458(ctx, base);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8260c2a8
	if (!cr6.eq) goto loc_8260C2A8;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// subf r5,r11,r17
	ctx.r5.s64 = r17.s64 - r11.s64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// beq cr6,0x8260c24c
	if (cr6.eq) goto loc_8260C24C;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lwz r21,132(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,360(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 360);
	// lwzx r8,r8,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r27.u32);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - r11.s64;
	// mullw r10,r8,r21
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(r21.s32);
	// rlwinm r11,r10,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r23,r10,27
	r23.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// subfic r10,r23,32
	xer.ca = r23.u32 <= 32;
	ctx.r10.s64 = 32 - r23.s64;
	// subfic r21,r8,32
	xer.ca = ctx.r8.u32 <= 32;
	r21.s64 = 32 - ctx.r8.s64;
	// rlwinm r8,r10,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r14,4(r11)
	r14.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r10,r14,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r14.u32 >> (ctx.r10.u8 & 0x3F));
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// slw r11,r11,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (r11.u32 << (r23.u8 & 0x3F));
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// srw r8,r11,r21
	ctx.r8.u64 = r21.u8 & 0x20 ? 0 : (r11.u32 >> (r21.u8 & 0x3F));
	// bl 0x8260aac8
	sub_8260AAC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260c2b0
	if (cr0.lt) goto loc_8260C2B0;
	// lwz r14,120(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x8260c270
	goto loc_8260C270;
loc_8260C24C:
	// subf r11,r23,r25
	r11.s64 = r25.s64 - r23.s64;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x8260c260
	if (cr6.lt) goto loc_8260C260;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
loc_8260C260:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r4,r11,r23
	ctx.r4.u64 = r11.u64 + r23.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8260C270:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r23,r16
	r23.u64 = r16.u64;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r24,r10,r24
	r24.u64 = ctx.r10.u64 + r24.u64;
	// lwz r8,80(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// ble cr6,0x8260c150
	if (!cr6.gt) goto loc_8260C150;
	// b 0x8260c2bc
	goto loc_8260C2BC;
loc_8260C2A8:
	// mr r14,r10
	r14.u64 = ctx.r10.u64;
	// b 0x8260c2b8
	goto loc_8260C2B8;
loc_8260C2B0:
	// lis r14,-16384
	r14.s64 = -1073741824;
	// ori r14,r14,258
	r14.u64 = r14.u64 | 258;
loc_8260C2B8:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8260C2BC:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8260c2fc
	if (!cr6.lt) goto loc_8260C2FC;
	// stw r16,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r16.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r28,268
	ctx.r3.s64 = r28.s64 + 268;
	// bl 0x8260e458
	sub_8260E458(ctx, base);
	// b 0x8260c2fc
	goto loc_8260C2FC;
loc_8260C2F4:
	// lis r14,-16384
	r14.s64 = -1073741824;
	// ori r14,r14,13
	r14.u64 = r14.u64 | 13;
loc_8260C2FC:
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260c320
	if (cr6.eq) goto loc_8260C320;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// blt cr6,0x8260c320
	if (cr6.lt) goto loc_8260C320;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260C320:
	// lwz r25,100(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// bne cr6,0x8260c34c
	if (!cr6.eq) goto loc_8260C34C;
loc_8260C32C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8260c34c
	if (!cr6.lt) goto loc_8260C34C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260c34c
	if (cr6.eq) goto loc_8260C34C;
loc_8260C344:
	// lis r14,-16384
	r14.s64 = -1073741824;
	// ori r14,r14,17
	r14.u64 = r14.u64 | 17;
loc_8260C34C:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260c35c
	if (cr6.eq) goto loc_8260C35C;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
loc_8260C35C:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260c36c
	if (cr6.eq) goto loc_8260C36C;
	// stw r14,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r14.u32);
loc_8260C36C:
	// cmpwi cr6,r14,259
	cr6.compare<int32_t>(r14.s32, 259, xer);
	// bne cr6,0x8260c37c
	if (!cr6.eq) goto loc_8260C37C;
	// lis r14,-16384
	r14.s64 = -1073741824;
	// ori r14,r14,549
	r14.u64 = r14.u64 | 549;
loc_8260C37C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260c3e4
	if (cr6.eq) goto loc_8260C3E4;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// blt cr6,0x8260c39c
	if (cr6.lt) goto loc_8260C39C;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x8260c3a0
	goto loc_8260C3A0;
loc_8260C39C:
	// stw r14,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r14.u32);
loc_8260C3A0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r10,-21432
	ctx.r5.s64 = ctx.r10.s64 + -21432;
	// addi r4,r8,20288
	ctx.r4.s64 = ctx.r8.s64 + 20288;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8314d51c
	__imp__NtQueueApcThread(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8260c41c
	goto loc_8260C41C;
loc_8260C3E4:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8260c3f8
	if (cr6.eq) goto loc_8260C3F8;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8314d70c
	__imp__MmUnlockAndUnmapSegmentArray(ctx, base);
loc_8260C3F8:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r14,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r14.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260c41c
	if (cr6.eq) goto loc_8260C41C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8314d4bc
	__imp__NtSetEvent(ctx, base);
loc_8260C41C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260c430
	if (cr6.eq) goto loc_8260C430;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8314d4bc
	__imp__NtSetEvent(ctx, base);
loc_8260C430:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_8260C434"))) PPC_WEAK_FUNC(sub_8260C434);
PPC_FUNC_IMPL(__imp__sub_8260C434) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8260C438"))) PPC_WEAK_FUNC(sub_8260C438);
PPC_FUNC_IMPL(__imp__sub_8260C438) {
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
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// lwz r4,376(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 376);
	// bl 0x8260eb50
	sub_8260EB50(ctx, base);
	// lwz r3,376(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 376);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260c474
	if (cr6.eq) goto loc_8260C474;
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// stw r30,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r30.u32);
loc_8260C474:
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 360);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260c488
	if (cr6.eq) goto loc_8260C488;
	// bl 0x8260ab00
	sub_8260AB00(ctx, base);
	// stw r30,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r30.u32);
loc_8260C488:
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x8260e660
	sub_8260E660(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x8260ee78
	sub_8260EE78(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8260f488
	sub_8260F488(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b568
	sub_8260B568(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// stw r30,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8260c4dc
	if (cr6.eq) goto loc_8260C4DC;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r30,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(r31.u32 + 436, r30.u32);
loc_8260C4DC:
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

__attribute__((alias("__imp__sub_8260C4F0"))) PPC_WEAK_FUNC(sub_8260C4F0);
PPC_FUNC_IMPL(__imp__sub_8260C4F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260C4F4"))) PPC_WEAK_FUNC(sub_8260C4F4);
PPC_FUNC_IMPL(__imp__sub_8260C4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260C4F8"))) PPC_WEAK_FUNC(sub_8260C4F8);
PPC_FUNC_IMPL(__imp__sub_8260C4F8) {
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
	// bl 0x8260c438
	sub_8260C438(ctx, base);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// bl 0x8260e718
	sub_8260E718(ctx, base);
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x8260ec28
	sub_8260EC28(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x8260f0e8
	sub_8260F0E8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8260f830
	sub_8260F830(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8260C540"))) PPC_WEAK_FUNC(sub_8260C540);
PPC_FUNC_IMPL(__imp__sub_8260C540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260C544"))) PPC_WEAK_FUNC(sub_8260C544);
PPC_FUNC_IMPL(__imp__sub_8260C544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260C548"))) PPC_WEAK_FUNC(sub_8260C548);
PPC_FUNC_IMPL(__imp__sub_8260C548) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260c57c
	if (cr6.eq) goto loc_8260C57C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r3,r10,-27156
	ctx.r3.s64 = ctx.r10.s64 + -27156;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260C57C:
	// addi r30,r31,196
	r30.s64 = r31.s64 + 196;
	// b 0x8260c5dc
	goto loc_8260C5DC;
loc_8260C584:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8260c5bc
	if (cr6.lt) goto loc_8260C5BC;
	// beq cr6,0x8260c5ac
	if (cr6.eq) goto loc_8260C5AC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x8260c5c8
	if (!cr6.lt) goto loc_8260C5C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260bdb0
	sub_8260BDB0(ctx, base);
	// b 0x8260c5c8
	goto loc_8260C5C8;
loc_8260C5AC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260bc60
	sub_8260BC60(ctx, base);
	// b 0x8260c5c8
	goto loc_8260C5C8;
loc_8260C5BC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260baf0
	sub_8260BAF0(ctx, base);
loc_8260C5C8:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260c5dc
	if (cr6.eq) goto loc_8260C5DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8314d4bc
	__imp__NtSetEvent(ctx, base);
loc_8260C5DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260e928
	sub_8260E928(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8260c584
	if (!cr0.eq) goto loc_8260C584;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260c608
	if (cr6.eq) goto loc_8260C608;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260C608:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8260C620"))) PPC_WEAK_FUNC(sub_8260C620);
PPC_FUNC_IMPL(__imp__sub_8260C620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260C624"))) PPC_WEAK_FUNC(sub_8260C624);
PPC_FUNC_IMPL(__imp__sub_8260C624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260C628"))) PPC_WEAK_FUNC(sub_8260C628);
PPC_FUNC_IMPL(__imp__sub_8260C628) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260c548
	sub_8260C548(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260C628"))) PPC_WEAK_FUNC(sub_8260C628);
PPC_FUNC_IMPL(__imp__sub_8260C628) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8260C62C"))) PPC_WEAK_FUNC(sub_8260C62C);
PPC_FUNC_IMPL(__imp__sub_8260C62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260C630"))) PPC_WEAK_FUNC(sub_8260C630);
PPC_FUNC_IMPL(__imp__sub_8260C630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r30,r3,380
	r30.s64 = ctx.r3.s64 + 380;
	// bne cr6,0x8260c690
	if (!cr6.eq) goto loc_8260C690;
	// li r11,4
	r11.s64 = 4;
	// stw r20,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, r20.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r20,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, r20.u32);
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// stw r20,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, r20.u32);
	// li r11,16
	r11.s64 = 16;
	// stw r20,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, r20.u32);
	// stw r10,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, ctx.r10.u32);
	// stw r9,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, ctx.r9.u32);
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, r11.u32);
	// stw r8,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, ctx.r8.u32);
	// b 0x8260c69c
	goto loc_8260C69C;
loc_8260C690:
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8260C69C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r19,1
	r19.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8260c6b0
	if (!cr6.eq) goto loc_8260C6B0;
	// stw r19,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r19.u32);
loc_8260C6B0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r21,428(r31)
	PPC_STORE_U32(r31.u32 + 428, r21.u32);
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260c6e0
	if (cr6.eq) goto loc_8260C6E0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,126
	ctx.r3.s64 = 126;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8260c6e4
	goto loc_8260C6E4;
loc_8260C6E0:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_8260C6E4:
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x8260c6fc
	if (cr6.eq) goto loc_8260C6FC;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r11,-13636(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13636);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8260c700
	if (cr6.eq) goto loc_8260C700;
loc_8260C6FC:
	// stw r19,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r19.u32);
loc_8260C700:
	// lwz r4,384(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 384);
	// addi r30,r31,416
	r30.s64 = r31.s64 + 416;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8260c720
	if (cr6.eq) goto loc_8260C720;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// b 0x8260c734
	goto loc_8260C734;
loc_8260C720:
	// stw r20,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r20.u32);
	// lis r11,8
	r11.s64 = 524288;
	// stw r20,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r20.u32);
	// stw r20,424(r31)
	PPC_STORE_U32(r31.u32 + 424, r20.u32);
	// stw r11,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r11.u32);
loc_8260C734:
	// stw r30,384(r31)
	PPC_STORE_U32(r31.u32 + 384, r30.u32);
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// lwz r4,408(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 408);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260f118
	sub_8260F118(ctx, base);
	// addi r27,r31,196
	r27.s64 = r31.s64 + 196;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r26,412(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 412);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// bl 0x8260e7c0
	sub_8260E7C0(ctx, base);
	// addi r25,r31,268
	r25.s64 = r31.s64 + 268;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8260e380
	sub_8260E380(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8260aa50
	sub_8260AA50(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r5,408(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 408);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260f128
	sub_8260F128(ctx, base);
	// add r29,r28,r21
	r29.u64 = r28.u64 + r21.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r7,400(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x8260ec50
	sub_8260EC50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8260c7d8
	if (!cr0.lt) goto loc_8260C7D8;
loc_8260C7C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260c438
	sub_8260C438(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8260c920
	goto loc_8260C920;
loc_8260C7D8:
	// add r29,r26,r29
	r29.u64 = r26.u64 + r29.u64;
	// lwz r4,404(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 404);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8260e7c8
	sub_8260E7C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260c7c8
	if (cr0.lt) goto loc_8260C7C8;
	// add r29,r24,r29
	r29.u64 = r24.u64 + r29.u64;
	// lwz r7,400(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 400);
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8260e720
	sub_8260E720(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260c7c8
	if (cr0.lt) goto loc_8260C7C8;
	// add r29,r23,r29
	r29.u64 = r23.u64 + r29.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8260aad0
	sub_8260AAD0(ctx, base);
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// stw r3,360(r31)
	PPC_STORE_U32(r31.u32 + 360, ctx.r3.u32);
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// stw r29,364(r31)
	PPC_STORE_U32(r31.u32 + 364, r29.u32);
	// mr r9,r19
	ctx.r9.u64 = r19.u64;
	// stw r22,368(r31)
	PPC_STORE_U32(r31.u32 + 368, r22.u32);
	// addi r30,r31,376
	r30.s64 = r31.s64 + 376;
	// lwz r7,392(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// lis r6,-32159
	ctx.r6.s64 = -2107572224;
	// stw r11,372(r31)
	PPC_STORE_U32(r31.u32 + 372, r11.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// slw r11,r19,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r7.u8 & 0x3F));
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// addi r7,r10,-14808
	ctx.r7.s64 = ctx.r10.s64 + -14808;
	// addi r6,r6,-21328
	ctx.r6.s64 = ctx.r6.s64 + -21328;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d72c
	__imp__ExCreateThread(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260c7c8
	if (cr0.lt) goto loc_8260C7C8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1732(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1732);
	// bl 0x8314d41c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8260c8bc
	if (!cr0.lt) goto loc_8260C8BC;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_8260C8AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260c438
	sub_8260C438(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8260c920
	goto loc_8260C920;
loc_8260C8BC:
	// lwz r4,396(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 396);
	// cmpwi cr6,r4,15
	cr6.compare<int32_t>(ctx.r4.s32, 15, xer);
	// bne cr6,0x8260c8d0
	if (!cr6.eq) goto loc_8260C8D0;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x8260c8dc
	goto loc_8260C8DC;
loc_8260C8D0:
	// cmpwi cr6,r4,-15
	cr6.compare<int32_t>(ctx.r4.s32, -15, xer);
	// bne cr6,0x8260c8dc
	if (!cr6.eq) goto loc_8260C8DC;
	// li r4,-16
	ctx.r4.s64 = -16;
loc_8260C8DC:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d40c
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d3fc
	__imp__ObDereferenceObject(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8314d71c
	__imp__NtResumeThread(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8260c908
	if (!cr0.lt) goto loc_8260C908;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8260c8ac
	goto loc_8260C8AC;
loc_8260C908:
	// stw r19,432(r31)
	PPC_STORE_U32(r31.u32 + 432, r19.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b398
	sub_8260B398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260b4c0
	sub_8260B4C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8260C920:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8260C924"))) PPC_WEAK_FUNC(sub_8260C924);
PPC_FUNC_IMPL(__imp__sub_8260C924) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8260C928"))) PPC_WEAK_FUNC(sub_8260C928);
PPC_FUNC_IMPL(__imp__sub_8260C928) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8260c980
	if (!cr6.eq) goto loc_8260C980;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	r11.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x8260c998
	goto loc_8260C998;
loc_8260C980:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8260c99c
	if (!cr6.eq) goto loc_8260C99C;
loc_8260C998:
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_8260C99C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260b2f8
	sub_8260B2F8(ctx, base);
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8241a3f0
	sub_8241A3F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8260c9c8
	if (!cr0.eq) goto loc_8260C9C8;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x8260c9fc
	goto loc_8260C9FC;
loc_8260C9C8:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260c630
	sub_8260C630(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8260c9f4
	if (!cr0.lt) goto loc_8260C9F4;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// b 0x8260c9f8
	goto loc_8260C9F8;
loc_8260C9F4:
	// stw r28,436(r29)
	PPC_STORE_U32(r29.u32 + 436, r28.u32);
loc_8260C9F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8260C9FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8260CA00"))) PPC_WEAK_FUNC(sub_8260CA00);
PPC_FUNC_IMPL(__imp__sub_8260CA00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8260CA04"))) PPC_WEAK_FUNC(sub_8260CA04);
PPC_FUNC_IMPL(__imp__sub_8260CA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260CA08"))) PPC_WEAK_FUNC(sub_8260CA08);
PPC_FUNC_IMPL(__imp__sub_8260CA08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x8260ac28
	sub_8260AC28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
loc_8260CA2C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8314d61c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260ca5c
	if (cr0.lt) goto loc_8260CA5C;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8260ca64
	if (cr6.eq) goto loc_8260CA64;
	// cmpwi cr6,r3,257
	cr6.compare<int32_t>(ctx.r3.s32, 257, xer);
	// beq cr6,0x8260ca2c
	if (cr6.eq) goto loc_8260CA2C;
	// b 0x8260ca64
	goto loc_8260CA64;
loc_8260CA5C:
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8260CA64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260CA68"))) PPC_WEAK_FUNC(sub_8260CA68);
PPC_FUNC_IMPL(__imp__sub_8260CA68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8260CA6C"))) PPC_WEAK_FUNC(sub_8260CA6C);
PPC_FUNC_IMPL(__imp__sub_8260CA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260CA70"))) PPC_WEAK_FUNC(sub_8260CA70);
PPC_FUNC_IMPL(__imp__sub_8260CA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	uint32_t ea{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	r11.s64 = 96;
	// li r12,112
	r12.s64 = 112;
	// cmplwi cr6,r5,1024
	cr6.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// blt cr6,0x8260cd38
	if (cr6.lt) goto loc_8260CD38;
loc_8260CA94:
	// addi r0,r5,-1024
	r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	cr6.compare<uint32_t>(r0.u32, 1024, xer);
	// blt cr6,0x8260caa4
	if (cr6.lt) goto loc_8260CAA4;
	// li r0,1024
	r0.s64 = 1024;
loc_8260CAA4:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r6,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r7,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r10,r4
	simd::store_shuffled(v14, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v15,r11,r4
	simd::store_shuffled(v15, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v16,r12,r4
	simd::store_shuffled(v16, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v18,r6,r4
	simd::store_shuffled(v18, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v19,r7,r4
	simd::store_shuffled(v19, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r8,r4
	simd::store_shuffled(v20, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r9,r4
	simd::store_shuffled(v21, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r10,r4
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r11,r4
	simd::store_shuffled(v23, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r12,r4
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r6,r4
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v27,r7,r4
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r8,r4
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r9,r4
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r10,r4
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r11,r4
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r12,r4
	simd::store_shuffled(v32, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	simd::store_shuffled(v33, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r6,r4
	simd::store_shuffled(v34, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r7,r4
	simd::store_shuffled(v35, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r8,r4
	simd::store_shuffled(v36, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r9,r4
	simd::store_shuffled(v37, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r10,r4
	simd::store_shuffled(v38, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v39,r11,r4
	simd::store_shuffled(v39, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r12,r4
	simd::store_shuffled(v40, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	simd::store_shuffled(v41, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r6,r4
	simd::store_shuffled(v42, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r7,r4
	simd::store_shuffled(v43, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r8,r4
	simd::store_shuffled(v44, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r9,r4
	simd::store_shuffled(v45, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r10,r4
	simd::store_shuffled(v46, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r11,r4
	simd::store_shuffled(v47, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r12,r4
	simd::store_shuffled(v48, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	simd::store_shuffled(v49, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r6,r4
	simd::store_shuffled(v50, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r7,r4
	simd::store_shuffled(v51, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r8,r4
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r9,r4
	simd::store_shuffled(v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r10,r4
	simd::store_shuffled(v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r11,r4
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r12,r4
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r6,r4
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r7,r4
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r8,r4
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r9,r4
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r10,r4
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r4
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r12,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v16.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v24.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v32.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v40.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v48.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v56.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	cr6.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// bge cr6,0x8260ca94
	if (!cr6.lt) goto loc_8260CA94;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8260CD38:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bgt cr6,0x8260cd38
	if (cr6.gt) goto loc_8260CD38;
}

__attribute__((alias("__imp__sub_8260CD90"))) PPC_WEAK_FUNC(sub_8260CD90);
PPC_FUNC_IMPL(__imp__sub_8260CD90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260CD94"))) PPC_WEAK_FUNC(sub_8260CD94);
PPC_FUNC_IMPL(__imp__sub_8260CD94) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// stvlx128 v64,r1,r6
	ea = ctx.r1.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v64.u8[15 - i]);
	// stvlx128 v65,r1,r7
	ea = ctx.r1.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v65.u8[15 - i]);
	// li r0,0
	r0.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	r11.s64 = 96;
	// li r12,112
	r12.s64 = 112;
	// dcbt r4,r0
	// lvx128 v65,r0,r4
	simd::store_shuffled(v65, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r5,1024
	cr6.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// blt cr6,0x8260d1c8
	if (cr6.lt) goto loc_8260D1C8;
	// li r0,128
	r0.s64 = 128;
	// dcbt r4,r0
	// li r0,256
	r0.s64 = 256;
	// dcbt r4,r0
	// li r0,384
	r0.s64 = 384;
	// dcbt r4,r0
	// li r0,512
	r0.s64 = 512;
	// dcbt r4,r0
	// li r0,640
	r0.s64 = 640;
	// dcbt r4,r0
	// li r0,768
	r0.s64 = 768;
	// dcbt r4,r0
	// li r0,896
	r0.s64 = 896;
	// dcbt r4,r0
loc_8260CE1C:
	// addi r0,r5,-1024
	r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	cr6.compare<uint32_t>(r0.u32, 1024, xer);
	// blt cr6,0x8260ce2c
	if (cr6.lt) goto loc_8260CE2C;
	// li r0,1024
	r0.s64 = 1024;
loc_8260CE2C:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r6,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r7,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r10,r4
	simd::store_shuffled(v14, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v15,r11,r4
	simd::store_shuffled(v15, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v16,r12,r4
	simd::store_shuffled(v16, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v18,r6,r4
	simd::store_shuffled(v18, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v19,r7,r4
	simd::store_shuffled(v19, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r8,r4
	simd::store_shuffled(v20, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r9,r4
	simd::store_shuffled(v21, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r10,r4
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r11,r4
	simd::store_shuffled(v23, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r12,r4
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r6,r4
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v27,r7,r4
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r8,r4
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r9,r4
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r10,r4
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r11,r4
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r12,r4
	simd::store_shuffled(v32, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	simd::store_shuffled(v33, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r6,r4
	simd::store_shuffled(v34, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r7,r4
	simd::store_shuffled(v35, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r8,r4
	simd::store_shuffled(v36, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r9,r4
	simd::store_shuffled(v37, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r10,r4
	simd::store_shuffled(v38, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v39,r11,r4
	simd::store_shuffled(v39, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r12,r4
	simd::store_shuffled(v40, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	simd::store_shuffled(v41, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r6,r4
	simd::store_shuffled(v42, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r7,r4
	simd::store_shuffled(v43, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r8,r4
	simd::store_shuffled(v44, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r9,r4
	simd::store_shuffled(v45, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r10,r4
	simd::store_shuffled(v46, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r11,r4
	simd::store_shuffled(v47, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r12,r4
	simd::store_shuffled(v48, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	simd::store_shuffled(v49, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r6,r4
	simd::store_shuffled(v50, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r7,r4
	simd::store_shuffled(v51, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r8,r4
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r9,r4
	simd::store_shuffled(v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r10,r4
	simd::store_shuffled(v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r11,r4
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r12,r4
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r6,r4
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r7,r4
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r8,r4
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r9,r4
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r10,r4
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r4
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v64,r12,r4
	simd::store_shuffled(v64, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v8,v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v9,v9,v10,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v10,v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v11,v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v12,v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v13,v13,v14,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v14.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v14,v14,v15,v0
	_mm_store_si128((__m128i*)v14.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v14.u8), _mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v15,v15,v16,v0
	_mm_store_si128((__m128i*)v15.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v8,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvlx128 v9,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v14.u8[15 - i]);
	// stvlx128 v15,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v15.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v16,v16,v17,v0
	_mm_store_si128((__m128i*)v16.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v17,v17,v18,v0
	_mm_store_si128((__m128i*)v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v18,v18,v19,v0
	_mm_store_si128((__m128i*)v18.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v19,v19,v20,v0
	_mm_store_si128((__m128i*)v19.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v20,v20,v21,v0
	_mm_store_si128((__m128i*)v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v21,v21,v22,v0
	_mm_store_si128((__m128i*)v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v22,v22,v23,v0
	_mm_store_si128((__m128i*)v22.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v23,v23,v24,v0
	_mm_store_si128((__m128i*)v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v16,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v16.u8[15 - i]);
	// stvlx128 v17,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvlx128 v18,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v18.u8[15 - i]);
	// stvlx128 v19,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v19.u8[15 - i]);
	// stvlx128 v20,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v20.u8[15 - i]);
	// stvlx128 v21,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v21.u8[15 - i]);
	// stvlx128 v22,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v22.u8[15 - i]);
	// stvlx128 v23,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v23.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v24,v24,v25,v0
	_mm_store_si128((__m128i*)v24.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v25,v25,v26,v0
	_mm_store_si128((__m128i*)v25.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v26,v26,v27,v0
	_mm_store_si128((__m128i*)v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v27,v27,v28,v0
	_mm_store_si128((__m128i*)v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v28,v28,v29,v0
	_mm_store_si128((__m128i*)v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v29,v29,v30,v0
	_mm_store_si128((__m128i*)v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v30,v30,v31,v0
	_mm_store_si128((__m128i*)v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v31,v31,v32,v0
	_mm_store_si128((__m128i*)v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)v32.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v24,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v24.u8[15 - i]);
	// stvlx128 v25,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvlx128 v26,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v26.u8[15 - i]);
	// stvlx128 v27,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v27.u8[15 - i]);
	// stvlx128 v28,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvlx128 v29,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvlx128 v30,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvlx128 v31,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v31.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v32,v32,v33,v0
	_mm_store_si128((__m128i*)v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v32.u8), _mm_load_si128((__m128i*)v33.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v33,v33,v34,v0
	_mm_store_si128((__m128i*)v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v33.u8), _mm_load_si128((__m128i*)v34.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v34,v34,v35,v0
	_mm_store_si128((__m128i*)v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v34.u8), _mm_load_si128((__m128i*)v35.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v35,v35,v36,v0
	_mm_store_si128((__m128i*)v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v35.u8), _mm_load_si128((__m128i*)v36.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v36,v36,v37,v0
	_mm_store_si128((__m128i*)v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v36.u8), _mm_load_si128((__m128i*)v37.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v37,v37,v38,v0
	_mm_store_si128((__m128i*)v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v37.u8), _mm_load_si128((__m128i*)v38.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v38,v38,v39,v0
	_mm_store_si128((__m128i*)v38.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v38.u8), _mm_load_si128((__m128i*)v39.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v39,v39,v40,v0
	_mm_store_si128((__m128i*)v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v39.u8), _mm_load_si128((__m128i*)v40.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v32,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v32.u8[15 - i]);
	// stvlx128 v33,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v33.u8[15 - i]);
	// stvlx128 v34,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v34.u8[15 - i]);
	// stvlx128 v35,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v35.u8[15 - i]);
	// stvlx128 v36,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v36.u8[15 - i]);
	// stvlx128 v37,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v37.u8[15 - i]);
	// stvlx128 v38,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v38.u8[15 - i]);
	// stvlx128 v39,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v39.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v40,v40,v41,v0
	_mm_store_si128((__m128i*)v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v40.u8), _mm_load_si128((__m128i*)v41.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v41,v41,v42,v0
	_mm_store_si128((__m128i*)v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v41.u8), _mm_load_si128((__m128i*)v42.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v42,v42,v43,v0
	_mm_store_si128((__m128i*)v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v42.u8), _mm_load_si128((__m128i*)v43.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v43,v43,v44,v0
	_mm_store_si128((__m128i*)v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v43.u8), _mm_load_si128((__m128i*)v44.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v44,v44,v45,v0
	_mm_store_si128((__m128i*)v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v44.u8), _mm_load_si128((__m128i*)v45.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v45,v45,v46,v0
	_mm_store_si128((__m128i*)v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v45.u8), _mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v46,v46,v47,v0
	_mm_store_si128((__m128i*)v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v47,v47,v48,v0
	_mm_store_si128((__m128i*)v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v40,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v40.u8[15 - i]);
	// stvlx128 v41,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v41.u8[15 - i]);
	// stvlx128 v42,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v42.u8[15 - i]);
	// stvlx128 v43,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v43.u8[15 - i]);
	// stvlx128 v44,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v44.u8[15 - i]);
	// stvlx128 v45,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v45.u8[15 - i]);
	// stvlx128 v46,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v46.u8[15 - i]);
	// stvlx128 v47,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v47.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v48,v48,v49,v0
	_mm_store_si128((__m128i*)v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v49,v49,v50,v0
	_mm_store_si128((__m128i*)v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v50,v50,v51,v0
	_mm_store_si128((__m128i*)v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v51,v51,v52,v0
	_mm_store_si128((__m128i*)v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v52,v52,v53,v0
	_mm_store_si128((__m128i*)v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v53,v53,v54,v0
	_mm_store_si128((__m128i*)v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v54.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v54,v54,v55,v0
	_mm_store_si128((__m128i*)v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v54.u8), _mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v55,v55,v56,v0
	_mm_store_si128((__m128i*)v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v48,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v48.u8[15 - i]);
	// stvlx128 v49,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v49.u8[15 - i]);
	// stvlx128 v50,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v50.u8[15 - i]);
	// stvlx128 v51,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v51.u8[15 - i]);
	// stvlx128 v52,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v52.u8[15 - i]);
	// stvlx128 v53,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v53.u8[15 - i]);
	// stvlx128 v54,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v54.u8[15 - i]);
	// stvlx128 v55,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v55.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v56,v56,v57,v0
	_mm_store_si128((__m128i*)v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v58,v0
	_mm_store_si128((__m128i*)v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v59,v0
	_mm_store_si128((__m128i*)v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v60,v0
	_mm_store_si128((__m128i*)v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v61,v0
	_mm_store_si128((__m128i*)v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v62,v0
	_mm_store_si128((__m128i*)v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v63,v0
	_mm_store_si128((__m128i*)v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v64,v0
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v64.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v56.u8[15 - i]);
	// stvlx128 v57,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v57.u8[15 - i]);
	// stvlx128 v58,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v58.u8[15 - i]);
	// stvlx128 v59,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v59.u8[15 - i]);
	// stvlx128 v60,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v60.u8[15 - i]);
	// stvlx128 v61,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v61.u8[15 - i]);
	// stvlx128 v62,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// stvlx128 v63,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// vor128 v65,v64,v64
	_mm_store_si128((__m128i*)v65.u8, _mm_load_si128((__m128i*)v64.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	cr6.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// bge cr6,0x8260ce1c
	if (!cr6.lt) goto loc_8260CE1C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8260d1c8
	if (!cr6.eq) goto loc_8260D1C8;
	// b 0x8260d244
	goto loc_8260D244;
loc_8260D1C8:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vor128 v65,v8,v8
	_mm_store_si128((__m128i*)v65.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bgt cr6,0x8260d1c8
	if (cr6.gt) goto loc_8260D1C8;
loc_8260D244:
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v64,r1,r6
	simd::store_shuffled(v64, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v65,r1,r7
	simd::store_shuffled(v65, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8260D25C"))) PPC_WEAK_FUNC(sub_8260D25C);
PPC_FUNC_IMPL(__imp__sub_8260D25C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260D260"))) PPC_WEAK_FUNC(sub_8260D260);
PPC_FUNC_IMPL(__imp__sub_8260D260) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	r11.s64 = 96;
	// li r12,112
	r12.s64 = 112;
	// li r31,512
	r31.s64 = 512;
	// cmplwi cr6,r5,1024
	cr6.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// blt cr6,0x8260d588
	if (cr6.lt) goto loc_8260D588;
loc_8260D290:
	// addi r0,r5,-1024
	r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	cr6.compare<uint32_t>(r0.u32, 1024, xer);
	// blt cr6,0x8260d2a0
	if (cr6.lt) goto loc_8260D2A0;
	// li r0,1024
	r0.s64 = 1024;
loc_8260D2A0:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r6,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r7,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r10,r4
	simd::store_shuffled(v14, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v15,r11,r4
	simd::store_shuffled(v15, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v16,r12,r4
	simd::store_shuffled(v16, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v18,r6,r4
	simd::store_shuffled(v18, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v19,r7,r4
	simd::store_shuffled(v19, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r8,r4
	simd::store_shuffled(v20, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r9,r4
	simd::store_shuffled(v21, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r10,r4
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r11,r4
	simd::store_shuffled(v23, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r12,r4
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r6,r4
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v27,r7,r4
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r8,r4
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r9,r4
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r10,r4
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r11,r4
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r12,r4
	simd::store_shuffled(v32, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// xor r30,r30,r30
	r30.u64 = r30.u64 ^ r30.u64;
	// lvx128 v33,r0,r4
	simd::store_shuffled(v33, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r6,r4
	simd::store_shuffled(v34, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r7,r4
	simd::store_shuffled(v35, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r8,r4
	simd::store_shuffled(v36, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r9,r4
	simd::store_shuffled(v37, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r10,r4
	simd::store_shuffled(v38, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v39,r11,r4
	simd::store_shuffled(v39, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r12,r4
	simd::store_shuffled(v40, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	simd::store_shuffled(v41, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r6,r4
	simd::store_shuffled(v42, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r7,r4
	simd::store_shuffled(v43, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r8,r4
	simd::store_shuffled(v44, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r9,r4
	simd::store_shuffled(v45, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r10,r4
	simd::store_shuffled(v46, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r11,r4
	simd::store_shuffled(v47, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r12,r4
	simd::store_shuffled(v48, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	simd::store_shuffled(v49, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r6,r4
	simd::store_shuffled(v50, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r7,r4
	simd::store_shuffled(v51, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r8,r4
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r9,r4
	simd::store_shuffled(v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r10,r4
	simd::store_shuffled(v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r11,r4
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r12,r4
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r6,r4
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r7,r4
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r8,r4
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r9,r4
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r10,r4
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r4
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r12,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + r30.u32) & ~127), 0, 128);
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v16.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v24.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v32.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v40.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v48.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v56.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	cr6.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// bge cr6,0x8260d290
	if (!cr6.lt) goto loc_8260D290;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8260d588
	if (!cr6.eq) goto loc_8260D588;
	// b 0x8260d5e4
	goto loc_8260D5E4;
loc_8260D588:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bgt cr6,0x8260d588
	if (cr6.gt) goto loc_8260D588;
loc_8260D5E4:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8260D5EC"))) PPC_WEAK_FUNC(sub_8260D5EC);
PPC_FUNC_IMPL(__imp__sub_8260D5EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260D5F0"))) PPC_WEAK_FUNC(sub_8260D5F0);
PPC_FUNC_IMPL(__imp__sub_8260D5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// stvlx128 v64,r1,r6
	ea = ctx.r1.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v64.u8[15 - i]);
	// stvlx128 v65,r1,r7
	ea = ctx.r1.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v65.u8[15 - i]);
	// li r0,0
	r0.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	r11.s64 = 96;
	// li r12,112
	r12.s64 = 112;
	// li r31,512
	r31.s64 = 512;
	// dcbt r4,r0
	// lvx128 v65,r0,r4
	simd::store_shuffled(v65, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r5,1024
	cr6.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// blt cr6,0x8260da74
	if (cr6.lt) goto loc_8260DA74;
	// li r0,128
	r0.s64 = 128;
	// dcbt r4,r0
	// li r0,256
	r0.s64 = 256;
	// dcbt r4,r0
	// li r0,384
	r0.s64 = 384;
	// dcbt r4,r0
	// li r0,512
	r0.s64 = 512;
	// dcbt r4,r0
	// li r0,640
	r0.s64 = 640;
	// dcbt r4,r0
	// li r0,768
	r0.s64 = 768;
	// dcbt r4,r0
	// li r0,896
	r0.s64 = 896;
	// dcbt r4,r0
loc_8260D67C:
	// addi r0,r5,-1024
	r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	cr6.compare<uint32_t>(r0.u32, 1024, xer);
	// blt cr6,0x8260d68c
	if (cr6.lt) goto loc_8260D68C;
	// li r0,1024
	r0.s64 = 1024;
loc_8260D68C:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r6,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r7,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r8,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r10,r4
	simd::store_shuffled(v14, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v15,r11,r4
	simd::store_shuffled(v15, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v16,r12,r4
	simd::store_shuffled(v16, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	simd::store_shuffled(v17, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v18,r6,r4
	simd::store_shuffled(v18, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v19,r7,r4
	simd::store_shuffled(v19, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r8,r4
	simd::store_shuffled(v20, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v21,r9,r4
	simd::store_shuffled(v21, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v22,r10,r4
	simd::store_shuffled(v22, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r11,r4
	simd::store_shuffled(v23, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r12,r4
	simd::store_shuffled(v24, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	simd::store_shuffled(v25, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r6,r4
	simd::store_shuffled(v26, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v27,r7,r4
	simd::store_shuffled(v27, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r8,r4
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r9,r4
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r10,r4
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r11,r4
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r12,r4
	simd::store_shuffled(v32, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// xor r30,r30,r30
	r30.u64 = r30.u64 ^ r30.u64;
	// lvx128 v33,r0,r4
	simd::store_shuffled(v33, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r6,r4
	simd::store_shuffled(v34, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r7,r4
	simd::store_shuffled(v35, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v36,r8,r4
	simd::store_shuffled(v36, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r9,r4
	simd::store_shuffled(v37, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r10,r4
	simd::store_shuffled(v38, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v39,r11,r4
	simd::store_shuffled(v39, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r12,r4
	simd::store_shuffled(v40, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	simd::store_shuffled(v41, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r6,r4
	simd::store_shuffled(v42, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r7,r4
	simd::store_shuffled(v43, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r8,r4
	simd::store_shuffled(v44, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r9,r4
	simd::store_shuffled(v45, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r10,r4
	simd::store_shuffled(v46, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r11,r4
	simd::store_shuffled(v47, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r12,r4
	simd::store_shuffled(v48, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	simd::store_shuffled(v49, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v50,r6,r4
	simd::store_shuffled(v50, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r7,r4
	simd::store_shuffled(v51, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v52,r8,r4
	simd::store_shuffled(v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r9,r4
	simd::store_shuffled(v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r10,r4
	simd::store_shuffled(v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r11,r4
	simd::store_shuffled(v55, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r12,r4
	simd::store_shuffled(v56, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + r30.u32) & ~127), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	simd::store_shuffled(v57, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r6,r4
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r7,r4
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r8,r4
	simd::store_shuffled(v60, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r9,r4
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r10,r4
	simd::store_shuffled(v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r4
	simd::store_shuffled(v63, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v64,r12,r4
	simd::store_shuffled(v64, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbzl r3,r30
	memset(base + ((ctx.r3.u32 + r30.u32) & ~127), 0, 128);
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v8,v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v9,v9,v10,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v10,v10,v11,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v11,v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v12,v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v13,v13,v14,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)v14.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v14,v14,v15,v0
	_mm_store_si128((__m128i*)v14.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v14.u8), _mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v15,v15,v16,v0
	_mm_store_si128((__m128i*)v15.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v15.u8), _mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v8,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvlx128 v9,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v14.u8[15 - i]);
	// stvlx128 v15,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v15.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v16,v16,v17,v0
	_mm_store_si128((__m128i*)v16.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v16.u8), _mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v17,v17,v18,v0
	_mm_store_si128((__m128i*)v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v17.u8), _mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v18,v18,v19,v0
	_mm_store_si128((__m128i*)v18.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v18.u8), _mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v19,v19,v20,v0
	_mm_store_si128((__m128i*)v19.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v19.u8), _mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v20,v20,v21,v0
	_mm_store_si128((__m128i*)v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v21,v21,v22,v0
	_mm_store_si128((__m128i*)v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v22,v22,v23,v0
	_mm_store_si128((__m128i*)v22.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v22.u8), _mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v23,v23,v24,v0
	_mm_store_si128((__m128i*)v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v23.u8), _mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v16,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v16.u8[15 - i]);
	// stvlx128 v17,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvlx128 v18,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v18.u8[15 - i]);
	// stvlx128 v19,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v19.u8[15 - i]);
	// stvlx128 v20,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v20.u8[15 - i]);
	// stvlx128 v21,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v21.u8[15 - i]);
	// stvlx128 v22,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v22.u8[15 - i]);
	// stvlx128 v23,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v23.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v24,v24,v25,v0
	_mm_store_si128((__m128i*)v24.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v24.u8), _mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v25,v25,v26,v0
	_mm_store_si128((__m128i*)v25.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v25.u8), _mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v26,v26,v27,v0
	_mm_store_si128((__m128i*)v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v26.u8), _mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v27,v27,v28,v0
	_mm_store_si128((__m128i*)v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v28,v28,v29,v0
	_mm_store_si128((__m128i*)v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v28.u8), _mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v29,v29,v30,v0
	_mm_store_si128((__m128i*)v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v30,v30,v31,v0
	_mm_store_si128((__m128i*)v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v30.u8), _mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v31,v31,v32,v0
	_mm_store_si128((__m128i*)v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)v32.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v24,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v24.u8[15 - i]);
	// stvlx128 v25,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvlx128 v26,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v26.u8[15 - i]);
	// stvlx128 v27,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v27.u8[15 - i]);
	// stvlx128 v28,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvlx128 v29,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvlx128 v30,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvlx128 v31,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v31.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	memset(base + ((ctx.r3.u32 + r31.u32) & ~127), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v32,v32,v33,v0
	_mm_store_si128((__m128i*)v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v32.u8), _mm_load_si128((__m128i*)v33.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v33,v33,v34,v0
	_mm_store_si128((__m128i*)v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v33.u8), _mm_load_si128((__m128i*)v34.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v34,v34,v35,v0
	_mm_store_si128((__m128i*)v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v34.u8), _mm_load_si128((__m128i*)v35.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v35,v35,v36,v0
	_mm_store_si128((__m128i*)v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v35.u8), _mm_load_si128((__m128i*)v36.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v36,v36,v37,v0
	_mm_store_si128((__m128i*)v36.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v36.u8), _mm_load_si128((__m128i*)v37.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v37,v37,v38,v0
	_mm_store_si128((__m128i*)v37.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v37.u8), _mm_load_si128((__m128i*)v38.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v38,v38,v39,v0
	_mm_store_si128((__m128i*)v38.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v38.u8), _mm_load_si128((__m128i*)v39.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v39,v39,v40,v0
	_mm_store_si128((__m128i*)v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v39.u8), _mm_load_si128((__m128i*)v40.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v32,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v32.u8[15 - i]);
	// stvlx128 v33,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v33.u8[15 - i]);
	// stvlx128 v34,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v34.u8[15 - i]);
	// stvlx128 v35,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v35.u8[15 - i]);
	// stvlx128 v36,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v36.u8[15 - i]);
	// stvlx128 v37,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v37.u8[15 - i]);
	// stvlx128 v38,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v38.u8[15 - i]);
	// stvlx128 v39,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v39.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v40,v40,v41,v0
	_mm_store_si128((__m128i*)v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v40.u8), _mm_load_si128((__m128i*)v41.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v41,v41,v42,v0
	_mm_store_si128((__m128i*)v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v41.u8), _mm_load_si128((__m128i*)v42.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v42,v42,v43,v0
	_mm_store_si128((__m128i*)v42.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v42.u8), _mm_load_si128((__m128i*)v43.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v43,v43,v44,v0
	_mm_store_si128((__m128i*)v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v43.u8), _mm_load_si128((__m128i*)v44.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v44,v44,v45,v0
	_mm_store_si128((__m128i*)v44.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v44.u8), _mm_load_si128((__m128i*)v45.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v45,v45,v46,v0
	_mm_store_si128((__m128i*)v45.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v45.u8), _mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v46,v46,v47,v0
	_mm_store_si128((__m128i*)v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v47,v47,v48,v0
	_mm_store_si128((__m128i*)v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v47.u8), _mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v40,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v40.u8[15 - i]);
	// stvlx128 v41,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v41.u8[15 - i]);
	// stvlx128 v42,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v42.u8[15 - i]);
	// stvlx128 v43,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v43.u8[15 - i]);
	// stvlx128 v44,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v44.u8[15 - i]);
	// stvlx128 v45,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v45.u8[15 - i]);
	// stvlx128 v46,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v46.u8[15 - i]);
	// stvlx128 v47,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v47.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v48,v48,v49,v0
	_mm_store_si128((__m128i*)v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v48.u8), _mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v49,v49,v50,v0
	_mm_store_si128((__m128i*)v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v49.u8), _mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v50,v50,v51,v0
	_mm_store_si128((__m128i*)v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v50.u8), _mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v51,v51,v52,v0
	_mm_store_si128((__m128i*)v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v51.u8), _mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v52,v52,v53,v0
	_mm_store_si128((__m128i*)v52.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v52.u8), _mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v53,v53,v54,v0
	_mm_store_si128((__m128i*)v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v53.u8), _mm_load_si128((__m128i*)v54.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v54,v54,v55,v0
	_mm_store_si128((__m128i*)v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v54.u8), _mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v55,v55,v56,v0
	_mm_store_si128((__m128i*)v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v55.u8), _mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v48,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v48.u8[15 - i]);
	// stvlx128 v49,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v49.u8[15 - i]);
	// stvlx128 v50,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v50.u8[15 - i]);
	// stvlx128 v51,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v51.u8[15 - i]);
	// stvlx128 v52,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v52.u8[15 - i]);
	// stvlx128 v53,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v53.u8[15 - i]);
	// stvlx128 v54,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v54.u8[15 - i]);
	// stvlx128 v55,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v55.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v56,v56,v57,v0
	_mm_store_si128((__m128i*)v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v56.u8), _mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v58,v0
	_mm_store_si128((__m128i*)v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v59,v0
	_mm_store_si128((__m128i*)v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v58.u8), _mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v60,v0
	_mm_store_si128((__m128i*)v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v59.u8), _mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v61,v0
	_mm_store_si128((__m128i*)v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v60.u8), _mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v62,v0
	_mm_store_si128((__m128i*)v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v61.u8), _mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v63,v0
	_mm_store_si128((__m128i*)v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v62.u8), _mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v64,v0
	_mm_store_si128((__m128i*)v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v63.u8), _mm_load_si128((__m128i*)v64.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v56.u8[15 - i]);
	// stvlx128 v57,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v57.u8[15 - i]);
	// stvlx128 v58,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v58.u8[15 - i]);
	// stvlx128 v59,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v59.u8[15 - i]);
	// stvlx128 v60,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v60.u8[15 - i]);
	// stvlx128 v61,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v61.u8[15 - i]);
	// stvlx128 v62,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v62.u8[15 - i]);
	// stvlx128 v63,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v63.u8[15 - i]);
	// vor128 v65,v64,v64
	_mm_store_si128((__m128i*)v65.u8, _mm_load_si128((__m128i*)v64.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	cr6.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// bge cr6,0x8260d67c
	if (!cr6.lt) goto loc_8260D67C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8260da74
	if (!cr6.eq) goto loc_8260DA74;
	// b 0x8260daf4
	goto loc_8260DAF4;
loc_8260DA74:
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r12,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r12.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	_mm_store_si128((__m128i*)v65.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)v65.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vor128 v65,v8,v8
	_mm_store_si128((__m128i*)v65.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bgt cr6,0x8260da74
	if (cr6.gt) goto loc_8260DA74;
loc_8260DAF4:
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v64,r1,r6
	simd::store_shuffled(v64, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v65,r1,r7
	simd::store_shuffled(v65, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8260DB0C"))) PPC_WEAK_FUNC(sub_8260DB0C);
PPC_FUNC_IMPL(__imp__sub_8260DB0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260DB10"))) PPC_WEAK_FUNC(sub_8260DB10);
PPC_FUNC_IMPL(__imp__sub_8260DB10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr7{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r12,128
	r12.s64 = 128;
	// cmplwi r5,128
	cr0.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bltlr 
	if (cr0.lt) return;
loc_8260DB34:
	// cmplwi cr7,r5,256
	cr7.compare<uint32_t>(ctx.r5.u32, 256, xer);
	// cmplwi r5,1024
	cr0.compare<uint32_t>(ctx.r5.u32, 1024, xer);
	// blt cr7,0x8260db4c
	if (cr7.lt) goto loc_8260DB4C;
	// ble 0x8260db48
	if (!cr0.gt) goto loc_8260DB48;
	// dcbt r10,r4
loc_8260DB48:
	// dcbzl r12,r3
	memset(base + ((r12.u32 + ctx.r3.u32) & ~127), 0, 128);
loc_8260DB4C:
	// lvx v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r11,r4,64
	r11.s64 = ctx.r4.s64 + 64;
	// lvx v2,r6,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx v3,r7,r4
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm v1,v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v4,r8,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm v2,v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vperm v3,v3,v4,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v6,r6,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r6.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vperm v4,v4,v5,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v7,r7,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vperm v5,v5,v6,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v8,r8,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r8.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vperm v6,v6,v7,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx v9,r9,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vperm v7,v7,v8,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx v1,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v8,v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx v2,r6,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// stvx v3,r7,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvx v4,r8,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvx v5,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// stvx v6,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi r5,128
	cr0.compare<uint32_t>(ctx.r5.u32, 128, xer);
	// stvx v7,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v8,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bge 0x8260db34
	if (!cr0.lt) goto loc_8260DB34;
}

__attribute__((alias("__imp__sub_8260DBCC"))) PPC_WEAK_FUNC(sub_8260DBCC);
PPC_FUNC_IMPL(__imp__sub_8260DBCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260DBD0"))) PPC_WEAK_FUNC(sub_8260DBD0);
PPC_FUNC_IMPL(__imp__sub_8260DBD0) {
	PPC_FUNC_PROLOGUE();
	// lhz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
}

__attribute__((alias("__imp__sub_8260DBD8"))) PPC_WEAK_FUNC(sub_8260DBD8);
PPC_FUNC_IMPL(__imp__sub_8260DBD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82610420
	sub_82610420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260DBDC"))) PPC_WEAK_FUNC(sub_8260DBDC);
PPC_FUNC_IMPL(__imp__sub_8260DBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260DBE0"))) PPC_WEAK_FUNC(sub_8260DBE0);
PPC_FUNC_IMPL(__imp__sub_8260DBE0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82610428
	sub_82610428(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8260dc30
	if (cr6.lt) goto loc_8260DC30;
	// beq cr6,0x8260dc20
	if (cr6.eq) goto loc_8260DC20;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// blt cr6,0x8260dc18
	if (cr6.lt) goto loc_8260DC18;
	// li r11,0
	r11.s64 = 0;
	// b 0x8260dc34
	goto loc_8260DC34;
loc_8260DC18:
	// lwz r11,248(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// b 0x8260dc24
	goto loc_8260DC24;
loc_8260DC20:
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_8260DC24:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8260dc34
	goto loc_8260DC34;
loc_8260DC30:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8260DC34:
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// ori r10,r10,38528
	ctx.r10.u64 = ctx.r10.u64 | 38528;
	// mulld r11,r11,r10
	r11.s64 = r11.s64 * ctx.r10.s64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8260DC5C"))) PPC_WEAK_FUNC(sub_8260DC5C);
PPC_FUNC_IMPL(__imp__sub_8260DC5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260DC60"))) PPC_WEAK_FUNC(sub_8260DC60);
PPC_FUNC_IMPL(__imp__sub_8260DC60) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x8260dc8c
	if (!cr6.eq) goto loc_8260DC8C;
	// bl 0x828ee2b0
	sub_828EE2B0(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
loc_8260DC8C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x8260dd68
	if (!cr6.gt) goto loc_8260DD68;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8260DC9C:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,127
	cr6.compare<uint32_t>(ctx.r10.u32, 127, xer);
	// bgt cr6,0x8260dccc
	if (cr6.gt) goto loc_8260DCCC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bgt cr6,0x8260dd60
	if (cr6.gt) goto loc_8260DD60;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8260dd60
	if (cr6.eq) goto loc_8260DD60;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x8260dd5c
	goto loc_8260DD5C;
loc_8260DCCC:
	// cmplwi cr6,r11,2047
	cr6.compare<uint32_t>(r11.u32, 2047, xer);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// bgt cr6,0x8260dcf4
	if (cr6.gt) goto loc_8260DCF4;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x8260dd3c
	if (cr6.gt) goto loc_8260DD3C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8260dd3c
	if (cr6.eq) goto loc_8260DD3C;
	// li r8,192
	ctx.r8.s64 = 192;
	// rlwimi r8,r10,26,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// b 0x8260dd34
	goto loc_8260DD34;
loc_8260DCF4:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x8260dd14
	if (cr6.gt) goto loc_8260DD14;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8260dd14
	if (cr6.eq) goto loc_8260DD14;
	// li r8,224
	ctx.r8.s64 = 224;
	// rlwimi r8,r10,20,28,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF0);
	// stb r8,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r8.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8260DD14:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x8260dd3c
	if (cr6.gt) goto loc_8260DD3C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8260dd3c
	if (cr6.eq) goto loc_8260DD3C;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// li r8,128
	ctx.r8.s64 = 128;
	// rlwimi r8,r10,26,26,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x3F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC0);
loc_8260DD34:
	// stb r8,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r8.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8260DD3C:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bgt cr6,0x8260dd60
	if (cr6.gt) goto loc_8260DD60;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8260dd60
	if (cr6.eq) goto loc_8260DD60;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// rlwimi r11,r9,7,0,25
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (r11.u64 & 0xFFFFFFFF0000003F);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_8260DD5C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8260DD60:
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// bdnz 0x8260dc9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260DC9C;
loc_8260DD68:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8260dd88
	if (cr6.eq) goto loc_8260DD88;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bge cr6,0x8260dd88
	if (!cr6.lt) goto loc_8260DD88;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x8260ac20
	sub_8260AC20(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8260dd8c
	goto loc_8260DD8C;
loc_8260DD88:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8260DD8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260DD90"))) PPC_WEAK_FUNC(sub_8260DD90);
PPC_FUNC_IMPL(__imp__sub_8260DD90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8260DD94"))) PPC_WEAK_FUNC(sub_8260DD94);
PPC_FUNC_IMPL(__imp__sub_8260DD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260DD98"))) PPC_WEAK_FUNC(sub_8260DD98);
PPC_FUNC_IMPL(__imp__sub_8260DD98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r31,1627
	r31.s64 = 1627;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8260ddc4
	if (!cr6.eq) goto loc_8260DDC4;
	// li r31,0
	r31.s64 = 0;
	// b 0x8260ddf0
	goto loc_8260DDF0;
loc_8260DDC4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d04c
	__imp__XamGetExecutionId(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260ddf0
	if (cr0.lt) goto loc_8260DDF0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF;
	// lhz r11,12(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = r11.u64 & r31.u64;
loc_8260DDF0:
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

__attribute__((alias("__imp__sub_8260DE08"))) PPC_WEAK_FUNC(sub_8260DE08);
PPC_FUNC_IMPL(__imp__sub_8260DE08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260DE0C"))) PPC_WEAK_FUNC(sub_8260DE0C);
PPC_FUNC_IMPL(__imp__sub_8260DE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260DE10"))) PPC_WEAK_FUNC(sub_8260DE10);
PPC_FUNC_IMPL(__imp__sub_8260DE10) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8260DE10"))) PPC_WEAK_FUNC(sub_8260DE10);
PPC_FUNC_IMPL(__imp__sub_8260DE10) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260aba0
	sub_8260ABA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260DE14"))) PPC_WEAK_FUNC(sub_8260DE14);
PPC_FUNC_IMPL(__imp__sub_8260DE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260DE18"))) PPC_WEAK_FUNC(sub_8260DE18);
PPC_FUNC_IMPL(__imp__sub_8260DE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,1524(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1524);
}

__attribute__((alias("__imp__sub_8260DE20"))) PPC_WEAK_FUNC(sub_8260DE20);
PPC_FUNC_IMPL(__imp__sub_8260DE20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260DE24"))) PPC_WEAK_FUNC(sub_8260DE24);
PPC_FUNC_IMPL(__imp__sub_8260DE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260DE28"))) PPC_WEAK_FUNC(sub_8260DE28);
PPC_FUNC_IMPL(__imp__sub_8260DE28) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lwz r10,4552(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4552);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8260de58
	if (cr6.eq) goto loc_8260DE58;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260DE58:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// addi r10,r10,-15152
	ctx.r10.s64 = ctx.r10.s64 + -15152;
	// addi r30,r11,-15136
	r30.s64 = r11.s64 + -15136;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bge cr6,0x8260dea8
	if (!cr6.lt) goto loc_8260DEA8;
loc_8260DE78:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8260def0
	if (!cr6.eq) goto loc_8260DEF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260de94
	if (cr6.eq) goto loc_8260DE94;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260DE94:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8260de78
	if (cr6.lt) goto loc_8260DE78;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8260def0
	if (!cr6.eq) goto loc_8260DEF0;
loc_8260DEA8:
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r30,r11,-15156
	r30.s64 = r11.s64 + -15156;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bge cr6,0x8260deec
	if (!cr6.lt) goto loc_8260DEEC;
loc_8260DEC4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260dee0
	if (cr6.eq) goto loc_8260DEE0;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8260dee0
	if (cr6.eq) goto loc_8260DEE0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260DEE0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8260dec4
	if (cr6.lt) goto loc_8260DEC4;
loc_8260DEEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260DEF0:
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

__attribute__((alias("__imp__sub_8260DF04"))) PPC_WEAK_FUNC(sub_8260DF04);
PPC_FUNC_IMPL(__imp__sub_8260DF04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260DF08"))) PPC_WEAK_FUNC(sub_8260DF08);
PPC_FUNC_IMPL(__imp__sub_8260DF08) {
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
	// lis r10,-31979
	ctx.r10.s64 = -2095775744;
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// bge cr6,0x8260df64
	if (!cr6.lt) goto loc_8260DF64;
loc_8260DF3C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8260df64
	if (!cr6.eq) goto loc_8260DF64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260df58
	if (cr6.eq) goto loc_8260DF58;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260DF58:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8260df3c
	if (cr6.lt) goto loc_8260DF3C;
loc_8260DF64:
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

__attribute__((alias("__imp__sub_8260DF78"))) PPC_WEAK_FUNC(sub_8260DF78);
PPC_FUNC_IMPL(__imp__sub_8260DF78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260DF7C"))) PPC_WEAK_FUNC(sub_8260DF7C);
PPC_FUNC_IMPL(__imp__sub_8260DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260DF80"))) PPC_WEAK_FUNC(sub_8260DF80);
PPC_FUNC_IMPL(__imp__sub_8260DF80) {
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
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,28320
	r29.s64 = r11.s64 + 28320;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r31,r11,28348
	r31.s64 = r11.s64 + 28348;
	// lwz r11,28348(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28348);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// mr r30,r11
	r30.u64 = r11.u64;
	// beq cr6,0x8260dfd8
	if (cr6.eq) goto loc_8260DFD8;
loc_8260DFB8:
	// mr r11,r30
	r11.u64 = r30.u64;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bne cr6,0x8260dfb8
	if (!cr6.eq) goto loc_8260DFB8;
loc_8260DFD8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260DFE4"))) PPC_WEAK_FUNC(sub_8260DFE4);
PPC_FUNC_IMPL(__imp__sub_8260DFE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8260DFE8"))) PPC_WEAK_FUNC(sub_8260DFE8);
PPC_FUNC_IMPL(__imp__sub_8260DFE8) {
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
	// lis r11,-31965
	r11.s64 = -2094858240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,28320
	r30.s64 = r11.s64 + 28320;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8260e034
	if (cr6.eq) goto loc_8260E034;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// addi r10,r11,28348
	ctx.r10.s64 = r11.s64 + 28348;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x8260e044
	goto loc_8260E044;
loc_8260E034:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_8260E044:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8260E050"))) PPC_WEAK_FUNC(sub_8260E050);
PPC_FUNC_IMPL(__imp__sub_8260E050) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8260E054"))) PPC_WEAK_FUNC(sub_8260E054);
PPC_FUNC_IMPL(__imp__sub_8260E054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E058"))) PPC_WEAK_FUNC(sub_8260E058);
PPC_FUNC_IMPL(__imp__sub_8260E058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r30,16
	r30.s64 = 1048576;
	// lwz r11,1516(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1516);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260e0b0
	if (cr6.eq) goto loc_8260E0B0;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// ori r4,r4,1025
	ctx.r4.u64 = ctx.r4.u64 | 1025;
	// bl 0x8314d73c
	__imp__RtlImageXexHeaderField(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8260e0b0
	if (cr0.eq) goto loc_8260E0B0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8260e0b0
	if (!cr6.eq) goto loc_8260E0B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8260e114
	goto loc_8260E114;
loc_8260E0B0:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,72
	r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8260E0C0:
	// stdu r9,8(r11)
	ea = 8 + r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	r11.u32 = ea;
	// bdnz 0x8260e0c0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260E0C0;
	// lis r31,-31917
	r31.s64 = -2091712512;
	// li r11,48
	r11.s64 = 48;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,-28336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28336);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8260e100
	if (!cr6.eq) goto loc_8260E100;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82608fa0
	sub_82608FA0(ctx, base);
	// stw r3,-28336(r31)
	PPC_STORE_U32(r31.u32 + -28336, ctx.r3.u32);
loc_8260E100:
	// bl 0x826105b0
	sub_826105B0(ctx, base);
	// lwz r11,-28336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -28336);
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_8260E114:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8260E128"))) PPC_WEAK_FUNC(sub_8260E128);
PPC_FUNC_IMPL(__imp__sub_8260E128) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E12C"))) PPC_WEAK_FUNC(sub_8260E12C);
PPC_FUNC_IMPL(__imp__sub_8260E12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E130"))) PPC_WEAK_FUNC(sub_8260E130);
PPC_FUNC_IMPL(__imp__sub_8260E130) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8260e058
	sub_8260E058(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8260e178
	if (!cr0.eq) goto loc_8260E178;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1880(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1880);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260e170
	if (cr6.eq) goto loc_8260E170;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260E170:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8314d74c
	__imp__HalReturnToFirmware(ctx, base);
loc_8260E178:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260E184"))) PPC_WEAK_FUNC(sub_8260E184);
PPC_FUNC_IMPL(__imp__sub_8260E184) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E188"))) PPC_WEAK_FUNC(sub_8260E188);
PPC_FUNC_IMPL(__imp__sub_8260E188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwinm r9,r7,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8260e1b8
	if (cr6.eq) goto loc_8260E1B8;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// or r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 | ctx.r9.u64;
loc_8260E1B8:
	// lis r10,-32159
	ctx.r10.s64 = -2107572224;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// addi r6,r10,1624
	ctx.r6.s64 = ctx.r10.s64 + 1624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8314d72c
	__imp__ExCreateThread(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8260e1e4
	if (!cr0.lt) goto loc_8260E1E4;
	// bl 0x8260ab68
	sub_8260AB68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8260e1e8
	goto loc_8260E1E8;
loc_8260E1E4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8260E1E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260E1F4"))) PPC_WEAK_FUNC(sub_8260E1F4);
PPC_FUNC_IMPL(__imp__sub_8260E1F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E1F8"))) PPC_WEAK_FUNC(sub_8260E1F8);
PPC_FUNC_IMPL(__imp__sub_8260E1F8) {
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
	// lis r11,30403
	r11.s64 = 1992491008;
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,62033
	r11.u64 = r11.u64 | 62033;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// bl 0x82610b10
	sub_82610B10(ctx, base);
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

__attribute__((alias("__imp__sub_8260E23C"))) PPC_WEAK_FUNC(sub_8260E23C);
PPC_FUNC_IMPL(__imp__sub_8260E23C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E240"))) PPC_WEAK_FUNC(sub_8260E240);
PPC_FUNC_IMPL(__imp__sub_8260E240) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e42ec8
	sub_82E42EC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260E244"))) PPC_WEAK_FUNC(sub_8260E244);
PPC_FUNC_IMPL(__imp__sub_8260E244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E248"))) PPC_WEAK_FUNC(sub_8260E248);
PPC_FUNC_IMPL(__imp__sub_8260E248) {
	PPC_FUNC_PROLOGUE();
	// b 0x82610b88
	sub_82610B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260E24C"))) PPC_WEAK_FUNC(sub_8260E24C);
PPC_FUNC_IMPL(__imp__sub_8260E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E250"))) PPC_WEAK_FUNC(sub_8260E250);
PPC_FUNC_IMPL(__imp__sub_8260E250) {
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
	// bl 0x82610738
	sub_82610738(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8260e298
	if (cr6.lt) goto loc_8260E298;
	// beq cr6,0x8260e28c
	if (cr6.eq) goto loc_8260E28C;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x8260e280
	if (cr6.eq) goto loc_8260E280;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8260e29c
	goto loc_8260E29C;
loc_8260E280:
	// lis r3,-32290
	ctx.r3.s64 = -2116157440;
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// b 0x8260e29c
	goto loc_8260E29C;
loc_8260E28C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8260e29c
	goto loc_8260E29C;
loc_8260E298:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260E29C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260E2A8"))) PPC_WEAK_FUNC(sub_8260E2A8);
PPC_FUNC_IMPL(__imp__sub_8260E2A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E2AC"))) PPC_WEAK_FUNC(sub_8260E2AC);
PPC_FUNC_IMPL(__imp__sub_8260E2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E2B0"))) PPC_WEAK_FUNC(sub_8260E2B0);
PPC_FUNC_IMPL(__imp__sub_8260E2B0) {
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
	// bl 0x826107c0
	sub_826107C0(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x8260e2f8
	if (cr6.lt) goto loc_8260E2F8;
	// beq cr6,0x8260e2ec
	if (cr6.eq) goto loc_8260E2EC;
	// cmplwi cr6,r3,6
	cr6.compare<uint32_t>(ctx.r3.u32, 6, xer);
	// beq cr6,0x8260e2e0
	if (cr6.eq) goto loc_8260E2E0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8260e2fc
	goto loc_8260E2FC;
loc_8260E2E0:
	// lis r3,-32290
	ctx.r3.s64 = -2116157440;
	// ori r3,r3,8193
	ctx.r3.u64 = ctx.r3.u64 | 8193;
	// b 0x8260e2fc
	goto loc_8260E2FC;
loc_8260E2EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8260e2fc
	goto loc_8260E2FC;
loc_8260E2F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260E2FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260E308"))) PPC_WEAK_FUNC(sub_8260E308);
PPC_FUNC_IMPL(__imp__sub_8260E308) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E30C"))) PPC_WEAK_FUNC(sub_8260E30C);
PPC_FUNC_IMPL(__imp__sub_8260E30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E310"))) PPC_WEAK_FUNC(sub_8260E310);
PPC_FUNC_IMPL(__imp__sub_8260E310) {
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
	// bl 0x82610be0
	sub_82610BE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260E330"))) PPC_WEAK_FUNC(sub_8260E330);
PPC_FUNC_IMPL(__imp__sub_8260E330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E334"))) PPC_WEAK_FUNC(sub_8260E334);
PPC_FUNC_IMPL(__imp__sub_8260E334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E338"))) PPC_WEAK_FUNC(sub_8260E338);
PPC_FUNC_IMPL(__imp__sub_8260E338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
}

__attribute__((alias("__imp__sub_8260E37C"))) PPC_WEAK_FUNC(sub_8260E37C);
PPC_FUNC_IMPL(__imp__sub_8260E37C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E380"))) PPC_WEAK_FUNC(sub_8260E380);
PPC_FUNC_IMPL(__imp__sub_8260E380) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
}

__attribute__((alias("__imp__sub_8260E384"))) PPC_WEAK_FUNC(sub_8260E384);
PPC_FUNC_IMPL(__imp__sub_8260E384) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E388"))) PPC_WEAK_FUNC(sub_8260E388);
PPC_FUNC_IMPL(__imp__sub_8260E388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r5,40
	r11.s64 = ctx.r5.s64 * 40;
	// add r30,r11,r3
	r30.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,259
	ctx.r8.s64 = 259;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mullw r11,r11,r6
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r8,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r8.u32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,40(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// lwz r29,0(r8)
	r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// addic r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r6,r11,r31
	ctx.r6.u64 = r11.u64 & r31.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8260e428
	if (cr0.lt) goto loc_8260E428;
	// cmpwi cr6,r29,259
	cr6.compare<int32_t>(r29.s32, 259, xer);
	// bne cr6,0x8260e438
	if (!cr6.eq) goto loc_8260E438;
loc_8260E428:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,17
	r11.u64 = r11.u64 | 17;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x8260e448
	if (!cr6.eq) goto loc_8260E448;
loc_8260E438:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x8314d4cc
	__imp__NtClearEvent(ctx, base);
loc_8260E448:
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260E450"))) PPC_WEAK_FUNC(sub_8260E450);
PPC_FUNC_IMPL(__imp__sub_8260E450) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8260E454"))) PPC_WEAK_FUNC(sub_8260E454);
PPC_FUNC_IMPL(__imp__sub_8260E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E458"))) PPC_WEAK_FUNC(sub_8260E458);
PPC_FUNC_IMPL(__imp__sub_8260E458) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mulli r10,r11,40
	ctx.r10.s64 = r11.s64 * 40;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8260e4ac
	if (!cr6.eq) goto loc_8260E4AC;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8260e4f0
	if (cr6.eq) goto loc_8260E4F0;
loc_8260E4AC:
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mulli r10,r11,40
	ctx.r10.s64 = r11.s64 * 40;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8260e4dc
	if (!cr6.eq) goto loc_8260E4DC;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8260e4f0
	if (cr6.eq) goto loc_8260E4F0;
loc_8260E4DC:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260e388
	sub_8260E388(ctx, base);
loc_8260E4F0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260e5e8
	if (cr6.eq) goto loc_8260E5E8;
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8260e538
	if (!cr6.eq) goto loc_8260E538;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8260e5e8
	if (cr6.eq) goto loc_8260E5E8;
loc_8260E538:
	// lis r28,-16384
	r28.s64 = -1073741824;
	// li r11,0
	r11.s64 = 0;
	// ori r28,r28,1
	r28.u64 = r28.u64 | 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8260e654
	if (cr6.eq) goto loc_8260E654;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8260e654
	if (cr6.eq) goto loc_8260E654;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r3,r9,-27156
	ctx.r3.s64 = ctx.r9.s64 + -27156;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r30,1
	r30.s64 = 1;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260e388
	sub_8260E388(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8260e5e8
	if (cr6.eq) goto loc_8260E5E8;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x8260e5e8
	if (cr6.lt) goto loc_8260E5E8;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mtctr r24
	ctr.u64 = r24.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260E5E8:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmpwi cr6,r10,259
	cr6.compare<int32_t>(ctx.r10.s32, 259, xer);
	// bne cr6,0x8260e63c
	if (!cr6.eq) goto loc_8260E63C;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8314d61c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_8260E63C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x828e9458
	return;
loc_8260E654:
	// li r30,0
	r30.s64 = 0;
}

__attribute__((alias("__imp__sub_8260E658"))) PPC_WEAK_FUNC(sub_8260E658);
PPC_FUNC_IMPL(__imp__sub_8260E658) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260e5a0
	// ERROR 8260E5A0
	return;
}

__attribute__((alias("__imp__sub_8260E65C"))) PPC_WEAK_FUNC(sub_8260E65C);
PPC_FUNC_IMPL(__imp__sub_8260E65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E660"))) PPC_WEAK_FUNC(sub_8260E660);
PPC_FUNC_IMPL(__imp__sub_8260E660) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r3,40
	r31.s64 = ctx.r3.s64 + 40;
	// li r29,2
	r29.s64 = 2;
	// li r30,0
	r30.s64 = 0;
loc_8260E67C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260e6d0
	if (cr6.eq) goto loc_8260E6D0;
	// lwz r11,-20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -20);
	// cmpwi cr6,r11,259
	cr6.compare<int32_t>(r11.s32, 259, xer);
	// bne cr6,0x8260e6b4
	if (!cr6.eq) goto loc_8260E6B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8314d61c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// lwz r11,-16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -16);
	// lwz r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -12);
	// stw r11,-20(r31)
	PPC_STORE_U32(r31.u32 + -20, r11.u32);
	// stw r10,-24(r31)
	PPC_STORE_U32(r31.u32 + -24, ctx.r10.u32);
loc_8260E6B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// stw r30,-16(r31)
	PPC_STORE_U32(r31.u32 + -16, r30.u32);
	// stw r30,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, r30.u32);
	// stw r30,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r30.u32);
	// stw r30,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8260E6D0:
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8260e6f0
	if (cr6.eq) goto loc_8260E6F0;
	// lwz r3,-28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -28);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260e6f0
	if (cr6.eq) goto loc_8260E6F0;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_8260E6F0:
	// stw r30,-28(r31)
	PPC_STORE_U32(r31.u32 + -28, r30.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r30,-20(r31)
	PPC_STORE_U32(r31.u32 + -20, r30.u32);
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// bne 0x8260e67c
	if (!cr0.eq) goto loc_8260E67C;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// stw r30,88(r28)
	PPC_STORE_U32(r28.u32 + 88, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260E710"))) PPC_WEAK_FUNC(sub_8260E710);
PPC_FUNC_IMPL(__imp__sub_8260E710) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8260E714"))) PPC_WEAK_FUNC(sub_8260E714);
PPC_FUNC_IMPL(__imp__sub_8260E714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E718"))) PPC_WEAK_FUNC(sub_8260E718);
PPC_FUNC_IMPL(__imp__sub_8260E718) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260e660
	sub_8260E660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260E718"))) PPC_WEAK_FUNC(sub_8260E718);
PPC_FUNC_IMPL(__imp__sub_8260E718) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8260E71C"))) PPC_WEAK_FUNC(sub_8260E71C);
PPC_FUNC_IMPL(__imp__sub_8260E71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E720"))) PPC_WEAK_FUNC(sub_8260E720);
PPC_FUNC_IMPL(__imp__sub_8260E720) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// li r24,0
	r24.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r29,r24
	r29.u64 = r24.u64;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
loc_8260E748:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x8314d46c
	__imp__NtCreateEvent(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x8260e794
	if (cr0.lt) goto loc_8260E794;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(r29.u32, 2, xer);
	// blt cr6,0x8260e748
	if (cr6.lt) goto loc_8260E748;
	// stw r25,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r24,84(r28)
	PPC_STORE_U32(r28.u32 + 84, r24.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9458
	return;
loc_8260E794:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260e660
	sub_8260E660(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
}

__attribute__((alias("__imp__sub_8260E7A0"))) PPC_WEAK_FUNC(sub_8260E7A0);
PPC_FUNC_IMPL(__imp__sub_8260E7A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260e78c
	// ERROR 8260E78C
	return;
}

__attribute__((alias("__imp__sub_8260E7A4"))) PPC_WEAK_FUNC(sub_8260E7A4);
PPC_FUNC_IMPL(__imp__sub_8260E7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E7A8"))) PPC_WEAK_FUNC(sub_8260E7A8);
PPC_FUNC_IMPL(__imp__sub_8260E7A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
}

__attribute__((alias("__imp__sub_8260E7BC"))) PPC_WEAK_FUNC(sub_8260E7BC);
PPC_FUNC_IMPL(__imp__sub_8260E7BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E7C0"))) PPC_WEAK_FUNC(sub_8260E7C0);
PPC_FUNC_IMPL(__imp__sub_8260E7C0) {
	PPC_FUNC_PROLOGUE();
	// mulli r3,r4,96
	ctx.r3.s64 = ctx.r4.s64 * 96;
}

__attribute__((alias("__imp__sub_8260E7C4"))) PPC_WEAK_FUNC(sub_8260E7C4);
PPC_FUNC_IMPL(__imp__sub_8260E7C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260E7C8"))) PPC_WEAK_FUNC(sub_8260E7C8);
PPC_FUNC_IMPL(__imp__sub_8260E7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x8314d46c
	__imp__NtCreateEvent(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8260e830
	if (cr0.lt) goto loc_8260E830;
	// li r11,0
	r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r10.u32);
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8260E830:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260E838"))) PPC_WEAK_FUNC(sub_8260E838);
PPC_FUNC_IMPL(__imp__sub_8260E838) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8260E83C"))) PPC_WEAK_FUNC(sub_8260E83C);
PPC_FUNC_IMPL(__imp__sub_8260E83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E840"))) PPC_WEAK_FUNC(sub_8260E840);
PPC_FUNC_IMPL(__imp__sub_8260E840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r28,r3,12
	r28.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// b 0x8260e88c
	goto loc_8260E88C;
loc_8260E86C:
	// lis r11,-2
	r11.s64 = -131072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,31072
	r11.u64 = r11.u64 | 31072;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8314d4ec
	__imp__KeDelayExecutionThread(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8260E88C:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8260e86c
	if (cr6.eq) goto loc_8260E86C;
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 * 96;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8260e8d0
	if (!cr6.eq) goto loc_8260E8D0;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_8260E8D0:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_8260E8DC:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8260e8dc
	if (!cr0.eq) goto loc_8260E8DC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8260e910
	if (!cr6.eq) goto loc_8260E910;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8314d4bc
	__imp__NtSetEvent(ctx, base);
loc_8260E910:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260E920"))) PPC_WEAK_FUNC(sub_8260E920);
PPC_FUNC_IMPL(__imp__sub_8260E920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8260E924"))) PPC_WEAK_FUNC(sub_8260E924);
PPC_FUNC_IMPL(__imp__sub_8260E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E928"))) PPC_WEAK_FUNC(sub_8260E928);
PPC_FUNC_IMPL(__imp__sub_8260E928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// bne cr6,0x8260e968
	if (!cr6.eq) goto loc_8260E968;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8314d61c
	__imp__NtWaitForSingleObjectEx(ctx, base);
loc_8260E968:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r29,r31,48
	r29.s64 = r31.s64 + 48;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8260e980
	if (!cr6.eq) goto loc_8260E980;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8260e9ec
	goto loc_8260E9EC;
loc_8260E980:
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 * 96;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8260e9b8
	if (!cr6.eq) goto loc_8260E9B8;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_8260E9B8:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
loc_8260E9C4:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r29
	reserved.u32 = *(uint32_t*)(base + r29.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r29
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r29.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8260e9c4
	if (!cr0.eq) goto loc_8260E9C4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8260E9EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8260E9F0"))) PPC_WEAK_FUNC(sub_8260E9F0);
PPC_FUNC_IMPL(__imp__sub_8260E9F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8260E9F4"))) PPC_WEAK_FUNC(sub_8260E9F4);
PPC_FUNC_IMPL(__imp__sub_8260E9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260E9F8"))) PPC_WEAK_FUNC(sub_8260E9F8);
PPC_FUNC_IMPL(__imp__sub_8260E9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bge cr6,0x8260ea3c
	if (!cr6.lt) goto loc_8260EA3C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,96
	ctx.r10.s64 = 96;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// divw r10,r9,r10
	ctx.r10.s32 = ctx.r9.s32 / ctx.r10.s32;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// divwu r9,r10,r8
	ctx.r9.u32 = ctx.r10.u32 / ctx.r8.u32;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mulli r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 * 96;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// blr 
	return;
loc_8260EA3C:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8260EA40"))) PPC_WEAK_FUNC(sub_8260EA40);
PPC_FUNC_IMPL(__imp__sub_8260EA40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260EA44"))) PPC_WEAK_FUNC(sub_8260EA44);
PPC_FUNC_IMPL(__imp__sub_8260EA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260EA48"))) PPC_WEAK_FUNC(sub_8260EA48);
PPC_FUNC_IMPL(__imp__sub_8260EA48) {
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
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt cr6,0x8260eaec
	if (cr6.lt) goto loc_8260EAEC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
loc_8260EA84:
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// li r6,96
	ctx.r6.s64 = 96;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// divw r10,r10,r6
	ctx.r10.s32 = ctx.r10.s32 / ctx.r6.s32;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// divw r5,r6,r11
	ctx.r5.s32 = ctx.r6.s32 / r11.s32;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mullw r5,r5,r11
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r11.s32);
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// mulli r10,r6,96
	ctx.r10.s64 = ctx.r6.s64 * 96;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// andc r6,r11,r5
	ctx.r6.u64 = r11.u64 & ~ctx.r5.u64;
	// twlgei r6,-1
	if (ctx.r6.u32 >= 4294967295) __builtin_debugtrap();
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r6,r30
	cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, xer);
	// beq cr6,0x8260ead8
	if (cr6.eq) goto loc_8260EAD8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// ble cr6,0x8260ea84
	if (!cr6.gt) goto loc_8260EA84;
loc_8260EAD8:
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// bgt cr6,0x8260eaec
	if (cr6.gt) goto loc_8260EAEC;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// subf r30,r7,r11
	r30.s64 = r11.s64 - ctx.r7.s64;
	// b 0x8260eb08
	goto loc_8260EB08;
loc_8260EAEC:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x8260eb04
	if (!cr6.eq) goto loc_8260EB04;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// subf r30,r8,r11
	r30.s64 = r11.s64 - ctx.r8.s64;
	// b 0x8260eb08
	goto loc_8260EB08;
loc_8260EB04:
	// lwz r30,64(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 64);
loc_8260EB08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8260eb30
	goto loc_8260EB30;
loc_8260EB14:
	// lis r11,-2
	r11.s64 = -131072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,31072
	r11.u64 = r11.u64 | 31072;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8314d4ec
	__imp__KeDelayExecutionThread(ctx, base);
loc_8260EB30:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8260eb14
	if (!cr6.gt) goto loc_8260EB14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260EB4C"))) PPC_WEAK_FUNC(sub_8260EB4C);
PPC_FUNC_IMPL(__imp__sub_8260EB4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8260EB50"))) PPC_WEAK_FUNC(sub_8260EB50);
PPC_FUNC_IMPL(__imp__sub_8260EB50) {
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
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260ec00
	if (cr6.eq) goto loc_8260EC00;
	// addi r28,r3,12
	r28.s64 = ctx.r3.s64 + 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// b 0x8260eba4
	goto loc_8260EBA4;
loc_8260EB88:
	// lis r11,-16
	r11.s64 = -1048576;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,48576
	r11.u64 = r11.u64 | 48576;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8314d4ec
	__imp__KeDelayExecutionThread(ctx, base);
loc_8260EBA4:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8260eb88
	if (cr6.gt) goto loc_8260EB88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8314d4bc
	__imp__NtSetEvent(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8260ebe4
	if (cr6.eq) goto loc_8260EBE4;
	// lis r11,-1526
	r11.s64 = -100007936;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,7936
	r11.u64 = r11.u64 | 7936;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8314d61c
	__imp__NtWaitForSingleObjectEx(ctx, base);
loc_8260EBE4:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
loc_8260EC00:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8260ec1c
	if (cr6.eq) goto loc_8260EC1C;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
loc_8260EC1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8260EC20"))) PPC_WEAK_FUNC(sub_8260EC20);
PPC_FUNC_IMPL(__imp__sub_8260EC20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8260EC24"))) PPC_WEAK_FUNC(sub_8260EC24);
PPC_FUNC_IMPL(__imp__sub_8260EC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260EC28"))) PPC_WEAK_FUNC(sub_8260EC28);
PPC_FUNC_IMPL(__imp__sub_8260EC28) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_8260EC2C"))) PPC_WEAK_FUNC(sub_8260EC2C);
PPC_FUNC_IMPL(__imp__sub_8260EC2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260eb50
	sub_8260EB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260EC30"))) PPC_WEAK_FUNC(sub_8260EC30);
PPC_FUNC_IMPL(__imp__sub_8260EC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
}

__attribute__((alias("__imp__sub_8260EC4C"))) PPC_WEAK_FUNC(sub_8260EC4C);
PPC_FUNC_IMPL(__imp__sub_8260EC4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260EC50"))) PPC_WEAK_FUNC(sub_8260EC50);
PPC_FUNC_IMPL(__imp__sub_8260EC50) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8260ecb4
	if (cr6.eq) goto loc_8260ECB4;
	// addi r30,r3,44
	r30.s64 = ctx.r3.s64 + 44;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d46c
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8260eca0
	if (!cr0.lt) goto loc_8260ECA0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8260ecbc
	goto loc_8260ECBC;
loc_8260ECA0:
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_8260ECB4:
	// stw r27,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260ECBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260ECC0"))) PPC_WEAK_FUNC(sub_8260ECC0);
PPC_FUNC_IMPL(__imp__sub_8260ECC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8260ECC4"))) PPC_WEAK_FUNC(sub_8260ECC4);
PPC_FUNC_IMPL(__imp__sub_8260ECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260ECC8"))) PPC_WEAK_FUNC(sub_8260ECC8);
PPC_FUNC_IMPL(__imp__sub_8260ECC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
loc_8260ECF0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8260ecf0
	if (!cr0.eq) goto loc_8260ECF0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x8260ed20
	if (!cr6.eq) goto loc_8260ED20;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8314d4cc
	__imp__NtClearEvent(ctx, base);
loc_8260ED20:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8260ED3C"))) PPC_WEAK_FUNC(sub_8260ED3C);
PPC_FUNC_IMPL(__imp__sub_8260ED3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260ED40"))) PPC_WEAK_FUNC(sub_8260ED40);
PPC_FUNC_IMPL(__imp__sub_8260ED40) {
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
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8314d61c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8260ED80"))) PPC_WEAK_FUNC(sub_8260ED80);
PPC_FUNC_IMPL(__imp__sub_8260ED80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260ED84"))) PPC_WEAK_FUNC(sub_8260ED84);
PPC_FUNC_IMPL(__imp__sub_8260ED84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260ED88"))) PPC_WEAK_FUNC(sub_8260ED88);
PPC_FUNC_IMPL(__imp__sub_8260ED88) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8260edf8
	if (!cr6.gt) goto loc_8260EDF8;
	// bl 0x8260ed40
	sub_8260ED40(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x8260edd8
	goto loc_8260EDD8;
loc_8260EDC0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x8260ede0
	if (cr6.eq) goto loc_8260EDE0;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_8260EDD8:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8260edc0
	if (!cr6.eq) goto loc_8260EDC0;
loc_8260EDE0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8260edf0
	if (cr6.eq) goto loc_8260EDF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8260EDF0:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8260EDF8:
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

__attribute__((alias("__imp__sub_8260EE0C"))) PPC_WEAK_FUNC(sub_8260EE0C);
PPC_FUNC_IMPL(__imp__sub_8260EE0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260EE10"))) PPC_WEAK_FUNC(sub_8260EE10);
PPC_FUNC_IMPL(__imp__sub_8260EE10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8260ee64
	if (!cr6.gt) goto loc_8260EE64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8260ee40
	goto loc_8260EE40;
loc_8260EE28:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x8260ee48
	if (cr6.eq) goto loc_8260EE48;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_8260EE40:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8260ee28
	if (!cr6.eq) goto loc_8260EE28;
loc_8260EE48:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8260ee64
	if (cr6.eq) goto loc_8260EE64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// rotlwi r11,r10,2
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// b 0x8260ee6c
	goto loc_8260EE6C;
loc_8260EE64:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260EE6C:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_8260EE70"))) PPC_WEAK_FUNC(sub_8260EE70);
PPC_FUNC_IMPL(__imp__sub_8260EE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260EE74"))) PPC_WEAK_FUNC(sub_8260EE74);
PPC_FUNC_IMPL(__imp__sub_8260EE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260EE78"))) PPC_WEAK_FUNC(sub_8260EE78);
PPC_FUNC_IMPL(__imp__sub_8260EE78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260eed4
	if (cr6.eq) goto loc_8260EED4;
	// bl 0x8260ed40
	sub_8260ED40(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8260eec0
	if (cr6.eq) goto loc_8260EEC0;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
loc_8260EEC0:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8260EED4:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8260eee8
	if (cr6.eq) goto loc_8260EEE8;
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
loc_8260EEE8:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_8260EF00"))) PPC_WEAK_FUNC(sub_8260EF00);
PPC_FUNC_IMPL(__imp__sub_8260EF00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260EF04"))) PPC_WEAK_FUNC(sub_8260EF04);
PPC_FUNC_IMPL(__imp__sub_8260EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260EF08"))) PPC_WEAK_FUNC(sub_8260EF08);
PPC_FUNC_IMPL(__imp__sub_8260EF08) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8260f028
	if (!cr6.gt) goto loc_8260F028;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8260ee10
	sub_8260EE10(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8260f028
	if (!cr0.eq) goto loc_8260F028;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260ed40
	sub_8260ED40(ctx, base);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r10,0,8,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00000;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r7,r10,26,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFFFF;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subfic r10,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r8.s64;
	// subf r30,r3,r9
	r30.s64 = ctx.r9.s64 - ctx.r3.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x8260f020
	if (cr6.gt) goto loc_8260F020;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x8260efc0
	if (!cr6.lt) goto loc_8260EFC0;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_8260EFA4:
	// lhz r11,4(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// subf r30,r11,r30
	r30.s64 = r30.s64 - r11.s64;
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// subf r11,r30,r10
	r11.s64 = ctx.r10.s64 - r30.s64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x8260efa4
	if (cr6.lt) goto loc_8260EFA4;
loc_8260EFC0:
	// cmplw cr6,r4,r3
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, xer);
	// beq cr6,0x8260efec
	if (cr6.eq) goto loc_8260EFEC;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8260efe8
	if (cr6.eq) goto loc_8260EFE8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x8260efec
	goto loc_8260EFEC;
loc_8260EFE8:
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_8260EFEC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r29,30,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0xFFFF;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// sth r10,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r10.u16);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_8260F020:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8260F028:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8260F02C"))) PPC_WEAK_FUNC(sub_8260F02C);
PPC_FUNC_IMPL(__imp__sub_8260F02C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8260F030"))) PPC_WEAK_FUNC(sub_8260F030);
PPC_FUNC_IMPL(__imp__sub_8260F030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r28,-1
	r28.s64 = -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8260f0dc
	if (!cr6.gt) goto loc_8260F0DC;
	// bl 0x8260ecc8
	sub_8260ECC8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// b 0x8260f080
	goto loc_8260F080;
loc_8260F068:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x8260f088
	if (cr6.eq) goto loc_8260F088;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_8260F080:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8260f068
	if (!cr6.eq) goto loc_8260F068;
loc_8260F088:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8260f0a4
	if (cr6.eq) goto loc_8260F0A4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x8260b660
	sub_8260B660(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_8260F0A4:
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
loc_8260F0A8:
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
	// bne 0x8260f0a8
	if (!cr0.eq) goto loc_8260F0A8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8260f0dc
	if (!cr6.eq) goto loc_8260F0DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8314d4bc
	__imp__NtSetEvent(ctx, base);
loc_8260F0DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260F0E4"))) PPC_WEAK_FUNC(sub_8260F0E4);
PPC_FUNC_IMPL(__imp__sub_8260F0E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8260F0E8"))) PPC_WEAK_FUNC(sub_8260F0E8);
PPC_FUNC_IMPL(__imp__sub_8260F0E8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8260F0E8"))) PPC_WEAK_FUNC(sub_8260F0E8);
PPC_FUNC_IMPL(__imp__sub_8260F0E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260ee78
	sub_8260EE78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F0EC"))) PPC_WEAK_FUNC(sub_8260F0EC);
PPC_FUNC_IMPL(__imp__sub_8260F0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F0F0"))) PPC_WEAK_FUNC(sub_8260F0F0);
PPC_FUNC_IMPL(__imp__sub_8260F0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
}

__attribute__((alias("__imp__sub_8260F110"))) PPC_WEAK_FUNC(sub_8260F110);
PPC_FUNC_IMPL(__imp__sub_8260F110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260F114"))) PPC_WEAK_FUNC(sub_8260F114);
PPC_FUNC_IMPL(__imp__sub_8260F114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F118"))) PPC_WEAK_FUNC(sub_8260F118);
PPC_FUNC_IMPL(__imp__sub_8260F118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,88
	r11.s64 = ctx.r4.s64 * 88;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
}

__attribute__((alias("__imp__sub_8260F120"))) PPC_WEAK_FUNC(sub_8260F120);
PPC_FUNC_IMPL(__imp__sub_8260F120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260F124"))) PPC_WEAK_FUNC(sub_8260F124);
PPC_FUNC_IMPL(__imp__sub_8260F124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F128"))) PPC_WEAK_FUNC(sub_8260F128);
PPC_FUNC_IMPL(__imp__sub_8260F128) {
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
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8260f180
	if (cr6.eq) goto loc_8260F180;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
loc_8260F16C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r11,r11,88
	r11.s64 = r11.s64 + 88;
	// bdnz 0x8260f16c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260F16C;
loc_8260F180:
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
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

__attribute__((alias("__imp__sub_8260F1A8"))) PPC_WEAK_FUNC(sub_8260F1A8);
PPC_FUNC_IMPL(__imp__sub_8260F1A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260F1AC"))) PPC_WEAK_FUNC(sub_8260F1AC);
PPC_FUNC_IMPL(__imp__sub_8260F1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F1B0"))) PPC_WEAK_FUNC(sub_8260F1B0);
PPC_FUNC_IMPL(__imp__sub_8260F1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// bl 0x8314d46c
	__imp__NtCreateEvent(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260f3a8
	if (cr0.lt) goto loc_8260F3A8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8314d46c
	__imp__NtCreateEvent(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8260f224
	if (!cr0.lt) goto loc_8260F224;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8260f3a8
	goto loc_8260F3A8;
loc_8260F224:
	// addi r21,r31,20
	r21.s64 = r31.s64 + 20;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x8260f260
	if (!cr6.eq) goto loc_8260F260;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// lis r29,-16384
	r29.s64 = -1073741824;
	// li r11,0
	r11.s64 = 0;
	// ori r29,r29,287
	r29.u64 = r29.u64 | 287;
	// b 0x8260f398
	goto loc_8260F398;
loc_8260F260:
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r6,r7,5
	ctx.r6.u64 = ctx.r7.u32 & 0x7FFFFFF;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// divwu r8,r6,r8
	ctx.r8.u32 = ctx.r6.u32 / ctx.r8.u32;
	// divwu r6,r8,r9
	ctx.r6.u32 = ctx.r8.u32 / ctx.r9.u32;
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mulli r30,r8,88
	r30.s64 = ctx.r8.s64 * 88;
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmpwi cr6,r6,-1
	cr6.compare<int32_t>(ctx.r6.s32, -1, xer);
	// beq cr6,0x8260f2c4
	if (cr6.eq) goto loc_8260F2C4;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 0);
loc_8260F29C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r5,r8,r9
	ctx.r5.u32 = ctx.r8.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// subf r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// mulli r30,r8,88
	r30.s64 = ctx.r8.s64 * 88;
	// lwzx r5,r6,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + r30.u32);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x8260f29c
	if (!cr6.eq) goto loc_8260F29C;
loc_8260F2C4:
	// stwx r7,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r7.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// li r29,1
	r29.s64 = 1;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r27,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r27.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r26,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r26.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r25,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r25.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r24,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r24.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r23,40(r11)
	PPC_STORE_U32(r11.u32 + 40, r23.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// std r9,48(r11)
	PPC_STORE_U64(r11.u32 + 48, ctx.r9.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r29,84(r11)
	PPC_STORE_U32(r11.u32 + 84, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x8314d2cc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bne 0x8260f380
	if (!cr0.eq) goto loc_8260F380;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
loc_8260F380:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_8260F398:
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_8260F3A8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8260F3AC"))) PPC_WEAK_FUNC(sub_8260F3AC);
PPC_FUNC_IMPL(__imp__sub_8260F3AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8260F3B0"))) PPC_WEAK_FUNC(sub_8260F3B0);
PPC_FUNC_IMPL(__imp__sub_8260F3B0) {
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
	// addi r28,r3,20
	r28.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r9,r29,5
	ctx.r9.u64 = r29.u32 & 0x7FFFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// divwu r9,r9,r8
	ctx.r9.u32 = ctx.r9.u32 / ctx.r8.u32;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// divwu r8,r9,r11
	ctx.r8.u32 = ctx.r9.u32 / r11.u32;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// subf r31,r8,r9
	r31.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x8260f434
	if (cr6.eq) goto loc_8260F434;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_8260F404:
	// mulli r8,r31,88
	ctx.r8.s64 = r31.s64 * 88;
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// beq cr6,0x8260f434
	if (cr6.eq) goto loc_8260F434;
	// addi r8,r31,1
	ctx.r8.s64 = r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// divwu r7,r8,r11
	ctx.r7.u32 = ctx.r8.u32 / r11.u32;
	// twllei r11,0
	if (r11.u32 <= 0) __builtin_debugtrap();
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// subf r31,r7,r8
	r31.s64 = ctx.r8.s64 - ctx.r7.s64;
	// blt cr6,0x8260f404
	if (cr6.lt) goto loc_8260F404;
loc_8260F434:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mulli r11,r31,88
	r11.s64 = r31.s64 * 88;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r29
	cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, xer);
	// bne cr6,0x8260f478
	if (!cr6.eq) goto loc_8260F478;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8260f46c
	if (!cr6.eq) goto loc_8260F46C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x8260f46c
	if (!cr6.eq) goto loc_8260F46C;
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_8260F46C:
	// mulli r11,r31,88
	r11.s64 = r31.s64 * 88;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8260f47c
	goto loc_8260F47C;
loc_8260F478:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260F47C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260F480"))) PPC_WEAK_FUNC(sub_8260F480);
PPC_FUNC_IMPL(__imp__sub_8260F480) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8260F484"))) PPC_WEAK_FUNC(sub_8260F484);
PPC_FUNC_IMPL(__imp__sub_8260F484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F488"))) PPC_WEAK_FUNC(sub_8260F488);
PPC_FUNC_IMPL(__imp__sub_8260F488) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260f538
	if (cr6.eq) goto loc_8260F538;
	// addi r27,r3,20
	r27.s64 = ctx.r3.s64 + 20;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8260f530
	if (!cr6.gt) goto loc_8260F530;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8260f530
	if (!cr6.gt) goto loc_8260F530;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8260F4D4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x8260f51c
	if (cr6.eq) goto loc_8260F51C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
loc_8260F51C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,88
	r30.s64 = r30.s64 + 88;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8260f4d4
	if (cr6.lt) goto loc_8260F4D4;
loc_8260F530:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8260F538:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8260f548
	if (cr6.eq) goto loc_8260F548;
	// stw r28,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r28.u32);
loc_8260F548:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8260f564
	if (cr6.eq) goto loc_8260F564;
	// lis r4,9347
	ctx.r4.s64 = 612564992;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
	// stw r28,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r28.u32);
loc_8260F564:
	// stw r28,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260F578"))) PPC_WEAK_FUNC(sub_8260F578);
PPC_FUNC_IMPL(__imp__sub_8260F578) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8260F57C"))) PPC_WEAK_FUNC(sub_8260F57C);
PPC_FUNC_IMPL(__imp__sub_8260F57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F580"))) PPC_WEAK_FUNC(sub_8260F580);
PPC_FUNC_IMPL(__imp__sub_8260F580) {
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
	// addi r27,r3,20
	r27.s64 = ctx.r3.s64 + 20;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8260f3b0
	sub_8260F3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8260f5d8
	if (!cr0.eq) goto loc_8260F5D8;
	// lis r31,-16384
	r31.s64 = -1073741824;
	// ori r31,r31,15
	r31.u64 = r31.u64 | 15;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_8260F5D8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8260f5ec
	if (cr6.eq) goto loc_8260F5EC;
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x8260f5fc
	goto loc_8260F5FC;
loc_8260F5EC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 * 88;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
loc_8260F5FC:
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// bne 0x8260f644
	if (!cr0.eq) goto loc_8260F644;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8314d58c
	__imp__NtClose(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r11,1
	r11.s64 = 1;
loc_8260F644:
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x8260f65c
	if (cr6.eq) goto loc_8260F65C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r31,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r31.u32);
loc_8260F65C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260f6a0
	if (cr6.eq) goto loc_8260F6A0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r11,r10,-4
	r11.s64 = ctx.r10.s64 + -4;
loc_8260F670:
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r8,88
	ctx.r8.s64 = 88;
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// li r7,-1
	ctx.r7.s64 = -1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// mulli r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 * 88;
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,12(r29)
	PPC_STORE_U32(r29.u32 + 12, ctx.r10.u32);
	// bdnz 0x8260f670
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8260F670;
loc_8260F6A0:
	// mr r31,r28
	r31.u64 = r28.u64;
}

__attribute__((alias("__imp__sub_8260F6A4"))) PPC_WEAK_FUNC(sub_8260F6A4);
PPC_FUNC_IMPL(__imp__sub_8260F6A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260f5c4
	// ERROR 8260F5C4
	return;
}

__attribute__((alias("__imp__sub_8260F6A8"))) PPC_WEAK_FUNC(sub_8260F6A8);
PPC_FUNC_IMPL(__imp__sub_8260F6A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8260f3b0
	sub_8260F3B0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x8260f814
	if (cr0.eq) goto loc_8260F814;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x8260f81c
	if (cr0.lt) goto loc_8260F81C;
	// addi r26,r31,20
	r26.s64 = r31.s64 + 20;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x8260f73c
	if (!cr6.eq) goto loc_8260F73C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r27,r27,287
	r27.u64 = r27.u64 | 287;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8260f808
	goto loc_8260F808;
loc_8260F73C:
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r29,5
	r11.u64 = r29.u32 & 0x7FFFFFF;
	// li r5,88
	ctx.r5.s64 = 88;
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// subf r9,r10,r28
	ctx.r9.s64 = r28.s64 - ctx.r10.s64;
	// divwu r6,r11,r7
	ctx.r6.u32 = r11.u32 / ctx.r7.u32;
	// divw r9,r9,r5
	ctx.r9.s32 = ctx.r9.s32 / ctx.r5.s32;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r6,r6,r11
	ctx.r6.s64 = r11.s64 - ctx.r6.s64;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// mulli r11,r6,88
	r11.s64 = ctx.r6.s64 * 88;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x8260f7a8
	if (cr6.eq) goto loc_8260F7A8;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8260F780:
	// addi r11,r6,1
	r11.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// divwu r6,r11,r7
	ctx.r6.u32 = r11.u32 / ctx.r7.u32;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// subf r6,r6,r11
	ctx.r6.s64 = r11.s64 - ctx.r6.s64;
	// mulli r11,r6,88
	r11.s64 = ctx.r6.s64 * 88;
	// lwzx r4,r5,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x8260f780
	if (!cr6.eq) goto loc_8260F780;
loc_8260F7A8:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,-1
	ctx.r5.s64 = -1;
	// mulli r7,r9,88
	ctx.r7.s64 = ctx.r9.s64 * 88;
	// stwx r6,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r9,r10,84
	ctx.r9.s64 = ctx.r10.s64 + 84;
	// lwz r9,84(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
loc_8260F808:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8260f81c
	goto loc_8260F81C;
loc_8260F814:
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,549
	r27.u64 = r27.u64 | 549;
loc_8260F81C:
	// stw r30,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8260F828"))) PPC_WEAK_FUNC(sub_8260F828);
PPC_FUNC_IMPL(__imp__sub_8260F828) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8260F82C"))) PPC_WEAK_FUNC(sub_8260F82C);
PPC_FUNC_IMPL(__imp__sub_8260F82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F830"))) PPC_WEAK_FUNC(sub_8260F830);
PPC_FUNC_IMPL(__imp__sub_8260F830) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8260F830"))) PPC_WEAK_FUNC(sub_8260F830);
PPC_FUNC_IMPL(__imp__sub_8260F830) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260f488
	sub_8260F488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8260F834"))) PPC_WEAK_FUNC(sub_8260F834);
PPC_FUNC_IMPL(__imp__sub_8260F834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F838"))) PPC_WEAK_FUNC(sub_8260F838);
PPC_FUNC_IMPL(__imp__sub_8260F838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,-32750
	ctx.r4.s64 = -2146304000;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r31,-13640(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -13640);
	// li r7,7
	ctx.r7.s64 = 7;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x8260f8b4
	if (cr0.lt) goto loc_8260F8B4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260F8B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8260F8BC"))) PPC_WEAK_FUNC(sub_8260F8BC);
PPC_FUNC_IMPL(__imp__sub_8260F8BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8260F8C0"))) PPC_WEAK_FUNC(sub_8260F8C0);
PPC_FUNC_IMPL(__imp__sub_8260F8C0) {
	PPC_FUNC_PROLOGUE();
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
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8260f968
	sub_8260F968(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8260F8F8"))) PPC_WEAK_FUNC(sub_8260F8F8);
PPC_FUNC_IMPL(__imp__sub_8260F8F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260F8FC"))) PPC_WEAK_FUNC(sub_8260F8FC);
PPC_FUNC_IMPL(__imp__sub_8260F8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F900"))) PPC_WEAK_FUNC(sub_8260F900);
PPC_FUNC_IMPL(__imp__sub_8260F900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r7,27
	ctx.r7.s64 = 27;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r31,2
	r31.s64 = 2;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260f94c
	if (cr0.lt) goto loc_8260F94C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r31,r11,31
	r31.u64 = r11.u32 & 0x1;
loc_8260F94C:
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

__attribute__((alias("__imp__sub_8260F960"))) PPC_WEAK_FUNC(sub_8260F960);
PPC_FUNC_IMPL(__imp__sub_8260F960) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260F964"))) PPC_WEAK_FUNC(sub_8260F964);
PPC_FUNC_IMPL(__imp__sub_8260F964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260F968"))) PPC_WEAK_FUNC(sub_8260F968);
PPC_FUNC_IMPL(__imp__sub_8260F968) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lwz r28,340(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r19,348(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// li r17,-1
	r17.s64 = -1;
	// lis r8,-32750
	ctx.r8.s64 = -2146304000;
	// li r11,0
	r11.s64 = 0;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r17.u32);
	// lis r21,-16384
	r21.s64 = -1073741824;
	// lwz r31,-13640(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13640);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// rlwinm. r9,r28,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// ori r29,r8,137
	r29.u64 = ctx.r8.u64 | 137;
	// ori r21,r21,1
	r21.u64 = r21.u64 | 1;
	// bne 0x8260fba0
	if (!cr0.eq) goto loc_8260FBA0;
	// cmplwi cr6,r23,2
	cr6.compare<uint32_t>(r23.u32, 2, xer);
	// beq cr6,0x8260fba0
	if (cr6.eq) goto loc_8260FBA0;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260fa20
	if (cr6.eq) goto loc_8260FA20;
	// rlwinm. r10,r28,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq 0x8260f9f8
	if (cr0.eq) goto loc_8260F9F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_8260F9F8:
	// rlwinm. r10,r28,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8260fa04
	if (!cr0.eq) goto loc_8260FA04;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
loc_8260FA04:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r4,4(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r3,r10,-27156
	ctx.r3.s64 = ctx.r10.s64 + -27156;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
loc_8260FA20:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// or r4,r27,r29
	ctx.r4.u64 = r27.u64 | r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8260fa6c
	if (cr6.eq) goto loc_8260FA6C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// rlwimi r6,r30,3,28,28
	ctx.r6.u64 = (__builtin_rotateleft32(r30.u32, 3) & 0x8) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF7);
	// ori r9,r26,1
	ctx.r9.u64 = r26.u64 | 1;
	// rlwimi r6,r30,3,26,26
	ctx.r6.u64 = (__builtin_rotateleft32(r30.u32, 3) & 0x20) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFDF);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8260fa8c
	goto loc_8260FA8C;
loc_8260FA6C:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// ori r7,r26,1
	ctx.r7.u64 = r26.u64 | 1;
	// rlwimi r8,r30,3,28,28
	ctx.r8.u64 = (__builtin_rotateleft32(r30.u32, 3) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// rlwimi r8,r30,3,26,26
	ctx.r8.u64 = (__builtin_rotateleft32(r30.u32, 3) & 0x20) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFDF);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260FA8C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260fad8
	if (cr6.lt) goto loc_8260FAD8;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8260f1b0
	sub_8260F1B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8260fad8
	if (!cr0.lt) goto loc_8260FAD8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260FAD8:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260fb14
	if (cr6.eq) goto loc_8260FB14;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// blt cr6,0x8260fb14
	if (cr6.lt) goto loc_8260FB14;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8260fb00
	if (cr6.lt) goto loc_8260FB00;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8260fb04
	goto loc_8260FB04;
loc_8260FB00:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
loc_8260FB04:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260FB14:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8260fb94
	if (cr6.lt) goto loc_8260FB94;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8260fb3c
	if (!cr6.eq) goto loc_8260FB3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8260f900
	sub_8260F900(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x8260fb80
	if (!cr6.eq) goto loc_8260FB80;
loc_8260FB3C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260ae08
	sub_8260AE08(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x8260fb6c
	if (!cr0.lt) goto loc_8260FB6C;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8260b260
	sub_8260B260(ctx, base);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// b 0x8260fb8c
	goto loc_8260FB8C;
loc_8260FB6C:
	// lis r11,4085
	r11.s64 = 267714560;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ori r11,r11,4845
	r11.u64 = r11.u64 | 4845;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x8260fb84
	goto loc_8260FB84;
loc_8260FB80:
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
loc_8260FB84:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8260FB8C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x8260fba8
	if (!cr6.lt) goto loc_8260FBA8;
loc_8260FB94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8260FB98:
	// stw r17,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r17.u32);
	// b 0x8260fc58
	goto loc_8260FC58;
loc_8260FBA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8260fbb0
	goto loc_8260FBB0;
loc_8260FBA8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8260FBB0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8260fbc0
	if (cr6.eq) goto loc_8260FBC0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8260fc50
	goto loc_8260FC50;
loc_8260FBC0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8260fbd8
	if (cr6.eq) goto loc_8260FBD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8260b260
	sub_8260B260(ctx, base);
	// b 0x8260fbf0
	goto loc_8260FBF0;
loc_8260FBD8:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8260fbf0
	if (cr6.eq) goto loc_8260FBF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260FBF0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// or r4,r27,r29
	ctx.r4.u64 = r27.u64 | r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq cr6,0x8260fc30
	if (cr6.eq) goto loc_8260FC30;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// ori r9,r26,1
	ctx.r9.u64 = r26.u64 | 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8260fc44
	goto loc_8260FC44;
loc_8260FC30:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// ori r7,r26,1
	ctx.r7.u64 = r26.u64 | 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260FC44:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8260fb98
	if (cr6.lt) goto loc_8260FB98;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_8260FC50:
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8260FC58:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8260FC5C"))) PPC_WEAK_FUNC(sub_8260FC5C);
PPC_FUNC_IMPL(__imp__sub_8260FC5C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_8260FC60"))) PPC_WEAK_FUNC(sub_8260FC60);
PPC_FUNC_IMPL(__imp__sub_8260FC60) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// li r31,1
	r31.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8260f968
	sub_8260F968(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8260FC94"))) PPC_WEAK_FUNC(sub_8260FC94);
PPC_FUNC_IMPL(__imp__sub_8260FC94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8260FC98"))) PPC_WEAK_FUNC(sub_8260FC98);
PPC_FUNC_IMPL(__imp__sub_8260FC98) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r30,-13640(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -13640);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x8260f3b0
	sub_8260F3B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x8260fd9c
	if (cr0.eq) goto loc_8260FD9C;
	// cmpwi cr6,r27,14
	cr6.compare<int32_t>(r27.s32, 14, xer);
	// bne cr6,0x8260fd18
	if (!cr6.eq) goto loc_8260FD18;
	// ld r31,0(r28)
	r31.u64 = PPC_LOAD_U64(r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rotlwi r5,r31,0
	ctx.r5.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8260ad68
	sub_8260AD68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8260fd0c
	if (!cr0.eq) goto loc_8260FD0C;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x8260fdc0
	goto loc_8260FDC0;
loc_8260FD0C:
	// std r31,48(r29)
	PPC_STORE_U64(r29.u32 + 48, r31.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8260fdc0
	goto loc_8260FDC0;
loc_8260FD18:
	// cmpwi cr6,r27,19
	cr6.compare<int32_t>(r27.s32, 19, xer);
	// beq cr6,0x8260fd98
	if (cr6.eq) goto loc_8260FD98;
	// cmpwi cr6,r27,20
	cr6.compare<int32_t>(r27.s32, 20, xer);
	// beq cr6,0x8260fd98
	if (cr6.eq) goto loc_8260FD98;
	// cmpwi cr6,r27,28
	cr6.compare<int32_t>(r27.s32, 28, xer);
	// beq cr6,0x8260fd98
	if (cr6.eq) goto loc_8260FD98;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(r27.s32, 5, xer);
	// beq cr6,0x8260fd40
	if (cr6.eq) goto loc_8260FD40;
	// cmpwi cr6,r27,34
	cr6.compare<int32_t>(r27.s32, 34, xer);
	// bne cr6,0x8260fd98
	if (!cr6.eq) goto loc_8260FD98;
loc_8260FD40:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260fdc0
	if (cr0.lt) goto loc_8260FDC0;
	// cmpwi cr6,r27,5
	cr6.compare<int32_t>(r27.s32, 5, xer);
	// bne cr6,0x8260fd84
	if (!cr6.eq) goto loc_8260FD84;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r28)
	PPC_STORE_U64(r28.u32 + 0, r11.u64);
	// std r11,8(r28)
	PPC_STORE_U64(r28.u32 + 8, r11.u64);
	// b 0x8260fd98
	goto loc_8260FD98;
loc_8260FD84:
	// cmpwi cr6,r27,34
	cr6.compare<int32_t>(r27.s32, 34, xer);
	// bne cr6,0x8260fd98
	if (!cr6.eq) goto loc_8260FD98;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,32(r28)
	PPC_STORE_U64(r28.u32 + 32, r11.u64);
	// std r11,40(r28)
	PPC_STORE_U64(r28.u32 + 40, r11.u64);
loc_8260FD98:
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_8260FD9C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260FDC0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8260FDC4"))) PPC_WEAK_FUNC(sub_8260FDC4);
PPC_FUNC_IMPL(__imp__sub_8260FDC4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8260FDC8"))) PPC_WEAK_FUNC(sub_8260FDC8);
PPC_FUNC_IMPL(__imp__sub_8260FDC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r30,-13640(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -13640);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x8260f3b0
	sub_8260F3B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8260fe0c
	if (cr0.eq) goto loc_8260FE0C;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8260FE0C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8260FE34"))) PPC_WEAK_FUNC(sub_8260FE34);
PPC_FUNC_IMPL(__imp__sub_8260FE34) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8260FE38"))) PPC_WEAK_FUNC(sub_8260FE38);
PPC_FUNC_IMPL(__imp__sub_8260FE38) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r31,-13640(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -13640);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8260f3b0
	sub_8260F3B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8260fef4
	if (cr0.eq) goto loc_8260FEF4;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// beq cr6,0x8260ff3c
	if (cr6.eq) goto loc_8260FF3C;
	// cmpwi cr6,r29,34
	cr6.compare<int32_t>(r29.s32, 34, xer);
	// beq cr6,0x8260ff3c
	if (cr6.eq) goto loc_8260FF3C;
	// cmpwi cr6,r29,19
	cr6.compare<int32_t>(r29.s32, 19, xer);
	// beq cr6,0x8260ff20
	if (cr6.eq) goto loc_8260FF20;
	// cmpwi cr6,r29,20
	cr6.compare<int32_t>(r29.s32, 20, xer);
	// beq cr6,0x8260ff20
	if (cr6.eq) goto loc_8260FF20;
	// cmpwi cr6,r29,14
	cr6.compare<int32_t>(r29.s32, 14, xer);
	// bne cr6,0x8260feac
	if (!cr6.eq) goto loc_8260FEAC;
	// ld r11,48(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8260ff34
	goto loc_8260FF34;
loc_8260FEAC:
	// cmpwi cr6,r29,28
	cr6.compare<int32_t>(r29.s32, 28, xer);
	// bne cr6,0x8260fef0
	if (!cr6.eq) goto loc_8260FEF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260ff18
	if (cr0.lt) goto loc_8260FF18;
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// sth r10,8(r27)
	PPC_STORE_U16(r27.u32 + 8, ctx.r10.u16);
	// b 0x8260ff34
	goto loc_8260FF34;
loc_8260FEF0:
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_8260FEF4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8260FF18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8260FF20:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260aeb0
	sub_8260AEB0(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_8260FF34:
	// std r11,0(r27)
	PPC_STORE_U64(r27.u32 + 0, r11.u64);
	// b 0x8260ff18
	goto loc_8260FF18;
loc_8260FF3C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8260ff18
	if (cr0.lt) goto loc_8260FF18;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260aeb0
	sub_8260AEB0(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// bne cr6,0x8260ff90
	if (!cr6.eq) goto loc_8260FF90;
	// std r11,0(r27)
	PPC_STORE_U64(r27.u32 + 0, r11.u64);
	// std r11,8(r27)
	PPC_STORE_U64(r27.u32 + 8, r11.u64);
	// b 0x8260ff18
	goto loc_8260FF18;
loc_8260FF90:
	// std r11,32(r27)
	PPC_STORE_U64(r27.u32 + 32, r11.u64);
	// std r11,40(r27)
	PPC_STORE_U64(r27.u32 + 40, r11.u64);
}

__attribute__((alias("__imp__sub_8260FF98"))) PPC_WEAK_FUNC(sub_8260FF98);
PPC_FUNC_IMPL(__imp__sub_8260FF98) {
	PPC_FUNC_PROLOGUE();
	// b 0x8260ff18
	// ERROR 8260FF18
	return;
}

__attribute__((alias("__imp__sub_8260FF9C"))) PPC_WEAK_FUNC(sub_8260FF9C);
PPC_FUNC_IMPL(__imp__sub_8260FF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8260FFA0"))) PPC_WEAK_FUNC(sub_8260FFA0);
PPC_FUNC_IMPL(__imp__sub_8260FFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,532(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// lwz r29,-13640(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + -13640);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x826100b4
	if (cr0.lt) goto loc_826100B4;
	// lwz r27,60(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r31,0
	r31.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stbx r31,r27,r11
	PPC_STORE_U8(r27.u32 + r11.u32, r31.u8);
	// bl 0x8314d3ac
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,64
	r11.s64 = 64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lis r4,-32750
	ctx.r4.s64 = -2146304000;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// ori r4,r4,137
	ctx.r4.u64 = ctx.r4.u64 | 137;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x826100b4
	if (cr0.lt) goto loc_826100B4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r29,80
	ctx.r3.s64 = r29.s64 + 80;
	// bl 0x8260f3b0
	sub_8260F3B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826100a4
	if (cr0.eq) goto loc_826100A4;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,8
	ctx.r6.s64 = 8;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x826100a4
	if (cr0.lt) goto loc_826100A4;
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r11,40(r30)
	PPC_STORE_U64(r30.u32 + 40, r11.u64);
loc_826100A4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826100B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
}

__attribute__((alias("__imp__sub_826100BC"))) PPC_WEAK_FUNC(sub_826100BC);
PPC_FUNC_IMPL(__imp__sub_826100BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826100C0"))) PPC_WEAK_FUNC(sub_826100C0);
PPC_FUNC_IMPL(__imp__sub_826100C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r31,-13640(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -13640);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x8260f3b0
	sub_8260F3B0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// beq 0x82610138
	if (cr0.eq) goto loc_82610138;
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8260afa8
	sub_8260AFA8(ctx, base);
	// b 0x82610164
	goto loc_82610164;
loc_82610138:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82610164:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82610168"))) PPC_WEAK_FUNC(sub_82610168);
PPC_FUNC_IMPL(__imp__sub_82610168) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8261016C"))) PPC_WEAK_FUNC(sub_8261016C);
PPC_FUNC_IMPL(__imp__sub_8261016C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610170"))) PPC_WEAK_FUNC(sub_82610170);
PPC_FUNC_IMPL(__imp__sub_82610170) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r31,-13640(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -13640);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// bl 0x8260f3b0
	sub_8260F3B0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// beq 0x82610200
	if (cr0.eq) goto loc_82610200;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x826101f0
	if (!cr6.eq) goto loc_826101F0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8260afa8
	sub_8260AFA8(ctx, base);
	// b 0x8261022c
	goto loc_8261022C;
loc_826101F0:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8260afa8
	sub_8260AFA8(ctx, base);
	// b 0x8261022c
	goto loc_8261022C;
loc_82610200:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261022C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82610230"))) PPC_WEAK_FUNC(sub_82610230);
PPC_FUNC_IMPL(__imp__sub_82610230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82610234"))) PPC_WEAK_FUNC(sub_82610234);
PPC_FUNC_IMPL(__imp__sub_82610234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82610238"))) PPC_WEAK_FUNC(sub_82610238);
PPC_FUNC_IMPL(__imp__sub_82610238) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r30,-13640(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + -13640);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// bl 0x8260f6a8
	sub_8260F6A8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826102a8
	if (!cr6.eq) goto loc_826102A8;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,287
	ctx.r10.u64 = ctx.r10.u64 | 287;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x826102a8
	if (cr6.eq) goto loc_826102A8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82610328
	goto loc_82610328;
loc_826102A8:
	// clrlwi. r10,r29,31
	ctx.r10.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826102f0
	if (cr0.eq) goto loc_826102F0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x826102f0
	if (!cr0.lt) goto loc_826102F0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826102e4
	if (cr6.eq) goto loc_826102E4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826102E4:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x82610328
	goto loc_82610328;
loc_826102F0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82610324
	if (cr6.eq) goto loc_82610324;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8261030c
	if (cr6.eq) goto loc_8261030C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x82610324
	goto loc_82610324;
loc_8261030C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826102e4
	if (cr0.lt) goto loc_826102E4;
loc_82610324:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_82610328:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8261032C"))) PPC_WEAK_FUNC(sub_8261032C);
PPC_FUNC_IMPL(__imp__sub_8261032C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82610330"))) PPC_WEAK_FUNC(sub_82610330);
PPC_FUNC_IMPL(__imp__sub_82610330) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r31,-13640(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -13640);
	// addi r28,r31,80
	r28.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260f3b0
	sub_8260F3B0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x826103f8
	if (cr0.eq) goto loc_826103F8;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lis r27,-16384
	r27.s64 = -1073741824;
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826103a8
	if (cr6.eq) goto loc_826103A8;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// mtctr r11
	ctr.u64 = r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r9,-27156
	ctx.r3.s64 = ctx.r9.s64 + -27156;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_826103A8:
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x8260ea48
	sub_8260EA48(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x8260ed88
	sub_8260ED88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8260f580
	sub_8260F580(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826103f0
	if (cr6.eq) goto loc_826103F0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x826103f0
	if (cr6.lt) goto loc_826103F0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826103F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8261040c
	goto loc_8261040C;
loc_826103F8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8261040C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82610410"))) PPC_WEAK_FUNC(sub_82610410);
PPC_FUNC_IMPL(__imp__sub_82610410) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

