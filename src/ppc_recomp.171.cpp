#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825DBD30"))) PPC_WEAK_FUNC(sub_825DBD30);
PPC_FUNC_IMPL(__imp__sub_825DBD30) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825DBD30"))) PPC_WEAK_FUNC(sub_825DBD30);
PPC_FUNC_IMPL(__imp__sub_825DBD30) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dbb78
	sub_825DBB78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DBD34"))) PPC_WEAK_FUNC(sub_825DBD34);
PPC_FUNC_IMPL(__imp__sub_825DBD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DBD38"))) PPC_WEAK_FUNC(sub_825DBD38);
PPC_FUNC_IMPL(__imp__sub_825DBD38) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,19888
	r11.s64 = ctx.r3.s64 + 19888;
loc_825DBD54:
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
	// bne 0x825dbd54
	if (!cr0.eq) goto loc_825DBD54;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825dbd90
	if (!cr6.eq) goto loc_825DBD90;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dae70
	sub_825DAE70(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8241a3b0
	sub_8241A3B0(ctx, base);
loc_825DBD90:
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

__attribute__((alias("__imp__sub_825DBDA8"))) PPC_WEAK_FUNC(sub_825DBDA8);
PPC_FUNC_IMPL(__imp__sub_825DBDA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DBDAC"))) PPC_WEAK_FUNC(sub_825DBDAC);
PPC_FUNC_IMPL(__imp__sub_825DBDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DBDB0"))) PPC_WEAK_FUNC(sub_825DBDB0);
PPC_FUNC_IMPL(__imp__sub_825DBDB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x825da4c0
	sub_825DA4C0(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// stw r28,19892(r31)
	PPC_STORE_U32(r31.u32 + 19892, r28.u32);
	// li r29,2
	r29.s64 = 2;
loc_825DBDD4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825db2a0
	sub_825DB2A0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,352
	ctx.r3.s64 = r30.s64 + 352;
	// bl 0x825d7d30
	sub_825D7D30(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,9936
	r30.s64 = r30.s64 + 9936;
	// bne 0x825dbdd4
	if (!cr0.eq) goto loc_825DBDD4;
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,19912(r31)
	PPC_STORE_U32(r31.u32 + 19912, r11.u32);
	// lwz r9,19892(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 19892);
	// rlwinm r9,r9,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// stw r11,19924(r31)
	PPC_STORE_U32(r31.u32 + 19924, r11.u32);
	// stw r11,19896(r31)
	PPC_STORE_U32(r31.u32 + 19896, r11.u32);
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825DBE28"))) PPC_WEAK_FUNC(sub_825DBE28);
PPC_FUNC_IMPL(__imp__sub_825DBE28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825DBE2C"))) PPC_WEAK_FUNC(sub_825DBE2C);
PPC_FUNC_IMPL(__imp__sub_825DBE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DBE30"))) PPC_WEAK_FUNC(sub_825DBE30);
PPC_FUNC_IMPL(__imp__sub_825DBE30) {
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
	// addi r11,r5,3
	r11.s64 = ctx.r5.s64 + 3;
	// lwz r10,19916(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19916);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r29,r11,30,2,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r31,r3,19908
	r31.s64 = ctx.r3.s64 + 19908;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x825dbe70
	if (!cr6.gt) goto loc_825DBE70;
	// addi r5,r3,19900
	ctx.r5.s64 = ctx.r3.s64 + 19900;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d8e68
	sub_825D8E68(ctx, base);
loc_825DBE70:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,19900(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19900);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825dbe90
	if (cr6.lt) goto loc_825DBE90;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825DBE90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825DBE94"))) PPC_WEAK_FUNC(sub_825DBE94);
PPC_FUNC_IMPL(__imp__sub_825DBE94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825DBE98"))) PPC_WEAK_FUNC(sub_825DBE98);
PPC_FUNC_IMPL(__imp__sub_825DBE98) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,-508
	ctx.r4.s64 = r11.s64 + -508;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828ec840
	sub_828EC840(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825dbed0
	if (!cr0.eq) goto loc_825DBED0;
	// addi r28,r28,10
	r28.s64 = r28.s64 + 10;
loc_825DBED0:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_825DBED4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825dbed4
	if (!cr6.eq) goto loc_825DBED4;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// lwz r10,19928(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 19928);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r26,0
	r26.s64 = 0;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r31,r27,19920
	r31.s64 = r27.s64 + 19920;
	// addi r11,r29,3
	r11.s64 = r29.s64 + 3;
	// std r26,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r26.u64);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r30,r11,2
	r30.s64 = r11.s64 + 2;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x825dbf30
	if (!cr6.gt) goto loc_825DBF30;
	// addi r5,r27,19900
	ctx.r5.s64 = r27.s64 + 19900;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d8e68
	sub_825D8E68(ctx, base);
loc_825DBF30:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,19900(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 19900);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825dbf68
	if (cr6.lt) goto loc_825DBF68;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r26,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, r26.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_825DBF68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825DBF6C"))) PPC_WEAK_FUNC(sub_825DBF6C);
PPC_FUNC_IMPL(__imp__sub_825DBF6C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825DBF70"))) PPC_WEAK_FUNC(sub_825DBF70);
PPC_FUNC_IMPL(__imp__sub_825DBF70) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,19900(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19900);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r11
	r31.u64 = r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// blt cr6,0x825dbfdc
	if (cr6.lt) goto loc_825DBFDC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825daf20
	sub_825DAF20(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825dbfdc
	if (cr0.lt) goto loc_825DBFDC;
	// lwz r31,112(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_825DBFDC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825dbfe8
	if (cr6.eq) goto loc_825DBFE8;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_825DBFE8:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825dbff4
	if (cr6.eq) goto loc_825DBFF4;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
loc_825DBFF4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825DBFF8"))) PPC_WEAK_FUNC(sub_825DBFF8);
PPC_FUNC_IMPL(__imp__sub_825DBFF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825DBFFC"))) PPC_WEAK_FUNC(sub_825DBFFC);
PPC_FUNC_IMPL(__imp__sub_825DBFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC000"))) PPC_WEAK_FUNC(sub_825DC000);
PPC_FUNC_IMPL(__imp__sub_825DC000) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,19900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19900);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825dc0d0
	if (cr6.lt) goto loc_825DC0D0;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x825daf20
	sub_825DAF20(ctx, base);
	// stw r3,19900(r31)
	PPC_STORE_U32(r31.u32 + 19900, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825dc0d0
	if (cr0.lt) goto loc_825DC0D0;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,112(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r27,r5,r30
	r27.u64 = ctx.r5.u64 + r30.u64;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// ble cr6,0x825dc08c
	if (!cr6.gt) goto loc_825DC08C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x825dc0d0
	goto loc_825DC0D0;
loc_825DC08C:
	// add r4,r30,r29
	ctx.r4.u64 = r30.u64 + r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825d5d90
	sub_825D5D90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x825d5d90
	sub_825D5D90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825daf20
	sub_825DAF20(ctx, base);
	// stw r3,19900(r31)
	PPC_STORE_U32(r31.u32 + 19900, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x825dc0cc
	if (cr0.lt) goto loc_825DC0CC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825dc0cc
	if (cr6.eq) goto loc_825DC0CC;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
loc_825DC0CC:
	// lwz r3,19900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19900);
loc_825DC0D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825DC0D4"))) PPC_WEAK_FUNC(sub_825DC0D4);
PPC_FUNC_IMPL(__imp__sub_825DC0D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825DC0D8"))) PPC_WEAK_FUNC(sub_825DC0D8);
PPC_FUNC_IMPL(__imp__sub_825DC0D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825db428
	sub_825DB428(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x825db150
	sub_825DB150(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
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

__attribute__((alias("__imp__sub_825DC134"))) PPC_WEAK_FUNC(sub_825DC134);
PPC_FUNC_IMPL(__imp__sub_825DC134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC138"))) PPC_WEAK_FUNC(sub_825DC138);
PPC_FUNC_IMPL(__imp__sub_825DC138) {
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
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825db428
	sub_825DB428(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x825db150
	sub_825DB150(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
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

__attribute__((alias("__imp__sub_825DC198"))) PPC_WEAK_FUNC(sub_825DC198);
PPC_FUNC_IMPL(__imp__sub_825DC198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC19C"))) PPC_WEAK_FUNC(sub_825DC19C);
PPC_FUNC_IMPL(__imp__sub_825DC19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC1A0"))) PPC_WEAK_FUNC(sub_825DC1A0);
PPC_FUNC_IMPL(__imp__sub_825DC1A0) {
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
	// cntlzw r11,r6
	r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825db428
	sub_825DB428(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// rlwimi r11,r28,6,25,25
	r11.u64 = (__builtin_rotateleft32(r28.u32, 6) & 0x40) | (r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// andi. r11,r11,79
	r11.u64 = r11.u64 & 79;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwimi r11,r10,8,0,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFF000) | (r11.u64 & 0xFFFFFFFF00000FFF);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// bl 0x825db238
	sub_825DB238(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x825db150
	sub_825DB150(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825DC224"))) PPC_WEAK_FUNC(sub_825DC224);
PPC_FUNC_IMPL(__imp__sub_825DC224) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825DC228"))) PPC_WEAK_FUNC(sub_825DC228);
PPC_FUNC_IMPL(__imp__sub_825DC228) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825db428
	sub_825DB428(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x825db150
	sub_825DB150(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825dc2b8
	if (!cr0.eq) goto loc_825DC2B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5e70
	sub_825D5E70(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825dc2b8
	if (cr0.eq) goto loc_825DC2B8;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r10,r11,320
	ctx.r10.s64 = r11.s64 + 320;
	// lbz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 320);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,320(r11)
	PPC_STORE_U8(r11.u32 + 320, ctx.r10.u8);
loc_825DC2B8:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
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

__attribute__((alias("__imp__sub_825DC2D4"))) PPC_WEAK_FUNC(sub_825DC2D4);
PPC_FUNC_IMPL(__imp__sub_825DC2D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC2D8"))) PPC_WEAK_FUNC(sub_825DC2D8);
PPC_FUNC_IMPL(__imp__sub_825DC2D8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dc354
	if (cr0.eq) goto loc_825DC354;
	// lbz r11,124(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 124);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825dc354
	if (cr0.eq) goto loc_825DC354;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r9,25,3,7
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 25) & 0x1F000000) | (r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x825dc228
	sub_825DC228(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d7f88
	sub_825D7F88(ctx, base);
loc_825DC354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825DC364"))) PPC_WEAK_FUNC(sub_825DC364);
PPC_FUNC_IMPL(__imp__sub_825DC364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC368"))) PPC_WEAK_FUNC(sub_825DC368);
PPC_FUNC_IMPL(__imp__sub_825DC368) {
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
	// lwz r11,19892(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19892);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dc390
	if (cr0.eq) goto loc_825DC390;
	// bl 0x825dbbd8
	sub_825DBBD8(ctx, base);
	// b 0x825dc3a4
	goto loc_825DC3A4;
loc_825DC390:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x825d9900
	sub_825D9900(ctx, base);
loc_825DC3A4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,19904(r31)
	PPC_STORE_U32(r31.u32 + 19904, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825DC3BC"))) PPC_WEAK_FUNC(sub_825DC3BC);
PPC_FUNC_IMPL(__imp__sub_825DC3BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC3C0"))) PPC_WEAK_FUNC(sub_825DC3C0);
PPC_FUNC_IMPL(__imp__sub_825DC3C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dbd38
	sub_825DBD38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC3C0"))) PPC_WEAK_FUNC(sub_825DC3C0);
PPC_FUNC_IMPL(__imp__sub_825DC3C0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825DC3C4"))) PPC_WEAK_FUNC(sub_825DC3C4);
PPC_FUNC_IMPL(__imp__sub_825DC3C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC3C8"))) PPC_WEAK_FUNC(sub_825DC3C8);
PPC_FUNC_IMPL(__imp__sub_825DC3C8) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825DC3C8"))) PPC_WEAK_FUNC(sub_825DC3C8);
PPC_FUNC_IMPL(__imp__sub_825DC3C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dbdb0
	sub_825DBDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC3CC"))) PPC_WEAK_FUNC(sub_825DC3CC);
PPC_FUNC_IMPL(__imp__sub_825DC3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC3D0"))) PPC_WEAK_FUNC(sub_825DC3D0);
PPC_FUNC_IMPL(__imp__sub_825DC3D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dbe30
	sub_825DBE30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC3D0"))) PPC_WEAK_FUNC(sub_825DC3D0);
PPC_FUNC_IMPL(__imp__sub_825DC3D0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825DC3D4"))) PPC_WEAK_FUNC(sub_825DC3D4);
PPC_FUNC_IMPL(__imp__sub_825DC3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC3D8"))) PPC_WEAK_FUNC(sub_825DC3D8);
PPC_FUNC_IMPL(__imp__sub_825DC3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825DC3E8"))) PPC_WEAK_FUNC(sub_825DC3E8);
PPC_FUNC_IMPL(__imp__sub_825DC3E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dc0d8
	sub_825DC0D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC3EC"))) PPC_WEAK_FUNC(sub_825DC3EC);
PPC_FUNC_IMPL(__imp__sub_825DC3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC3F0"))) PPC_WEAK_FUNC(sub_825DC3F0);
PPC_FUNC_IMPL(__imp__sub_825DC3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825DC400"))) PPC_WEAK_FUNC(sub_825DC400);
PPC_FUNC_IMPL(__imp__sub_825DC400) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dc138
	sub_825DC138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC404"))) PPC_WEAK_FUNC(sub_825DC404);
PPC_FUNC_IMPL(__imp__sub_825DC404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC408"))) PPC_WEAK_FUNC(sub_825DC408);
PPC_FUNC_IMPL(__imp__sub_825DC408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825DC418"))) PPC_WEAK_FUNC(sub_825DC418);
PPC_FUNC_IMPL(__imp__sub_825DC418) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dc1a0
	sub_825DC1A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC41C"))) PPC_WEAK_FUNC(sub_825DC41C);
PPC_FUNC_IMPL(__imp__sub_825DC41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC420"))) PPC_WEAK_FUNC(sub_825DC420);
PPC_FUNC_IMPL(__imp__sub_825DC420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825DC430"))) PPC_WEAK_FUNC(sub_825DC430);
PPC_FUNC_IMPL(__imp__sub_825DC430) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dc228
	sub_825DC228(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC434"))) PPC_WEAK_FUNC(sub_825DC434);
PPC_FUNC_IMPL(__imp__sub_825DC434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC438"))) PPC_WEAK_FUNC(sub_825DC438);
PPC_FUNC_IMPL(__imp__sub_825DC438) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dbe98
	sub_825DBE98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC438"))) PPC_WEAK_FUNC(sub_825DC438);
PPC_FUNC_IMPL(__imp__sub_825DC438) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825DC43C"))) PPC_WEAK_FUNC(sub_825DC43C);
PPC_FUNC_IMPL(__imp__sub_825DC43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC440"))) PPC_WEAK_FUNC(sub_825DC440);
PPC_FUNC_IMPL(__imp__sub_825DC440) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dc368
	sub_825DC368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC440"))) PPC_WEAK_FUNC(sub_825DC440);
PPC_FUNC_IMPL(__imp__sub_825DC440) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825DC444"))) PPC_WEAK_FUNC(sub_825DC444);
PPC_FUNC_IMPL(__imp__sub_825DC444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC448"))) PPC_WEAK_FUNC(sub_825DC448);
PPC_FUNC_IMPL(__imp__sub_825DC448) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825DC448"))) PPC_WEAK_FUNC(sub_825DC448);
PPC_FUNC_IMPL(__imp__sub_825DC448) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dc000
	sub_825DC000(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC44C"))) PPC_WEAK_FUNC(sub_825DC44C);
PPC_FUNC_IMPL(__imp__sub_825DC44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC450"))) PPC_WEAK_FUNC(sub_825DC450);
PPC_FUNC_IMPL(__imp__sub_825DC450) {
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
	// lwz r11,19900(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19900);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x825dc470
	if (!cr6.lt) goto loc_825DC470;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825dc488
	goto loc_825DC488;
loc_825DC470:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x825dbf70
	sub_825DBF70(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_825DC488:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825DC494"))) PPC_WEAK_FUNC(sub_825DC494);
PPC_FUNC_IMPL(__imp__sub_825DC494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC498"))) PPC_WEAK_FUNC(sub_825DC498);
PPC_FUNC_IMPL(__imp__sub_825DC498) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r27.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dc584
	if (cr0.eq) goto loc_825DC584;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r28,r11,20,28,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r29,r10,r28
	r29.u64 = r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r28.u8 & 0x3F));
	// andi. r11,r29,28664
	r11.u64 = r29.u64 & 28664;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825dc514
	if (cr0.eq) goto loc_825DC514;
	// lwz r26,100(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x825dc2d8
	sub_825DC2D8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// subf. r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825dc514
	if (cr0.eq) goto loc_825DC514;
	// andi. r11,r29,24702
	r11.u64 = r29.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825dc514
	if (cr0.eq) goto loc_825DC514;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_825DC514:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dc584
	if (cr0.eq) goto loc_825DC584;
	// cmplwi cr6,r28,12
	cr6.compare<uint32_t>(r28.u32, 12, xer);
	// bne cr6,0x825dc584
	if (!cr6.eq) goto loc_825DC584;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825dc584
	if (!cr0.eq) goto loc_825DC584;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r27,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r27.u8);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
loc_825DC584:
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x825db1c8
	sub_825DB1C8(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825DC5A0"))) PPC_WEAK_FUNC(sub_825DC5A0);
PPC_FUNC_IMPL(__imp__sub_825DC5A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825DC5A4"))) PPC_WEAK_FUNC(sub_825DC5A4);
PPC_FUNC_IMPL(__imp__sub_825DC5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC5A8"))) PPC_WEAK_FUNC(sub_825DC5A8);
PPC_FUNC_IMPL(__imp__sub_825DC5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
}

__attribute__((alias("__imp__sub_825DC5B8"))) PPC_WEAK_FUNC(sub_825DC5B8);
PPC_FUNC_IMPL(__imp__sub_825DC5B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dc498
	sub_825DC498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC5BC"))) PPC_WEAK_FUNC(sub_825DC5BC);
PPC_FUNC_IMPL(__imp__sub_825DC5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC5C0"))) PPC_WEAK_FUNC(sub_825DC5C0);
PPC_FUNC_IMPL(__imp__sub_825DC5C0) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dc2d8
	sub_825DC2D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d9e40
	sub_825D9E40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825DC600"))) PPC_WEAK_FUNC(sub_825DC600);
PPC_FUNC_IMPL(__imp__sub_825DC600) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC604"))) PPC_WEAK_FUNC(sub_825DC604);
PPC_FUNC_IMPL(__imp__sub_825DC604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC608"))) PPC_WEAK_FUNC(sub_825DC608);
PPC_FUNC_IMPL(__imp__sub_825DC608) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_825DC608"))) PPC_WEAK_FUNC(sub_825DC608);
PPC_FUNC_IMPL(__imp__sub_825DC608) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dc450
	sub_825DC450(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825DC60C"))) PPC_WEAK_FUNC(sub_825DC60C);
PPC_FUNC_IMPL(__imp__sub_825DC60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC610"))) PPC_WEAK_FUNC(sub_825DC610);
PPC_FUNC_IMPL(__imp__sub_825DC610) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x825dc648
	if (!cr6.gt) goto loc_825DC648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
loc_825DC648:
	// lbz r11,11068(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825dc65c
	if (cr0.eq) goto loc_825DC65C;
	// li r11,1
	r11.s64 = 1;
	// b 0x825dc6ec
	goto loc_825DC6EC;
loc_825DC65C:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825dc6e4
	if (cr0.eq) goto loc_825DC6E4;
	// lwz r11,12816(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dc67c
	if (cr6.eq) goto loc_825DC67C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dc6e4
	if (!cr6.eq) goto loc_825DC6E4;
loc_825DC67C:
	// lwz r11,12820(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dc694
	if (cr6.eq) goto loc_825DC694;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dc6e4
	if (!cr6.eq) goto loc_825DC6E4;
loc_825DC694:
	// lwz r11,12824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dc6ac
	if (cr6.eq) goto loc_825DC6AC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dc6e4
	if (!cr6.eq) goto loc_825DC6E4;
loc_825DC6AC:
	// lwz r11,12828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dc6c4
	if (cr6.eq) goto loc_825DC6C4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dc6e4
	if (!cr6.eq) goto loc_825DC6E4;
loc_825DC6C4:
	// lwz r11,12832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825dc6dc
	if (cr6.eq) goto loc_825DC6DC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825dc6e4
	if (!cr6.eq) goto loc_825DC6E4;
loc_825DC6DC:
	// li r11,1
	r11.s64 = 1;
	// b 0x825dc6e8
	goto loc_825DC6E8;
loc_825DC6E4:
	// li r11,0
	r11.s64 = 0;
loc_825DC6E8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_825DC6EC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne 0x825dc730
	if (!cr0.eq) goto loc_825DC730;
	// lis r11,2
	r11.s64 = 131072;
	// rlwinm r9,r24,16,2,15
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0x3FFF0000;
	// ori r11,r11,8320
	r11.u64 = r11.u64 | 8320;
	// rlwinm r8,r22,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0x3FFF0000;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r11,r25,18
	r11.u64 = r25.u32 & 0x3FFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// clrlwi r9,r23,18
	ctx.r9.u64 = r23.u32 & 0x3FFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// b 0x825dc8ec
	goto loc_825DC8EC;
loc_825DC730:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r11,r11,24832
	r11.u64 = r11.u64 | 24832;
	// li r27,0
	r27.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// ori r26,r9,24576
	r26.u64 = ctx.r9.u64 | 24576;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,13124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x825dc870
	if (!cr6.gt) goto loc_825DC870;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r31,13132
	r30.s64 = r31.s64 + 13132;
	// addi r28,r31,13372
	r28.s64 = r31.s64 + 13372;
loc_825DC768:
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r6,-4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + -4);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpw cr6,r25,r10
	cr6.compare<int32_t>(r25.s32, ctx.r10.s32, xer);
	// bgt cr6,0x825dc784
	if (cr6.gt) goto loc_825DC784;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_825DC784:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// cmpw cr6,r24,r10
	cr6.compare<int32_t>(r24.s32, ctx.r10.s32, xer);
	// bgt cr6,0x825dc798
	if (cr6.gt) goto loc_825DC798;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_825DC798:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r23,r9
	cr6.compare<int32_t>(r23.s32, ctx.r9.s32, xer);
	// bge cr6,0x825dc7a8
	if (!cr6.lt) goto loc_825DC7A8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_825DC7A8:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpw cr6,r22,r10
	cr6.compare<int32_t>(r22.s32, ctx.r10.s32, xer);
	// bge cr6,0x825dc7b8
	if (!cr6.lt) goto loc_825DC7B8;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_825DC7B8:
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bge cr6,0x825dc7c8
	if (!cr6.lt) goto loc_825DC7C8;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x825dc7d8
	if (cr6.lt) goto loc_825DC7D8;
loc_825DC7C8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_825DC7D8:
	// stwu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r26.u32);
	r11.u32 = ea;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// slw r3,r3,r29
	ctx.r3.u64 = r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r29.u8 & 0x3F));
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// lis r4,-16381
	ctx.r4.s64 = -1073545216;
	// neg r6,r6
	ctx.r6.s64 = -ctx.r6.s64;
	// ori r4,r4,21761
	ctx.r4.u64 = ctx.r4.u64 | 21761;
	// li r21,8320
	r21.s64 = 8320;
	// neg r5,r5
	ctx.r5.s64 = -ctx.r5.s64;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// clrlwi r6,r6,17
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r5,r5,16,1,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x7FFF0000;
	// rlwinm r8,r8,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FFF0000;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// clrlwi r7,r7,18
	ctx.r7.u64 = ctx.r7.u32 & 0x3FFF;
	// stwu r21,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r21.u32);
	r11.u32 = ea;
	// rlwinm r10,r10,16,2,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3FFF0000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r9,r9,18
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ble cr6,0x825dc854
	if (!cr6.gt) goto loc_825DC854;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825e4748
	sub_825E4748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825DC854:
	// lwz r10,13124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13124);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x825dc768
	if (cr6.lt) goto loc_825DC768;
loc_825DC870:
	// lbz r10,11071(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825dc8cc
	if (cr0.eq) goto loc_825DC8CC;
	// lbz r10,11068(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825dc8cc
	if (cr0.eq) goto loc_825DC8CC;
	// stwu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r26.u32);
	r11.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// ori r10,r8,21761
	ctx.r10.u64 = ctx.r8.u64 | 21761;
	// li r7,8321
	ctx.r7.s64 = 8321;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// clrlwi r6,r25,18
	ctx.r6.u64 = r25.u32 & 0x3FFF;
	// rlwinm r8,r24,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0x3FFF0000;
	// rlwinm r5,r22,16,2,15
	ctx.r5.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0x3FFF0000;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r6,r23,18
	ctx.r6.u64 = r23.u32 & 0x3FFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// or r9,r5,r6
	ctx.r9.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_825DC8CC:
	// stwu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r26.u32);
	r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,13084(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13084);
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,13088(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_825DC8EC:
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_825DC8F4"))) PPC_WEAK_FUNC(sub_825DC8F4);
PPC_FUNC_IMPL(__imp__sub_825DC8F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_825DC8F8"))) PPC_WEAK_FUNC(sub_825DC8F8);
PPC_FUNC_IMPL(__imp__sub_825DC8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DC910"))) PPC_WEAK_FUNC(sub_825DC910);
PPC_FUNC_IMPL(__imp__sub_825DC910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC914"))) PPC_WEAK_FUNC(sub_825DC914);
PPC_FUNC_IMPL(__imp__sub_825DC914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC918"))) PPC_WEAK_FUNC(sub_825DC918);
PPC_FUNC_IMPL(__imp__sub_825DC918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC924"))) PPC_WEAK_FUNC(sub_825DC924);
PPC_FUNC_IMPL(__imp__sub_825DC924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC928"))) PPC_WEAK_FUNC(sub_825DC928);
PPC_FUNC_IMPL(__imp__sub_825DC928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,3,21,28
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x7F8) | (r11.u64 & 0xFFFFFFFFFFFFF807);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DC940"))) PPC_WEAK_FUNC(sub_825DC940);
PPC_FUNC_IMPL(__imp__sub_825DC940) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC944"))) PPC_WEAK_FUNC(sub_825DC944);
PPC_FUNC_IMPL(__imp__sub_825DC944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC948"))) PPC_WEAK_FUNC(sub_825DC948);
PPC_FUNC_IMPL(__imp__sub_825DC948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC954"))) PPC_WEAK_FUNC(sub_825DC954);
PPC_FUNC_IMPL(__imp__sub_825DC954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC958"))) PPC_WEAK_FUNC(sub_825DC958);
PPC_FUNC_IMPL(__imp__sub_825DC958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,3,28,28
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DC978"))) PPC_WEAK_FUNC(sub_825DC978);
PPC_FUNC_IMPL(__imp__sub_825DC978) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC97C"))) PPC_WEAK_FUNC(sub_825DC97C);
PPC_FUNC_IMPL(__imp__sub_825DC97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC980"))) PPC_WEAK_FUNC(sub_825DC980);
PPC_FUNC_IMPL(__imp__sub_825DC980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DC98C"))) PPC_WEAK_FUNC(sub_825DC98C);
PPC_FUNC_IMPL(__imp__sub_825DC98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DC990"))) PPC_WEAK_FUNC(sub_825DC990);
PPC_FUNC_IMPL(__imp__sub_825DC990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r11,r4,31,0,0
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,12284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12284, r11.u32);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,12280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// bne 0x825dc9c8
	if (!cr0.eq) goto loc_825DC9C8;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_825DC9C8:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x825dc9d8
	if (!cr6.eq) goto loc_825DC9D8;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_825DC9D8:
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DCA0C"))) PPC_WEAK_FUNC(sub_825DCA0C);
PPC_FUNC_IMPL(__imp__sub_825DCA0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCA10"))) PPC_WEAK_FUNC(sub_825DCA10);
PPC_FUNC_IMPL(__imp__sub_825DCA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
}

__attribute__((alias("__imp__sub_825DCA18"))) PPC_WEAK_FUNC(sub_825DCA18);
PPC_FUNC_IMPL(__imp__sub_825DCA18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCA1C"))) PPC_WEAK_FUNC(sub_825DCA1C);
PPC_FUNC_IMPL(__imp__sub_825DCA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCA20"))) PPC_WEAK_FUNC(sub_825DCA20);
PPC_FUNC_IMPL(__imp__sub_825DCA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,12280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r10,r4,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,12280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12280, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,12280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// bne 0x825dca64
	if (!cr0.eq) goto loc_825DCA64;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_825DCA64:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DCA98"))) PPC_WEAK_FUNC(sub_825DCA98);
PPC_FUNC_IMPL(__imp__sub_825DCA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCA9C"))) PPC_WEAK_FUNC(sub_825DCA9C);
PPC_FUNC_IMPL(__imp__sub_825DCA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCAA0"))) PPC_WEAK_FUNC(sub_825DCAA0);
PPC_FUNC_IMPL(__imp__sub_825DCAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCAAC"))) PPC_WEAK_FUNC(sub_825DCAAC);
PPC_FUNC_IMPL(__imp__sub_825DCAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCAB0"))) PPC_WEAK_FUNC(sub_825DCAB0);
PPC_FUNC_IMPL(__imp__sub_825DCAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,12280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r10,r4,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,12280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12280, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,12280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// bne 0x825dcaf4
	if (!cr0.eq) goto loc_825DCAF4;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_825DCAF4:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DCB28"))) PPC_WEAK_FUNC(sub_825DCB28);
PPC_FUNC_IMPL(__imp__sub_825DCB28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCB2C"))) PPC_WEAK_FUNC(sub_825DCB2C);
PPC_FUNC_IMPL(__imp__sub_825DCB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCB30"))) PPC_WEAK_FUNC(sub_825DCB30);
PPC_FUNC_IMPL(__imp__sub_825DCB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCB3C"))) PPC_WEAK_FUNC(sub_825DCB3C);
PPC_FUNC_IMPL(__imp__sub_825DCB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCB40"))) PPC_WEAK_FUNC(sub_825DCB40);
PPC_FUNC_IMPL(__imp__sub_825DCB40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,12280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,12280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12280, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,12280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// bne 0x825dcb84
	if (!cr0.eq) goto loc_825DCB84;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r11,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_825DCB84:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DCBB8"))) PPC_WEAK_FUNC(sub_825DCBB8);
PPC_FUNC_IMPL(__imp__sub_825DCBB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCBBC"))) PPC_WEAK_FUNC(sub_825DCBBC);
PPC_FUNC_IMPL(__imp__sub_825DCBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCBC0"))) PPC_WEAK_FUNC(sub_825DCBC0);
PPC_FUNC_IMPL(__imp__sub_825DCBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCBCC"))) PPC_WEAK_FUNC(sub_825DCBCC);
PPC_FUNC_IMPL(__imp__sub_825DCBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCBD0"))) PPC_WEAK_FUNC(sub_825DCBD0);
PPC_FUNC_IMPL(__imp__sub_825DCBD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,12280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,12280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12280, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DCC28"))) PPC_WEAK_FUNC(sub_825DCC28);
PPC_FUNC_IMPL(__imp__sub_825DCC28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCC2C"))) PPC_WEAK_FUNC(sub_825DCC2C);
PPC_FUNC_IMPL(__imp__sub_825DCC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCC30"))) PPC_WEAK_FUNC(sub_825DCC30);
PPC_FUNC_IMPL(__imp__sub_825DCC30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCC3C"))) PPC_WEAK_FUNC(sub_825DCC3C);
PPC_FUNC_IMPL(__imp__sub_825DCC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCC40"))) PPC_WEAK_FUNC(sub_825DCC40);
PPC_FUNC_IMPL(__imp__sub_825DCC40) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,12280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,12280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12280, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DCC98"))) PPC_WEAK_FUNC(sub_825DCC98);
PPC_FUNC_IMPL(__imp__sub_825DCC98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCC9C"))) PPC_WEAK_FUNC(sub_825DCC9C);
PPC_FUNC_IMPL(__imp__sub_825DCC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCCA0"))) PPC_WEAK_FUNC(sub_825DCCA0);
PPC_FUNC_IMPL(__imp__sub_825DCCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,12280(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12280);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCCAC"))) PPC_WEAK_FUNC(sub_825DCCAC);
PPC_FUNC_IMPL(__imp__sub_825DCCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCCB0"))) PPC_WEAK_FUNC(sub_825DCCB0);
PPC_FUNC_IMPL(__imp__sub_825DCCB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,12280(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,12280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12280, ctx.r10.u32);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DCD08"))) PPC_WEAK_FUNC(sub_825DCD08);
PPC_FUNC_IMPL(__imp__sub_825DCD08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCD0C"))) PPC_WEAK_FUNC(sub_825DCD0C);
PPC_FUNC_IMPL(__imp__sub_825DCD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCD10"))) PPC_WEAK_FUNC(sub_825DCD10);
PPC_FUNC_IMPL(__imp__sub_825DCD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,12280(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12280);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCD1C"))) PPC_WEAK_FUNC(sub_825DCD1C);
PPC_FUNC_IMPL(__imp__sub_825DCD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCD20"))) PPC_WEAK_FUNC(sub_825DCD20);
PPC_FUNC_IMPL(__imp__sub_825DCD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// rlwimi r11,r4,30,1,1
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r11,12284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12284, r11.u32);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// lwz r11,12280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12280);
	// bne cr6,0x825dcd5c
	if (!cr6.eq) goto loc_825DCD5C;
	// andi. r9,r11,4112
	ctx.r9.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r8,r11,4,12,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFF0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
loc_825DCD5C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825dcd6c
	if (!cr6.eq) goto loc_825DCD6C;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_825DCD6C:
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// stw r11,10584(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10584, r11.u32);
	// stw r11,10588(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10588, r11.u32);
	// stw r11,10592(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10592, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DCDA0"))) PPC_WEAK_FUNC(sub_825DCDA0);
PPC_FUNC_IMPL(__imp__sub_825DCDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCDA4"))) PPC_WEAK_FUNC(sub_825DCDA4);
PPC_FUNC_IMPL(__imp__sub_825DCDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCDA8"))) PPC_WEAK_FUNC(sub_825DCDA8);
PPC_FUNC_IMPL(__imp__sub_825DCDA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12284(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12284);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCDB4"))) PPC_WEAK_FUNC(sub_825DCDB4);
PPC_FUNC_IMPL(__imp__sub_825DCDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCDB8"))) PPC_WEAK_FUNC(sub_825DCDB8);
PPC_FUNC_IMPL(__imp__sub_825DCDB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-23472(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -23472);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,10500(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10500, temp.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DCDE8"))) PPC_WEAK_FUNC(sub_825DCDE8);
PPC_FUNC_IMPL(__imp__sub_825DCDE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCDEC"))) PPC_WEAK_FUNC(sub_825DCDEC);
PPC_FUNC_IMPL(__imp__sub_825DCDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCDF0"))) PPC_WEAK_FUNC(sub_825DCDF0);
PPC_FUNC_IMPL(__imp__sub_825DCDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,10500(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10500);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-23476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -23476);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCE18"))) PPC_WEAK_FUNC(sub_825DCE18);
PPC_FUNC_IMPL(__imp__sub_825DCE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DCE30"))) PPC_WEAK_FUNC(sub_825DCE30);
PPC_FUNC_IMPL(__imp__sub_825DCE30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCE34"))) PPC_WEAK_FUNC(sub_825DCE34);
PPC_FUNC_IMPL(__imp__sub_825DCE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCE38"))) PPC_WEAK_FUNC(sub_825DCE38);
PPC_FUNC_IMPL(__imp__sub_825DCE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCE44"))) PPC_WEAK_FUNC(sub_825DCE44);
PPC_FUNC_IMPL(__imp__sub_825DCE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCE48"))) PPC_WEAK_FUNC(sub_825DCE48);
PPC_FUNC_IMPL(__imp__sub_825DCE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// rlwinm r11,r4,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r4,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// rlwinm r10,r4,16,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f12,-8(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r11,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r11.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fcfid f10,f0
	ctx.f10.f64 = double(f0.s64);
	// lfs f0,-23472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23472);
	f0.f64 = double(temp.f32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r12,15
	r12.s64 = 15;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// rldicr r12,r12,33,30
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFE00000000;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f11,10472(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10472, temp.u32);
	// fmuls f11,f10,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f11,10468(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10468, temp.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f12,10464(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10464, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,10476(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10476, temp.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCED8"))) PPC_WEAK_FUNC(sub_825DCED8);
PPC_FUNC_IMPL(__imp__sub_825DCED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,10468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10468);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,10472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10472);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10464(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10464);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10476);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-23476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -23476);
	f0.f64 = double(temp.f32);
	// lfs f13,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	f0.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r3,-12(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctidz f13,f10
	ctx.f13.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r9,-4(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// rlwimi r10,r9,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCF48"))) PPC_WEAK_FUNC(sub_825DCF48);
PPC_FUNC_IMPL(__imp__sub_825DCF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,10680(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,10,21,21
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10680, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCF6C"))) PPC_WEAK_FUNC(sub_825DCF6C);
PPC_FUNC_IMPL(__imp__sub_825DCF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCF70"))) PPC_WEAK_FUNC(sub_825DCF70);
PPC_FUNC_IMPL(__imp__sub_825DCF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10680(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10680);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCF7C"))) PPC_WEAK_FUNC(sub_825DCF7C);
PPC_FUNC_IMPL(__imp__sub_825DCF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCF80"))) PPC_WEAK_FUNC(sub_825DCF80);
PPC_FUNC_IMPL(__imp__sub_825DCF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,52,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,2816(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2816);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r11,-12(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// sth r11,10606(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10606, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCFBC"))) PPC_WEAK_FUNC(sub_825DCFBC);
PPC_FUNC_IMPL(__imp__sub_825DCFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DCFC0"))) PPC_WEAK_FUNC(sub_825DCFC0);
PPC_FUNC_IMPL(__imp__sub_825DCFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lhz r11,10606(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10606);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfs f0,-376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -376);
	f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DCFF0"))) PPC_WEAK_FUNC(sub_825DCFF0);
PPC_FUNC_IMPL(__imp__sub_825DCFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,24392(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24392);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825dd004
	if (cr6.eq) goto loc_825DD004;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// b 0x825dd008
	goto loc_825DD008;
loc_825DD004:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_825DD008:
	// stw r11,24392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24392, r11.u32);
}

__attribute__((alias("__imp__sub_825DD00C"))) PPC_WEAK_FUNC(sub_825DD00C);
PPC_FUNC_IMPL(__imp__sub_825DD00C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD010"))) PPC_WEAK_FUNC(sub_825DD010);
PPC_FUNC_IMPL(__imp__sub_825DD010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,24392(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24392);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD01C"))) PPC_WEAK_FUNC(sub_825DD01C);
PPC_FUNC_IMPL(__imp__sub_825DD01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD020"))) PPC_WEAK_FUNC(sub_825DD020);
PPC_FUNC_IMPL(__imp__sub_825DD020) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,12832(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12832);
	// lwz r10,10548(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// stw r4,12308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12308, ctx.r4.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r10.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD054"))) PPC_WEAK_FUNC(sub_825DD054);
PPC_FUNC_IMPL(__imp__sub_825DD054) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD058"))) PPC_WEAK_FUNC(sub_825DD058);
PPC_FUNC_IMPL(__imp__sub_825DD058) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12308(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12308);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD060"))) PPC_WEAK_FUNC(sub_825DD060);
PPC_FUNC_IMPL(__imp__sub_825DD060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,2,29,29
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD078"))) PPC_WEAK_FUNC(sub_825DD078);
PPC_FUNC_IMPL(__imp__sub_825DD078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD07C"))) PPC_WEAK_FUNC(sub_825DD07C);
PPC_FUNC_IMPL(__imp__sub_825DD07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD080"))) PPC_WEAK_FUNC(sub_825DD080);
PPC_FUNC_IMPL(__imp__sub_825DD080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD08C"))) PPC_WEAK_FUNC(sub_825DD08C);
PPC_FUNC_IMPL(__imp__sub_825DD08C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD090"))) PPC_WEAK_FUNC(sub_825DD090);
PPC_FUNC_IMPL(__imp__sub_825DD090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,4,25,27
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x70) | (r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD0B0"))) PPC_WEAK_FUNC(sub_825DD0B0);
PPC_FUNC_IMPL(__imp__sub_825DD0B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD0B4"))) PPC_WEAK_FUNC(sub_825DD0B4);
PPC_FUNC_IMPL(__imp__sub_825DD0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD0B8"))) PPC_WEAK_FUNC(sub_825DD0B8);
PPC_FUNC_IMPL(__imp__sub_825DD0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD0C4"))) PPC_WEAK_FUNC(sub_825DD0C4);
PPC_FUNC_IMPL(__imp__sub_825DD0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD0C8"))) PPC_WEAK_FUNC(sub_825DD0C8);
PPC_FUNC_IMPL(__imp__sub_825DD0C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,12832(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12832);
	// lwz r10,10548(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// stw r4,12312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12312, ctx.r4.u32);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r10,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, ctx.r10.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD0FC"))) PPC_WEAK_FUNC(sub_825DD0FC);
PPC_FUNC_IMPL(__imp__sub_825DD0FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD100"))) PPC_WEAK_FUNC(sub_825DD100);
PPC_FUNC_IMPL(__imp__sub_825DD100) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12312(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12312);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD108"))) PPC_WEAK_FUNC(sub_825DD108);
PPC_FUNC_IMPL(__imp__sub_825DD108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,7,24,24
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x80) | (r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD12C"))) PPC_WEAK_FUNC(sub_825DD12C);
PPC_FUNC_IMPL(__imp__sub_825DD12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD130"))) PPC_WEAK_FUNC(sub_825DD130);
PPC_FUNC_IMPL(__imp__sub_825DD130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD13C"))) PPC_WEAK_FUNC(sub_825DD13C);
PPC_FUNC_IMPL(__imp__sub_825DD13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD140"))) PPC_WEAK_FUNC(sub_825DD140);
PPC_FUNC_IMPL(__imp__sub_825DD140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,8,21,23
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD158"))) PPC_WEAK_FUNC(sub_825DD158);
PPC_FUNC_IMPL(__imp__sub_825DD158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD15C"))) PPC_WEAK_FUNC(sub_825DD15C);
PPC_FUNC_IMPL(__imp__sub_825DD15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD160"))) PPC_WEAK_FUNC(sub_825DD160);
PPC_FUNC_IMPL(__imp__sub_825DD160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD16C"))) PPC_WEAK_FUNC(sub_825DD16C);
PPC_FUNC_IMPL(__imp__sub_825DD16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD170"))) PPC_WEAK_FUNC(sub_825DD170);
PPC_FUNC_IMPL(__imp__sub_825DD170) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,11,18,20
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 11) & 0x3800) | (r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD190"))) PPC_WEAK_FUNC(sub_825DD190);
PPC_FUNC_IMPL(__imp__sub_825DD190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD194"))) PPC_WEAK_FUNC(sub_825DD194);
PPC_FUNC_IMPL(__imp__sub_825DD194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD198"))) PPC_WEAK_FUNC(sub_825DD198);
PPC_FUNC_IMPL(__imp__sub_825DD198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD1A4"))) PPC_WEAK_FUNC(sub_825DD1A4);
PPC_FUNC_IMPL(__imp__sub_825DD1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD1A8"))) PPC_WEAK_FUNC(sub_825DD1A8);
PPC_FUNC_IMPL(__imp__sub_825DD1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,17,12,14
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD1C8"))) PPC_WEAK_FUNC(sub_825DD1C8);
PPC_FUNC_IMPL(__imp__sub_825DD1C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD1CC"))) PPC_WEAK_FUNC(sub_825DD1CC);
PPC_FUNC_IMPL(__imp__sub_825DD1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD1D0"))) PPC_WEAK_FUNC(sub_825DD1D0);
PPC_FUNC_IMPL(__imp__sub_825DD1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD1DC"))) PPC_WEAK_FUNC(sub_825DD1DC);
PPC_FUNC_IMPL(__imp__sub_825DD1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD1E0"))) PPC_WEAK_FUNC(sub_825DD1E0);
PPC_FUNC_IMPL(__imp__sub_825DD1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,14,15,17
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x1C000) | (r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD1F8"))) PPC_WEAK_FUNC(sub_825DD1F8);
PPC_FUNC_IMPL(__imp__sub_825DD1F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD1FC"))) PPC_WEAK_FUNC(sub_825DD1FC);
PPC_FUNC_IMPL(__imp__sub_825DD1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD200"))) PPC_WEAK_FUNC(sub_825DD200);
PPC_FUNC_IMPL(__imp__sub_825DD200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD20C"))) PPC_WEAK_FUNC(sub_825DD20C);
PPC_FUNC_IMPL(__imp__sub_825DD20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD210"))) PPC_WEAK_FUNC(sub_825DD210);
PPC_FUNC_IMPL(__imp__sub_825DD210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,20,9,11
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD228"))) PPC_WEAK_FUNC(sub_825DD228);
PPC_FUNC_IMPL(__imp__sub_825DD228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD22C"))) PPC_WEAK_FUNC(sub_825DD22C);
PPC_FUNC_IMPL(__imp__sub_825DD22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD230"))) PPC_WEAK_FUNC(sub_825DD230);
PPC_FUNC_IMPL(__imp__sub_825DD230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD23C"))) PPC_WEAK_FUNC(sub_825DD23C);
PPC_FUNC_IMPL(__imp__sub_825DD23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD240"))) PPC_WEAK_FUNC(sub_825DD240);
PPC_FUNC_IMPL(__imp__sub_825DD240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,23,6,8
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3800000) | (r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD260"))) PPC_WEAK_FUNC(sub_825DD260);
PPC_FUNC_IMPL(__imp__sub_825DD260) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD264"))) PPC_WEAK_FUNC(sub_825DD264);
PPC_FUNC_IMPL(__imp__sub_825DD264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD268"))) PPC_WEAK_FUNC(sub_825DD268);
PPC_FUNC_IMPL(__imp__sub_825DD268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD274"))) PPC_WEAK_FUNC(sub_825DD274);
PPC_FUNC_IMPL(__imp__sub_825DD274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD278"))) PPC_WEAK_FUNC(sub_825DD278);
PPC_FUNC_IMPL(__imp__sub_825DD278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,29,0,2
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0xE0000000) | (r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD298"))) PPC_WEAK_FUNC(sub_825DD298);
PPC_FUNC_IMPL(__imp__sub_825DD298) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD29C"))) PPC_WEAK_FUNC(sub_825DD29C);
PPC_FUNC_IMPL(__imp__sub_825DD29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD2A0"))) PPC_WEAK_FUNC(sub_825DD2A0);
PPC_FUNC_IMPL(__imp__sub_825DD2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD2AC"))) PPC_WEAK_FUNC(sub_825DD2AC);
PPC_FUNC_IMPL(__imp__sub_825DD2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD2B0"))) PPC_WEAK_FUNC(sub_825DD2B0);
PPC_FUNC_IMPL(__imp__sub_825DD2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,26,3,5
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x1C000000) | (r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,10548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10548, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD2C8"))) PPC_WEAK_FUNC(sub_825DD2C8);
PPC_FUNC_IMPL(__imp__sub_825DD2C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD2CC"))) PPC_WEAK_FUNC(sub_825DD2CC);
PPC_FUNC_IMPL(__imp__sub_825DD2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD2D0"))) PPC_WEAK_FUNC(sub_825DD2D0);
PPC_FUNC_IMPL(__imp__sub_825DD2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10548(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD2DC"))) PPC_WEAK_FUNC(sub_825DD2DC);
PPC_FUNC_IMPL(__imp__sub_825DD2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD2E0"))) PPC_WEAK_FUNC(sub_825DD2E0);
PPC_FUNC_IMPL(__imp__sub_825DD2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10499(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10499, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD2F0"))) PPC_WEAK_FUNC(sub_825DD2F0);
PPC_FUNC_IMPL(__imp__sub_825DD2F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD2F4"))) PPC_WEAK_FUNC(sub_825DD2F4);
PPC_FUNC_IMPL(__imp__sub_825DD2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD2F8"))) PPC_WEAK_FUNC(sub_825DD2F8);
PPC_FUNC_IMPL(__imp__sub_825DD2F8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10499(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10499);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD300"))) PPC_WEAK_FUNC(sub_825DD300);
PPC_FUNC_IMPL(__imp__sub_825DD300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10498(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10498, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD310"))) PPC_WEAK_FUNC(sub_825DD310);
PPC_FUNC_IMPL(__imp__sub_825DD310) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD314"))) PPC_WEAK_FUNC(sub_825DD314);
PPC_FUNC_IMPL(__imp__sub_825DD314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD318"))) PPC_WEAK_FUNC(sub_825DD318);
PPC_FUNC_IMPL(__imp__sub_825DD318) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10498(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10498);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD320"))) PPC_WEAK_FUNC(sub_825DD320);
PPC_FUNC_IMPL(__imp__sub_825DD320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10497(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10497, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD330"))) PPC_WEAK_FUNC(sub_825DD330);
PPC_FUNC_IMPL(__imp__sub_825DD330) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD334"))) PPC_WEAK_FUNC(sub_825DD334);
PPC_FUNC_IMPL(__imp__sub_825DD334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD338"))) PPC_WEAK_FUNC(sub_825DD338);
PPC_FUNC_IMPL(__imp__sub_825DD338) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10497(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10497);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD340"))) PPC_WEAK_FUNC(sub_825DD340);
PPC_FUNC_IMPL(__imp__sub_825DD340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10495(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10495, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD354"))) PPC_WEAK_FUNC(sub_825DD354);
PPC_FUNC_IMPL(__imp__sub_825DD354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD358"))) PPC_WEAK_FUNC(sub_825DD358);
PPC_FUNC_IMPL(__imp__sub_825DD358) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10495(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10495);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD360"))) PPC_WEAK_FUNC(sub_825DD360);
PPC_FUNC_IMPL(__imp__sub_825DD360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10494(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10494, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD374"))) PPC_WEAK_FUNC(sub_825DD374);
PPC_FUNC_IMPL(__imp__sub_825DD374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD378"))) PPC_WEAK_FUNC(sub_825DD378);
PPC_FUNC_IMPL(__imp__sub_825DD378) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10494(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10494);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD380"))) PPC_WEAK_FUNC(sub_825DD380);
PPC_FUNC_IMPL(__imp__sub_825DD380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10493(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10493, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD394"))) PPC_WEAK_FUNC(sub_825DD394);
PPC_FUNC_IMPL(__imp__sub_825DD394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD398"))) PPC_WEAK_FUNC(sub_825DD398);
PPC_FUNC_IMPL(__imp__sub_825DD398) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10493(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10493);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD3A0"))) PPC_WEAK_FUNC(sub_825DD3A0);
PPC_FUNC_IMPL(__imp__sub_825DD3A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	// lwz r11,10564(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// li r9,4096
	ctx.r9.s64 = 4096;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// li r12,1
	r12.s64 = 1;
	// stw r10,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, ctx.r10.u32);
	// stw r11,10564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10564, r11.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD3E0"))) PPC_WEAK_FUNC(sub_825DD3E0);
PPC_FUNC_IMPL(__imp__sub_825DD3E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD3E4"))) PPC_WEAK_FUNC(sub_825DD3E4);
PPC_FUNC_IMPL(__imp__sub_825DD3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD3E8"))) PPC_WEAK_FUNC(sub_825DD3E8);
PPC_FUNC_IMPL(__imp__sub_825DD3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10564(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD3F4"))) PPC_WEAK_FUNC(sub_825DD3F4);
PPC_FUNC_IMPL(__imp__sub_825DD3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD3F8"))) PPC_WEAK_FUNC(sub_825DD3F8);
PPC_FUNC_IMPL(__imp__sub_825DD3F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12288(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12288);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD400"))) PPC_WEAK_FUNC(sub_825DD400);
PPC_FUNC_IMPL(__imp__sub_825DD400) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,32476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32476);
	f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x825dd434
	if (!cr6.eq) goto loc_825DD434;
	// lfs f12,10836(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10836);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x825dd438
	if (cr6.eq) goto loc_825DD438;
loc_825DD434:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825DD438:
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// rlwimi r11,r10,11,20,20
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// bne cr6,0x825dd45c
	if (!cr6.eq) goto loc_825DD45C;
	// lfs f12,10844(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10844);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// beq cr6,0x825dd460
	if (cr6.eq) goto loc_825DD460;
loc_825DD45C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825DD460:
	// li r12,1
	r12.s64 = 1;
	// stfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10832, temp.u32);
	// rlwimi r11,r10,12,19,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10840(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10840, temp.u32);
	// rldicr r12,r12,45,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// rldicr r12,r12,43,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD4A0"))) PPC_WEAK_FUNC(sub_825DD4A0);
PPC_FUNC_IMPL(__imp__sub_825DD4A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD4A4"))) PPC_WEAK_FUNC(sub_825DD4A4);
PPC_FUNC_IMPL(__imp__sub_825DD4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD4A8"))) PPC_WEAK_FUNC(sub_825DD4A8);
PPC_FUNC_IMPL(__imp__sub_825DD4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-372(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -372);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD4C4"))) PPC_WEAK_FUNC(sub_825DD4C4);
PPC_FUNC_IMPL(__imp__sub_825DD4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD4C8"))) PPC_WEAK_FUNC(sub_825DD4C8);
PPC_FUNC_IMPL(__imp__sub_825DD4C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f12,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bne cr6,0x825dd4f0
	if (!cr6.eq) goto loc_825DD4F0;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x825dd4f4
	if (cr6.eq) goto loc_825DD4F4;
loc_825DD4F0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825DD4F4:
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// lfs f12,10840(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10840);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// rlwimi r11,r10,11,20,20
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// bne cr6,0x825dd518
	if (!cr6.eq) goto loc_825DD518;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x825dd51c
	if (cr6.eq) goto loc_825DD51C;
loc_825DD518:
	// li r10,1
	ctx.r10.s64 = 1;
loc_825DD51C:
	// li r12,1
	r12.s64 = 1;
	// stfs f13,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10836, temp.u32);
	// rlwimi r11,r10,12,19,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10844(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10844, temp.u32);
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// rldicr r12,r12,42,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD55C"))) PPC_WEAK_FUNC(sub_825DD55C);
PPC_FUNC_IMPL(__imp__sub_825DD55C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD560"))) PPC_WEAK_FUNC(sub_825DD560);
PPC_FUNC_IMPL(__imp__sub_825DD560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10836);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD570"))) PPC_WEAK_FUNC(sub_825DD570);
PPC_FUNC_IMPL(__imp__sub_825DD570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,15,16,16
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x8000) | (r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
}

__attribute__((alias("__imp__sub_825DD588"))) PPC_WEAK_FUNC(sub_825DD588);
PPC_FUNC_IMPL(__imp__sub_825DD588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD58C"))) PPC_WEAK_FUNC(sub_825DD58C);
PPC_FUNC_IMPL(__imp__sub_825DD58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD590"))) PPC_WEAK_FUNC(sub_825DD590);
PPC_FUNC_IMPL(__imp__sub_825DD590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825DD59C"))) PPC_WEAK_FUNC(sub_825DD59C);
PPC_FUNC_IMPL(__imp__sub_825DD59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825DD5A0"))) PPC_WEAK_FUNC(sub_825DD5A0);
PPC_FUNC_IMPL(__imp__sub_825DD5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10752, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
}

__attribute__((alias("__imp__sub_825DD5B4"))) PPC_WEAK_FUNC(sub_825DD5B4);
PPC_FUNC_IMPL(__imp__sub_825DD5B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

