#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82658B94"))) PPC_WEAK_FUNC(sub_82658B94);
PPC_FUNC_IMPL(__imp__sub_82658B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658B98"))) PPC_WEAK_FUNC(sub_82658B98);
PPC_FUNC_IMPL(__imp__sub_82658B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82658BA8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82658c00
	if (!cr6.eq) goto loc_82658C00;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82658c00
	if (!cr6.gt) goto loc_82658C00;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82658BF0:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82658bf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82658BF0;
loc_82658C00:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82658ba8
	if (!cr0.lt) goto loc_82658BA8;
}

__attribute__((alias("__imp__sub_82658C0C"))) PPC_WEAK_FUNC(sub_82658C0C);
PPC_FUNC_IMPL(__imp__sub_82658C0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82658C10"))) PPC_WEAK_FUNC(sub_82658C10);
PPC_FUNC_IMPL(__imp__sub_82658C10) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,288
	r28.s64 = ctx.r3.s64 + 288;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82658cd4
	if (cr0.lt) goto loc_82658CD4;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16996
	r24.s64 = ctx.r10.s64 + 16996;
loc_82658C44:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82658cc8
	if (cr6.eq) goto loc_82658CC8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82658c84
	if (!cr6.lt) goto loc_82658C84;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82658C84:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82658cc8
	if (!cr6.lt) goto loc_82658CC8;
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
loc_82658CC8:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82658c44
	if (!cr0.lt) goto loc_82658C44;
loc_82658CD4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82658CE0"))) PPC_WEAK_FUNC(sub_82658CE0);
PPC_FUNC_IMPL(__imp__sub_82658CE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82658CE4"))) PPC_WEAK_FUNC(sub_82658CE4);
PPC_FUNC_IMPL(__imp__sub_82658CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658CE8"))) PPC_WEAK_FUNC(sub_82658CE8);
PPC_FUNC_IMPL(__imp__sub_82658CE8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 292);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,288
	r28.s64 = ctx.r3.s64 + 288;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82658dac
	if (cr0.lt) goto loc_82658DAC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,17008
	r24.s64 = ctx.r10.s64 + 17008;
loc_82658D1C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82658da0
	if (cr6.eq) goto loc_82658DA0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82658d5c
	if (!cr6.lt) goto loc_82658D5C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82658D5C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82658da0
	if (!cr6.lt) goto loc_82658DA0;
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
loc_82658DA0:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82658d1c
	if (!cr0.lt) goto loc_82658D1C;
loc_82658DAC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82658DB8"))) PPC_WEAK_FUNC(sub_82658DB8);
PPC_FUNC_IMPL(__imp__sub_82658DB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82658DBC"))) PPC_WEAK_FUNC(sub_82658DBC);
PPC_FUNC_IMPL(__imp__sub_82658DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658DC0"))) PPC_WEAK_FUNC(sub_82658DC0);
PPC_FUNC_IMPL(__imp__sub_82658DC0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,300
	r28.s64 = ctx.r3.s64 + 300;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82658e84
	if (cr0.lt) goto loc_82658E84;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16856
	r24.s64 = ctx.r10.s64 + 16856;
loc_82658DF4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82658e78
	if (cr6.eq) goto loc_82658E78;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82658e34
	if (!cr6.lt) goto loc_82658E34;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82658E34:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82658e78
	if (!cr6.lt) goto loc_82658E78;
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
loc_82658E78:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82658df4
	if (!cr0.lt) goto loc_82658DF4;
loc_82658E84:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82658E90"))) PPC_WEAK_FUNC(sub_82658E90);
PPC_FUNC_IMPL(__imp__sub_82658E90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82658E94"))) PPC_WEAK_FUNC(sub_82658E94);
PPC_FUNC_IMPL(__imp__sub_82658E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658E98"))) PPC_WEAK_FUNC(sub_82658E98);
PPC_FUNC_IMPL(__imp__sub_82658E98) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,300
	r28.s64 = ctx.r3.s64 + 300;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82658f5c
	if (cr0.lt) goto loc_82658F5C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16868
	r24.s64 = ctx.r10.s64 + 16868;
loc_82658ECC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82658f50
	if (cr6.eq) goto loc_82658F50;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82658f0c
	if (!cr6.lt) goto loc_82658F0C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82658F0C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82658f50
	if (!cr6.lt) goto loc_82658F50;
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
loc_82658F50:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82658ecc
	if (!cr0.lt) goto loc_82658ECC;
loc_82658F5C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82658F68"))) PPC_WEAK_FUNC(sub_82658F68);
PPC_FUNC_IMPL(__imp__sub_82658F68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82658F6C"))) PPC_WEAK_FUNC(sub_82658F6C);
PPC_FUNC_IMPL(__imp__sub_82658F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82658F70"))) PPC_WEAK_FUNC(sub_82658F70);
PPC_FUNC_IMPL(__imp__sub_82658F70) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,300
	r28.s64 = ctx.r3.s64 + 300;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82659034
	if (cr0.lt) goto loc_82659034;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16880
	r24.s64 = ctx.r10.s64 + 16880;
loc_82658FA4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659028
	if (cr6.eq) goto loc_82659028;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82658fe4
	if (!cr6.lt) goto loc_82658FE4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82658FE4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659028
	if (!cr6.lt) goto loc_82659028;
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
loc_82659028:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82658fa4
	if (!cr0.lt) goto loc_82658FA4;
loc_82659034:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82659040"))) PPC_WEAK_FUNC(sub_82659040);
PPC_FUNC_IMPL(__imp__sub_82659040) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82659044"))) PPC_WEAK_FUNC(sub_82659044);
PPC_FUNC_IMPL(__imp__sub_82659044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659048"))) PPC_WEAK_FUNC(sub_82659048);
PPC_FUNC_IMPL(__imp__sub_82659048) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,300
	r28.s64 = ctx.r3.s64 + 300;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8265910c
	if (cr0.lt) goto loc_8265910C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16896
	r24.s64 = ctx.r10.s64 + 16896;
loc_8265907C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659100
	if (cr6.eq) goto loc_82659100;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826590bc
	if (!cr6.lt) goto loc_826590BC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826590BC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659100
	if (!cr6.lt) goto loc_82659100;
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
loc_82659100:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265907c
	if (!cr0.lt) goto loc_8265907C;
loc_8265910C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82659118"))) PPC_WEAK_FUNC(sub_82659118);
PPC_FUNC_IMPL(__imp__sub_82659118) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8265911C"))) PPC_WEAK_FUNC(sub_8265911C);
PPC_FUNC_IMPL(__imp__sub_8265911C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659120"))) PPC_WEAK_FUNC(sub_82659120);
PPC_FUNC_IMPL(__imp__sub_82659120) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,316(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,312
	r28.s64 = ctx.r3.s64 + 312;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x826591e4
	if (cr0.lt) goto loc_826591E4;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,17020
	r24.s64 = ctx.r10.s64 + 17020;
loc_82659154:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826591d8
	if (cr6.eq) goto loc_826591D8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82659194
	if (!cr6.lt) goto loc_82659194;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659194:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x826591d8
	if (!cr6.lt) goto loc_826591D8;
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
loc_826591D8:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82659154
	if (!cr0.lt) goto loc_82659154;
loc_826591E4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826591F0"))) PPC_WEAK_FUNC(sub_826591F0);
PPC_FUNC_IMPL(__imp__sub_826591F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826591F4"))) PPC_WEAK_FUNC(sub_826591F4);
PPC_FUNC_IMPL(__imp__sub_826591F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826591F8"))) PPC_WEAK_FUNC(sub_826591F8);
PPC_FUNC_IMPL(__imp__sub_826591F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,316(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,312
	r28.s64 = ctx.r3.s64 + 312;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x826592bc
	if (cr0.lt) goto loc_826592BC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,17032
	r24.s64 = ctx.r10.s64 + 17032;
loc_8265922C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826592b0
	if (cr6.eq) goto loc_826592B0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265926c
	if (!cr6.lt) goto loc_8265926C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265926C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x826592b0
	if (!cr6.lt) goto loc_826592B0;
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
loc_826592B0:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265922c
	if (!cr0.lt) goto loc_8265922C;
loc_826592BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826592C8"))) PPC_WEAK_FUNC(sub_826592C8);
PPC_FUNC_IMPL(__imp__sub_826592C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826592CC"))) PPC_WEAK_FUNC(sub_826592CC);
PPC_FUNC_IMPL(__imp__sub_826592CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826592D0"))) PPC_WEAK_FUNC(sub_826592D0);
PPC_FUNC_IMPL(__imp__sub_826592D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,316(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,312
	r28.s64 = ctx.r3.s64 + 312;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82659394
	if (cr0.lt) goto loc_82659394;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16880
	r24.s64 = ctx.r10.s64 + 16880;
loc_82659304:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659388
	if (cr6.eq) goto loc_82659388;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82659344
	if (!cr6.lt) goto loc_82659344;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659344:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659388
	if (!cr6.lt) goto loc_82659388;
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
loc_82659388:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82659304
	if (!cr0.lt) goto loc_82659304;
loc_82659394:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826593A0"))) PPC_WEAK_FUNC(sub_826593A0);
PPC_FUNC_IMPL(__imp__sub_826593A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826593A4"))) PPC_WEAK_FUNC(sub_826593A4);
PPC_FUNC_IMPL(__imp__sub_826593A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826593A8"))) PPC_WEAK_FUNC(sub_826593A8);
PPC_FUNC_IMPL(__imp__sub_826593A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,324
	r28.s64 = ctx.r3.s64 + 324;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8265946c
	if (cr0.lt) goto loc_8265946C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,14428
	r24.s64 = ctx.r10.s64 + 14428;
loc_826593DC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659460
	if (cr6.eq) goto loc_82659460;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265941c
	if (!cr6.lt) goto loc_8265941C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265941C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659460
	if (!cr6.lt) goto loc_82659460;
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
loc_82659460:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x826593dc
	if (!cr0.lt) goto loc_826593DC;
loc_8265946C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82659478"))) PPC_WEAK_FUNC(sub_82659478);
PPC_FUNC_IMPL(__imp__sub_82659478) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8265947C"))) PPC_WEAK_FUNC(sub_8265947C);
PPC_FUNC_IMPL(__imp__sub_8265947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659480"))) PPC_WEAK_FUNC(sub_82659480);
PPC_FUNC_IMPL(__imp__sub_82659480) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,324
	r28.s64 = ctx.r3.s64 + 324;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82659544
	if (cr0.lt) goto loc_82659544;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,14440
	r24.s64 = ctx.r10.s64 + 14440;
loc_826594B4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659538
	if (cr6.eq) goto loc_82659538;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826594f4
	if (!cr6.lt) goto loc_826594F4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826594F4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659538
	if (!cr6.lt) goto loc_82659538;
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
loc_82659538:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x826594b4
	if (!cr0.lt) goto loc_826594B4;
loc_82659544:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82659550"))) PPC_WEAK_FUNC(sub_82659550);
PPC_FUNC_IMPL(__imp__sub_82659550) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82659554"))) PPC_WEAK_FUNC(sub_82659554);
PPC_FUNC_IMPL(__imp__sub_82659554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659558"))) PPC_WEAK_FUNC(sub_82659558);
PPC_FUNC_IMPL(__imp__sub_82659558) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r24,r3,324
	r24.s64 = ctx.r3.s64 + 324;
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82659614
	if (cr0.lt) goto loc_82659614;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,8956
	r26.s64 = r11.s64 + 8956;
	// addi r25,r10,14468
	r25.s64 = ctx.r10.s64 + 14468;
loc_8265958C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82659608
	if (cr6.eq) goto loc_82659608;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826595cc
	if (!cr6.lt) goto loc_826595CC;
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
loc_826595CC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82659608
	if (!cr6.lt) goto loc_82659608;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659608:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x8265958c
	if (!cr0.lt) goto loc_8265958C;
loc_82659614:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82659620"))) PPC_WEAK_FUNC(sub_82659620);
PPC_FUNC_IMPL(__imp__sub_82659620) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82659624"))) PPC_WEAK_FUNC(sub_82659624);
PPC_FUNC_IMPL(__imp__sub_82659624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659628"))) PPC_WEAK_FUNC(sub_82659628);
PPC_FUNC_IMPL(__imp__sub_82659628) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r24,r3,324
	r24.s64 = ctx.r3.s64 + 324;
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x826596e4
	if (cr0.lt) goto loc_826596E4;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,8956
	r26.s64 = r11.s64 + 8956;
	// addi r25,r10,14484
	r25.s64 = ctx.r10.s64 + 14484;
loc_8265965C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826596d8
	if (cr6.eq) goto loc_826596D8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265969c
	if (!cr6.lt) goto loc_8265969C;
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
loc_8265969C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826596d8
	if (!cr6.lt) goto loc_826596D8;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826596D8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x8265965c
	if (!cr0.lt) goto loc_8265965C;
loc_826596E4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826596F0"))) PPC_WEAK_FUNC(sub_826596F0);
PPC_FUNC_IMPL(__imp__sub_826596F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826596F4"))) PPC_WEAK_FUNC(sub_826596F4);
PPC_FUNC_IMPL(__imp__sub_826596F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826596F8"))) PPC_WEAK_FUNC(sub_826596F8);
PPC_FUNC_IMPL(__imp__sub_826596F8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,424(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,420
	r28.s64 = ctx.r3.s64 + 420;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x826597bc
	if (cr0.lt) goto loc_826597BC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16928
	r24.s64 = ctx.r10.s64 + 16928;
loc_8265972C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826597b0
	if (cr6.eq) goto loc_826597B0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265976c
	if (!cr6.lt) goto loc_8265976C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265976C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x826597b0
	if (!cr6.lt) goto loc_826597B0;
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
loc_826597B0:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265972c
	if (!cr0.lt) goto loc_8265972C;
loc_826597BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826597C8"))) PPC_WEAK_FUNC(sub_826597C8);
PPC_FUNC_IMPL(__imp__sub_826597C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826597CC"))) PPC_WEAK_FUNC(sub_826597CC);
PPC_FUNC_IMPL(__imp__sub_826597CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826597D0"))) PPC_WEAK_FUNC(sub_826597D0);
PPC_FUNC_IMPL(__imp__sub_826597D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,424(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,420
	r28.s64 = ctx.r3.s64 + 420;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82659894
	if (cr0.lt) goto loc_82659894;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16936
	r24.s64 = ctx.r10.s64 + 16936;
loc_82659804:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659888
	if (cr6.eq) goto loc_82659888;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82659844
	if (!cr6.lt) goto loc_82659844;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659844:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659888
	if (!cr6.lt) goto loc_82659888;
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
loc_82659888:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82659804
	if (!cr0.lt) goto loc_82659804;
loc_82659894:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826598A0"))) PPC_WEAK_FUNC(sub_826598A0);
PPC_FUNC_IMPL(__imp__sub_826598A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826598A4"))) PPC_WEAK_FUNC(sub_826598A4);
PPC_FUNC_IMPL(__imp__sub_826598A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826598A8"))) PPC_WEAK_FUNC(sub_826598A8);
PPC_FUNC_IMPL(__imp__sub_826598A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,424(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,420
	r28.s64 = ctx.r3.s64 + 420;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8265996c
	if (cr0.lt) goto loc_8265996C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16948
	r24.s64 = ctx.r10.s64 + 16948;
loc_826598DC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659960
	if (cr6.eq) goto loc_82659960;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265991c
	if (!cr6.lt) goto loc_8265991C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265991C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659960
	if (!cr6.lt) goto loc_82659960;
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
loc_82659960:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x826598dc
	if (!cr0.lt) goto loc_826598DC;
loc_8265996C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82659978"))) PPC_WEAK_FUNC(sub_82659978);
PPC_FUNC_IMPL(__imp__sub_82659978) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8265997C"))) PPC_WEAK_FUNC(sub_8265997C);
PPC_FUNC_IMPL(__imp__sub_8265997C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659980"))) PPC_WEAK_FUNC(sub_82659980);
PPC_FUNC_IMPL(__imp__sub_82659980) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r3,336
	r28.s64 = ctx.r3.s64 + 336;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82659a44
	if (cr0.lt) goto loc_82659A44;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,17044
	r24.s64 = ctx.r10.s64 + 17044;
loc_826599B4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659a38
	if (cr6.eq) goto loc_82659A38;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826599f4
	if (!cr6.lt) goto loc_826599F4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_826599F4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659a38
	if (!cr6.lt) goto loc_82659A38;
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
loc_82659A38:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x826599b4
	if (!cr0.lt) goto loc_826599B4;
loc_82659A44:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82659A50"))) PPC_WEAK_FUNC(sub_82659A50);
PPC_FUNC_IMPL(__imp__sub_82659A50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82659A54"))) PPC_WEAK_FUNC(sub_82659A54);
PPC_FUNC_IMPL(__imp__sub_82659A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659A58"))) PPC_WEAK_FUNC(sub_82659A58);
PPC_FUNC_IMPL(__imp__sub_82659A58) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,340(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r28,r3,336
	r28.s64 = ctx.r3.s64 + 336;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82659b1c
	if (cr0.lt) goto loc_82659B1C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,17044
	r24.s64 = ctx.r10.s64 + 17044;
loc_82659A8C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659b10
	if (cr6.eq) goto loc_82659B10;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82659acc
	if (!cr6.lt) goto loc_82659ACC;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659ACC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659b10
	if (!cr6.lt) goto loc_82659B10;
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
loc_82659B10:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82659a8c
	if (!cr0.lt) goto loc_82659A8C;
loc_82659B1C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82659B28"))) PPC_WEAK_FUNC(sub_82659B28);
PPC_FUNC_IMPL(__imp__sub_82659B28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82659B2C"))) PPC_WEAK_FUNC(sub_82659B2C);
PPC_FUNC_IMPL(__imp__sub_82659B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659B30"))) PPC_WEAK_FUNC(sub_82659B30);
PPC_FUNC_IMPL(__imp__sub_82659B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r22,r11,8956
	r22.s64 = r11.s64 + 8956;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r29,r3,348
	r29.s64 = ctx.r3.s64 + 348;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addic. r27,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r27.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x82659c04
	if (cr0.lt) goto loc_82659C04;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,17072
	r26.s64 = r11.s64 + 17072;
loc_82659B74:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659bf8
	if (cr6.eq) goto loc_82659BF8;
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
	// bge cr6,0x82659bb4
	if (!cr6.lt) goto loc_82659BB4;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659BB4:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659bf8
	if (!cr6.lt) goto loc_82659BF8;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659BF8:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x82659b74
	if (!cr0.lt) goto loc_82659B74;
loc_82659C04:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82659cfc
	if (!cr6.gt) goto loc_82659CFC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r27,0
	r27.s64 = 0;
	// addi r24,r11,17060
	r24.s64 = r11.s64 + 17060;
loc_82659C28:
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lwz r28,532(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82659ce8
	if (cr6.eq) goto loc_82659CE8;
	// lhz r11,4(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82659ce0
	if (cr0.lt) goto loc_82659CE0;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82659C4C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659cd4
	if (cr6.eq) goto loc_82659CD4;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82659c8c
	if (!cr6.lt) goto loc_82659C8C;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659C8C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82659cd4
	if (!cr6.lt) goto loc_82659CD4;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659CD4:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82659c4c
	if (!cr0.lt) goto loc_82659C4C;
loc_82659CE0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b18
	sub_82658B18(ctx, base);
loc_82659CE8:
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x82659c28
	if (cr6.lt) goto loc_82659C28;
loc_82659CFC:
	// lwz r11,148(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r21)
	PPC_STORE_U32(r21.u32 + 148, r11.u32);
	// bne 0x82659d4c
	if (!cr0.eq) goto loc_82659D4C;
	// lbz r11,156(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82659d4c
	if (!cr6.eq) goto loc_82659D4C;
	// lwz r11,140(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82659d2c
	if (cr6.eq) goto loc_82659D2C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_82659D2C:
	// lwz r11,164(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82659d4c
	if (!cr6.eq) goto loc_82659D4C;
	// lwz r11,144(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82659d4c
	if (cr6.eq) goto loc_82659D4C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_82659D4C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82659D50"))) PPC_WEAK_FUNC(sub_82659D50);
PPC_FUNC_IMPL(__imp__sub_82659D50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82659D54"))) PPC_WEAK_FUNC(sub_82659D54);
PPC_FUNC_IMPL(__imp__sub_82659D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659D58"))) PPC_WEAK_FUNC(sub_82659D58);
PPC_FUNC_IMPL(__imp__sub_82659D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// addi r22,r11,8956
	r22.s64 = r11.s64 + 8956;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r29,r3,348
	r29.s64 = ctx.r3.s64 + 348;
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// lwz r10,352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// addic. r27,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r27.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x82659e2c
	if (cr0.lt) goto loc_82659E2C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// rlwinm r28,r27,2,0,29
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r11,17096
	r26.s64 = r11.s64 + 17096;
loc_82659D9C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659e20
	if (cr6.eq) goto loc_82659E20;
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
	// bge cr6,0x82659ddc
	if (!cr6.lt) goto loc_82659DDC;
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659DDC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82659e20
	if (!cr6.lt) goto loc_82659E20;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659E20:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x82659d9c
	if (!cr0.lt) goto loc_82659D9C;
loc_82659E2C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// li r23,0
	r23.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82659f24
	if (!cr6.gt) goto loc_82659F24;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r27,0
	r27.s64 = 0;
	// addi r24,r11,17084
	r24.s64 = r11.s64 + 17084;
loc_82659E50:
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lwz r28,532(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82659f10
	if (cr6.eq) goto loc_82659F10;
	// lhz r11,4(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82659f08
	if (cr0.lt) goto loc_82659F08;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_82659E74:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82659efc
	if (cr6.eq) goto loc_82659EFC;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82659eb4
	if (!cr6.lt) goto loc_82659EB4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659EB4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,72(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r27.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82659efc
	if (!cr6.lt) goto loc_82659EFC;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82659EFC:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x82659e74
	if (!cr0.lt) goto loc_82659E74;
loc_82659F08:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b18
	sub_82658B18(ctx, base);
loc_82659F10:
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r23,r11
	cr6.compare<int32_t>(r23.s32, r11.s32, xer);
	// blt cr6,0x82659e50
	if (cr6.lt) goto loc_82659E50;
loc_82659F24:
	// lwz r11,148(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r21)
	PPC_STORE_U32(r21.u32 + 148, r11.u32);
	// bne 0x82659f74
	if (!cr0.eq) goto loc_82659F74;
	// lbz r11,156(r21)
	r11.u64 = PPC_LOAD_U8(r21.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82659f74
	if (!cr6.eq) goto loc_82659F74;
	// lwz r11,140(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82659f54
	if (cr6.eq) goto loc_82659F54;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_82659F54:
	// lwz r11,164(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82659f74
	if (!cr6.eq) goto loc_82659F74;
	// lwz r11,144(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82659f74
	if (cr6.eq) goto loc_82659F74;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_82659F74:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82659F78"))) PPC_WEAK_FUNC(sub_82659F78);
PPC_FUNC_IMPL(__imp__sub_82659F78) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82659F7C"))) PPC_WEAK_FUNC(sub_82659F7C);
PPC_FUNC_IMPL(__imp__sub_82659F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82659F80"))) PPC_WEAK_FUNC(sub_82659F80);
PPC_FUNC_IMPL(__imp__sub_82659F80) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r29,r3,360
	r29.s64 = ctx.r3.s64 + 360;
	// addic. r28,r11,-1
	xer.ca = r11.u32 > 0;
	r28.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// mr r27,r11
	r27.u64 = r11.u64;
	// blt 0x8265a060
	if (cr0.lt) goto loc_8265A060;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,17108
	r24.s64 = ctx.r10.s64 + 17108;
loc_82659FB4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// ble cr6,0x82659fd0
	if (!cr6.gt) goto loc_82659FD0;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r10,r27,r11
	ctx.r10.s64 = r11.s64 - r27.s64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
loc_82659FD0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265a058
	if (cr6.eq) goto loc_8265A058;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a014
	if (!cr6.lt) goto loc_8265A014;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r6,r11,12
	ctx.r6.s64 = r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_8265A014:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a058
	if (!cr6.lt) goto loc_8265A058;
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
loc_8265A058:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x82659fb4
	if (!cr0.lt) goto loc_82659FB4;
loc_8265A060:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265A06C"))) PPC_WEAK_FUNC(sub_8265A06C);
PPC_FUNC_IMPL(__imp__sub_8265A06C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8265A070"))) PPC_WEAK_FUNC(sub_8265A070);
PPC_FUNC_IMPL(__imp__sub_8265A070) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,376(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 376);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r28,r3,372
	r28.s64 = ctx.r3.s64 + 372;
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x8265a13c
	if (cr0.lt) goto loc_8265A13C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,8956
	r24.s64 = r11.s64 + 8956;
	// addi r23,r10,17120
	r23.s64 = ctx.r10.s64 + 17120;
loc_8265A0A8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265a130
	if (cr6.eq) goto loc_8265A130;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265a0e8
	if (!cr6.lt) goto loc_8265A0E8;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A0E8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a130
	if (!cr6.lt) goto loc_8265A130;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A130:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265a0a8
	if (!cr0.lt) goto loc_8265A0A8;
loc_8265A13C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265A148"))) PPC_WEAK_FUNC(sub_8265A148);
PPC_FUNC_IMPL(__imp__sub_8265A148) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8265A14C"))) PPC_WEAK_FUNC(sub_8265A14C);
PPC_FUNC_IMPL(__imp__sub_8265A14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A150"))) PPC_WEAK_FUNC(sub_8265A150);
PPC_FUNC_IMPL(__imp__sub_8265A150) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,388(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r28,r3,384
	r28.s64 = ctx.r3.s64 + 384;
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x8265a21c
	if (cr0.lt) goto loc_8265A21C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,8956
	r24.s64 = r11.s64 + 8956;
	// addi r23,r10,17132
	r23.s64 = ctx.r10.s64 + 17132;
loc_8265A188:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265a210
	if (cr6.eq) goto loc_8265A210;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265a1c8
	if (!cr6.lt) goto loc_8265A1C8;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A1C8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a210
	if (!cr6.lt) goto loc_8265A210;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A210:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265a188
	if (!cr0.lt) goto loc_8265A188;
loc_8265A21C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265A228"))) PPC_WEAK_FUNC(sub_8265A228);
PPC_FUNC_IMPL(__imp__sub_8265A228) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8265A22C"))) PPC_WEAK_FUNC(sub_8265A22C);
PPC_FUNC_IMPL(__imp__sub_8265A22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A230"))) PPC_WEAK_FUNC(sub_8265A230);
PPC_FUNC_IMPL(__imp__sub_8265A230) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,400(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r28,r3,396
	r28.s64 = ctx.r3.s64 + 396;
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x8265a2fc
	if (cr0.lt) goto loc_8265A2FC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,8956
	r24.s64 = r11.s64 + 8956;
	// addi r23,r10,17120
	r23.s64 = ctx.r10.s64 + 17120;
loc_8265A268:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265a2f0
	if (cr6.eq) goto loc_8265A2F0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265a2a8
	if (!cr6.lt) goto loc_8265A2A8;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A2A8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a2f0
	if (!cr6.lt) goto loc_8265A2F0;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A2F0:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265a268
	if (!cr0.lt) goto loc_8265A268;
loc_8265A2FC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265A308"))) PPC_WEAK_FUNC(sub_8265A308);
PPC_FUNC_IMPL(__imp__sub_8265A308) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8265A30C"))) PPC_WEAK_FUNC(sub_8265A30C);
PPC_FUNC_IMPL(__imp__sub_8265A30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A310"))) PPC_WEAK_FUNC(sub_8265A310);
PPC_FUNC_IMPL(__imp__sub_8265A310) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r28,r3,408
	r28.s64 = ctx.r3.s64 + 408;
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x8265a3dc
	if (cr0.lt) goto loc_8265A3DC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,8956
	r24.s64 = r11.s64 + 8956;
	// addi r23,r10,17132
	r23.s64 = ctx.r10.s64 + 17132;
loc_8265A348:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265a3d0
	if (cr6.eq) goto loc_8265A3D0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265a388
	if (!cr6.lt) goto loc_8265A388;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A388:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a3d0
	if (!cr6.lt) goto loc_8265A3D0;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A3D0:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265a348
	if (!cr0.lt) goto loc_8265A348;
loc_8265A3DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265A3E8"))) PPC_WEAK_FUNC(sub_8265A3E8);
PPC_FUNC_IMPL(__imp__sub_8265A3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8265A3EC"))) PPC_WEAK_FUNC(sub_8265A3EC);
PPC_FUNC_IMPL(__imp__sub_8265A3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A3F0"))) PPC_WEAK_FUNC(sub_8265A3F0);
PPC_FUNC_IMPL(__imp__sub_8265A3F0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,436(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r28,r3,432
	r28.s64 = ctx.r3.s64 + 432;
	// addic. r25,r11,-1
	xer.ca = r11.u32 > 0;
	r25.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// blt 0x8265a4bc
	if (cr0.lt) goto loc_8265A4BC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r25,2,0,29
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,8956
	r24.s64 = r11.s64 + 8956;
	// addi r23,r10,17148
	r23.s64 = ctx.r10.s64 + 17148;
loc_8265A428:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265a4b0
	if (cr6.eq) goto loc_8265A4B0;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265a468
	if (!cr6.lt) goto loc_8265A468;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A468:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a4b0
	if (!cr6.lt) goto loc_8265A4B0;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A4B0:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265a428
	if (!cr0.lt) goto loc_8265A428;
loc_8265A4BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265A4C8"))) PPC_WEAK_FUNC(sub_8265A4C8);
PPC_FUNC_IMPL(__imp__sub_8265A4C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8265A4CC"))) PPC_WEAK_FUNC(sub_8265A4CC);
PPC_FUNC_IMPL(__imp__sub_8265A4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A4D0"))) PPC_WEAK_FUNC(sub_8265A4D0);
PPC_FUNC_IMPL(__imp__sub_8265A4D0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,364(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r28,r3,360
	r28.s64 = ctx.r3.s64 + 360;
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8265a594
	if (cr0.lt) goto loc_8265A594;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,17164
	r24.s64 = ctx.r10.s64 + 17164;
loc_8265A504:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265a588
	if (cr6.eq) goto loc_8265A588;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265a544
	if (!cr6.lt) goto loc_8265A544;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A544:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a588
	if (!cr6.lt) goto loc_8265A588;
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
loc_8265A588:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265a504
	if (!cr0.lt) goto loc_8265A504;
loc_8265A594:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265A5A0"))) PPC_WEAK_FUNC(sub_8265A5A0);
PPC_FUNC_IMPL(__imp__sub_8265A5A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8265A5A4"))) PPC_WEAK_FUNC(sub_8265A5A4);
PPC_FUNC_IMPL(__imp__sub_8265A5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A5A8"))) PPC_WEAK_FUNC(sub_8265A5A8);
PPC_FUNC_IMPL(__imp__sub_8265A5A8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// addi r28,r3,420
	r28.s64 = ctx.r3.s64 + 420;
	// lwz r10,424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// addic. r26,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r26.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8265a674
	if (cr0.lt) goto loc_8265A674;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16960
	r24.s64 = ctx.r10.s64 + 16960;
loc_8265A5E4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265a668
	if (cr6.eq) goto loc_8265A668;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265a624
	if (!cr6.lt) goto loc_8265A624;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A624:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a668
	if (!cr6.lt) goto loc_8265A668;
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
loc_8265A668:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265a5e4
	if (!cr0.lt) goto loc_8265A5E4;
loc_8265A674:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265A680"))) PPC_WEAK_FUNC(sub_8265A680);
PPC_FUNC_IMPL(__imp__sub_8265A680) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8265A684"))) PPC_WEAK_FUNC(sub_8265A684);
PPC_FUNC_IMPL(__imp__sub_8265A684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A688"))) PPC_WEAK_FUNC(sub_8265A688);
PPC_FUNC_IMPL(__imp__sub_8265A688) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// addi r28,r3,420
	r28.s64 = ctx.r3.s64 + 420;
	// lwz r10,424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// addic. r26,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r26.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8265a754
	if (cr0.lt) goto loc_8265A754;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,16972
	r24.s64 = ctx.r10.s64 + 16972;
loc_8265A6C4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265a748
	if (cr6.eq) goto loc_8265A748;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265a704
	if (!cr6.lt) goto loc_8265A704;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A704:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a748
	if (!cr6.lt) goto loc_8265A748;
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
loc_8265A748:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265a6c4
	if (!cr0.lt) goto loc_8265A6C4;
loc_8265A754:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265A760"))) PPC_WEAK_FUNC(sub_8265A760);
PPC_FUNC_IMPL(__imp__sub_8265A760) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8265A764"))) PPC_WEAK_FUNC(sub_8265A764);
PPC_FUNC_IMPL(__imp__sub_8265A764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A768"))) PPC_WEAK_FUNC(sub_8265A768);
PPC_FUNC_IMPL(__imp__sub_8265A768) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// addi r28,r3,420
	r28.s64 = ctx.r3.s64 + 420;
	// lwz r10,424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// addic. r26,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r26.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x8265a834
	if (cr0.lt) goto loc_8265A834;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r11,8956
	r25.s64 = r11.s64 + 8956;
	// addi r24,r10,17176
	r24.s64 = ctx.r10.s64 + 17176;
loc_8265A7A4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265a828
	if (cr6.eq) goto loc_8265A828;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r31,12
	r31.s64 = 12;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265a7e4
	if (!cr6.lt) goto loc_8265A7E4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265A7E4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x8265a828
	if (!cr6.lt) goto loc_8265A828;
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
loc_8265A828:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,-4
	r29.s64 = r29.s64 + -4;
	// bge 0x8265a7a4
	if (!cr0.lt) goto loc_8265A7A4;
loc_8265A834:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658b98
	sub_82658B98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8265A840"))) PPC_WEAK_FUNC(sub_8265A840);
PPC_FUNC_IMPL(__imp__sub_8265A840) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8265A844"))) PPC_WEAK_FUNC(sub_8265A844);
PPC_FUNC_IMPL(__imp__sub_8265A844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A848"))) PPC_WEAK_FUNC(sub_8265A848);
PPC_FUNC_IMPL(__imp__sub_8265A848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8265A85C"))) PPC_WEAK_FUNC(sub_8265A85C);
PPC_FUNC_IMPL(__imp__sub_8265A85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A860"))) PPC_WEAK_FUNC(sub_8265A860);
PPC_FUNC_IMPL(__imp__sub_8265A860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-11132
	ctx.r3.s64 = r11.s64 + -11132;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265A86C"))) PPC_WEAK_FUNC(sub_8265A86C);
PPC_FUNC_IMPL(__imp__sub_8265A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A870"))) PPC_WEAK_FUNC(sub_8265A870);
PPC_FUNC_IMPL(__imp__sub_8265A870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
}

__attribute__((alias("__imp__sub_8265A878"))) PPC_WEAK_FUNC(sub_8265A878);
PPC_FUNC_IMPL(__imp__sub_8265A878) {
	PPC_FUNC_PROLOGUE();
	// b 0x8263d410
	sub_8263D410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265A87C"))) PPC_WEAK_FUNC(sub_8265A87C);
PPC_FUNC_IMPL(__imp__sub_8265A87C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265A880"))) PPC_WEAK_FUNC(sub_8265A880);
PPC_FUNC_IMPL(__imp__sub_8265A880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263d410
	sub_8263D410(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8265A8A8"))) PPC_WEAK_FUNC(sub_8265A8A8);
PPC_FUNC_IMPL(__imp__sub_8265A8A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265A8AC"))) PPC_WEAK_FUNC(sub_8265A8AC);
PPC_FUNC_IMPL(__imp__sub_8265A8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265A8B0"))) PPC_WEAK_FUNC(sub_8265A8B0);
PPC_FUNC_IMPL(__imp__sub_8265A8B0) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8265a90c
	if (!cr6.eq) goto loc_8265A90C;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265A90C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8265a954
	if (!cr6.eq) goto loc_8265A954;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265A954:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8265A964"))) PPC_WEAK_FUNC(sub_8265A964);
PPC_FUNC_IMPL(__imp__sub_8265A964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265A968"))) PPC_WEAK_FUNC(sub_8265A968);
PPC_FUNC_IMPL(__imp__sub_8265A968) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8265a9c4
	if (!cr6.eq) goto loc_8265A9C4;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265A9C4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8265aa0c
	if (!cr6.eq) goto loc_8265AA0C;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265AA0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8265AA1C"))) PPC_WEAK_FUNC(sub_8265AA1C);
PPC_FUNC_IMPL(__imp__sub_8265AA1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265AA20"))) PPC_WEAK_FUNC(sub_8265AA20);
PPC_FUNC_IMPL(__imp__sub_8265AA20) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8265aa98
	if (!cr6.eq) goto loc_8265AA98;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// beq cr6,0x8265aae0
	if (cr6.eq) goto loc_8265AAE0;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8265aa98
	if (!cr6.eq) goto loc_8265AA98;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265AA98:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x8265aae0
	if (!cr6.eq) goto loc_8265AAE0;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265AAE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8265AAF0"))) PPC_WEAK_FUNC(sub_8265AAF0);
PPC_FUNC_IMPL(__imp__sub_8265AAF0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265AAF4"))) PPC_WEAK_FUNC(sub_8265AAF4);
PPC_FUNC_IMPL(__imp__sub_8265AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265AAF8"))) PPC_WEAK_FUNC(sub_8265AAF8);
PPC_FUNC_IMPL(__imp__sub_8265AAF8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8265ab70
	if (!cr6.eq) goto loc_8265AB70;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// beq cr6,0x8265abb8
	if (cr6.eq) goto loc_8265ABB8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8265ab70
	if (!cr6.eq) goto loc_8265AB70;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265AB70:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x8265abb8
	if (!cr6.eq) goto loc_8265ABB8;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265ABB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8265ABC8"))) PPC_WEAK_FUNC(sub_8265ABC8);
PPC_FUNC_IMPL(__imp__sub_8265ABC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265ABCC"))) PPC_WEAK_FUNC(sub_8265ABCC);
PPC_FUNC_IMPL(__imp__sub_8265ABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265ABD0"))) PPC_WEAK_FUNC(sub_8265ABD0);
PPC_FUNC_IMPL(__imp__sub_8265ABD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82628558
	sub_82628558(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265ABD4"))) PPC_WEAK_FUNC(sub_8265ABD4);
PPC_FUNC_IMPL(__imp__sub_8265ABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265ABD8"))) PPC_WEAK_FUNC(sub_8265ABD8);
PPC_FUNC_IMPL(__imp__sub_8265ABD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82628608
	sub_82628608(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265ABDC"))) PPC_WEAK_FUNC(sub_8265ABDC);
PPC_FUNC_IMPL(__imp__sub_8265ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265ABE0"))) PPC_WEAK_FUNC(sub_8265ABE0);
PPC_FUNC_IMPL(__imp__sub_8265ABE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8265ac08
	if (!cr6.eq) goto loc_8265AC08;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subfc r9,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
loc_8265AC08:
	// lwz r11,212(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 212);
	// lwz r10,212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
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

__attribute__((alias("__imp__sub_8265AC20"))) PPC_WEAK_FUNC(sub_8265AC20);
PPC_FUNC_IMPL(__imp__sub_8265AC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lwz r8,204(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lhz r11,32(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// lhz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8265ac70
	if (cr6.lt) goto loc_8265AC70;
	// bne cr6,0x8265ac64
	if (!cr6.eq) goto loc_8265AC64;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lwz r8,204(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lhz r7,32(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 32);
	// lhz r6,32(r8)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + 32);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// blt cr6,0x8265ac70
	if (cr6.lt) goto loc_8265AC70;
loc_8265AC64:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_8265AC70:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265AC7C"))) PPC_WEAK_FUNC(sub_8265AC7C);
PPC_FUNC_IMPL(__imp__sub_8265AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265AC80"))) PPC_WEAK_FUNC(sub_8265AC80);
PPC_FUNC_IMPL(__imp__sub_8265AC80) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x826284c0
	sub_826284C0(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// lwz r10,144(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x8265ace0
	if (!cr6.eq) goto loc_8265ACE0;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8265ACE0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r26.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8265AD20"))) PPC_WEAK_FUNC(sub_8265AD20);
PPC_FUNC_IMPL(__imp__sub_8265AD20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8265AD24"))) PPC_WEAK_FUNC(sub_8265AD24);
PPC_FUNC_IMPL(__imp__sub_8265AD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265AD28"))) PPC_WEAK_FUNC(sub_8265AD28);
PPC_FUNC_IMPL(__imp__sub_8265AD28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_8265AD58"))) PPC_WEAK_FUNC(sub_8265AD58);
PPC_FUNC_IMPL(__imp__sub_8265AD58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265AD5C"))) PPC_WEAK_FUNC(sub_8265AD5C);
PPC_FUNC_IMPL(__imp__sub_8265AD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265AD60"))) PPC_WEAK_FUNC(sub_8265AD60);
PPC_FUNC_IMPL(__imp__sub_8265AD60) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r3,28
	r29.s64 = ctx.r3.s64 + 28;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r28,0
	r28.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r28.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8265adb0
	if (!cr6.eq) goto loc_8265ADB0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
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
loc_8265ADB0:
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8265adf8
	if (!cr6.eq) goto loc_8265ADF8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,20
	ctx.r6.s64 = 20;
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
loc_8265ADF8:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8265ae38
	if (!cr6.eq) goto loc_8265AE38;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,20
	ctx.r6.s64 = 20;
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
loc_8265AE38:
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8265AE44"))) PPC_WEAK_FUNC(sub_8265AE44);
PPC_FUNC_IMPL(__imp__sub_8265AE44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8265AE48"))) PPC_WEAK_FUNC(sub_8265AE48);
PPC_FUNC_IMPL(__imp__sub_8265AE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// bl 0x826284c0
	sub_826284C0(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8265ae88
	if (!cr6.eq) goto loc_8265AE88;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8265AE88:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8265aeac
	if (cr0.eq) goto loc_8265AEAC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_8265AEAC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r8,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r8.u32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r6.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r4,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// bgt cr6,0x8265b364
	if (cr6.gt) goto loc_8265B364;
	// lis r12,-32154
	r12.s64 = -2107244544;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-20692
	r12.s64 = r12.s64 + -20692;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8265B35C;
	case 1:
		goto loc_8265B35C;
	case 2:
		goto loc_8265B35C;
	case 3:
		goto loc_8265B35C;
	case 4:
		goto loc_8265AFBC;
	case 5:
		goto loc_8265AFD8;
	case 6:
		goto loc_8265B044;
	case 7:
		goto loc_8265B35C;
	case 8:
		goto loc_8265B35C;
	case 9:
		goto loc_8265B35C;
	case 10:
		goto loc_8265B35C;
	case 11:
		goto loc_8265B0B0;
	case 12:
		goto loc_8265B35C;
	case 13:
		goto loc_8265B35C;
	case 14:
		goto loc_8265B148;
	case 15:
		goto loc_8265B1B4;
	case 16:
		goto loc_8265B220;
	case 17:
		goto loc_8265B35C;
	case 18:
		goto loc_8265AFBC;
	case 19:
		goto loc_8265B35C;
	case 20:
		goto loc_8265B364;
	case 21:
		goto loc_8265B35C;
	case 22:
		goto loc_8265B290;
	case 23:
		goto loc_8265B35C;
	case 24:
		goto loc_8265B35C;
	case 25:
		goto loc_8265B35C;
	case 26:
		goto loc_8265B35C;
	case 27:
		goto loc_8265B35C;
	case 28:
		goto loc_8265B35C;
	case 29:
		goto loc_8265B2FC;
	case 30:
		goto loc_8265B32C;
	case 31:
		goto loc_8265B364;
	case 32:
		goto loc_8265B35C;
	case 33:
		goto loc_8265B35C;
	case 34:
		goto loc_8265AFBC;
	case 35:
		goto loc_8265B35C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-20548(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -20548);
	// lwz r19,-20520(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -20520);
	// lwz r19,-20412(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -20412);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-20304(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -20304);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-20152(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -20152);
	// lwz r19,-20044(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -20044);
	// lwz r19,-19936(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19936);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-20548(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -20548);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19612(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19612);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19824(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19824);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19716(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19716);
	// lwz r19,-19668(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19668);
	// lwz r19,-19612(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19612);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
	// lwz r19,-20548(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -20548);
	// lwz r19,-19620(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -19620);
loc_8265AFBC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265AFD8:
	// lhz r29,8(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r4,r29,2
	ctx.r4.u64 = __builtin_rotateleft32(r29.u32, 2);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lhz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// rotlwi r11,r8,2
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x8265b364
	if (!cr6.lt) goto loc_8265B364;
loc_8265B024:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8265b024
	if (cr6.lt) goto loc_8265B024;
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265B044:
	// lhz r29,8(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r4,r29,2
	ctx.r4.u64 = __builtin_rotateleft32(r29.u32, 2);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lhz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r11,r8,2
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x8265b364
	if (!cr6.lt) goto loc_8265B364;
loc_8265B090:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8265b090
	if (cr6.lt) goto loc_8265B090;
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265B0B0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8265b0ec
	if (!cr6.eq) goto loc_8265B0EC;
	// li r5,20
	ctx.r5.s64 = 20;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8265B0EC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8265b124
	if (cr0.eq) goto loc_8265B124;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r31,-4
	ctx.r10.s64 = r31.s64 + -4;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8265B118:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8265b118
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8265B118;
loc_8265B124:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265B148:
	// lhz r29,8(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r4,r29,2
	ctx.r4.u64 = __builtin_rotateleft32(r29.u32, 2);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lhz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r11,r8,2
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x8265b364
	if (!cr6.lt) goto loc_8265B364;
loc_8265B194:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8265b194
	if (cr6.lt) goto loc_8265B194;
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265B1B4:
	// lhz r29,8(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r4,r29,2
	ctx.r4.u64 = __builtin_rotateleft32(r29.u32, 2);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lhz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r11,r8,2
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x8265b364
	if (!cr6.lt) goto loc_8265B364;
loc_8265B200:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8265b200
	if (cr6.lt) goto loc_8265B200;
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265B220:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,32
	ctx.r4.s64 = 32;
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
	// beq cr6,0x8265b27c
	if (cr6.eq) goto loc_8265B27C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265B27C:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265B290:
	// lhz r29,8(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r4,r29,2
	ctx.r4.u64 = __builtin_rotateleft32(r29.u32, 2);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// rotlwi r5,r9,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// lhz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// rotlwi r11,r8,2
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x8265b364
	if (!cr6.lt) goto loc_8265B364;
loc_8265B2DC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8265b2dc
	if (cr6.lt) goto loc_8265B2DC;
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265B2FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r9.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265B32C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// stw r9,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r9.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265B35C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8265B364:
	// bl 0x82628520
	sub_82628520(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8265B36C"))) PPC_WEAK_FUNC(sub_8265B36C);
PPC_FUNC_IMPL(__imp__sub_8265B36C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8265B370"))) PPC_WEAK_FUNC(sub_8265B370);
PPC_FUNC_IMPL(__imp__sub_8265B370) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265b4b4
	if (cr6.eq) goto loc_8265B4B4;
	// addi r29,r3,28
	r29.s64 = ctx.r3.s64 + 28;
	// li r27,0
	r27.s64 = 0;
	// lis r23,-32768
	r23.s64 = -2147483648;
loc_8265B398:
	// lwz r26,0(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r28,4(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r25,8(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// stw r23,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r23.u32);
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// stw r27,144(r11)
	PPC_STORE_U32(r11.u32 + 144, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bge cr6,0x8265b3ec
	if (!cr6.lt) goto loc_8265B3EC;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,16
	cr6.compare<int32_t>(ctx.r5.s32, 16, xer);
	// bgt cr6,0x8265b3e0
	if (cr6.gt) goto loc_8265B3E0;
	// li r5,16
	ctx.r5.s64 = 16;
loc_8265B3E0:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8265B3EC:
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// ble cr6,0x8265b40c
	if (!cr6.gt) goto loc_8265B40C;
	// lis r11,-32154
	r11.s64 = -2107244544;
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// addi r6,r11,-21536
	ctx.r6.s64 = r11.s64 + -21536;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8265bea8
	sub_8265BEA8(ctx, base);
loc_8265B40C:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8265b444
	if (!cr6.gt) goto loc_8265B444;
	// addi r31,r26,-16
	r31.s64 = r26.s64 + -16;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8265B41C:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lwzu r4,16(r31)
	ea = 16 + r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8265b41c
	if (!cr0.eq) goto loc_8265B41C;
loc_8265B444:
	// bl 0x826284c0
	sub_826284C0(ctx, base);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8265b474
	if (!cr6.gt) goto loc_8265B474;
	// addi r31,r26,-16
	r31.s64 = r26.s64 + -16;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8265B458:
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzu r3,16(r31)
	ea = 16 + r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// bl 0x82628388
	sub_82628388(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82628388
	sub_82628388(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8265b458
	if (!cr0.eq) goto loc_8265B458;
loc_8265B474:
	// bl 0x82628520
	sub_82628520(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r25,0,0,0
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x80000000;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8265b4a8
	if (!cr6.eq) goto loc_8265B4A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r25,2
	ctx.r5.u64 = r25.u32 & 0x3FFFFFFF;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265B4A8:
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8265b398
	if (!cr6.eq) goto loc_8265B398;
loc_8265B4B4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8265B4B8"))) PPC_WEAK_FUNC(sub_8265B4B8);
PPC_FUNC_IMPL(__imp__sub_8265B4B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8265B4BC"))) PPC_WEAK_FUNC(sub_8265B4BC);
PPC_FUNC_IMPL(__imp__sub_8265B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265B4C0"))) PPC_WEAK_FUNC(sub_8265B4C0);
PPC_FUNC_IMPL(__imp__sub_8265B4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// bl 0x828e93fc
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826284c0
	sub_826284C0(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r26,0
	r26.s64 = 0;
	// lis r24,-32768
	r24.s64 = -2147483648;
	// lwz r22,0(r30)
	r22.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r23,4(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r21,8(r30)
	r21.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// stw r24,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r24.u32);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,164(r11)
	PPC_STORE_U32(r11.u32 + 164, ctx.r10.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265b5f8
	if (cr6.eq) goto loc_8265B5F8;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8265b534
	if (!cr6.gt) goto loc_8265B534;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// addi r6,r10,-21472
	ctx.r6.s64 = ctx.r10.s64 + -21472;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c32730
	sub_82C32730(ctx, base);
loc_8265B534:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265b5f8
	if (cr6.eq) goto loc_8265B5F8;
loc_8265B540:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r8,r1,172
	ctx.r8.s64 = ctx.r1.s64 + 172;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
loc_8265B568:
	// lwzu r10,4(r11)
	ea = 4 + r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8265b568
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8265B568;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r31,180(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r29,184(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8265b5dc
	if (!cr6.eq) goto loc_8265B5DC;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8265b5dc
	if (!cr6.eq) goto loc_8265B5DC;
	// lbz r11,232(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8265b5dc
	if (cr6.eq) goto loc_8265B5DC;
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8265b5dc
	if (cr6.eq) goto loc_8265B5DC;
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r10,204(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x8265b5dc
	if (cr6.eq) goto loc_8265B5DC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8264ef68
	sub_8264EF68(ctx, base);
loc_8265B5DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8265b540
	if (!cr6.eq) goto loc_8265B540;
loc_8265B5F8:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ble cr6,0x8265be3c
	if (!cr6.gt) goto loc_8265BE3C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r31,r22,4
	r31.s64 = r22.s64 + 4;
	// mr r25,r23
	r25.u64 = r23.u64;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
loc_8265B610:
	// lbz r11,-4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + -4);
	// addi r27,r31,-4
	r27.s64 = r31.s64 + -4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// bgt cr6,0x8265be1c
	if (cr6.gt) goto loc_8265BE1C;
	// lis r12,-32154
	r12.s64 = -2107244544;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-18884
	r12.s64 = r12.s64 + -18884;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8265B6CC;
	case 1:
		goto loc_8265B6EC;
	case 2:
		goto loc_8265BA0C;
	case 3:
		goto loc_8265B70C;
	case 4:
		goto loc_8265B728;
	case 5:
		goto loc_8265B750;
	case 6:
		goto loc_8265B7A0;
	case 7:
		goto loc_8265B7EC;
	case 8:
		goto loc_8265B828;
	case 9:
		goto loc_8265B848;
	case 10:
		goto loc_8265B920;
	case 11:
		goto loc_8265BE1C;
	case 12:
		goto loc_8265B93C;
	case 13:
		goto loc_8265B958;
	case 14:
		goto loc_8265B974;
	case 15:
		goto loc_8265B9C0;
	case 16:
		goto loc_8265BA28;
	case 17:
		goto loc_8265BA7C;
	case 18:
		goto loc_8265BAA0;
	case 19:
		goto loc_8265BAD8;
	case 20:
		goto loc_8265BAF8;
	case 21:
		goto loc_8265BB0C;
	case 22:
		goto loc_8265BD24;
	case 23:
		goto loc_8265BB18;
	case 24:
		goto loc_8265BB50;
	case 25:
		goto loc_8265BB90;
	case 26:
		goto loc_8265BBD0;
	case 27:
		goto loc_8265BC10;
	case 28:
		goto loc_8265BC68;
	case 29:
		goto loc_8265BE1C;
	case 30:
		goto loc_8265BE1C;
	case 31:
		goto loc_8265BCA8;
	case 32:
		goto loc_8265BCDC;
	case 33:
		goto loc_8265BCE8;
	case 34:
		goto loc_8265BD04;
	case 35:
		goto loc_8265BDFC;
	default:
		__builtin_unreachable();
	}
	// lwz r19,-18740(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18740);
	// lwz r19,-18708(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18708);
	// lwz r19,-17908(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17908);
	// lwz r19,-18676(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18676);
	// lwz r19,-18648(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18648);
	// lwz r19,-18608(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18608);
	// lwz r19,-18528(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18528);
	// lwz r19,-18452(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18452);
	// lwz r19,-18392(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18392);
	// lwz r19,-18360(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18360);
	// lwz r19,-18144(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18144);
	// lwz r19,-16868(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16868);
	// lwz r19,-18116(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18116);
	// lwz r19,-18088(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18088);
	// lwz r19,-18060(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -18060);
	// lwz r19,-17984(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17984);
	// lwz r19,-17880(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17880);
	// lwz r19,-17796(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17796);
	// lwz r19,-17760(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17760);
	// lwz r19,-17704(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17704);
	// lwz r19,-17672(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17672);
	// lwz r19,-17652(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17652);
	// lwz r19,-17116(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17116);
	// lwz r19,-17640(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17640);
	// lwz r19,-17584(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17584);
	// lwz r19,-17520(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17520);
	// lwz r19,-17456(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17456);
	// lwz r19,-17392(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17392);
	// lwz r19,-17304(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17304);
	// lwz r19,-16868(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16868);
	// lwz r19,-16868(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16868);
	// lwz r19,-17240(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17240);
	// lwz r19,-17188(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17188);
	// lwz r19,-17176(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17176);
	// lwz r19,-17148(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -17148);
	// lwz r19,-16900(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -16900);
loc_8265B6CC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8263e510
	sub_8263E510(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265B6EC:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// bl 0x8263e6d8
	sub_8263E6D8(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265B70C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lbz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// bl 0x8264aee0
	sub_8264AEE0(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265B728:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8265be18
	goto loc_8265BE18;
loc_8265B750:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// bl 0x82642b50
	sub_82642B50(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826287d8
	sub_826287D8(ctx, base);
	// lhz r29,4(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r5,r29,2
	ctx.r5.u64 = __builtin_rotateleft32(r29.u32, 2);
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
	// b 0x8265be1c
	goto loc_8265BE1C;
loc_8265B7A0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// bl 0x82643298
	sub_82643298(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826287d8
	sub_826287D8(ctx, base);
	// lhz r29,4(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r5,r29,2
	ctx.r5.u64 = __builtin_rotateleft32(r29.u32, 2);
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
	// b 0x8265be1c
	goto loc_8265BE1C;
loc_8265B7EC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// bl 0x82646318
	sub_82646318(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265B828:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265be14
	if (cr6.eq) goto loc_8265BE14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x826464e8
	sub_826464E8(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265B848:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8265b918
	if (!cr6.eq) goto loc_8265B918;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// li r29,1
	r29.s64 = 1;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8265b8c0
	if (!cr6.gt) goto loc_8265B8C0;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8265B898:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// cmplw cr6,r6,r8
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, xer);
	// bne cr6,0x8265b8bc
	if (!cr6.eq) goto loc_8265B8BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x8265b898
	if (cr6.lt) goto loc_8265B898;
	// b 0x8265b8c0
	goto loc_8265B8C0;
loc_8265B8BC:
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8265B8C0:
	// extsb r11,r29
	r11.s64 = r29.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265b8d8
	if (cr6.eq) goto loc_8265B8D8;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82645cf0
	sub_82645CF0(ctx, base);
loc_8265B8D8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8265b910
	if (!cr6.eq) goto loc_8265B910;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265B910:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
loc_8265B918:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// b 0x8265be18
	goto loc_8265BE18;
loc_8265B920:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265be14
	if (cr6.eq) goto loc_8265BE14;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82646610
	sub_82646610(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265B93C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82640fe8
	sub_82640FE8(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265B958:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// bl 0x826402a8
	sub_826402A8(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265B974:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// bl 0x826436c8
	sub_826436C8(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826287d8
	sub_826287D8(ctx, base);
	// lhz r29,4(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r5,r29,2
	ctx.r5.u64 = __builtin_rotateleft32(r29.u32, 2);
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
	// b 0x8265be1c
	goto loc_8265BE1C;
loc_8265B9C0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// bl 0x82643aa0
	sub_82643AA0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lhz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826287d8
	sub_826287D8(ctx, base);
	// lhz r29,4(r31)
	r29.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r5,r29,2
	ctx.r5.u64 = __builtin_rotateleft32(r29.u32, 2);
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
	// b 0x8265be1c
	goto loc_8265BE1C;
loc_8265BA0C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// bl 0x8264f268
	sub_8264F268(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BA28:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8265ba44
	if (!cr6.eq) goto loc_8265BA44;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8264a5f8
	sub_8264A5F8(ctx, base);
loc_8265BA44:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8265be1c
	if (cr6.eq) goto loc_8265BE1C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,32
	ctx.r5.s64 = 32;
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
	// b 0x8265be1c
	goto loc_8265BE1C;
loc_8265BA7C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// bl 0x826425b8
	sub_826425B8(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BAA0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8265bac8
	if (!cr6.eq) goto loc_8265BAC8;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8265bac8
	if (!cr6.eq) goto loc_8265BAC8;
	// bl 0x8263e3a0
	sub_8263E3A0(ctx, base);
loc_8265BAC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8265be18
	goto loc_8265BE18;
loc_8265BAD8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// lbz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// bl 0x826422f0
	sub_826422F0(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BAF8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lbz r5,-2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + -2);
	// lbz r4,-3(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + -3);
	// bl 0x82645860
	sub_82645860(ctx, base);
	// b 0x8265be1c
	goto loc_8265BE1C;
loc_8265BB0C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8264b250
	sub_8264B250(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BB18:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// bl 0x8264b448
	sub_8264B448(ctx, base);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,32
	ctx.r5.s64 = 32;
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
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BB50:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8264aa70
	sub_8264AA70(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BB90:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f31,172(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8264aac0
	sub_8264AAC0(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BBD0:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8264a9d0
	sub_8264A9D0(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BC10:
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r27,r29,16
	r27.s64 = r29.s64 + 16;
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// lwz r11,224(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 224);
	// addi r3,r28,224
	ctx.r3.s64 = r28.s64 + 224;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BC68:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8264aa20
	sub_8264AA20(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BCA8:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82641928
	sub_82641928(ctx, base);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,32
	ctx.r5.s64 = 32;
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
	// b 0x8265be1c
	goto loc_8265BE1C;
loc_8265BCDC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BCE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8265be14
	if (!cr6.eq) goto loc_8265BE14;
	// bl 0x8263b258
	sub_8263B258(ctx, base);
	// b 0x8265be14
	goto loc_8265BE14;
loc_8265BD04:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82673fc8
	sub_82673FC8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x8265be18
	goto loc_8265BE18;
loc_8265BD24:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8265bd7c
	if (cr6.lt) goto loc_8265BD7C;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
loc_8265BD48:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8265bd6c
	if (cr6.eq) goto loc_8265BD6C;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stwu r10,-4(r9)
	ea = -4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_8265BD6C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265bd48
	if (!cr6.lt) goto loc_8265BD48;
loc_8265BD7C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8265bda4
	if (cr6.eq) goto loc_8265BDA4;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lbz r7,10(r27)
	ctx.r7.u64 = PPC_LOAD_U8(r27.u32 + 10);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265BDA4:
	// lhz r11,8(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 8);
	// lwz r29,4(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r28,r11,r29
	r28.u64 = r11.u64 + r29.u64;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bge cr6,0x8265bdd0
	if (!cr6.lt) goto loc_8265BDD0;
loc_8265BDBC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// blt cr6,0x8265bdbc
	if (cr6.lt) goto loc_8265BDBC;
loc_8265BDD0:
	// lhz r29,8(r27)
	r29.u64 = PPC_LOAD_U16(r27.u32 + 8);
	// lwz r28,4(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r5,r29,2
	ctx.r5.u64 = __builtin_rotateleft32(r29.u32, 2);
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
	// b 0x8265be1c
	goto loc_8265BE1C;
loc_8265BDFC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265BE14:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8265BE18:
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_8265BE1C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265be30
	if (cr6.eq) goto loc_8265BE30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_8265BE30:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// bne 0x8265b610
	if (!cr0.eq) goto loc_8265B610;
loc_8265BE3C:
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r23,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r23.u32);
	// stw r21,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r21.u32);
	// stw r22,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r22.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,164(r11)
	PPC_STORE_U32(r11.u32 + 164, ctx.r10.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r9,r31,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x80000000;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8265be98
	if (!cr6.eq) goto loc_8265BE98;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,20
	ctx.r6.s64 = 20;
	// clrlwi r5,r31,2
	ctx.r5.u64 = r31.u32 & 0x3FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265BE98:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
}

__attribute__((alias("__imp__sub_8265BEA0"))) PPC_WEAK_FUNC(sub_8265BEA0);
PPC_FUNC_IMPL(__imp__sub_8265BEA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8265BEA4"))) PPC_WEAK_FUNC(sub_8265BEA4);
PPC_FUNC_IMPL(__imp__sub_8265BEA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265BEA8"))) PPC_WEAK_FUNC(sub_8265BEA8);
PPC_FUNC_IMPL(__imp__sub_8265BEA8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
loc_8265BEC4:
	// add r11,r26,r25
	r11.u64 = r26.u64 + r25.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// mr r31,r25
	r31.u64 = r25.u64;
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r26
	r30.u64 = r26.u64;
	// add r8,r11,r28
	ctx.r8.u64 = r11.u64 + r28.u64;
	// lwzx r7,r11,r28
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,8(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
loc_8265BF00:
	// rlwinm r11,r30,4,0,27
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r27
	ctr.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r29,r11,r28
	r29.u64 = r11.u64 + r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265bf48
	if (cr6.eq) goto loc_8265BF48;
loc_8265BF24:
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// mtctr r27
	ctr.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265bf24
	if (!cr6.eq) goto loc_8265BF24;
loc_8265BF48:
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mtctr r27
	ctr.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r11,r28
	r29.u64 = r11.u64 + r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265bf90
	if (cr6.eq) goto loc_8265BF90;
loc_8265BF6C:
	// addi r29,r29,-16
	r29.s64 = r29.s64 + -16;
	// mtctr r27
	ctr.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265bf6c
	if (!cr6.eq) goto loc_8265BF6C;
loc_8265BF90:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x8265c024
	if (cr6.lt) goto loc_8265C024;
	// beq cr6,0x8265c014
	if (cr6.eq) goto loc_8265C014;
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r30,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r5,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r5.u32);
	// stw r4,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r4.u32);
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r3,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r3.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_8265C014:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// ble cr6,0x8265bf00
	if (!cr6.gt) goto loc_8265BF00;
loc_8265C024:
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(r26.s32, r31.s32, xer);
	// bge cr6,0x8265c040
	if (!cr6.lt) goto loc_8265C040;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8265bea8
	sub_8265BEA8(ctx, base);
loc_8265C040:
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(r30.s32, r25.s32, xer);
	// bge cr6,0x8265c050
	if (!cr6.lt) goto loc_8265C050;
	// mr r26,r30
	r26.u64 = r30.u64;
	// b 0x8265bec4
	goto loc_8265BEC4;
loc_8265C050:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8265C054"))) PPC_WEAK_FUNC(sub_8265C054);
PPC_FUNC_IMPL(__imp__sub_8265C054) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8265C058"))) PPC_WEAK_FUNC(sub_8265C058);
PPC_FUNC_IMPL(__imp__sub_8265C058) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8265c0b8
	if (cr6.lt) goto loc_8265C0B8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x8265c0a0
	if (!cr6.gt) goto loc_8265C0A0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-12724(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12724);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8265C0A0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f1,-12720(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12720);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8265C0B8:
	// bl 0x828eb6d0
	sub_828EB6D0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8265C0CC"))) PPC_WEAK_FUNC(sub_8265C0CC);
PPC_FUNC_IMPL(__imp__sub_8265C0CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C0D0"))) PPC_WEAK_FUNC(sub_8265C0D0);
PPC_FUNC_IMPL(__imp__sub_8265C0D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,295(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 295);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// stb r11,295(r3)
	PPC_STORE_U8(ctx.r3.u32 + 295, r11.u8);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8265c0fc
	if (!cr6.eq) goto loc_8265C0FC;
	// lbz r10,293(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 293);
	// xori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 ^ 1;
	// stb r9,293(r3)
	PPC_STORE_U8(ctx.r3.u32 + 293, ctx.r9.u8);
loc_8265C0FC:
	// lbz r11,295(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 295);
	// clrlwi r10,r11,29
	ctx.r10.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8265c118
	if (!cr6.eq) goto loc_8265C118;
	// lbz r10,293(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 293);
	// xori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 ^ 2;
	// stb r9,293(r3)
	PPC_STORE_U8(ctx.r3.u32 + 293, ctx.r9.u8);
loc_8265C118:
	// lbz r11,295(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 295);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,294(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 294);
	// stb r10,295(r3)
	PPC_STORE_U8(ctx.r3.u32 + 295, ctx.r10.u8);
	// subfic r9,r11,1
	xer.ca = r11.u32 <= 1;
	ctx.r9.s64 = 1 - r11.s64;
	// stb r9,294(r3)
	PPC_STORE_U8(ctx.r3.u32 + 294, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_8265C138"))) PPC_WEAK_FUNC(sub_8265C138);
PPC_FUNC_IMPL(__imp__sub_8265C138) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C13C"))) PPC_WEAK_FUNC(sub_8265C13C);
PPC_FUNC_IMPL(__imp__sub_8265C13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C140"))) PPC_WEAK_FUNC(sub_8265C140);
PPC_FUNC_IMPL(__imp__sub_8265C140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8265C14C"))) PPC_WEAK_FUNC(sub_8265C14C);
PPC_FUNC_IMPL(__imp__sub_8265C14C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C150"))) PPC_WEAK_FUNC(sub_8265C150);
PPC_FUNC_IMPL(__imp__sub_8265C150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C160"))) PPC_WEAK_FUNC(sub_8265C160);
PPC_FUNC_IMPL(__imp__sub_8265C160) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x8265c178
	if (cr6.eq) goto loc_8265C178;
	// li r11,0
	r11.s64 = 0;
loc_8265C178:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C180"))) PPC_WEAK_FUNC(sub_8265C180);
PPC_FUNC_IMPL(__imp__sub_8265C180) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x8265c198
	if (cr6.eq) goto loc_8265C198;
	// li r11,0
	r11.s64 = 0;
loc_8265C198:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C1A0"))) PPC_WEAK_FUNC(sub_8265C1A0);
PPC_FUNC_IMPL(__imp__sub_8265C1A0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f12,6240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x8265c1d0
	if (cr6.eq) goto loc_8265C1D0;
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8265c1d0
	if (!cr6.lt) goto loc_8265C1D0;
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
loc_8265C1D0:
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bne cr6,0x8265c1e4
	if (!cr6.eq) goto loc_8265C1E4;
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8265C1E4:
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
}

__attribute__((alias("__imp__sub_8265C1F0"))) PPC_WEAK_FUNC(sub_8265C1F0);
PPC_FUNC_IMPL(__imp__sub_8265C1F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C1F4"))) PPC_WEAK_FUNC(sub_8265C1F4);
PPC_FUNC_IMPL(__imp__sub_8265C1F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C1F8"))) PPC_WEAK_FUNC(sub_8265C1F8);
PPC_FUNC_IMPL(__imp__sub_8265C1F8) {
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
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265c220
	if (cr6.eq) goto loc_8265C220;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8265c234
	if (!cr6.eq) goto loc_8265C234;
loc_8265C220:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265C234:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265c248
	if (cr6.eq) goto loc_8265C248;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8265c25c
	if (!cr6.eq) goto loc_8265C25C;
loc_8265C248:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265C25C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265c270
	if (cr6.eq) goto loc_8265C270;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x8265c284
	if (!cr6.eq) goto loc_8265C284;
loc_8265C270:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265C284:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265c2a8
	if (cr6.eq) goto loc_8265C2A8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82640e40
	sub_82640E40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8265c2a8
	if (cr6.eq) goto loc_8265C2A8;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x826638e0
	sub_826638E0(ctx, base);
loc_8265C2A8:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8265C2BC"))) PPC_WEAK_FUNC(sub_8265C2BC);
PPC_FUNC_IMPL(__imp__sub_8265C2BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C2C0"))) PPC_WEAK_FUNC(sub_8265C2C0);
PPC_FUNC_IMPL(__imp__sub_8265C2C0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82c58520
	sub_82C58520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265C2CC"))) PPC_WEAK_FUNC(sub_8265C2CC);
PPC_FUNC_IMPL(__imp__sub_8265C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C2D0"))) PPC_WEAK_FUNC(sub_8265C2D0);
PPC_FUNC_IMPL(__imp__sub_8265C2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	r11.s64 = 0;
	// lfs f0,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// addi r5,r6,17532
	ctx.r5.s64 = ctx.r6.s64 + 17532;
	// lfs f13,6240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16308(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16308);
	ctx.f12.f64 = double(temp.f32);
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stb r10,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r10.u8);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
}

__attribute__((alias("__imp__sub_8265C320"))) PPC_WEAK_FUNC(sub_8265C320);
PPC_FUNC_IMPL(__imp__sub_8265C320) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C324"))) PPC_WEAK_FUNC(sub_8265C324);
PPC_FUNC_IMPL(__imp__sub_8265C324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C328"))) PPC_WEAK_FUNC(sub_8265C328);
PPC_FUNC_IMPL(__imp__sub_8265C328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C32C"))) PPC_WEAK_FUNC(sub_8265C32C);
PPC_FUNC_IMPL(__imp__sub_8265C32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C330"))) PPC_WEAK_FUNC(sub_8265C330);
PPC_FUNC_IMPL(__imp__sub_8265C330) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82645860
	sub_82645860(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// bne cr6,0x8265c38c
	if (!cr6.eq) goto loc_8265C38C;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x8265c3bc
	if (!cr6.eq) goto loc_8265C3BC;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8265c3c8
	goto loc_8265C3C8;
loc_8265C38C:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x8265c3bc
	if (!cr6.eq) goto loc_8265C3BC;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8265c3c8
	goto loc_8265C3C8;
loc_8265C3BC:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8265C3C8:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// lwz r11,-24484(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265c438
	if (!cr6.eq) goto loc_8265C438;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c42c
	if (!cr6.lt) goto loc_8265C42C;
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
loc_8265C42C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_8265C438:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x8265c4e0
	if (!cr6.eq) goto loc_8265C4E0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8265c4d8
	if (cr6.eq) goto loc_8265C4D8;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c49c
	if (!cr6.lt) goto loc_8265C49C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17592
	ctx.r8.s64 = ctx.r9.s64 + 17592;
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
loc_8265C49C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8265a150
	sub_8265A150(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c4d8
	if (!cr6.lt) goto loc_8265C4D8;
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
loc_8265C4D8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_8265C4E0:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8265C4F0"))) PPC_WEAK_FUNC(sub_8265C4F0);
PPC_FUNC_IMPL(__imp__sub_8265C4F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8265C4F4"))) PPC_WEAK_FUNC(sub_8265C4F4);
PPC_FUNC_IMPL(__imp__sub_8265C4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C4F8"))) PPC_WEAK_FUNC(sub_8265C4F8);
PPC_FUNC_IMPL(__imp__sub_8265C4F8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	f0.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f12,6240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6240);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x8265c538
	if (cr6.eq) goto loc_8265C538;
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x8265c538
	if (!cr6.lt) goto loc_8265C538;
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
loc_8265C538:
	// lfs f0,32(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 32);
	f0.f64 = double(temp.f32);
	// lfs f13,24(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x8265c550
	if (cr6.eq) goto loc_8265C550;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - f0.f64));
	// fsel f13,f12,f0,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? f0.f64 : ctx.f13.f64;
loc_8265C550:
	// stfs f13,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r29.u32 + 20, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x8265c5dc
	if (cr6.lt) goto loc_8265C5DC;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lwz r10,364(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 364);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8265c5dc
	if (cr6.eq) goto loc_8265C5DC;
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
	// bge cr6,0x8265c5a4
	if (!cr6.lt) goto loc_8265C5A4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17608
	ctx.r8.s64 = ctx.r9.s64 + 17608;
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
loc_8265C5A4:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x82659f80
	sub_82659F80(ctx, base);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c5dc
	if (!cr6.lt) goto loc_8265C5DC;
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
loc_8265C5DC:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8265C5EC"))) PPC_WEAK_FUNC(sub_8265C5EC);
PPC_FUNC_IMPL(__imp__sub_8265C5EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8265C5F0"))) PPC_WEAK_FUNC(sub_8265C5F0);
PPC_FUNC_IMPL(__imp__sub_8265C5F0) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// addi r26,r11,40
	r26.s64 = r11.s64 + 40;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8265c684
	if (!cr6.gt) goto loc_8265C684;
	// li r27,0
	r27.s64 = 0;
loc_8265C61C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// addi r29,r11,56
	r29.s64 = r11.s64 + 56;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8265c670
	if (!cr6.gt) goto loc_8265C670;
	// li r30,0
	r30.s64 = 0;
loc_8265C63C:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r4,r11,464
	ctx.r4.s64 = r11.s64 + 464;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r7
	cr6.compare<int32_t>(r31.s32, ctx.r7.s32, xer);
	// blt cr6,0x8265c63c
	if (cr6.lt) goto loc_8265C63C;
loc_8265C670:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// blt cr6,0x8265c61c
	if (cr6.lt) goto loc_8265C61C;
loc_8265C684:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8265C688"))) PPC_WEAK_FUNC(sub_8265C688);
PPC_FUNC_IMPL(__imp__sub_8265C688) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8265C68C"))) PPC_WEAK_FUNC(sub_8265C68C);
PPC_FUNC_IMPL(__imp__sub_8265C68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C690"))) PPC_WEAK_FUNC(sub_8265C690);
PPC_FUNC_IMPL(__imp__sub_8265C690) {
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
	// addi r31,r3,240
	r31.s64 = ctx.r3.s64 + 240;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r11,r30,368
	r11.s64 = r30.s64 + 368;
	// lvx128 v9,r0,r31
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,320
	ctx.r8.s64 = 320;
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v0,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v11,r31,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v13,r31,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v8,r30,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r30.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v9,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v12,v11,v12,v10
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v7,v8,v0
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v7,r31,r7
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_8265C710"))) PPC_WEAK_FUNC(sub_8265C710);
PPC_FUNC_IMPL(__imp__sub_8265C710) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265C714"))) PPC_WEAK_FUNC(sub_8265C714);
PPC_FUNC_IMPL(__imp__sub_8265C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C718"))) PPC_WEAK_FUNC(sub_8265C718);
PPC_FUNC_IMPL(__imp__sub_8265C718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c760
	if (!cr6.lt) goto loc_8265C760;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17648
	ctx.r8.s64 = ctx.r9.s64 + 17648;
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
loc_8265C760:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265c7ac
	if (cr6.eq) goto loc_8265C7AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c330
	sub_8265C330(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c924
	if (!cr6.lt) goto loc_8265C924;
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_8265C7AC:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x8265c7e0
	if (!cr6.eq) goto loc_8265C7E0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8265c7ec
	goto loc_8265C7EC;
loc_8265C7E0:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8265C7EC:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31931
	ctx.r9.s64 = -2092630016;
	// lwz r11,-24484(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265c85c
	if (!cr6.eq) goto loc_8265C85C;
	// li r11,2
	r11.s64 = 2;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c850
	if (!cr6.lt) goto loc_8265C850;
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
loc_8265C850:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_8265C85C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 + ctx.f13.f64));
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// addi r28,r11,8956
	r28.s64 = r11.s64 + 8956;
	// lwz r9,388(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 388);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8265c8e8
	if (cr6.eq) goto loc_8265C8E8;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c8b4
	if (!cr6.lt) goto loc_8265C8B4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17592
	ctx.r8.s64 = ctx.r9.s64 + 17592;
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
loc_8265C8B4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8265a150
	sub_8265A150(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c8e8
	if (!cr6.lt) goto loc_8265C8E8;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265C8E8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	r11.s64 = 1;
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c920
	if (!cr6.lt) goto loc_8265C920;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265C920:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8265C924:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8265C928"))) PPC_WEAK_FUNC(sub_8265C928);
PPC_FUNC_IMPL(__imp__sub_8265C928) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8265C92C"))) PPC_WEAK_FUNC(sub_8265C92C);
PPC_FUNC_IMPL(__imp__sub_8265C92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265C930"))) PPC_WEAK_FUNC(sub_8265C930);
PPC_FUNC_IMPL(__imp__sub_8265C930) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,12
	r27.s64 = 12;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265c988
	if (!cr6.lt) goto loc_8265C988;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,17740
	ctx.r7.s64 = ctx.r9.s64 + 17740;
	// addi r6,r8,17732
	ctx.r6.s64 = ctx.r8.s64 + 17732;
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
loc_8265C988:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r10,16
	ctx.r10.s64 = 16;
	// ld r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U64(r23.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,464
	ctx.r7.s64 = r11.s64 + 464;
	// li r6,32
	ctx.r6.s64 = 32;
	// std r9,464(r11)
	PPC_STORE_U64(r11.u32 + 464, ctx.r9.u64);
	// ld r5,8(r23)
	ctx.r5.u64 = PPC_LOAD_U64(r23.u32 + 8);
	// std r5,472(r11)
	PPC_STORE_U64(r11.u32 + 472, ctx.r5.u64);
	// lfs f0,8(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,480
	r11.s64 = r11.s64 + 480;
	// lfs f13,288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,276(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,268(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 268, temp.u32);
	// lfs f11,12(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// addi r9,r11,268
	ctx.r9.s64 = r11.s64 + 268;
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f7,272(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 272, temp.u32);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r7,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r11,r10
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lfs f6,8(r23)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v10,r5,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvlx v9,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v7,v10,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r11,r6
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c48898
	sub_82C48898(ctx, base);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8264efd0
	sub_8264EFD0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82640128
	sub_82640128(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
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
	// bne cr6,0x8265cae0
	if (!cr6.eq) goto loc_8265CAE0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82640e40
	sub_82640E40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8265cd40
	if (cr6.eq) goto loc_8265CD40;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8265cac8
	if (!cr0.eq) goto loc_8265CAC8;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265cac8
	if (!cr6.eq) goto loc_8265CAC8;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265caa8
	if (cr6.eq) goto loc_8265CAA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8265CAA8:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265cac8
	if (!cr6.eq) goto loc_8265CAC8;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265cac8
	if (cr6.eq) goto loc_8265CAC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8265CAC8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x826635c8
	sub_826635C8(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
loc_8265CAE0:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,152(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// stw r7,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r7.u32);
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x8265cb30
	if (!cr6.lt) goto loc_8265CB30;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17720
	ctx.r8.s64 = ctx.r9.s64 + 17720;
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
loc_8265CB30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8265c5f0
	sub_8265C5F0(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,152(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r9.u32);
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r8,148(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	r11.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8265cb9c
	if (!cr0.eq) goto loc_8265CB9C;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265cb9c
	if (!cr6.eq) goto loc_8265CB9C;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265cb7c
	if (cr6.eq) goto loc_8265CB7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8265CB7C:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265cb9c
	if (!cr6.eq) goto loc_8265CB9C;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265cb9c
	if (cr6.eq) goto loc_8265CB9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8265CB9C:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,480
	ctx.r3.s64 = r11.s64 + 480;
	// bl 0x8265c0d0
	sub_8265C0D0(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r8,8(r23)
	ctx.r8.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// addi r11,r11,480
	r11.s64 = r11.s64 + 480;
	// lwz r7,12(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lfs f0,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 268);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,268(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 268);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,284(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 284);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f10,272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f9,288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f8,288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,284(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 284);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f3,84(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f13,92(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x8265cc70
	if (!cr6.lt) goto loc_8265CC70;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17708
	ctx.r8.s64 = ctx.r9.s64 + 17708;
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
loc_8265CC70:
	// lwz r25,12(r30)
	r25.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r20,r11,8956
	r20.s64 = r11.s64 + 8956;
	// lwz r11,44(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// addic. r24,r11,-1
	xer.ca = r11.u32 > 0;
	r24.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// blt 0x8265cdfc
	if (cr0.lt) goto loc_8265CDFC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r26,r24,2,0,29
	r26.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r11,17636
	r22.s64 = r11.s64 + 17636;
	// addi r21,r10,17684
	r21.s64 = ctx.r10.s64 + 17684;
loc_8265CC9C:
	// lwz r10,40(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 40);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r3,r11,464
	ctx.r3.s64 = r11.s64 + 464;
	// lwzx r31,r26,r10
	r31.u64 = PPC_LOAD_U32(r26.u32 + ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8265cd54
	if (!cr6.eq) goto loc_8265CD54;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265cce0
	if (!cr6.lt) goto loc_8265CCE0;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265CCE0:
	// addi r5,r3,48
	ctx.r5.s64 = ctx.r3.s64 + 48;
	// lwz r7,76(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r8,224
	ctx.r8.s64 = 224;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x826706b8
	sub_826706B8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lwz r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// bl 0x826558d0
	sub_826558D0(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265cd78
	if (!cr6.lt) goto loc_8265CD78;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x8265cd78
	goto loc_8265CD78;
loc_8265CD40:
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x828e9448
	return;
loc_8265CD54:
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x82675170
	sub_82675170(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_8265CD78:
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// ble cr6,0x8265cda8
	if (!cr6.gt) goto loc_8265CDA8;
	// lbz r11,38(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 38);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265cda8
	if (cr6.eq) goto loc_8265CDA8;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lbz r11,213(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 213);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265cda8
	if (cr6.eq) goto loc_8265CDA8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8264ed60
	sub_8264ED60(ctx, base);
loc_8265CDA8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 400);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8265cdf0
	if (cr6.eq) goto loc_8265CDF0;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265cde0
	if (!cr6.lt) goto loc_8265CDE0;
	// stw r21,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r21.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265CDE0:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8265a230
	sub_8265A230(ctx, base);
loc_8265CDF0:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r26,r26,-4
	r26.s64 = r26.s64 + -4;
	// bge 0x8265cc9c
	if (!cr0.lt) goto loc_8265CC9C;
loc_8265CDFC:
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8265ce50
	if (!cr0.eq) goto loc_8265CE50;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265ce50
	if (!cr6.eq) goto loc_8265CE50;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265ce30
	if (cr6.eq) goto loc_8265CE30;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8265CE30:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265ce50
	if (!cr6.eq) goto loc_8265CE50;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265ce50
	if (cr6.eq) goto loc_8265CE50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8265CE50:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 376);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8265cec4
	if (cr6.eq) goto loc_8265CEC4;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265ce90
	if (!cr6.lt) goto loc_8265CE90;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17660
	ctx.r8.s64 = ctx.r9.s64 + 17660;
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
loc_8265CE90:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x8265a070
	sub_8265A070(ctx, base);
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265cec4
	if (!cr6.lt) goto loc_8265CEC4;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265CEC4:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265cef4
	if (!cr6.lt) goto loc_8265CEF4;
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
loc_8265CEF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_8265CEFC"))) PPC_WEAK_FUNC(sub_8265CEFC);
PPC_FUNC_IMPL(__imp__sub_8265CEFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8265CF00"))) PPC_WEAK_FUNC(sub_8265CF00);
PPC_FUNC_IMPL(__imp__sub_8265CF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r28,r6,16
	r28.s64 = ctx.r6.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r28.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r10,12416(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12416, ctx.r10.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lfs f0,-12728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f0.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f0,12336(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12336, temp.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r9,r11,7264
	ctx.r9.s64 = r11.s64 + 7264;
	// stw r9,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, ctx.r9.u32);
	// lbz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,7216(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7216);
	// stw r4,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r4.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82c59af8
	sub_82C59AF8(ctx, base);
	// lis r3,-31931
	ctx.r3.s64 = -2092630016;
	// lwz r11,-24484(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8265cfac
	if (cr6.eq) goto loc_8265CFAC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8265cfac
	if (cr6.eq) goto loc_8265CFAC;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265CFAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8265CFB0"))) PPC_WEAK_FUNC(sub_8265CFB0);
PPC_FUNC_IMPL(__imp__sub_8265CFB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8265CFB4"))) PPC_WEAK_FUNC(sub_8265CFB4);
PPC_FUNC_IMPL(__imp__sub_8265CFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265CFB8"))) PPC_WEAK_FUNC(sub_8265CFB8);
PPC_FUNC_IMPL(__imp__sub_8265CFB8) {
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
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265d000
	if (!cr6.lt) goto loc_8265D000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17648
	ctx.r8.s64 = ctx.r9.s64 + 17648;
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
loc_8265D000:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fadds f12,f0,f1
	ctx.f12.f64 = double(float(f0.f64 + ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x8265d038
	if (cr6.eq) goto loc_8265D038;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8265D038:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,464
	ctx.r8.s64 = r11.s64 + 464;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r7,464(r11)
	PPC_STORE_U64(r11.u32 + 464, ctx.r7.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,472(r11)
	PPC_STORE_U64(r11.u32 + 472, ctx.r6.u64);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// addi r10,r11,80
	ctx.r10.s64 = r11.s64 + 80;
	// std r3,80(r11)
	PPC_STORE_U64(r11.u32 + 80, ctx.r3.u64);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,88(r11)
	PPC_STORE_U64(r11.u32 + 88, ctx.r9.u64);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,76(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8265c930
	sub_8265C930(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8265d0b4
	if (!cr6.eq) goto loc_8265D0B4;
	// li r11,0
	r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
loc_8265D0B4:
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265d0e4
	if (!cr6.lt) goto loc_8265D0E4;
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
loc_8265D0E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8265D0E8"))) PPC_WEAK_FUNC(sub_8265D0E8);
PPC_FUNC_IMPL(__imp__sub_8265D0E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8265D0EC"))) PPC_WEAK_FUNC(sub_8265D0EC);
PPC_FUNC_IMPL(__imp__sub_8265D0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265D0F0"))) PPC_WEAK_FUNC(sub_8265D0F0);
PPC_FUNC_IMPL(__imp__sub_8265D0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCVRegister v124{};
	PPCVRegister v125{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaad8
	// addi r12,r1,-256
	r12.s64 = ctx.r1.s64 + -256;
	// bl 0x828ebcd4
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-13072(r1)
	ea = -13072 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	r16.s64 = 0;
	// stw r5,13108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 13108, ctx.r5.u32);
	// li r11,-1
	r11.s64 = -1;
	// stw r16,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r16.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r15,r8
	r15.u64 = ctx.r8.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x82bfd118
	sub_82BFD118(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r16,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r16.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// lfs f0,-12728(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12728);
	f0.f64 = double(temp.f32);
	// lfs f27,21036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f27.f64 = double(temp.f32);
	// stfs f0,12656(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12656, temp.u32);
	// stfs f27,12688(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12688, temp.u32);
	// stfs f27,12692(r1)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12692, temp.u32);
	// ble cr6,0x8265d7c8
	if (!cr6.gt) goto loc_8265D7C8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lis r11,-31931
	r11.s64 = -2092630016;
	// lfs f28,-31316(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31316);
	f28.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f29,-24324(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24324);
	f29.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f25,17752(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17752);
	f25.f64 = double(temp.f32);
	// addi r4,r11,-24484
	ctx.r4.s64 = r11.s64 + -24484;
	// lfs f26,3384(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3384);
	f26.f64 = double(temp.f32);
	// addi r3,r9,8976
	ctx.r3.s64 = ctx.r9.s64 + 8976;
	// lfs f31,-25600(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f31.f64 = double(temp.f32);
	// mr r14,r31
	r14.u64 = r31.u64;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// li r21,16
	r21.s64 = 16;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// li r22,32
	r22.s64 = 32;
	// li r23,48
	r23.s64 = 48;
	// addi r20,r10,7632
	r20.s64 = ctx.r10.s64 + 7632;
loc_8265D1F4:
	// lwz r26,0(r14)
	r26.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// addi r19,r26,16
	r19.s64 = r26.s64 + 16;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82c5a8d0
	sub_82C5A8D0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r17,r16
	r17.u64 = r16.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8265d7b0
	if (!cr6.gt) goto loc_8265D7B0;
	// mr r18,r16
	r18.u64 = r16.u64;
loc_8265D238:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r27,r18,r11
	r27.u64 = r18.u64 + r11.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// bl 0x82bfc898
	sub_82BFC898(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x8265d798
	if (!cr6.gt) goto loc_8265D798;
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,232(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// bne cr6,0x8265d290
	if (!cr6.eq) goto loc_8265D290;
	// lbz r11,16(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,204(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// b 0x8265d294
	goto loc_8265D294;
loc_8265D290:
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
loc_8265D294:
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c58520
	sub_82C58520(ctx, base);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r15,1
	cr6.compare<int32_t>(r15.s32, 1, xer);
	// bne cr6,0x8265d788
	if (!cr6.eq) goto loc_8265D788;
	// lwz r11,320(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8265d788
	if (cr6.eq) goto loc_8265D788;
	// addi r31,r26,240
	r31.s64 = r26.s64 + 240;
	// ld r11,352(r26)
	r11.u64 = PPC_LOAD_U64(r26.u32 + 352);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// ld r9,360(r26)
	ctx.r9.u64 = PPC_LOAD_U64(r26.u32 + 360);
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lvx128 v13,r31,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + r21.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lvx128 v12,r31,r22
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + r22.u32) & ~0xF), VectorMaskL));
	// addi r28,r26,352
	r28.s64 = r26.s64 + 352;
	// lvx128 v11,r31,r23
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + r23.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, r11.u64);
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r9,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// stvx128 v11,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r19
	cr6.compare<uint32_t>(r11.u32, r19.u32, xer);
	// beq cr6,0x8265d344
	if (cr6.eq) goto loc_8265D344;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vxor v13,v13,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
loc_8265D344:
	// addi r11,r1,336
	r11.s64 = ctx.r1.s64 + 336;
	// vpermwi128 v126,v13,135
	_mm_store_si128((__m128i*)v126.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// addi r27,r26,320
	r27.s64 = r26.s64 + 320;
	// vpermwi128 v125,v13,99
	_mm_store_si128((__m128i*)v125.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// lvx128 v0,r0,r20
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r20.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)v127.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vor128 v7,v127,v127
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)v127.u8));
	// vor128 v5,v127,v127
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)v127.u8));
	// vmsum3fp128 v1,v10,v10
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vpermwi128 v31,v10,99
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v30,v10,135
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// vmsum3fp128 v29,v13,v10
	_mm_store_ps(v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmulfp128 v28,v126,v31
	_mm_store_ps(v28.f32, _mm_mul_ps(_mm_load_ps(v126.f32), _mm_load_ps(v31.f32)));
	// vmulfp128 v27,v125,v30
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(v125.f32), _mm_load_ps(v30.f32)));
	// vrsqrtefp v13,v1
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v1.f32))));
	// vsubfp v10,v27,v28
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(v27.f32), _mm_load_ps(v28.f32)));
	// vmulfp128 v9,v1,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v3,v127,v1
	_mm_store_ps(ctx.v3.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v26,v10,v10
	_mm_store_ps(v26.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// stvx128 v10,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vnmsubfp v10,v9,v11,v0
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v6,v26,v0
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v2,v127,v26
	_mm_store_ps(ctx.v2.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(v26.f32)));
	// vmaddfp v12,v13,v10,v13
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrsqrtefp v13,v26
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v26.f32))));
	// vmulfp128 v8,v12,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v11,v9,v8,v0
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v4,v6,v10,v0
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v12,v12,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v4,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v11,v12,v7,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vmulfp128 v12,v13,v13
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v25,v1,v11
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v0,v6,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v13,v0,v5,v2
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vmulfp128 v24,v26,v13
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v24,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, v24.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v25,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, v25.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f30,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f30.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	f0.f64 = double(temp.f32);
	// fdivs f0,f31,f0
	f0.f64 = double(float(f31.f64 / f0.f64));
	// fcmpu cr6,f30,f26
	cr6.compare(f30.f64, f26.f64);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// ble cr6,0x8265d788
	if (!cr6.gt) goto loc_8265D788;
	// fcmpu cr6,f1,f25
	cr6.compare(ctx.f1.f64, f25.f64);
	// bge cr6,0x8265d788
	if (!cr6.lt) goto loc_8265D788;
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lfs f24,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	f24.f64 = double(temp.f32);
	// fmuls f12,f24,f29
	ctx.f12.f64 = double(float(f24.f64 * f29.f64));
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f23,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f23.f64 = double(temp.f32);
	// lfs f22,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f22.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// fnmsubs f11,f12,f28,f13
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * f28.f64 - ctx.f13.f64)));
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f21,f11,f0
	f21.f64 = double(float(ctx.f11.f64 * f0.f64));
	// bl 0x8265c058
	sub_8265C058(ctx, base);
	// fmr f20,f1
	ctx.fpscr.disableFlushMode();
	f20.f64 = ctx.f1.f64;
	// fsel f1,f21,f21,f27
	ctx.f1.f64 = f21.f64 >= 0.0 ? f21.f64 : f27.f64;
	// bl 0x8265c058
	sub_8265C058(ctx, base);
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// fdivs f10,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f31.f64 / f30.f64));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// fsubs f30,f20,f1
	f30.f64 = double(float(f20.f64 - ctx.f1.f64));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// vmulfp128 v11,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262b5e0
	sub_8262B5E0(ctx, base);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// vpermwi128 v10,v0,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// vpermwi128 v9,v0,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// vspltw v11,v0,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v13,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vmsum3fp128 v7,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vpermwi128 v6,v13,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v5,v13,v0
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vspltw v12,v13,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vmulfp128 v4,v8,v10
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v3,v6,v9
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// vspltw v2,v7,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vsubfp v10,v3,v4
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v4.f32)));
	// vsubfp v1,v5,v2
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v0,v0,v12,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp128 v0,v13,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vrlimi128 v0,v1,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v1.f32), 228), 1));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// addi r28,r26,368
	r28.s64 = r26.s64 + 368;
	// lvx128 v29,r0,r31
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lvx128 v0,r31,r21
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32 + r21.u32) & ~0xF), VectorMaskL));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lvx128 v11,r31,r22
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32 + r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r0,r27
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r0,r28
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vspltw v30,v31,0
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0xFF));
	// vspltw v12,v31,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0xAA));
	// vspltw v10,v31,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v31.u32), 0x55));
	// vmulfp128 v13,v29,v30
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(v29.f32), _mm_load_ps(v30.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v27,v28,v0
	_mm_store_ps(v27.f32, _mm_sub_ps(_mm_load_ps(v28.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v27,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c58520
	sub_82C58520(ctx, base);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v12,r0,r20
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r20.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// vor128 v11,v127,v127
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)v127.u8));
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// vpermwi128 v26,v0,135
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// vpermwi128 v25,v0,99
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// vmulfp128 v24,v26,v125
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(v26.f32), _mm_load_ps(v125.f32)));
	// vmulfp128 v23,v25,v126
	_mm_store_ps(v23.f32, _mm_mul_ps(_mm_load_ps(v25.f32), _mm_load_ps(v126.f32)));
	// vsubfp v13,v23,v24
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(v23.f32), _mm_load_ps(v24.f32)));
	// vmsum3fp128 v22,v13,v13
	_mm_store_ps(v22.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v0,v22
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(v22.f32))));
	// vmulfp128 v9,v22,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v12.f32)));
	// vcmpeqfp128 v7,v127,v22
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(v22.f32)));
	// vmulfp128 v8,v0,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v6,v9,v8,v12
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v9,v10,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v11,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vspltw v21,v12,0
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v20,v13,v21
	_mm_store_ps(v20.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v21.f32)));
	// stvx128 v20,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8262b5e0
	sub_8262B5E0(ctx, base);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v127,r0,r8
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v19,v0,135
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v18,v0,99
	_mm_store_si128((__m128i*)v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmsum3fp128 v17,v0,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v17.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v127.f32), 0xEF));
	// vpermwi128 v125,v127,99
	_mm_store_si128((__m128i*)v125.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x9C));
	// vmulfp128 v16,v0,v127
	_mm_store_ps(v16.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v127.f32)));
	// vpermwi128 v124,v127,135
	_mm_store_si128((__m128i*)v124.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x78));
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vspltw128 v126,v127,3
	_mm_store_si128((__m128i*)v126.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v127.u32), 0x0));
	// vmulfp128 v15,v19,v125
	_mm_store_ps(v15.f32, _mm_mul_ps(_mm_load_ps(v19.f32), _mm_load_ps(v125.f32)));
	// vmulfp128 v14,v18,v124
	_mm_store_ps(v14.f32, _mm_mul_ps(_mm_load_ps(v18.f32), _mm_load_ps(v124.f32)));
	// vspltw128 v63,v17,0
	_mm_store_si128((__m128i*)v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v17.u32), 0xFF));
	// vsubfp v12,v14,v15
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(v14.f32), _mm_load_ps(v15.f32)));
	// vsubfp128 v62,v16,v63
	_mm_store_ps(v62.f32, _mm_sub_ps(_mm_load_ps(v16.f32), _mm_load_ps(v63.f32)));
	// vmaddcfp128 v13,v127,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v127.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp128 v13,v0,v126,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v126.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v13,v62,1,0
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(v62.f32), 228), 1));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// lvx128 v61,r0,r28
	simd::store_shuffled(v61, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vspltw128 v60,v61,0
	_mm_store_si128((__m128i*)v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xFF));
	// lvx128 v59,r0,r31
	simd::store_shuffled(v59, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vspltw128 v12,v61,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0xAA));
	// lvx128 v10,r31,r21
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + r21.u32) & ~0xF), VectorMaskL));
	// vspltw128 v0,v61,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v61.u32), 0x55));
	// lvx128 v13,r31,r22
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r0,r27
	simd::store_shuffled(v58, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vmulfp128 v11,v59,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v59.f32), _mm_load_ps(v60.f32)));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v57,v58,v0
	_mm_store_ps(v57.f32, _mm_sub_ps(_mm_load_ps(v58.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v57,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c58520
	sub_82C58520(ctx, base);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// vor128 v13,v126,v126
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)v126.u8));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v56,v0,99
	_mm_store_si128((__m128i*)v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmsum4fp128 v55,v0,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v127.f32), 0xFF));
	// vpermwi128 v54,v0,135
	_mm_store_si128((__m128i*)v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vmulfp128 v53,v124,v56
	_mm_store_ps(v53.f32, _mm_mul_ps(_mm_load_ps(v124.f32), _mm_load_ps(v56.f32)));
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vspltw128 v51,v55,0
	_mm_store_si128((__m128i*)v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v55.u32), 0xFF));
	// vmulfp128 v52,v125,v54
	_mm_store_ps(v52.f32, _mm_mul_ps(_mm_load_ps(v125.f32), _mm_load_ps(v54.f32)));
	// vsubfp128 v11,v52,v53
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(v52.f32), _mm_load_ps(v53.f32)));
	// vmaddcfp128 v12,v127,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(v127.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp128 v12,v0,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vrlimi128 v12,v51,1,0
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(v51.f32), 228), 1));
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82628a30
	sub_82628A30(ctx, base);
	// lvx128 v50,r0,r28
	simd::store_shuffled(v50, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vspltw128 v49,v50,0
	_mm_store_si128((__m128i*)v49.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0xFF));
	// lvx128 v48,r0,r31
	simd::store_shuffled(v48, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vspltw128 v12,v50,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0xAA));
	// lvx128 v10,r31,r21
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32 + r21.u32) & ~0xF), VectorMaskL));
	// vspltw128 v0,v50,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)v50.u32), 0x55));
	// lvx128 v13,r31,r22
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32 + r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r0,r27
	simd::store_shuffled(v47, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// vmulfp128 v11,v48,v49
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(v48.f32), _mm_load_ps(v49.f32)));
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsubfp128 v46,v47,v0
	_mm_store_ps(v46.f32, _mm_sub_ps(_mm_load_ps(v47.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v46,r31,r23
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c58520
	sub_82C58520(ctx, base);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stfs f24,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r3,r26,224
	ctx.r3.s64 = r26.s64 + 224;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stfs f23,4(r11)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stfs f22,8(r10)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r9,224(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 224);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c58520
	sub_82C58520(ctx, base);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r24
	ctr.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265D788:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8265d7c8
	if (cr6.eq) goto loc_8265D7C8;
loc_8265D798:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r18,r18,8
	r18.s64 = r18.s64 + 8;
	// cmpw cr6,r17,r11
	cr6.compare<int32_t>(r17.s32, r11.s32, xer);
	// blt cr6,0x8265d238
	if (cr6.lt) goto loc_8265D238;
	// lwz r29,13108(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 13108);
loc_8265D7B0:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r14,r14,4
	r14.s64 = r14.s64 + 4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x8265d1f4
	if (cr6.lt) goto loc_8265D1F4;
loc_8265D7C8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8265d800
	if (!cr6.eq) goto loc_8265D800;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_8265D800:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82bfcb30
	sub_82BFCB30(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// addi r1,r1,13072
	ctx.r1.s64 = ctx.r1.s64 + 13072;
	// addi r12,r1,-256
	r12.s64 = ctx.r1.s64 + -256;
	// bl 0x828ebf6c
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab24
}

__attribute__((alias("__imp__sub_8265D83C"))) PPC_WEAK_FUNC(sub_8265D83C);
PPC_FUNC_IMPL(__imp__sub_8265D83C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8265D840"))) PPC_WEAK_FUNC(sub_8265D840);
PPC_FUNC_IMPL(__imp__sub_8265D840) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r13)
	r20.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r19,12
	r19.s64 = 12;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265d89c
	if (!cr6.lt) goto loc_8265D89C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,17832
	ctx.r7.s64 = ctx.r9.s64 + 17832;
	// addi r6,r8,17820
	ctx.r6.s64 = ctx.r8.s64 + 17820;
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
loc_8265D89C:
	// li r25,0
	r25.s64 = 0;
	// lwz r31,828(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 828);
	// lis r18,-32768
	r18.s64 = -2147483648;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r31,r18
	ctx.r9.u64 = r31.u64 | r18.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// lwz r31,828(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 828);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// or r6,r31,r18
	ctx.r6.u64 = r31.u64 | r18.u64;
	// addi r5,r11,127
	ctx.r5.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r5,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFF80;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r26,5,0,26
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0xFFFFFFE0;
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
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,0(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,127
	ctx.r9.s64 = r11.s64 + 127;
	// rlwinm r11,r9,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// add r8,r11,r24
	ctx.r8.u64 = r11.u64 + r24.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwzx r11,r19,r20
	r11.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x8265d984
	if (!cr6.lt) goto loc_8265D984;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17808
	ctx.r8.s64 = ctx.r9.s64 + 17808;
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
loc_8265D984:
	// addic. r23,r26,-1
	xer.ca = r26.u32 > 0;
	r23.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// mr r29,r27
	r29.u64 = r27.u64;
	// blt 0x8265da18
	if (cr0.lt) goto loc_8265DA18;
	// subf r21,r28,r24
	r21.s64 = r24.s64 - r28.s64;
loc_8265D994:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// addi r10,r30,20
	ctx.r10.s64 = r30.s64 + 20;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r31,r30,32
	r31.s64 = r30.s64 + 32;
	// stwx r10,r21,r28
	PPC_STORE_U32(r21.u32 + r28.u32, ctx.r10.u32);
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x8265d9cc
	if (!cr6.gt) goto loc_8265D9CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,120(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826558d0
	sub_826558D0(ctx, base);
loc_8265D9CC:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// li r9,2
	ctx.r9.s64 = 2;
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8265D9E4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// lwzu r9,16(r11)
	ea = 16 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r11.u32 = ea;
	// stwu r9,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8265d9e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8265D9E4;
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r29,r29,32
	r29.s64 = r29.s64 + 32;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bge 0x8265d994
	if (!cr0.lt) goto loc_8265D994;
loc_8265DA18:
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265da48
	if (!cr6.lt) goto loc_8265DA48;
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
loc_8265DA48:
	// lwz r3,88(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 88);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add. r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble 0x8265dba0
	if (!cr0.gt) goto loc_8265DBA0;
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265dac0
	if (!cr6.lt) goto loc_8265DAC0;
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
loc_8265DAC0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82c55380
	sub_82C55380(ctx, base);
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265dafc
	if (!cr6.lt) goto loc_8265DAFC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17768
	ctx.r8.s64 = ctx.r9.s64 + 17768;
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
loc_8265DAFC:
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 100);
	// bl 0x82c55310
	sub_82C55310(ctx, base);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8265db4c
	if (!cr6.eq) goto loc_8265DB4C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82bfc538
	sub_82BFC538(ctx, base);
	// b 0x8265dba0
	goto loc_8265DBA0;
loc_8265DB4C:
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265db7c
	if (!cr6.lt) goto loc_8265DB7C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17756
	ctx.r8.s64 = ctx.r9.s64 + 17756;
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
loc_8265DB7C:
	// lwz r11,124(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x8265db90
	if (!cr6.eq) goto loc_8265DB90;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_8265DB90:
	// lwz r3,100(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 100);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82c55258
	sub_82C55258(ctx, base);
loc_8265DBA0:
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265dbd0
	if (!cr6.lt) goto loc_8265DBD0;
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
loc_8265DBD0:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8265dc34
	if (!cr6.eq) goto loc_8265DC34;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265DC34:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8265dca0
	if (!cr6.eq) goto loc_8265DCA0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265DCA0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8265DCA4"))) PPC_WEAK_FUNC(sub_8265DCA4);
PPC_FUNC_IMPL(__imp__sub_8265DCA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_8265DCA8"))) PPC_WEAK_FUNC(sub_8265DCA8);
PPC_FUNC_IMPL(__imp__sub_8265DCA8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,12
	r26.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265dcf4
	if (!cr6.lt) goto loc_8265DCF4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17872
	ctx.r8.s64 = ctx.r9.s64 + 17872;
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
loc_8265DCF4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r20,0
	r20.s64 = 0;
	// ld r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U64(r25.u32 + 0);
	// lis r19,-31931
	r19.s64 = -2092630016;
	// addi r9,r11,464
	ctx.r9.s64 = r11.s64 + 464;
	// mr r28,r20
	r28.u64 = r20.u64;
	// std r10,464(r11)
	PPC_STORE_U64(r11.u32 + 464, ctx.r10.u64);
	// ld r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U64(r25.u32 + 8);
	// std r8,472(r11)
	PPC_STORE_U64(r11.u32 + 472, ctx.r8.u64);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,120(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// addi r6,r11,80
	ctx.r6.s64 = r11.s64 + 80;
	// ld r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U64(r25.u32 + 0);
	// std r5,80(r11)
	PPC_STORE_U64(r11.u32 + 80, ctx.r5.u64);
	// ld r4,8(r25)
	ctx.r4.u64 = PPC_LOAD_U64(r25.u32 + 8);
	// std r4,88(r11)
	PPC_STORE_U64(r11.u32 + 88, ctx.r4.u64);
	// lfs f0,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f13,768(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 768);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 756);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f12,748(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 748, temp.u32);
	// lfs f11,12(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f7,752(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 752, temp.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 148);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 148, ctx.r8.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r11,40
	r30.s64 = r11.s64 + 40;
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x8265ddcc
	if (!cr6.gt) goto loc_8265DDCC;
	// mr r29,r20
	r29.u64 = r20.u64;
loc_8265DD94:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r4,76(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r3,72(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// bl 0x8265d840
	sub_8265D840(ctx, base);
	// lwz r11,-24484(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8265dff4
	if (cr6.eq) goto loc_8265DFF4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8265dd94
	if (cr6.lt) goto loc_8265DD94;
loc_8265DDCC:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// bne 0x8265de20
	if (!cr0.eq) goto loc_8265DE20;
	// lbz r11,156(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265de20
	if (!cr6.eq) goto loc_8265DE20;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265de00
	if (cr6.eq) goto loc_8265DE00;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8265DE00:
	// lwz r11,164(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265de20
	if (!cr6.eq) goto loc_8265DE20;
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265de20
	if (cr6.eq) goto loc_8265DE20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8265DE20:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r24,r20
	r24.u64 = r20.u64;
	// addi r21,r11,8956
	r21.s64 = r11.s64 + 8956;
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r11,40
	r29.s64 = r11.s64 + 40;
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x8265df70
	if (!cr6.gt) goto loc_8265DF70;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r28,r20
	r28.u64 = r20.u64;
	// addi r23,r11,17620
	r23.s64 = r11.s64 + 17620;
	// addi r22,r10,17848
	r22.s64 = ctx.r10.s64 + 17848;
loc_8265DE64:
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r30,r9,r28
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + r28.u32);
	// lwz r5,120(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x8265de9c
	if (!cr6.lt) goto loc_8265DE9C;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265DE9C:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r4,r30,88
	ctx.r4.s64 = r30.s64 + 88;
	// stw r20,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, r20.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,7264
	r11.s64 = r11.s64 + 7264;
	// stw r11,96(r5)
	PPC_STORE_U32(ctx.r5.u32 + 96, r11.u32);
	// bl 0x82c5a140
	sub_82C5A140(ctx, base);
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265dee0
	if (!cr6.lt) goto loc_8265DEE0;
	// stw r21,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r21.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265DEE0:
	// lwz r11,-24484(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8265df70
	if (cr6.eq) goto loc_8265DF70;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 412);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8265df5c
	if (cr6.eq) goto loc_8265DF5C;
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265df24
	if (!cr6.lt) goto loc_8265DF24;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265DF24:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8265a310
	sub_8265A310(ctx, base);
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265df5c
	if (!cr6.lt) goto loc_8265DF5C;
	// stw r21,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r21.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265DF5C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x8265de64
	if (cr6.lt) goto loc_8265DE64;
loc_8265DF70:
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8265dfc4
	if (!cr0.eq) goto loc_8265DFC4;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265dfc4
	if (!cr6.eq) goto loc_8265DFC4;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265dfa4
	if (cr6.eq) goto loc_8265DFA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8265DFA4:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265dfc4
	if (!cr6.eq) goto loc_8265DFC4;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265dfc4
	if (cr6.eq) goto loc_8265DFC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8265DFC4:
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265dfec
	if (!cr6.lt) goto loc_8265DFEC;
	// stw r21,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r21.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_8265DFEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9444
	return;
loc_8265DFF4:
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8265e048
	if (!cr0.eq) goto loc_8265E048;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265e048
	if (!cr6.eq) goto loc_8265E048;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265e028
	if (cr6.eq) goto loc_8265E028;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8265E028:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265e048
	if (!cr6.eq) goto loc_8265E048;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265e048
	if (cr6.eq) goto loc_8265E048;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8265E048:
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265dfec
	if (!cr6.lt) goto loc_8265DFEC;
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
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8265E07C"))) PPC_WEAK_FUNC(sub_8265E07C);
PPC_FUNC_IMPL(__imp__sub_8265E07C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8265E080"))) PPC_WEAK_FUNC(sub_8265E080);
PPC_FUNC_IMPL(__imp__sub_8265E080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32154
	r11.s64 = -2107244544;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r7,r11,-12544
	ctx.r7.s64 = r11.s64 + -12544;
	// b 0x8265d0f0
	sub_8265D0F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E090"))) PPC_WEAK_FUNC(sub_8265E090);
PPC_FUNC_IMPL(__imp__sub_8265E090) {
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
	// rlwinm r11,r7,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265e0c8
	if (cr6.eq) goto loc_8265E0C8;
	// lis r11,-32154
	r11.s64 = -2107244544;
	// lwz r6,120(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-15680
	ctx.r7.s64 = r11.s64 + -15680;
	// bl 0x8265d0f0
	sub_8265D0F0(ctx, base);
loc_8265E0C8:
	// rlwinm r11,r29,0,29,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265e0e0
	if (cr6.eq) goto loc_8265E0E0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826558a0
	sub_826558A0(ctx, base);
loc_8265E0E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8265E0E4"))) PPC_WEAK_FUNC(sub_8265E0E4);
PPC_FUNC_IMPL(__imp__sub_8265E0E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8265E0E8"))) PPC_WEAK_FUNC(sub_8265E0E8);
PPC_FUNC_IMPL(__imp__sub_8265E0E8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 148);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r11,148(r6)
	PPC_STORE_U32(ctx.r6.u32 + 148, r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// bl 0x8263dee8
	sub_8263DEE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x8263ded8
	sub_8263DED8(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f13,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x8265e154
	if (!cr6.eq) goto loc_8265E154;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8265e160
	goto loc_8265E160;
loc_8265E154:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8265E160:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// clrlwi r23,r25,31
	r23.u64 = r25.u32 & 0x1;
	// addi r9,r11,80
	ctx.r9.s64 = r11.s64 + 80;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,80(r11)
	PPC_STORE_U64(r11.u32 + 80, ctx.r8.u64);
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r7,88(r11)
	PPC_STORE_U64(r11.u32 + 88, ctx.r7.u64);
	// beq cr6,0x8265e1ec
	if (cr6.eq) goto loc_8265E1EC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8265e1c8
	if (!cr6.gt) goto loc_8265E1C8;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_8265E19C:
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8265e1bc
	if (cr6.eq) goto loc_8265E1BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263ded8
	sub_8263DED8(ctx, base);
	// addi r4,r29,240
	ctx.r4.s64 = r29.s64 + 240;
	// bl 0x82bf6be8
	sub_82BF6BE8(ctx, base);
loc_8265E1BC:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8265e19c
	if (!cr0.eq) goto loc_8265E19C;
loc_8265E1C8:
	// li r6,224
	ctx.r6.s64 = 224;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82670290
	sub_82670290(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x826558d0
	sub_826558D0(ctx, base);
loc_8265E1EC:
	// rlwinm r11,r25,0,30,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265e208
	if (cr6.eq) goto loc_8265E208;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8265d840
	sub_8265D840(ctx, base);
loc_8265E208:
	// rlwinm r11,r25,0,29,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265e238
	if (cr6.eq) goto loc_8265E238;
	// lis r11,-32154
	r11.s64 = -2107244544;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-12544
	ctx.r7.s64 = r11.s64 + -12544;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8265d0f0
	sub_8265D0F0(ctx, base);
	// b 0x8265e264
	goto loc_8265E264;
loc_8265E238:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x8265e264
	if (cr6.eq) goto loc_8265E264;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r7,2
	ctx.r7.s64 = 2;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265E264:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8265e2b4
	if (!cr0.eq) goto loc_8265E2B4;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265e2b4
	if (!cr6.eq) goto loc_8265E2B4;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265e294
	if (cr6.eq) goto loc_8265E294;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8265E294:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265e2b4
	if (!cr6.eq) goto loc_8265E2B4;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265e2b4
	if (cr6.eq) goto loc_8265E2B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8265E2B4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_8265E2BC"))) PPC_WEAK_FUNC(sub_8265E2BC);
PPC_FUNC_IMPL(__imp__sub_8265E2BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8265E2C0"))) PPC_WEAK_FUNC(sub_8265E2C0);
PPC_FUNC_IMPL(__imp__sub_8265E2C0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r4,120(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// bl 0x82649d68
	sub_82649D68(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// ld r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U64(r27.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// ld r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U64(r27.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r9,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r9.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// std r8,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r8.u64);
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// bl 0x8265d840
	sub_8265D840(ctx, base);
	// lis r6,-32154
	ctx.r6.s64 = -2107244544;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r7,r6,-12544
	ctx.r7.s64 = ctx.r6.s64 + -12544;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8265d0f0
	sub_8265D0F0(ctx, base);
	// lwz r5,148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8265e390
	if (!cr0.eq) goto loc_8265E390;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265e390
	if (!cr6.eq) goto loc_8265E390;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265e370
	if (cr6.eq) goto loc_8265E370;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8265E370:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265e390
	if (!cr6.eq) goto loc_8265E390;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265e390
	if (cr6.eq) goto loc_8265E390;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8265E390:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265e3bc
	if (cr6.eq) goto loc_8265E3BC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265E3BC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8265E3C0"))) PPC_WEAK_FUNC(sub_8265E3C0);
PPC_FUNC_IMPL(__imp__sub_8265E3C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8265E3C4"))) PPC_WEAK_FUNC(sub_8265E3C4);
PPC_FUNC_IMPL(__imp__sub_8265E3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E3C8"))) PPC_WEAK_FUNC(sub_8265E3C8);
PPC_FUNC_IMPL(__imp__sub_8265E3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,268(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,284(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,268(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f10,272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f9,288(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,288(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,284(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,64(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,68(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f3,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f13,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,272(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8265E448"))) PPC_WEAK_FUNC(sub_8265E448);
PPC_FUNC_IMPL(__imp__sub_8265E448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E44C"))) PPC_WEAK_FUNC(sub_8265E44C);
PPC_FUNC_IMPL(__imp__sub_8265E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E450"))) PPC_WEAK_FUNC(sub_8265E450);
PPC_FUNC_IMPL(__imp__sub_8265E450) {
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
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x82bfd118
	sub_82BFD118(ctx, base);
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

__attribute__((alias("__imp__sub_8265E4B0"))) PPC_WEAK_FUNC(sub_8265E4B0);
PPC_FUNC_IMPL(__imp__sub_8265E4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E4B4"))) PPC_WEAK_FUNC(sub_8265E4B4);
PPC_FUNC_IMPL(__imp__sub_8265E4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E4B8"))) PPC_WEAK_FUNC(sub_8265E4B8);
PPC_FUNC_IMPL(__imp__sub_8265E4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bgt cr6,0x8265e5cc
	if (cr6.gt) {
		sub_8265E5CC(ctx, base);
		return;
	}
	// lis r12,-32154
	r12.s64 = -2107244544;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-6940
	r12.s64 = r12.s64 + -6940;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x8265E524
		return;
	case 1:
		// ERROR: 0x8265E530
		return;
	case 2:
		// ERROR: 0x8265E5CC
		return;
	case 3:
		// ERROR: 0x8265E53C
		return;
	case 4:
		// ERROR: 0x8265E548
		return;
	case 5:
		// ERROR: 0x8265E59C
		return;
	case 6:
		// ERROR: 0x8265E554
		return;
	case 7:
		// ERROR: 0x8265E560
		return;
	case 8:
		// ERROR: 0x8265E56C
		return;
	case 9:
		// ERROR: 0x8265E578
		return;
	case 10:
		// ERROR: 0x8265E584
		return;
	case 11:
		// ERROR: 0x8265E590
		return;
	case 12:
		// ERROR: 0x8265E5A8
		return;
	case 13:
		// ERROR: 0x8265E5B4
		return;
	case 14:
		// ERROR: 0x8265E5C0
		return;
	case 15:
		// ERROR: 0x8265E5B4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8265E4E4"))) PPC_WEAK_FUNC(sub_8265E4E4);
PPC_FUNC_IMPL(__imp__sub_8265E4E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r19{};
	// lwz r19,-6876(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6876);
	// lwz r19,-6864(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6864);
	// lwz r19,-6708(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6708);
	// lwz r19,-6852(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6852);
	// lwz r19,-6840(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6840);
	// lwz r19,-6756(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6756);
	// lwz r19,-6828(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6828);
	// lwz r19,-6816(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6816);
	// lwz r19,-6804(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6804);
	// lwz r19,-6792(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6792);
	// lwz r19,-6780(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6780);
	// lwz r19,-6768(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6768);
	// lwz r19,-6744(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6744);
	// lwz r19,-6732(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6732);
	// lwz r19,-6720(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6720);
	// lwz r19,-6732(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + -6732);
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82678d08
	sub_82678D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E530"))) PPC_WEAK_FUNC(sub_8265E530);
PPC_FUNC_IMPL(__imp__sub_8265E530) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82677b40
	sub_82677B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E53C"))) PPC_WEAK_FUNC(sub_8265E53C);
PPC_FUNC_IMPL(__imp__sub_8265E53C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82677920
	sub_82677920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E548"))) PPC_WEAK_FUNC(sub_8265E548);
PPC_FUNC_IMPL(__imp__sub_8265E548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82677720
	sub_82677720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E554"))) PPC_WEAK_FUNC(sub_8265E554);
PPC_FUNC_IMPL(__imp__sub_8265E554) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82677420
	sub_82677420(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E560"))) PPC_WEAK_FUNC(sub_8265E560);
PPC_FUNC_IMPL(__imp__sub_8265E560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x826770c0
	sub_826770C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E56C"))) PPC_WEAK_FUNC(sub_8265E56C);
PPC_FUNC_IMPL(__imp__sub_8265E56C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82677178
	sub_82677178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E578"))) PPC_WEAK_FUNC(sub_8265E578);
PPC_FUNC_IMPL(__imp__sub_8265E578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82677290
	sub_82677290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E584"))) PPC_WEAK_FUNC(sub_8265E584);
PPC_FUNC_IMPL(__imp__sub_8265E584) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82677360
	sub_82677360(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E590"))) PPC_WEAK_FUNC(sub_8265E590);
PPC_FUNC_IMPL(__imp__sub_8265E590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82676fb8
	sub_82676FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E59C"))) PPC_WEAK_FUNC(sub_8265E59C);
PPC_FUNC_IMPL(__imp__sub_8265E59C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82676ed8
	sub_82676ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E5A8"))) PPC_WEAK_FUNC(sub_8265E5A8);
PPC_FUNC_IMPL(__imp__sub_8265E5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x826765d8
	sub_826765D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E5B4"))) PPC_WEAK_FUNC(sub_8265E5B4);
PPC_FUNC_IMPL(__imp__sub_8265E5B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x82675c00
	sub_82675C00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E5C0"))) PPC_WEAK_FUNC(sub_8265E5C0);
PPC_FUNC_IMPL(__imp__sub_8265E5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// b 0x826759b0
	sub_826759B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265E5CC"))) PPC_WEAK_FUNC(sub_8265E5CC);
PPC_FUNC_IMPL(__imp__sub_8265E5CC) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E5D4"))) PPC_WEAK_FUNC(sub_8265E5D4);
PPC_FUNC_IMPL(__imp__sub_8265E5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E5D8"))) PPC_WEAK_FUNC(sub_8265E5D8);
PPC_FUNC_IMPL(__imp__sub_8265E5D8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8265e634
	if (!cr6.eq) goto loc_8265E634;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265E634:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8265e67c
	if (!cr6.eq) goto loc_8265E67C;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265E67C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8265E68C"))) PPC_WEAK_FUNC(sub_8265E68C);
PPC_FUNC_IMPL(__imp__sub_8265E68C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E690"))) PPC_WEAK_FUNC(sub_8265E690);
PPC_FUNC_IMPL(__imp__sub_8265E690) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8265e6ec
	if (!cr6.eq) goto loc_8265E6EC;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265E6EC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x8265e734
	if (!cr6.eq) goto loc_8265E734;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265E734:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8265E744"))) PPC_WEAK_FUNC(sub_8265E744);
PPC_FUNC_IMPL(__imp__sub_8265E744) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E748"))) PPC_WEAK_FUNC(sub_8265E748);
PPC_FUNC_IMPL(__imp__sub_8265E748) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8265e7c0
	if (!cr6.eq) goto loc_8265E7C0;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// beq cr6,0x8265e808
	if (cr6.eq) goto loc_8265E808;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8265e7c0
	if (!cr6.eq) goto loc_8265E7C0;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265E7C0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x8265e808
	if (!cr6.eq) goto loc_8265E808;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,28(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265E808:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8265E818"))) PPC_WEAK_FUNC(sub_8265E818);
PPC_FUNC_IMPL(__imp__sub_8265E818) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E81C"))) PPC_WEAK_FUNC(sub_8265E81C);
PPC_FUNC_IMPL(__imp__sub_8265E81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E820"))) PPC_WEAK_FUNC(sub_8265E820);
PPC_FUNC_IMPL(__imp__sub_8265E820) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8265e898
	if (!cr6.eq) goto loc_8265E898;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// cmplwi cr6,r8,3
	cr6.compare<uint32_t>(ctx.r8.u32, 3, xer);
	// beq cr6,0x8265e8e0
	if (cr6.eq) goto loc_8265E8E0;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8265e898
	if (!cr6.eq) goto loc_8265E898;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265E898:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x8265e8e0
	if (!cr6.eq) goto loc_8265E8E0;
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r5,36(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265E8E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8265E8F0"))) PPC_WEAK_FUNC(sub_8265E8F0);
PPC_FUNC_IMPL(__imp__sub_8265E8F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E8F4"))) PPC_WEAK_FUNC(sub_8265E8F4);
PPC_FUNC_IMPL(__imp__sub_8265E8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E8F8"))) PPC_WEAK_FUNC(sub_8265E8F8);
PPC_FUNC_IMPL(__imp__sub_8265E8F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lbz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// lbz r6,16(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r11,212(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 212);
	// lwz r10,212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8265e948
	if (!cr6.lt) goto loc_8265E948;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8265E948:
	// bne cr6,0x8265e9a4
	if (!cr6.eq) goto loc_8265E9A4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// extsb r9,r7
	ctx.r9.s64 = ctx.r7.s8;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// lbz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// extsb r9,r5
	ctx.r9.s64 = ctx.r5.s8;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + r11.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,212(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// subfc r9,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
loc_8265E9A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E9AC"))) PPC_WEAK_FUNC(sub_8265E9AC);
PPC_FUNC_IMPL(__imp__sub_8265E9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E9B0"))) PPC_WEAK_FUNC(sub_8265E9B0);
PPC_FUNC_IMPL(__imp__sub_8265E9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,188(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E9BC"))) PPC_WEAK_FUNC(sub_8265E9BC);
PPC_FUNC_IMPL(__imp__sub_8265E9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E9C0"))) PPC_WEAK_FUNC(sub_8265E9C0);
PPC_FUNC_IMPL(__imp__sub_8265E9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E9CC"))) PPC_WEAK_FUNC(sub_8265E9CC);
PPC_FUNC_IMPL(__imp__sub_8265E9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E9D0"))) PPC_WEAK_FUNC(sub_8265E9D0);
PPC_FUNC_IMPL(__imp__sub_8265E9D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E9D4"))) PPC_WEAK_FUNC(sub_8265E9D4);
PPC_FUNC_IMPL(__imp__sub_8265E9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E9D8"))) PPC_WEAK_FUNC(sub_8265E9D8);
PPC_FUNC_IMPL(__imp__sub_8265E9D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265E9DC"))) PPC_WEAK_FUNC(sub_8265E9DC);
PPC_FUNC_IMPL(__imp__sub_8265E9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265E9E0"))) PPC_WEAK_FUNC(sub_8265E9E0);
PPC_FUNC_IMPL(__imp__sub_8265E9E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// lwz r11,72(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r6,212(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 212);
	// lwz r7,212(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// subfc r5,r6,r7
	xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EA0C"))) PPC_WEAK_FUNC(sub_8265EA0C);
PPC_FUNC_IMPL(__imp__sub_8265EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265EA10"))) PPC_WEAK_FUNC(sub_8265EA10);
PPC_FUNC_IMPL(__imp__sub_8265EA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8265ea80
	if (!cr6.lt) goto loc_8265EA80;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8265EA3C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r8,5(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r6,5(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// ble cr6,0x8265ea78
	if (!cr6.gt) goto loc_8265EA78;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_8265EA78:
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8265ea3c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8265EA3C;
loc_8265EA80:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// lis r10,-32154
	ctx.r10.s64 = -2107244544;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// addi r6,r10,-5896
	ctx.r6.s64 = ctx.r10.s64 + -5896;
	// li r4,0
	ctx.r4.s64 = 0;
}

__attribute__((alias("__imp__sub_8265EAA0"))) PPC_WEAK_FUNC(sub_8265EAA0);
PPC_FUNC_IMPL(__imp__sub_8265EAA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82660df0
	sub_82660DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8265EAA4"))) PPC_WEAK_FUNC(sub_8265EAA4);
PPC_FUNC_IMPL(__imp__sub_8265EAA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265EAA8"))) PPC_WEAK_FUNC(sub_8265EAA8);
PPC_FUNC_IMPL(__imp__sub_8265EAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,12
	r28.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265eb00
	if (!cr6.lt) goto loc_8265EB00;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,17932
	ctx.r7.s64 = ctx.r9.s64 + 17932;
	// addi r6,r8,17732
	ctx.r6.s64 = ctx.r8.s64 + 17732;
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
loc_8265EB00:
	// li r30,1
	r30.s64 = 1;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stb r30,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r30.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f13,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// fsubs f0,f11,f12
	f0.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x8265eb50
	if (cr6.eq) goto loc_8265EB50;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8265EB50:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r8,r11,464
	ctx.r8.s64 = r11.s64 + 464;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r7,464(r11)
	PPC_STORE_U64(r11.u32 + 464, ctx.r7.u64);
	// ld r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r6,472(r11)
	PPC_STORE_U64(r11.u32 + 472, ctx.r6.u64);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// ld r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwz r11,120(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// addi r10,r11,80
	ctx.r10.s64 = r11.s64 + 80;
	// std r3,80(r11)
	PPC_STORE_U64(r11.u32 + 80, ctx.r3.u64);
	// ld r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 8);
	// std r9,88(r11)
	PPC_STORE_U64(r11.u32 + 88, ctx.r9.u64);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,76(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8264efd0
	sub_8264EFD0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82640128
	sub_82640128(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,32(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8265ec64
	if (!cr6.eq) goto loc_8265EC64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82640e40
	sub_82640E40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8265efa0
	if (cr6.eq) goto loc_8265EFA0;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r11.u32);
	// bne 0x8265ec4c
	if (!cr0.eq) goto loc_8265EC4C;
	// lbz r11,156(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265ec4c
	if (!cr6.eq) goto loc_8265EC4C;
	// lwz r11,140(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265ec2c
	if (cr6.eq) goto loc_8265EC2C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8265EC2C:
	// lwz r11,164(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265ec4c
	if (!cr6.eq) goto loc_8265EC4C;
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265ec4c
	if (cr6.eq) goto loc_8265EC4C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8265EC4C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x826635c8
	sub_826635C8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
loc_8265EC64:
	// bl 0x82c48898
	sub_82C48898(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r5,-31919
	ctx.r5.s64 = -2091843584;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r7,r11,464
	ctx.r7.s64 = r11.s64 + 464;
	// addi r4,r5,-8448
	ctx.r4.s64 = ctx.r5.s64 + -8448;
	// ld r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r6,32
	ctx.r6.s64 = 32;
	// std r3,464(r11)
	PPC_STORE_U64(r11.u32 + 464, ctx.r3.u64);
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// std r10,472(r11)
	PPC_STORE_U64(r11.u32 + 472, ctx.r10.u64);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	f0.f64 = double(temp.f32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,480
	r11.s64 = r11.s64 + 480;
	// lfs f13,288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,276(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f11,268(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 268, temp.u32);
	// lfs f8,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// addi r10,r11,268
	ctx.r10.s64 = r11.s64 + 268;
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f7,272(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r11.u32 + 272, temp.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r3,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r11,r9
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f6,120(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvx128 v10,r10,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvlx v9,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v7,v10,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r11,r6
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r8,r11,464
	ctx.r8.s64 = r11.s64 + 464;
	// lwz r11,116(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// addi r10,r11,112
	ctx.r10.s64 = r11.s64 + 112;
	// stw r8,244(r11)
	PPC_STORE_U32(r11.u32 + 244, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// lwz r10,120(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r10,32
	ctx.r7.s64 = ctx.r10.s64 + 32;
	// stw r5,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r5.u32);
	// lbz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r3,116(r11)
	PPC_STORE_U8(r11.u32 + 116, ctx.r3.u8);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,120(r11)
	PPC_STORE_U32(r11.u32 + 120, ctx.r5.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r3,124(r11)
	PPC_STORE_U32(r11.u32 + 124, ctx.r3.u32);
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r5,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r5.u32);
	// lwz r3,20(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r3,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r3.u32);
	// lvx128 v6,r0,r7
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v6,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r7,r9
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v5,r8,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r7,r6
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v4,r8,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// std r9,192(r11)
	PPC_STORE_U64(r11.u32 + 192, ctx.r9.u64);
	// ld r8,88(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 88);
	// std r8,200(r11)
	PPC_STORE_U64(r11.u32 + 200, ctx.r8.u64);
	// lwz r7,96(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r7,208(r11)
	PPC_STORE_U32(r11.u32 + 208, ctx.r7.u32);
	// lwz r6,104(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r6,216(r11)
	PPC_STORE_U32(r11.u32 + 216, ctx.r6.u32);
	// lbz r5,108(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 108);
	// stb r5,220(r11)
	PPC_STORE_U8(r11.u32 + 220, ctx.r5.u8);
	// lbz r3,109(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 109);
	// stb r3,221(r11)
	PPC_STORE_U8(r11.u32 + 221, ctx.r3.u8);
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r10,224(r11)
	PPC_STORE_U32(r11.u32 + 224, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f5,748(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 748);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// addi r9,r10,480
	ctx.r9.s64 = ctx.r10.s64 + 480;
	// lfs f4,764(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 764);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,748(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 748);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// stfs f2,20(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f1,752(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 752);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,24(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f0,768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 768);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 36, temp.u32);
	// lfs f13,764(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 764);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,768(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 768);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// lfs f10,484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 484);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,80(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 80, temp.u32);
	// lfs f9,488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 84, temp.u32);
	// lfs f8,564(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 564);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,752(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 752);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,44(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r11.u32 + 44, temp.u32);
	// lfs f5,488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 488);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// lfs f4,572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 572);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,752(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 752);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// stfs f2,52(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 52, temp.u32);
	// lwz r9,472(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 472);
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
	// lwz r8,476(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 476);
	// stw r8,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r8.u32);
	// stw r31,240(r11)
	PPC_STORE_U32(r11.u32 + 240, r31.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r6,120(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 120);
	// lfs f1,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,248(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 248, temp.u32);
	// stw r4,252(r11)
	PPC_STORE_U32(r11.u32 + 252, ctx.r4.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r30,44(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8265ef40
	if (!cr6.gt) goto loc_8265EF40;
	// lbz r11,176(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 176);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265eed0
	if (cr6.eq) goto loc_8265EED0;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265eea8
	if (!cr6.lt) goto loc_8265EEA8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17720
	ctx.r8.s64 = ctx.r9.s64 + 17720;
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
loc_8265EEA8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,152(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r9,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r9.u32);
	// bl 0x8265c5f0
	sub_8265C5F0(ctx, base);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,152(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 152);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r7.u32);
loc_8265EED0:
	// li r11,0
	r11.s64 = 0;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r11.u32);
	// stb r10,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, ctx.r10.u8);
	// li r8,48
	ctx.r8.s64 = 48;
	// sth r7,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r7.u16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r11.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r11.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// sth r8,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r8.u16);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// lwz r6,116(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// bl 0x82bf8570
	sub_82BF8570(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bf8570
	sub_82BF8570(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82bf86f8
	sub_82BF86F8(ctx, base);
loc_8265EF40:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r3,r11,480
	ctx.r3.s64 = r11.s64 + 480;
	// bl 0x8265c0d0
	sub_8265C0D0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r11.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// stw r10,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// bl 0x8263e028
	sub_8263E028(ctx, base);
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265ef94
	if (!cr6.lt) goto loc_8265EF94;
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
loc_8265EF94:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9464
	return;
loc_8265EFA0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265efb4
	if (cr6.eq) goto loc_8265EFB4;
	// twi 31,r0,22
	if (r0.s32 < 22 || r0.s32 > 22 || r0.u32 == 22 || r0.u32 < 22 || r0.u32 > 22) __builtin_debugtrap();
loc_8265EFB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8265EFC0"))) PPC_WEAK_FUNC(sub_8265EFC0);
PPC_FUNC_IMPL(__imp__sub_8265EFC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8265EFC4"))) PPC_WEAK_FUNC(sub_8265EFC4);
PPC_FUNC_IMPL(__imp__sub_8265EFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265EFC8"))) PPC_WEAK_FUNC(sub_8265EFC8);
PPC_FUNC_IMPL(__imp__sub_8265EFC8) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r7,5(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// lbz r6,104(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 104);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + r11.u64;
	// add r4,r7,r10
	ctx.r4.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// lbz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// extsb r10,r5
	ctx.r10.s64 = ctx.r5.s8;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// beq cr6,0x8265f0b0
	if (cr6.eq) goto loc_8265F0B0;
	// lbz r8,232(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// beq cr6,0x8265f0b0
	if (cr6.eq) goto loc_8265F0B0;
	// lbz r8,232(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// beq cr6,0x8265f0b0
	if (cr6.eq) goto loc_8265F0B0;
	// lwz r10,204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r8,204(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// beq cr6,0x8265f0b0
	if (cr6.eq) goto loc_8265F0B0;
	// addi r30,r9,108
	r30.s64 = ctx.r9.s64 + 108;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8265f07c
	if (!cr6.eq) goto loc_8265F07C;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8265F07C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8265f0a0
	if (cr0.eq) goto loc_8265F0A0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_8265F0A0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x8265f104
	goto loc_8265F104;
loc_8265F0B0:
	// lbz r11,26(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// lbz r7,26(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 26);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// lwz r5,120(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// rlwinm r11,r6,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lbz r9,7088(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 7088);
	// extsb r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8265f104
	if (cr6.eq) goto loc_8265F104;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,7216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// bl 0x826659f0
	sub_826659F0(ctx, base);
loc_8265F104:
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

__attribute__((alias("__imp__sub_8265F118"))) PPC_WEAK_FUNC(sub_8265F118);
PPC_FUNC_IMPL(__imp__sub_8265F118) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265F11C"))) PPC_WEAK_FUNC(sub_8265F11C);
PPC_FUNC_IMPL(__imp__sub_8265F11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265F120"))) PPC_WEAK_FUNC(sub_8265F120);
PPC_FUNC_IMPL(__imp__sub_8265F120) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// lbz r6,5(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// lbz r5,104(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 104);
	// extsb r9,r6
	ctx.r9.s64 = ctx.r6.s8;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + r11.u64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lbz r11,16(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lbz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// beq cr6,0x8265f208
	if (cr6.eq) goto loc_8265F208;
	// lbz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// beq cr6,0x8265f208
	if (cr6.eq) goto loc_8265F208;
	// lbz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// beq cr6,0x8265f208
	if (cr6.eq) goto loc_8265F208;
	// lwz r10,204(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// lwz r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x8265f208
	if (cr6.eq) goto loc_8265F208;
	// addi r30,r7,148
	r30.s64 = ctx.r7.s64 + 148;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x8265f1d4
	if (!cr6.eq) goto loc_8265F1D4;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8265F1D4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8265f1f8
	if (cr0.eq) goto loc_8265F1F8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_8265F1F8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x8265f218
	goto loc_8265F218;
loc_8265F208:
	// bl 0x82c586e8
	sub_82C586E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8265f218
	if (cr6.eq) goto loc_8265F218;
	// bl 0x82665b98
	sub_82665B98(ctx, base);
loc_8265F218:
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

__attribute__((alias("__imp__sub_8265F22C"))) PPC_WEAK_FUNC(sub_8265F22C);
PPC_FUNC_IMPL(__imp__sub_8265F22C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8265F230"))) PPC_WEAK_FUNC(sub_8265F230);
PPC_FUNC_IMPL(__imp__sub_8265F230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e93e8
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-12688(r1)
	ea = -12688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,0(r13)
	r21.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r20,12
	r20.s64 = 12;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// lwzx r11,r20,r21
	r11.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f294
	if (!cr6.lt) goto loc_8265F294;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17648
	ctx.r8.s64 = ctx.r9.s64 + 17648;
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
loc_8265F294:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x8263e0f0
	sub_8263E0F0(ctx, base);
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// mr r16,r22
	r16.u64 = r22.u64;
	// beq cr6,0x8265f2f4
	if (cr6.eq) goto loc_8265F2F4;
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x8265f2f4
	if (cr6.eq) goto loc_8265F2F4;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82bf7d80
	sub_82BF7D80(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82bf8490
	sub_82BF8490(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82bf7d90
	sub_82BF7D90(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265F2F4:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r10,192(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// ble cr6,0x8265f32c
	if (!cr6.gt) goto loc_8265F32C;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32154
	ctx.r8.s64 = -2107244544;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// addi r6,r8,-5664
	ctx.r6.s64 = ctx.r8.s64 + -5664;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82c0a658
	sub_82C0A658(ctx, base);
loc_8265F32C:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r11,192(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 192);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x8265f370
	if (!cr6.lt) goto loc_8265F370;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8265F344:
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,40(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r8,32(r6)
	PPC_STORE_U16(ctx.r6.u32 + 32, ctx.r8.u16);
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r4,44(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// blt cr6,0x8265f344
	if (cr6.lt) goto loc_8265F344;
loc_8265F370:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x8263e028
	sub_8263E028(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r10,152(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 152);
	// lwz r11,112(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 112);
	// lis r19,-31931
	r19.s64 = -2092630016;
	// add. r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lfs f30,21036(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f30.f64 = double(temp.f32);
	// beq 0x8265f6fc
	if (cr0.eq) goto loc_8265F6FC;
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f3d0
	if (!cr6.lt) goto loc_8265F3D0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,18020
	ctx.r7.s64 = ctx.r9.s64 + 18020;
	// addi r6,r8,18004
	ctx.r6.s64 = ctx.r8.s64 + 18004;
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
loc_8265F3D0:
	// addi r23,r28,148
	r23.s64 = r28.s64 + 148;
	// addi r26,r28,108
	r26.s64 = r28.s64 + 108;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82c55380
	sub_82C55380(ctx, base);
	// lwzx r11,r20,r21
	r11.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f414
	if (!cr6.lt) goto loc_8265F414;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17992
	ctx.r8.s64 = ctx.r9.s64 + 17992;
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
loc_8265F414:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8265ea10
	sub_8265EA10(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8265ea10
	sub_8265EA10(ctx, base);
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f454
	if (!cr6.lt) goto loc_8265F454;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17980
	ctx.r8.s64 = ctx.r9.s64 + 17980;
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
loc_8265F454:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,112(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 112);
	// stfs f30,12464(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12464, temp.u32);
	// mr r24,r22
	r24.u64 = r22.u64;
	// stfs f30,12468(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12468, temp.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f31,-12728(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12728);
	f31.f64 = double(temp.f32);
	// stfs f31,12432(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12432, temp.u32);
	// ble cr6,0x8265f634
	if (!cr6.gt) goto loc_8265F634;
	// mr r25,r22
	r25.u64 = r22.u64;
loc_8265F480:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r31,r9,r10
	r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + r11.u64;
	// lbz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// lbz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 16);
	// extsb r11,r7
	r11.s64 = ctx.r7.s8;
	// extsb r10,r6
	ctx.r10.s64 = ctx.r6.s8;
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + r30.u64;
	// lwz r4,204(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// lwz r5,204(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 204);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8265f4dc
	if (cr6.eq) goto loc_8265F4DC;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x8264e1c0
	sub_8264E1C0(ctx, base);
	// lwz r4,204(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 204);
loc_8265F4DC:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lbz r9,26(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 26);
	// lbz r8,26(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 26);
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// lwz r5,120(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// lbz r4,7088(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 7088);
	// extsb r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8265f614
	if (cr6.eq) goto loc_8265F614;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,7216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// stw r10,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// bl 0x826659f0
	sub_826659F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8265f614
	if (cr6.eq) goto loc_8265F614;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lbz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// lwz r27,20(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r30,120(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,7200
	ctx.r10.s64 = r11.s64 + 7200;
	// stw r10,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// lwz r6,7216(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// stw r6,20(r30)
	PPC_STORE_U32(r30.u32 + 20, ctx.r6.u32);
	// stfs f31,12432(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 12432, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r22,12512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 12512, r22.u32);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82c59af8
	sub_82C59AF8(ctx, base);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x8265f5d0
	if (cr6.eq) goto loc_8265F5D0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265F5D0:
	// lfs f0,12432(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 12432);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x8265f5e4
	if (!cr6.eq) goto loc_8265F5E4;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_8265F5E4:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265f614
	if (cr6.eq) goto loc_8265F614;
	// addi r30,r28,256
	r30.s64 = r28.s64 + 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0bc
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8266c238
	sub_8266C238(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8314d0ac
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8265F614:
	// lwz r11,-24484(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8265f634
	if (cr6.eq) goto loc_8265F634;
	// lwz r11,112(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 112);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// blt cr6,0x8265f480
	if (cr6.lt) goto loc_8265F480;
loc_8265F634:
	// stw r22,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r22.u32);
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f668
	if (!cr6.lt) goto loc_8265F668;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17968
	ctx.r8.s64 = ctx.r9.s64 + 17968;
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
loc_8265F668:
	// lwz r11,152(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 152);
	// mr r30,r22
	r30.u64 = r22.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8265f6c8
	if (!cr6.gt) goto loc_8265F6C8;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_8265F67C:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r9,5(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + r11.u64;
	// bl 0x82c586e8
	sub_82C586E8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8265f6b4
	if (cr6.eq) goto loc_8265F6B4;
	// bl 0x82665c90
	sub_82665C90(ctx, base);
loc_8265F6B4:
	// lwz r11,152(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 152);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8265f67c
	if (cr6.lt) goto loc_8265F67C;
loc_8265F6C8:
	// stw r22,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r22.u32);
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f6fc
	if (!cr6.lt) goto loc_8265F6FC;
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
loc_8265F6FC:
	// stb r22,104(r28)
	PPC_STORE_U8(r28.u32 + 104, r22.u8);
	// lwz r31,12(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lfs f0,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f12,24(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r28.u32 + 24, temp.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8265f764
	if (!cr0.eq) goto loc_8265F764;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8265f764
	if (!cr6.eq) goto loc_8265F764;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265f744
	if (cr6.eq) goto loc_8265F744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_8265F744:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265f764
	if (!cr6.eq) goto loc_8265F764;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8265f764
	if (cr6.eq) goto loc_8265F764;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_8265F764:
	// lwz r11,-24484(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + -24484);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r30,r22
	r30.u64 = r22.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// addi r31,r10,8956
	r31.s64 = ctx.r10.s64 + 8956;
	// bne cr6,0x8265f7c4
	if (!cr6.eq) goto loc_8265F7C4;
	// lfs f0,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 24);
	f0.f64 = double(temp.f32);
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lfs f13,28(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r30,2
	r30.s64 = 2;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f12,24(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r28.u32 + 24, temp.u32);
	// bl 0x8263e128
	sub_8263E128(ctx, base);
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f8e4
	if (!cr6.lt) goto loc_8265F8E4;
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
	// b 0x8265f8e4
	goto loc_8265F8E4;
loc_8265F7C4:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8265f874
	if (cr6.eq) goto loc_8265F874;
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f804
	if (!cr6.lt) goto loc_8265F804;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17592
	ctx.r8.s64 = ctx.r9.s64 + 17592;
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
loc_8265F804:
	// lfs f0,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,28(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 - ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x8265f830
	if (!cr6.eq) goto loc_8265F830;
	// fmr f0,f30
	f0.f64 = f30.f64;
	// b 0x8265f83c
	goto loc_8265F83C;
loc_8265F830:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8265F83C:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x8265a150
	sub_8265A150(ctx, base);
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f874
	if (!cr6.lt) goto loc_8265F874;
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
loc_8265F874:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x8263e028
	sub_8263E028(ctx, base);
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f8a4
	if (!cr6.lt) goto loc_8265F8A4;
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
loc_8265F8A4:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lbz r11,228(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 228);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265f8b8
	if (cr6.eq) goto loc_8265F8B8;
	// stw r18,200(r28)
	PPC_STORE_U32(r28.u32 + 200, r18.u32);
loc_8265F8B8:
	// bl 0x8263e128
	sub_8263E128(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r22,200(r28)
	PPC_STORE_U32(r28.u32 + 200, r22.u32);
	// lwz r11,-24484(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + -24484);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8265f8e4
	if (!cr6.eq) goto loc_8265F8E4;
	// li r30,3
	r30.s64 = 3;
loc_8265F8E4:
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// beq cr6,0x8265f970
	if (cr6.eq) goto loc_8265F970;
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f91c
	if (!cr6.lt) goto loc_8265F91C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,17944
	ctx.r8.s64 = ctx.r9.s64 + 17944;
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
loc_8265F91C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82bf8490
	sub_82BF8490(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82bf7d90
	sub_82BF7D90(ctx, base);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r20,r21
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + r21.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8265f970
	if (!cr6.lt) goto loc_8265F970;
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
loc_8265F970:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,40(r28)
	PPC_STORE_U32(r28.u32 + 40, r30.u32);
	// beq cr6,0x8265f994
	if (cr6.eq) goto loc_8265F994;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x82640e40
	sub_82640E40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8265f994
	if (cr6.eq) goto loc_8265F994;
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// bl 0x826638e0
	sub_826638E0(ctx, base);
loc_8265F994:
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// addi r1,r1,12688
	ctx.r1.s64 = ctx.r1.s64 + 12688;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
}

__attribute__((alias("__imp__sub_8265F9A4"))) PPC_WEAK_FUNC(sub_8265F9A4);
PPC_FUNC_IMPL(__imp__sub_8265F9A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_8265F9A8"))) PPC_WEAK_FUNC(sub_8265F9A8);
PPC_FUNC_IMPL(__imp__sub_8265F9A8) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8265f9f8
	if (!cr6.gt) goto loc_8265F9F8;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_8265F9D8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, xer);
	// beq cr6,0x8265fad0
	if (cr6.eq) goto loc_8265FAD0;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x8265f9d8
	if (cr6.lt) goto loc_8265F9D8;
loc_8265F9F8:
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
	// bne cr6,0x8265fa20
	if (!cr6.eq) goto loc_8265FA20;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8265FA20:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8265fa54
	if (cr0.eq) goto loc_8265FA54;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r30.u32);
loc_8265FA54:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// rlwinm r11,r7,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8265fa90
	if (cr0.eq) goto loc_8265FA90;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r30.u32);
loc_8265FA90:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// stw r29,-24(r10)
	PPC_STORE_U32(ctx.r10.u32 + -24, r29.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-24
	ctx.r3.s64 = r11.s64 + -24;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8265FAD0:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = r11.u64 + ctx.r9.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8265FAE4"))) PPC_WEAK_FUNC(sub_8265FAE4);
PPC_FUNC_IMPL(__imp__sub_8265FAE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8265FAE8"))) PPC_WEAK_FUNC(sub_8265FAE8);
PPC_FUNC_IMPL(__imp__sub_8265FAE8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r4,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r4.u32);
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8265ff18
	if (cr6.eq) goto loc_8265FF18;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// ble cr6,0x8265ff18
	if (!cr6.gt) goto loc_8265FF18;
	// li r30,0
	r30.s64 = 0;
	// lwz r27,232(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// mr r14,r30
	r14.u64 = r30.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r19,2,0,29
	r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r22,-1
	r22.s64 = -1;
	// add r11,r19,r11
	r11.u64 = r19.u64 + r11.u64;
	// li r17,2
	r17.s64 = 2;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r9,r11,127
	ctx.r9.s64 = r11.s64 + 127;
	// rlwinm r11,r9,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// ble cr6,0x8265fcb0
	if (!cr6.gt) goto loc_8265FCB0;
	// lis r11,0
	r11.s64 = 0;
	// mr r26,r15
	r26.u64 = r15.u64;
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// mr r16,r19
	r16.u64 = r19.u64;
	// li r20,15
	r20.s64 = 15;
	// li r23,1
	r23.s64 = 1;
	// li r21,80
	r21.s64 = 80;
	// ori r24,r11,65535
	r24.u64 = r11.u64 | 65535;
	// b 0x8265fb98
	goto loc_8265FB98;
loc_8265FB94:
	// lwz r29,588(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
loc_8265FB98:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8265fbb4
	if (!cr6.eq) goto loc_8265FBB4;
	// mr r14,r26
	r14.u64 = r26.u64;
	// b 0x8265fca0
	goto loc_8265FCA0;
loc_8265FBB4:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addic. r9,r31,-4
	xer.ca = r31.u32 > 3;
	ctx.r9.s64 = r31.s64 + -4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// beq 0x8265fc38
	if (cr0.eq) goto loc_8265FC38;
	// stb r20,-4(r31)
	PPC_STORE_U8(r31.u32 + -4, r20.u8);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// stb r30,-3(r31)
	PPC_STORE_U8(r31.u32 + -3, r30.u8);
	// addi r7,r25,80
	ctx.r7.s64 = r25.s64 + 80;
	// stb r23,-2(r31)
	PPC_STORE_U8(r31.u32 + -2, r23.u8);
	// sth r24,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r24.u16);
	// sth r21,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r21.u16);
	// sth r22,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r22.u16);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// lwz r6,80(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 80);
	// stw r6,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r6.u32);
	// lwz r5,84(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 84);
	// stw r5,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r5.u32);
	// lwz r4,88(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 88);
	// stw r4,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r4.u32);
	// lwz r3,92(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 92);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// sth r30,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r30.u16);
	// sth r30,32(r31)
	PPC_STORE_U16(r31.u32 + 32, r30.u16);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// sth r11,36(r31)
	PPC_STORE_U16(r31.u32 + 36, r11.u16);
	// sth r27,38(r31)
	PPC_STORE_U16(r31.u32 + 38, r27.u16);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stb r23,-3(r31)
	PPC_STORE_U8(r31.u32 + -3, r23.u8);
	// stb r18,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r18.u8);
	// b 0x8265fc3c
	goto loc_8265FC3C;
loc_8265FC38:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8265FC3C:
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r9,116(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r9,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r9.u32);
	// ble cr6,0x8265fca0
	if (!cr6.gt) goto loc_8265FCA0;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r11,r10,1
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r27
	ctx.r10.s32 = ctx.r10.s32 / r27.s32;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// andc r8,r27,r9
	ctx.r8.u64 = r27.u64 & ~ctx.r9.u64;
	// twllei r27,0
	if (r27.u32 <= 0) __builtin_debugtrap();
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// bl 0x82660fa0
	sub_82660FA0(ctx, base);
	// stb r17,2(r29)
	PPC_STORE_U8(r29.u32 + 2, r17.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,32(r29)
	PPC_STORE_U32(r29.u32 + 32, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lhz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + 32);
	// sth r6,16(r29)
	PPC_STORE_U16(r29.u32 + 16, ctx.r6.u16);
	// lwz r3,200(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 200);
	// bl 0x82bf86f8
	sub_82BF86F8(ctx, base);
	// stw r29,16(r26)
	PPC_STORE_U32(r26.u32 + 16, r29.u32);
loc_8265FCA0:
	// addic. r16,r16,-1
	xer.ca = r16.u32 > 0;
	r16.s64 = r16.s64 + -1;
	cr0.compare<int32_t>(r16.s32, 0, xer);
	// addi r26,r26,24
	r26.s64 = r26.s64 + 24;
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// bne 0x8265fb94
	if (!cr0.eq) goto loc_8265FB94;
loc_8265FCB0:
	// lwz r3,200(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 200);
	// bl 0x82bf8ca8
	sub_82BF8CA8(ctx, base);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x8265fecc
	if (!cr6.gt) goto loc_8265FECC;
	// lis r11,-31919
	r11.s64 = -2091843584;
	// addi r31,r15,16
	r31.s64 = r15.s64 + 16;
	// mr r21,r19
	r21.u64 = r19.u64;
	// li r23,14
	r23.s64 = 14;
	// li r24,48
	r24.s64 = 48;
	// li r26,16
	r26.s64 = 16;
	// li r27,32
	r27.s64 = 32;
	// addi r29,r11,-8448
	r29.s64 = r11.s64 + -8448;
loc_8265FCE0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8265fec0
	if (cr6.eq) goto loc_8265FEC0;
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r24.u16);
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r30.u8);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// stb r17,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, r17.u8);
	// addi r20,r1,320
	r20.s64 = ctx.r1.s64 + 320;
	// sth r22,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r22.u16);
	// addi r19,r1,336
	r19.s64 = ctx.r1.s64 + 336;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r23,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r23.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r8,r9,480
	ctx.r8.s64 = ctx.r9.s64 + 480;
	// lwz r18,-16(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + -16);
	// addi r16,r9,464
	r16.s64 = ctx.r9.s64 + 464;
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lhz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lwz r8,28(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// lhz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// sth r8,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r8.u16);
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r16,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r16.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r30.u32);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// lwz r10,120(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// addi r9,r10,32
	ctx.r9.s64 = ctx.r10.s64 + 32;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r8.u32);
	// lbz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// stb r8,260(r1)
	PPC_STORE_U8(ctx.r1.u32 + 260, ctx.r8.u8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r8,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r8.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r8,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r8.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r8,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r8.u32);
	// lwz r8,20(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r8,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r8.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r9,r27
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r0,r20
	_mm_store_si128((__m128i*)(base + ((r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r7,80(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// std r7,0(r19)
	PPC_STORE_U64(r19.u32 + 0, ctx.r7.u64);
	// ld r6,88(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 88);
	// std r6,8(r19)
	PPC_STORE_U64(r19.u32 + 8, ctx.r6.u64);
	// lwz r9,96(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r9.u32);
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// stw r8,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// lbz r7,108(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 108);
	// stb r7,364(r1)
	PPC_STORE_U8(ctx.r1.u32 + 364, ctx.r7.u8);
	// lbz r6,109(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 109);
	// stb r6,365(r1)
	PPC_STORE_U8(ctx.r1.u32 + 365, ctx.r6.u8);
	// lwz r10,112(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// lfs f0,748(r15)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r15.u32 + 748);
	f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f13,748(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 748);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,764(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 764);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,164(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lfs f10,752(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 752);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f9,768(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 768);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,180(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f8,764(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 764);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,768(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 768);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f6,184(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f5,484(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 484);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,224(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f4,488(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 488);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,228(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// lfs f3,752(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 752);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,564(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 564);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f0,488(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 488);
	f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f13,572(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,752(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 752);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,196(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lwz r9,472(r15)
	ctx.r9.u64 = PPC_LOAD_U32(r15.u32 + 472);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// lwz r8,476(r15)
	ctx.r8.u64 = PPC_LOAD_U32(r15.u32 + 476);
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r28,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, r28.u32);
	// lwz r7,120(r15)
	ctx.r7.u64 = PPC_LOAD_U32(r15.u32 + 120);
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,392(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stw r29,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, r29.u32);
	// stw r15,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r15.u32);
	// bl 0x826759b0
	sub_826759B0(ctx, base);
	// lwz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8265fec0
	if (cr6.eq) goto loc_8265FEC0;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8265FEC0:
	// addic. r21,r21,-1
	xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// bne 0x8265fce0
	if (!cr0.eq) goto loc_8265FCE0;
loc_8265FECC:
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// beq cr6,0x8265ff04
	if (cr6.eq) goto loc_8265FF04;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 8);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r9,588(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r14)
	ctx.r7.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// lwz r5,4(r14)
	ctx.r5.u64 = PPC_LOAD_U32(r14.u32 + 4);
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8266b938
	sub_8266B938(ctx, base);
loc_8265FF04:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x828e9430
	return;
loc_8265FF18:
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x8265ff54
	if (!cr6.gt) goto loc_8265FF54;
	// addi r31,r15,-24
	r31.s64 = r15.s64 + -24;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_8265FF28:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzu r7,24(r31)
	ea = 24 + r31.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// bl 0x8266b938
	sub_8266B938(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8265ff28
	if (!cr0.eq) goto loc_8265FF28;
loc_8265FF54:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
}

