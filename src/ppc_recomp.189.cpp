#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8263F15C"))) PPC_WEAK_FUNC(sub_8263F15C);
PPC_FUNC_IMPL(__imp__sub_8263F15C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263F160"))) PPC_WEAK_FUNC(sub_8263F160);
PPC_FUNC_IMPL(__imp__sub_8263F160) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,12
	r27.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8263f1b0
	if (!cr6.lt) goto loc_8263F1B0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12180
	ctx.r8.s64 = ctx.r9.s64 + 12180;
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
loc_8263F1B0:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263f200
	if (cr6.eq) goto loc_8263F200;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// beq cr6,0x8263f200
	if (cr6.eq) goto loc_8263F200;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8263f240
	goto loc_8263F240;
loc_8263F200:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// li r11,0
	r11.s64 = 0;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r9,r10,11992
	ctx.r9.s64 = ctx.r10.s64 + 11992;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c54d98
	sub_82C54D98(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,11980
	ctx.r7.s64 = ctx.r8.s64 + 11980;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_8263F240:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8263f270
	if (!cr6.lt) goto loc_8263F270;
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
loc_8263F270:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8263F274"))) PPC_WEAK_FUNC(sub_8263F274);
PPC_FUNC_IMPL(__imp__sub_8263F274) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8263F278"))) PPC_WEAK_FUNC(sub_8263F278);
PPC_FUNC_IMPL(__imp__sub_8263F278) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,12
	r27.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwzx r11,r27,r28
	r11.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8263f2c8
	if (!cr6.lt) goto loc_8263F2C8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12204
	ctx.r8.s64 = ctx.r9.s64 + 12204;
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
loc_8263F2C8:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263f318
	if (cr6.eq) goto loc_8263F318;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// beq cr6,0x8263f318
	if (cr6.eq) goto loc_8263F318;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8263f358
	goto loc_8263F358;
loc_8263F318:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r6,124(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// li r11,0
	r11.s64 = 0;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r9,r10,12160
	ctx.r9.s64 = ctx.r10.s64 + 12160;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c56688
	sub_82C56688(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,11980
	ctx.r7.s64 = ctx.r8.s64 + 11980;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
loc_8263F358:
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8263f388
	if (!cr6.lt) goto loc_8263F388;
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
loc_8263F388:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8263F38C"))) PPC_WEAK_FUNC(sub_8263F38C);
PPC_FUNC_IMPL(__imp__sub_8263F38C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8263F390"))) PPC_WEAK_FUNC(sub_8263F390);
PPC_FUNC_IMPL(__imp__sub_8263F390) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
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
	// lwz r9,120(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r11,1
	r11.s64 = 1;
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r29,0
	r29.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// li r6,80
	ctx.r6.s64 = 80;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stb r7,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r7.u8);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// sth r6,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r6.u16);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// sth r5,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r5.u16);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// beq cr6,0x8263f444
	if (cr6.eq) goto loc_8263F444;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// srawi r10,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = r11.s32 >> 6;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8263F444:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// beq cr6,0x8263f4a0
	if (cr6.eq) goto loc_8263F4A0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// beq cr6,0x8263f4a0
	if (cr6.eq) goto loc_8263F4A0;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
loc_8263F4A0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8263f508
	if (!cr6.gt) goto loc_8263F508;
	// rlwinm r31,r27,6,0,25
	r31.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 6) & 0xFFFFFFC0;
loc_8263F4AC:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// addi r11,r8,-8
	r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8263F4C4:
	// ldu r9,8(r11)
	ea = 8 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8263f4c4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263F4C4;
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r30.u32);
	// blt cr6,0x8263f4e0
	if (cr6.lt) goto loc_8263F4E0;
	// stw r27,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r27.u32);
loc_8263F4E0:
	// subf r30,r27,r30
	r30.s64 = r30.s64 - r27.s64;
	// add r28,r31,r28
	r28.u64 = r31.u64 + r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82bf86f8
	sub_82BF86F8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x8263f4ac
	if (cr6.gt) goto loc_8263F4AC;
loc_8263F508:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82bfaab0
	sub_82BFAAB0(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8263F564"))) PPC_WEAK_FUNC(sub_8263F564);
PPC_FUNC_IMPL(__imp__sub_8263F564) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8263F568"))) PPC_WEAK_FUNC(sub_8263F568);
PPC_FUNC_IMPL(__imp__sub_8263F568) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,12
	r25.s64 = 12;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwzx r11,r25,r26
	r11.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8263f5c0
	if (!cr6.lt) goto loc_8263F5C0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12220
	ctx.r8.s64 = ctx.r9.s64 + 12220;
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
loc_8263F5C0:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8263f630
	if (cr6.eq) goto loc_8263F630;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// beq cr6,0x8263f630
	if (cr6.eq) goto loc_8263F630;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x8263f600
	if (!cr6.eq) goto loc_8263F600;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8263F600:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,112(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 112);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8263f690
	goto loc_8263F690;
loc_8263F630:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r8,r9,12172
	ctx.r8.s64 = ctx.r9.s64 + 12172;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// lfs f0,7832(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7832);
	f0.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stfs f0,224(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// bne cr6,0x8263f65c
	if (!cr6.eq) goto loc_8263F65C;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8263F65C:
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lwz r9,112(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 112);
	// bl 0x82c56ad8
	sub_82C56AD8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,11980
	ctx.r10.s64 = r11.s64 + 11980;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
loc_8263F690:
	// lwzx r10,r25,r26
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8263f6c0
	if (!cr6.lt) goto loc_8263F6C0;
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
loc_8263F6C0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_8263F6C4"))) PPC_WEAK_FUNC(sub_8263F6C4);
PPC_FUNC_IMPL(__imp__sub_8263F6C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8263F6C8"))) PPC_WEAK_FUNC(sub_8263F6C8);
PPC_FUNC_IMPL(__imp__sub_8263F6C8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
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
	// addi r9,r29,-1
	ctx.r9.s64 = r29.s64 + -1;
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// srawi r6,r9,6
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 6;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	r11.s64 = temp.s64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r5,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r5.u32);
	// li r11,-1
	r11.s64 = -1;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r3,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r3.u8);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r11.u16);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r30.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// beq cr6,0x8263f7c0
	if (cr6.eq) goto loc_8263F7C0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
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
	// beq cr6,0x8263f7c0
	if (cr6.eq) goto loc_8263F7C0;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
loc_8263F7C0:
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// ble cr6,0x8263f838
	if (!cr6.gt) goto loc_8263F838;
	// rlwinm r11,r27,1,0,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// rlwinm r31,r11,4,0,27
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_8263F7DC:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// addi r11,r8,-8
	r11.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8263F7F4:
	// ldu r9,8(r11)
	ea = 8 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8263f7f4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8263F7F4;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r29.u32);
	// blt cr6,0x8263f810
	if (cr6.lt) goto loc_8263F810;
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r27.u32);
loc_8263F810:
	// subf r29,r27,r29
	r29.s64 = r29.s64 - r27.s64;
	// add r28,r31,r28
	r28.u64 = r31.u64 + r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82bf86f8
	sub_82BF86F8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bgt cr6,0x8263f7dc
	if (cr6.gt) goto loc_8263F7DC;
loc_8263F838:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// li r5,11
	ctx.r5.s64 = 11;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82bfaab0
	sub_82BFAAB0(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
}

__attribute__((alias("__imp__sub_8263F894"))) PPC_WEAK_FUNC(sub_8263F894);
PPC_FUNC_IMPL(__imp__sub_8263F894) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8263F898"))) PPC_WEAK_FUNC(sub_8263F898);
PPC_FUNC_IMPL(__imp__sub_8263F898) {
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
	// lwz r11,32(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263f920
	if (cr6.eq) goto loc_8263F920;
	// addi r30,r11,72
	r30.s64 = r11.s64 + 72;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263f914
	if (!cr6.gt) goto loc_8263F914;
loc_8263F8D4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8263f8f0
	if (!cr6.eq) goto loc_8263F8F0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8263f904
	if (cr6.eq) goto loc_8263F904;
loc_8263F8F0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x826641a8
	sub_826641A8(ctx, base);
loc_8263F904:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8263f8d4
	if (cr6.lt) goto loc_8263F8D4;
loc_8263F914:
	// neg r10,r11
	ctx.r10.s64 = -r11.s64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~r11.u64;
	// rlwinm r25,r9,1,31,31
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
loc_8263F920:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// addi r27,r29,52
	r27.s64 = r29.s64 + 52;
	// lwz r28,52(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x8263f998
	if (cr6.eq) goto loc_8263F998;
loc_8263F93C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,72
	r29.s64 = r11.s64 + 72;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263f97c
	if (!cr6.gt) goto loc_8263F97C;
	// li r30,0
	r30.s64 = 0;
loc_8263F958:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x826641a8
	sub_826641A8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8263f958
	if (cr6.lt) goto loc_8263F958;
loc_8263F97C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x8263f93c
	if (!cr6.eq) goto loc_8263F93C;
loc_8263F998:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8263f9b0
	if (cr6.gt) goto loc_8263F9B0;
	// extsb r11,r25
	r11.s64 = r25.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x8263f9b4
	if (cr6.eq) goto loc_8263F9B4;
loc_8263F9B0:
	// li r11,1
	r11.s64 = 1;
loc_8263F9B4:
	// stb r11,0(r24)
	PPC_STORE_U8(r24.u32 + 0, r11.u8);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8263F9C0"))) PPC_WEAK_FUNC(sub_8263F9C0);
PPC_FUNC_IMPL(__imp__sub_8263F9C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8263F9C4"))) PPC_WEAK_FUNC(sub_8263F9C4);
PPC_FUNC_IMPL(__imp__sub_8263F9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263F9C8"))) PPC_WEAK_FUNC(sub_8263F9C8);
PPC_FUNC_IMPL(__imp__sub_8263F9C8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r4,40
	r27.s64 = ctx.r4.s64 + 40;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8263fa58
	if (cr6.eq) goto loc_8263FA58;
loc_8263F9FC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,72
	r29.s64 = r11.s64 + 72;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263fa3c
	if (!cr6.gt) goto loc_8263FA3C;
	// li r30,0
	r30.s64 = 0;
loc_8263FA18:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x826641a8
	sub_826641A8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8263fa18
	if (cr6.lt) goto loc_8263FA18;
loc_8263FA3C:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x8263f9fc
	if (!cr6.eq) goto loc_8263F9FC;
loc_8263FA58:
	// neg r10,r11
	ctx.r10.s64 = -r11.s64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~r11.u64;
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stb r8,0(r25)
	PPC_STORE_U8(r25.u32 + 0, ctx.r8.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8263FA70"))) PPC_WEAK_FUNC(sub_8263FA70);
PPC_FUNC_IMPL(__imp__sub_8263FA70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8263FA74"))) PPC_WEAK_FUNC(sub_8263FA74);
PPC_FUNC_IMPL(__imp__sub_8263FA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263FA78"))) PPC_WEAK_FUNC(sub_8263FA78);
PPC_FUNC_IMPL(__imp__sub_8263FA78) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263f898
	sub_8263F898(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263f9c8
	sub_8263F9C8(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r11,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r11.u8);
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

__attribute__((alias("__imp__sub_8263FAD0"))) PPC_WEAK_FUNC(sub_8263FAD0);
PPC_FUNC_IMPL(__imp__sub_8263FAD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263FAD4"))) PPC_WEAK_FUNC(sub_8263FAD4);
PPC_FUNC_IMPL(__imp__sub_8263FAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263FAD8"))) PPC_WEAK_FUNC(sub_8263FAD8);
PPC_FUNC_IMPL(__imp__sub_8263FAD8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263fb84
	if (!cr6.gt) goto loc_8263FB84;
	// li r28,0
	r28.s64 = 0;
loc_8263FB00:
	// lwz r11,72(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// addi r31,r11,172
	r31.s64 = r11.s64 + 172;
	// lhz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 176);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8263fb70
	if (cr6.eq) goto loc_8263FB70;
	// li r30,0
	r30.s64 = 0;
loc_8263FB20:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r9,r11,r30
	ctx.r9.u64 = r11.u64 + r30.u64;
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// blt cr6,0x8263fb48
	if (cr6.lt) goto loc_8263FB48;
loc_8263FB38:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r10,23
	cr6.compare<uint32_t>(ctx.r10.u32, 23, xer);
	// bge cr6,0x8263fb38
	if (!cr6.lt) goto loc_8263FB38;
loc_8263FB48:
	// cmplwi cr6,r10,22
	cr6.compare<uint32_t>(ctx.r10.u32, 22, xer);
	// beq cr6,0x8263fb5c
	if (cr6.eq) goto loc_8263FB5C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x826642c8
	sub_826642C8(ctx, base);
loc_8263FB5C:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8263fb20
	if (cr6.lt) goto loc_8263FB20;
loc_8263FB70:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x8263fb00
	if (cr6.lt) goto loc_8263FB00;
loc_8263FB84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8263FB88"))) PPC_WEAK_FUNC(sub_8263FB88);
PPC_FUNC_IMPL(__imp__sub_8263FB88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8263FB8C"))) PPC_WEAK_FUNC(sub_8263FB8C);
PPC_FUNC_IMPL(__imp__sub_8263FB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263FB90"))) PPC_WEAK_FUNC(sub_8263FB90);
PPC_FUNC_IMPL(__imp__sub_8263FB90) {
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r31,40(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r3,40
	r30.s64 = ctx.r3.s64 + 40;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8263fbe8
	if (cr6.eq) goto loc_8263FBE8;
loc_8263FBC0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8263fad8
	sub_8263FAD8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8263fbc0
	if (!cr6.eq) goto loc_8263FBC0;
loc_8263FBE8:
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// addi r30,r28,52
	r30.s64 = r28.s64 + 52;
	// lwz r31,52(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8263fc2c
	if (cr6.eq) goto loc_8263FC2C;
loc_8263FC04:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8263fad8
	sub_8263FAD8(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8263fc04
	if (!cr6.eq) goto loc_8263FC04;
loc_8263FC2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263FC30"))) PPC_WEAK_FUNC(sub_8263FC30);
PPC_FUNC_IMPL(__imp__sub_8263FC30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8263FC34"))) PPC_WEAK_FUNC(sub_8263FC34);
PPC_FUNC_IMPL(__imp__sub_8263FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263FC38"))) PPC_WEAK_FUNC(sub_8263FC38);
PPC_FUNC_IMPL(__imp__sub_8263FC38) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r3,40
	r27.s64 = ctx.r3.s64 + 40;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8263fcc8
	if (cr6.eq) goto loc_8263FCC8;
loc_8263FC6C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,56
	r29.s64 = r11.s64 + 56;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263fcac
	if (!cr6.gt) goto loc_8263FCAC;
	// li r30,0
	r30.s64 = 0;
loc_8263FC88:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82664358
	sub_82664358(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8263fc88
	if (cr6.lt) goto loc_8263FC88;
loc_8263FCAC:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x8263fc6c
	if (!cr6.eq) goto loc_8263FC6C;
loc_8263FCC8:
	// lwz r10,56(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// addi r27,r25,52
	r27.s64 = r25.s64 + 52;
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 52);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r11
	r28.u64 = r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8263fd44
	if (cr6.eq) goto loc_8263FD44;
loc_8263FCE8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,56
	r29.s64 = r11.s64 + 56;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263fd28
	if (!cr6.gt) goto loc_8263FD28;
	// li r30,0
	r30.s64 = 0;
loc_8263FD04:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82664358
	sub_82664358(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8263fd04
	if (cr6.lt) goto loc_8263FD04;
loc_8263FD28:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bne cr6,0x8263fce8
	if (!cr6.eq) goto loc_8263FCE8;
loc_8263FD44:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8263FD48"))) PPC_WEAK_FUNC(sub_8263FD48);
PPC_FUNC_IMPL(__imp__sub_8263FD48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8263FD4C"))) PPC_WEAK_FUNC(sub_8263FD4C);
PPC_FUNC_IMPL(__imp__sub_8263FD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263FD50"))) PPC_WEAK_FUNC(sub_8263FD50);
PPC_FUNC_IMPL(__imp__sub_8263FD50) {
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
	// addi r29,r3,276
	r29.s64 = ctx.r3.s64 + 276;
	// lwz r31,444(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// beq cr6,0x8263fdf8
	if (cr6.eq) goto loc_8263FDF8;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263fe2c
	if (!cr6.gt) goto loc_8263FE2C;
	// li r30,0
	r30.s64 = 0;
loc_8263FD84:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x8263fddc
	if (cr6.eq) goto loc_8263FDDC;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8263fddc
	if (cr6.eq) goto loc_8263FDDC;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8263fddc
	if (cr6.eq) goto loc_8263FDDC;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8263fddc
	if (cr6.eq) goto loc_8263FDDC;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8263fddc
	if (cr6.eq) goto loc_8263FDDC;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8263fddc
	if (cr6.eq) goto loc_8263FDDC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82664238
	sub_82664238(ctx, base);
loc_8263FDDC:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8263fd84
	if (cr6.lt) goto loc_8263FD84;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8263FDF8:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8263fe2c
	if (!cr6.gt) goto loc_8263FE2C;
	// li r31,0
	r31.s64 = 0;
loc_8263FE08:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82664238
	sub_82664238(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x8263fe08
	if (cr6.lt) goto loc_8263FE08;
loc_8263FE2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8263FE30"))) PPC_WEAK_FUNC(sub_8263FE30);
PPC_FUNC_IMPL(__imp__sub_8263FE30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8263FE34"))) PPC_WEAK_FUNC(sub_8263FE34);
PPC_FUNC_IMPL(__imp__sub_8263FE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263FE38"))) PPC_WEAK_FUNC(sub_8263FE38);
PPC_FUNC_IMPL(__imp__sub_8263FE38) {
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
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,68
	ctx.r9.s64 = 68;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x826643e8
	sub_826643E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263f898
	sub_8263F898(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263f9c8
	sub_8263F9C8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// stb r7,64(r30)
	PPC_STORE_U8(r30.u32 + 64, ctx.r7.u8);
	// bl 0x8263fd50
	sub_8263FD50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263fb90
	sub_8263FB90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263fc38
	sub_8263FC38(ctx, base);
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

__attribute__((alias("__imp__sub_8263FEE4"))) PPC_WEAK_FUNC(sub_8263FEE4);
PPC_FUNC_IMPL(__imp__sub_8263FEE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263FEE8"))) PPC_WEAK_FUNC(sub_8263FEE8);
PPC_FUNC_IMPL(__imp__sub_8263FEE8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8263ff28
	if (cr6.eq) goto loc_8263FF28;
	// li r11,36
	r11.s64 = 36;
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
	// b 0x8263ff40
	goto loc_8263FF40;
loc_8263FF28:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8263FF40:
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

__attribute__((alias("__imp__sub_8263FF54"))) PPC_WEAK_FUNC(sub_8263FF54);
PPC_FUNC_IMPL(__imp__sub_8263FF54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263FF58"))) PPC_WEAK_FUNC(sub_8263FF58);
PPC_FUNC_IMPL(__imp__sub_8263FF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f12
	f0.f64 = double(float(ctx.f12.f64 - ctx.f12.f64));
	// lfs f13,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x8263ff98
	if (!cr6.eq) goto loc_8263FF98;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x8263ffa4
	goto loc_8263FFA4;
loc_8263FF98:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f13,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
loc_8263FFA4:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,8(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8263FFD0"))) PPC_WEAK_FUNC(sub_8263FFD0);
PPC_FUNC_IMPL(__imp__sub_8263FFD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8263FFD4"))) PPC_WEAK_FUNC(sub_8263FFD4);
PPC_FUNC_IMPL(__imp__sub_8263FFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8263FFD8"))) PPC_WEAK_FUNC(sub_8263FFD8);
PPC_FUNC_IMPL(__imp__sub_8263FFD8) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r3,40
	r28.s64 = ctx.r3.s64 + 40;
	// li r29,0
	r29.s64 = 0;
	// lfs f30,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f30.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lfs f31,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f31.f64 = double(temp.f32);
	// ble cr6,0x8264008c
	if (!cr6.gt) goto loc_8264008C;
	// li r30,0
	r30.s64 = 0;
loc_82640018:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f13
	f0.f64 = double(float(ctx.f13.f64 - ctx.f13.f64));
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r5,76(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r4,72(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x82640050
	if (!cr6.eq) goto loc_82640050;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x82640054
	goto loc_82640054;
loc_82640050:
	// fdivs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 / f0.f64));
loc_82640054:
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x82640018
	if (cr6.lt) goto loc_82640018;
loc_8264008C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82640114
	if (!cr6.gt) goto loc_82640114;
	// li r30,0
	r30.s64 = 0;
loc_826400A0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f13
	f0.f64 = double(float(ctx.f13.f64 - ctx.f13.f64));
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r5,76(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// lwz r4,72(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x826400d8
	if (!cr6.eq) goto loc_826400D8;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x826400dc
	goto loc_826400DC;
loc_826400D8:
	// fdivs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f30.f64 / f0.f64));
loc_826400DC:
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r9
	cr6.compare<int32_t>(r29.s32, ctx.r9.s32, xer);
	// blt cr6,0x826400a0
	if (cr6.lt) goto loc_826400A0;
loc_82640114:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_82640120"))) PPC_WEAK_FUNC(sub_82640120);
PPC_FUNC_IMPL(__imp__sub_82640120) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82640124"))) PPC_WEAK_FUNC(sub_82640124);
PPC_FUNC_IMPL(__imp__sub_82640124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82640128"))) PPC_WEAK_FUNC(sub_82640128);
PPC_FUNC_IMPL(__imp__sub_82640128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x828e941c
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x826401d8
	if (cr0.lt) {
		sub_826401D8(ctx, base);
		return;
	}
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,80
	r30.s64 = 80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8264015C:
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r29,0(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r6,r6,10
	ctx.r6.s64 = ctx.r6.s64 + 10;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r6,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,23
	ctx.r10.s64 = ctx.r10.s64 + 23;
	// rlwinm r10,r10,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// ble cr6,0x826401d0
	if (!cr6.gt) goto loc_826401D0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
loc_826401D0:
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bdnz 0x8264015c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264015C;
}

__attribute__((alias("__imp__sub_826401D8"))) PPC_WEAK_FUNC(sub_826401D8);
PPC_FUNC_IMPL(__imp__sub_826401D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826401DC"))) PPC_WEAK_FUNC(sub_826401DC);
PPC_FUNC_IMPL(__imp__sub_826401DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826401E0"))) PPC_WEAK_FUNC(sub_826401E0);
PPC_FUNC_IMPL(__imp__sub_826401E0) {
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
	// lhz r11,526(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 526);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lhz r10,524(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 524);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r9,r11,18
	ctx.r9.u64 = r11.u32 & 0x3FFF;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r31,r5,520
	r31.s64 = ctx.r5.s64 + 520;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8264021c
	if (!cr6.eq) goto loc_8264021C;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7c70
	sub_82BF7C70(ctx, base);
loc_8264021C:
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
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lhz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// cmplwi cr6,r6,65535
	cr6.compare<uint32_t>(ctx.r6.u32, 65535, xer);
	// bne cr6,0x82640270
	if (!cr6.eq) goto loc_82640270;
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82640270
	if (cr6.eq) goto loc_82640270;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82664c90
	sub_82664C90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,204(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// bl 0x82665118
	sub_82665118(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82640270:
	// lwz r11,204(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x8264029c
	if (cr6.eq) goto loc_8264029C;
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8264029c
	if (cr6.eq) goto loc_8264029C;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8264ef68
	sub_8264EF68(ctx, base);
loc_8264029C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826402A0"))) PPC_WEAK_FUNC(sub_826402A0);
PPC_FUNC_IMPL(__imp__sub_826402A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826402A4"))) PPC_WEAK_FUNC(sub_826402A4);
PPC_FUNC_IMPL(__imp__sub_826402A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826402A8"))) PPC_WEAK_FUNC(sub_826402A8);
PPC_FUNC_IMPL(__imp__sub_826402A8) {
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
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826402ec
	if (cr0.eq) goto loc_826402EC;
	// li r11,14
	r11.s64 = 14;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_826402EC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826591f8
	sub_826591F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264a128
	sub_8264A128(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264f958
	sub_8264F958(ctx, base);
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// ble cr6,0x82640348
	if (!cr6.gt) goto loc_82640348;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 276);
loc_8264032C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x8264034c
	if (cr6.eq) goto loc_8264034C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8264032c
	if (cr6.lt) goto loc_8264032C;
loc_82640348:
	// li r11,-1
	r11.s64 = -1;
loc_8264034C:
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82640374
	if (cr6.eq) goto loc_82640374;
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82640374:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82640398
	if (!cr6.eq) goto loc_82640398;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640398:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x826403f8
	if (!cr0.eq) goto loc_826403F8;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826403f8
	if (!cr6.eq) goto loc_826403F8;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826403d4
	if (cr6.eq) goto loc_826403D4;
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_826403D4:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826403f8
	if (!cr6.eq) goto loc_826403F8;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826403f8
	if (cr6.eq) goto loc_826403F8;
	// stw r29,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r29.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_826403F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826403FC"))) PPC_WEAK_FUNC(sub_826403FC);
PPC_FUNC_IMPL(__imp__sub_826403FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82640400"))) PPC_WEAK_FUNC(sub_82640400);
PPC_FUNC_IMPL(__imp__sub_82640400) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82640458
	if (cr6.eq) goto loc_82640458;
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
	// lwz r11,188(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// bl 0x82628520
	sub_82628520(ctx, base);
loc_82640458:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8265eaa8
	sub_8265EAA8(ctx, base);
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

__attribute__((alias("__imp__sub_82640480"))) PPC_WEAK_FUNC(sub_82640480);
PPC_FUNC_IMPL(__imp__sub_82640480) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82640484"))) PPC_WEAK_FUNC(sub_82640484);
PPC_FUNC_IMPL(__imp__sub_82640484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82640488"))) PPC_WEAK_FUNC(sub_82640488);
PPC_FUNC_IMPL(__imp__sub_82640488) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826404f0
	if (!cr6.eq) goto loc_826404F0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r5,r9,12832
	ctx.r5.s64 = ctx.r9.s64 + 12832;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826404F0:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x82640538
	if (cr0.lt) goto loc_82640538;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,12824
	r27.s64 = r11.s64 + 12824;
loc_82640508:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r5,r10,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x82640508
	if (!cr0.lt) goto loc_82640508;
loc_82640538:
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640584
	if (!cr6.eq) goto loc_82640584;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r5,r9,12808
	ctx.r5.s64 = ctx.r9.s64 + 12808;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640584:
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addic. r29,r11,-1
	xer.ca = r11.u32 > 0;
	r29.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x826405cc
	if (cr0.lt) goto loc_826405CC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,12796
	r27.s64 = r11.s64 + 12796;
loc_8264059C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r5,r10,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,-4
	r28.s64 = r28.s64 + -4;
	// bge 0x8264059c
	if (!cr0.lt) goto loc_8264059C;
loc_826405CC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,32(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r4,r10,12788
	ctx.r4.s64 = ctx.r10.s64 + 12788;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8264063c
	if (!cr6.eq) goto loc_8264063C;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,276(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 276);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,280(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 280);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,276(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 276);
	// addi r5,r9,12776
	ctx.r5.s64 = ctx.r9.s64 + 12776;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264063C:
	// lwz r11,280(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 280);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82640690
	if (!cr6.gt) goto loc_82640690;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r11,12764
	r27.s64 = r11.s64 + 12764;
loc_82640658:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r10,276(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 276);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r5,r29,r10
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,280(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 280);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r8
	cr6.compare<int32_t>(r28.s32, ctx.r8.s32, xer);
	// blt cr6,0x82640658
	if (cr6.lt) goto loc_82640658;
loc_82640690:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r5,184(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r11,12732
	ctx.r4.s64 = r11.s64 + 12732;
	// li r6,28
	ctx.r6.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,192(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// addi r4,r10,12700
	ctx.r4.s64 = ctx.r10.s64 + 12700;
	// li r6,28
	ctx.r6.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,196(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// addi r4,r9,12680
	ctx.r4.s64 = ctx.r9.s64 + 12680;
	// li r6,28
	ctx.r6.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,116(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// addi r4,r8,12648
	ctx.r4.s64 = ctx.r8.s64 + 12648;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826407b4
	if (cr6.eq) goto loc_826407B4;
	// mr r26,r11
	r26.u64 = r11.u64;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r28,r11,12620
	r28.s64 = r11.s64 + 12620;
	// addi r27,r10,12596
	r27.s64 = ctx.r10.s64 + 12596;
loc_82640720:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826407a8
	if (cr6.eq) goto loc_826407A8;
	// rotlwi r29,r10,0
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826407a8
	if (!cr6.eq) goto loc_826407A8;
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826407A8:
	// lwz r26,8(r26)
	r26.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82640720
	if (!cr6.eq) goto loc_82640720;
loc_826407B4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,12584
	ctx.r4.s64 = ctx.r10.s64 + 12584;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r8,12572
	ctx.r4.s64 = ctx.r8.s64 + 12572;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640840
	if (!cr6.eq) goto loc_82640840;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// addi r5,r9,12560
	ctx.r5.s64 = ctx.r9.s64 + 12560;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640840:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r4,r10,12548
	ctx.r4.s64 = ctx.r10.s64 + 12548;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r5,136(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r8,12540
	r29.s64 = ctx.r8.s64 + 12540;
	// li r6,40
	ctx.r6.s64 = 40;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,24(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,136(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// rlwinm r5,r11,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82640900
	if (!cr6.eq) goto loc_82640900;
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r7,12524
	ctx.r5.s64 = ctx.r7.s64 + 12524;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640900:
	// lwz r29,136(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640950
	if (!cr6.eq) goto loc_82640950;
	// rlwinm r4,r11,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r5,r9,12508
	ctx.r5.s64 = ctx.r9.s64 + 12508;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640950:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,444(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 444);
	// addi r4,r9,12488
	ctx.r4.s64 = ctx.r9.s64 + 12488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r6,12480
	ctx.r4.s64 = ctx.r6.s64 + 12480;
	// lwz r11,24(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// addi r4,r10,12468
	ctx.r4.s64 = ctx.r10.s64 + 12468;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lwz r5,100(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r29,r6,12456
	r29.s64 = ctx.r6.s64 + 12456;
	// li r6,268
	ctx.r6.s64 = 268;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,108(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,104(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// li r6,12
	ctx.r6.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,120(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// addi r4,r4,12444
	ctx.r4.s64 = ctx.r4.s64 + 12444;
	// li r6,128
	ctx.r6.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82640a74
	if (cr6.eq) goto loc_82640A74;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r5,112(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r10,12420
	ctx.r4.s64 = ctx.r10.s64 + 12420;
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
loc_82640A74:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// addi r4,r10,12412
	ctx.r4.s64 = ctx.r10.s64 + 12412;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,132(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r4,r8,12392
	ctx.r4.s64 = ctx.r8.s64 + 12392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,128(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// addi r4,r10,12380
	ctx.r4.s64 = ctx.r10.s64 + 12380;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,28(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12368
	ctx.r4.s64 = r11.s64 + 12368;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// rlwinm r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x82640b70
	if (!cr6.eq) goto loc_82640B70;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,300(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 300);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,304(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 304);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,300(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 300);
	// addi r5,r9,12356
	ctx.r5.s64 = ctx.r9.s64 + 12356;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640B70:
	// lwz r11,320(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 320);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640bbc
	if (!cr6.eq) goto loc_82640BBC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,312(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 312);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,312(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 312);
	// addi r5,r9,12344
	ctx.r5.s64 = ctx.r9.s64 + 12344;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640BBC:
	// lwz r11,332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 332);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640c08
	if (!cr6.eq) goto loc_82640C08;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,324(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 324);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,328(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 328);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,324(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 324);
	// addi r5,r9,12328
	ctx.r5.s64 = ctx.r9.s64 + 12328;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640C08:
	// lwz r11,344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 344);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640c54
	if (!cr6.eq) goto loc_82640C54;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,336(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 336);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,340(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 340);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,336(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 336);
	// addi r5,r9,12312
	ctx.r5.s64 = ctx.r9.s64 + 12312;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640C54:
	// lwz r11,356(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640ca0
	if (!cr6.eq) goto loc_82640CA0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,348(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,352(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 352);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,348(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// addi r5,r9,12296
	ctx.r5.s64 = ctx.r9.s64 + 12296;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640CA0:
	// lwz r11,368(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 368);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640cec
	if (!cr6.eq) goto loc_82640CEC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,360(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 360);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,364(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,360(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 360);
	// addi r5,r9,12280
	ctx.r5.s64 = ctx.r9.s64 + 12280;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640CEC:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r29,r11,12264
	r29.s64 = r11.s64 + 12264;
	// lwz r11,380(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 380);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640d3c
	if (!cr6.eq) goto loc_82640D3C;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,372(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 372);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,376(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 376);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,372(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 372);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640D3C:
	// lwz r11,392(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 392);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640d88
	if (!cr6.eq) goto loc_82640D88;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,384(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 388);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,384(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 384);
	// addi r5,r9,12248
	ctx.r5.s64 = ctx.r9.s64 + 12248;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640D88:
	// lwz r11,404(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 404);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640dd0
	if (!cr6.eq) goto loc_82640DD0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,396(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 396);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 400);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,396(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 396);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640DD0:
	// lwz r11,428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82640e1c
	if (!cr6.eq) goto loc_82640E1C;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,420(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 420);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,424(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 424);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,420(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 420);
	// addi r5,r9,12236
	ctx.r5.s64 = ctx.r9.s64 + 12236;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82640E1C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82640E3C"))) PPC_WEAK_FUNC(sub_82640E3C);
PPC_FUNC_IMPL(__imp__sub_82640E3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82640E40"))) PPC_WEAK_FUNC(sub_82640E40);
PPC_FUNC_IMPL(__imp__sub_82640E40) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
}

__attribute__((alias("__imp__sub_82640E44"))) PPC_WEAK_FUNC(sub_82640E44);
PPC_FUNC_IMPL(__imp__sub_82640E44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82640E48"))) PPC_WEAK_FUNC(sub_82640E48);
PPC_FUNC_IMPL(__imp__sub_82640E48) {
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
	// lwz r11,280(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,40
	r30.s64 = ctx.r3.s64 + 40;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82640e8c
	if (!cr6.gt) goto loc_82640E8C;
loc_82640E70:
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826402a8
	sub_826402A8(ctx, base);
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82640e70
	if (cr6.gt) goto loc_82640E70;
loc_82640E8C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82640ecc
	if (!cr6.gt) goto loc_82640ECC;
loc_82640E98:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82640ecc
	if (cr6.eq) goto loc_82640ECC;
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8263e6d8
	sub_8263E6D8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82640e98
	if (cr6.gt) goto loc_82640E98;
loc_82640ECC:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82640f00
	if (!cr6.gt) goto loc_82640F00;
loc_82640ED8:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8263e6d8
	sub_8263E6D8(ctx, base);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x82640ed8
	if (cr6.gt) goto loc_82640ED8;
loc_82640F00:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263e6d8
	sub_8263E6D8(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82640f4c
	if (!cr6.gt) goto loc_82640F4C;
loc_82640F28:
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8263e6d8
	sub_8263E6D8(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bgt cr6,0x82640f28
	if (cr6.gt) goto loc_82640F28;
loc_82640F4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e510
	sub_8263E510(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lbz r11,200(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82640fc8
	if (!cr6.eq) goto loc_82640FC8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,-4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// bl 0x8264d2d8
	sub_8264D2D8(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82640fbc
	if (cr6.eq) goto loc_82640FBC;
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
loc_82640FBC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82640FC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659a58
	sub_82659A58(ctx, base);
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

__attribute__((alias("__imp__sub_82640FE4"))) PPC_WEAK_FUNC(sub_82640FE4);
PPC_FUNC_IMPL(__imp__sub_82640FE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82640FE8"))) PPC_WEAK_FUNC(sub_82640FE8);
PPC_FUNC_IMPL(__imp__sub_82640FE8) {
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
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82641030
	if (cr0.eq) goto loc_82641030;
	// li r11,13
	r11.s64 = 13;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82641030:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264105c
	if (!cr6.eq) goto loc_8264105C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r29)
	PPC_STORE_U32(r29.u32 + 24, ctx.r3.u32);
loc_8264105C:
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r30,r31,276
	r30.s64 = r31.s64 + 276;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82641094
	if (!cr6.eq) goto loc_82641094;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82641094:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x8264f6f0
	sub_8264F6F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82659120
	sub_82659120(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264a190
	sub_8264A190(ctx, base);
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8264112c
	if (!cr0.eq) goto loc_8264112C;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264112c
	if (!cr6.eq) goto loc_8264112C;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82641108
	if (cr6.eq) goto loc_82641108;
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_82641108:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264112c
	if (!cr6.eq) goto loc_8264112C;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264112c
	if (cr6.eq) goto loc_8264112C;
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_8264112C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82641134"))) PPC_WEAK_FUNC(sub_82641134);
PPC_FUNC_IMPL(__imp__sub_82641134) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82641138"))) PPC_WEAK_FUNC(sub_82641138);
PPC_FUNC_IMPL(__imp__sub_82641138) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,288
	r31.s64 = ctx.r3.s64 + 288;
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
	// bne cr6,0x8264117c
	if (!cr6.eq) goto loc_8264117C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264117C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826411AC"))) PPC_WEAK_FUNC(sub_826411AC);
PPC_FUNC_IMPL(__imp__sub_826411AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826411B0"))) PPC_WEAK_FUNC(sub_826411B0);
PPC_FUNC_IMPL(__imp__sub_826411B0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,324
	r31.s64 = ctx.r3.s64 + 324;
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
	// bne cr6,0x826411f4
	if (!cr6.eq) goto loc_826411F4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826411F4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82641224"))) PPC_WEAK_FUNC(sub_82641224);
PPC_FUNC_IMPL(__imp__sub_82641224) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641228"))) PPC_WEAK_FUNC(sub_82641228);
PPC_FUNC_IMPL(__imp__sub_82641228) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,300
	r31.s64 = ctx.r3.s64 + 300;
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
	// bne cr6,0x8264126c
	if (!cr6.eq) goto loc_8264126C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264126C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8264129C"))) PPC_WEAK_FUNC(sub_8264129C);
PPC_FUNC_IMPL(__imp__sub_8264129C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826412A0"))) PPC_WEAK_FUNC(sub_826412A0);
PPC_FUNC_IMPL(__imp__sub_826412A0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,312
	r31.s64 = ctx.r3.s64 + 312;
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
	// bne cr6,0x826412e4
	if (!cr6.eq) goto loc_826412E4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826412E4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82641314"))) PPC_WEAK_FUNC(sub_82641314);
PPC_FUNC_IMPL(__imp__sub_82641314) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641318"))) PPC_WEAK_FUNC(sub_82641318);
PPC_FUNC_IMPL(__imp__sub_82641318) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,348
	r31.s64 = ctx.r3.s64 + 348;
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
	// bne cr6,0x8264135c
	if (!cr6.eq) goto loc_8264135C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264135C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8264138C"))) PPC_WEAK_FUNC(sub_8264138C);
PPC_FUNC_IMPL(__imp__sub_8264138C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641390"))) PPC_WEAK_FUNC(sub_82641390);
PPC_FUNC_IMPL(__imp__sub_82641390) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,384
	r31.s64 = ctx.r3.s64 + 384;
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
	// bne cr6,0x826413d4
	if (!cr6.eq) goto loc_826413D4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826413D4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82641404"))) PPC_WEAK_FUNC(sub_82641404);
PPC_FUNC_IMPL(__imp__sub_82641404) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641408"))) PPC_WEAK_FUNC(sub_82641408);
PPC_FUNC_IMPL(__imp__sub_82641408) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,360
	r31.s64 = ctx.r3.s64 + 360;
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
	// bne cr6,0x8264144c
	if (!cr6.eq) goto loc_8264144C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264144C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8264147C"))) PPC_WEAK_FUNC(sub_8264147C);
PPC_FUNC_IMPL(__imp__sub_8264147C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641480"))) PPC_WEAK_FUNC(sub_82641480);
PPC_FUNC_IMPL(__imp__sub_82641480) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,372
	r31.s64 = ctx.r3.s64 + 372;
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
	// bne cr6,0x826414c4
	if (!cr6.eq) goto loc_826414C4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826414C4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826414F4"))) PPC_WEAK_FUNC(sub_826414F4);
PPC_FUNC_IMPL(__imp__sub_826414F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826414F8"))) PPC_WEAK_FUNC(sub_826414F8);
PPC_FUNC_IMPL(__imp__sub_826414F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,408
	r31.s64 = ctx.r3.s64 + 408;
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
	// bne cr6,0x8264153c
	if (!cr6.eq) goto loc_8264153C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264153C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8264156C"))) PPC_WEAK_FUNC(sub_8264156C);
PPC_FUNC_IMPL(__imp__sub_8264156C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641570"))) PPC_WEAK_FUNC(sub_82641570);
PPC_FUNC_IMPL(__imp__sub_82641570) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,396
	r31.s64 = ctx.r3.s64 + 396;
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
	// bne cr6,0x826415b4
	if (!cr6.eq) goto loc_826415B4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826415B4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826415E4"))) PPC_WEAK_FUNC(sub_826415E4);
PPC_FUNC_IMPL(__imp__sub_826415E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826415E8"))) PPC_WEAK_FUNC(sub_826415E8);
PPC_FUNC_IMPL(__imp__sub_826415E8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,420
	r31.s64 = ctx.r3.s64 + 420;
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
	// bne cr6,0x8264162c
	if (!cr6.eq) goto loc_8264162C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264162C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8264165C"))) PPC_WEAK_FUNC(sub_8264165C);
PPC_FUNC_IMPL(__imp__sub_8264165C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641660"))) PPC_WEAK_FUNC(sub_82641660);
PPC_FUNC_IMPL(__imp__sub_82641660) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,336
	r31.s64 = ctx.r3.s64 + 336;
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
	// bne cr6,0x826416a4
	if (!cr6.eq) goto loc_826416A4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826416A4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826416D4"))) PPC_WEAK_FUNC(sub_826416D4);
PPC_FUNC_IMPL(__imp__sub_826416D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826416D8"))) PPC_WEAK_FUNC(sub_826416D8);
PPC_FUNC_IMPL(__imp__sub_826416D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,432
	r31.s64 = ctx.r3.s64 + 432;
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
	// bne cr6,0x8264171c
	if (!cr6.eq) goto loc_8264171C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_8264171C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8264174C"))) PPC_WEAK_FUNC(sub_8264174C);
PPC_FUNC_IMPL(__imp__sub_8264174C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641750"))) PPC_WEAK_FUNC(sub_82641750);
PPC_FUNC_IMPL(__imp__sub_82641750) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82640400
	sub_82640400(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826417bc
	if (!cr6.eq) goto loc_826417BC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,11
	ctx.r5.s64 = 11;
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf8ca8
	sub_82BF8CA8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8263ede8
	sub_8263EDE8(ctx, base);
loc_826417BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826417C0"))) PPC_WEAK_FUNC(sub_826417C0);
PPC_FUNC_IMPL(__imp__sub_826417C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826417C4"))) PPC_WEAK_FUNC(sub_826417C4);
PPC_FUNC_IMPL(__imp__sub_826417C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826417C8"))) PPC_WEAK_FUNC(sub_826417C8);
PPC_FUNC_IMPL(__imp__sub_826417C8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,68
	r28.s64 = 68;
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// bl 0x826643e8
	sub_826643E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263f898
	sub_8263F898(ctx, base);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82641874
	if (cr6.eq) goto loc_82641874;
	// li r11,0
	r11.s64 = 0;
	// stb r11,64(r30)
	PPC_STORE_U8(r30.u32 + 64, r11.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r8,r10,2
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// bne cr6,0x82641854
	if (!cr6.eq) goto loc_82641854;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82641854:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// b 0x8264187c
	goto loc_8264187C;
loc_82641874:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826418a4
	if (!cr6.eq) goto loc_826418A4;
loc_8264187C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// bl 0x826643e8
	sub_826643E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826418A4:
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
	// bne cr6,0x826418cc
	if (!cr6.eq) goto loc_826418CC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826418CC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// bl 0x8263f9c8
	sub_8263F9C8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8263fd50
	sub_8263FD50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8263fb90
	sub_8263FB90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8263fc38
	sub_8263FC38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82641920"))) PPC_WEAK_FUNC(sub_82641920);
PPC_FUNC_IMPL(__imp__sub_82641920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82641924"))) PPC_WEAK_FUNC(sub_82641924);
PPC_FUNC_IMPL(__imp__sub_82641924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82641928"))) PPC_WEAK_FUNC(sub_82641928);
PPC_FUNC_IMPL(__imp__sub_82641928) {
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
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82641990
	if (cr6.eq) goto loc_82641990;
	// li r11,32
	r11.s64 = 32;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8262d7d0
	sub_8262D7D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e946c
	return;
loc_82641990:
	// li r29,0
	r29.s64 = 0;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82641a2c
	if (!cr6.gt) goto loc_82641A2C;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r31,r29
	r31.u64 = r29.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
loc_826419DC:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82641a10
	if (!cr6.eq) goto loc_82641A10;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82641a10
	if (cr6.eq) goto loc_82641A10;
	// bl 0x8263b1c8
	sub_8263B1C8(ctx, base);
loc_82641A10:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// add r11,r31,r10
	r11.u64 = r31.u64 + ctx.r10.u64;
	// blt cr6,0x826419dc
	if (cr6.lt) goto loc_826419DC;
loc_82641A2C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82641a64
	if (!cr6.eq) goto loc_82641A64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_82641A64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82641A68"))) PPC_WEAK_FUNC(sub_82641A68);
PPC_FUNC_IMPL(__imp__sub_82641A68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82641A6C"))) PPC_WEAK_FUNC(sub_82641A6C);
PPC_FUNC_IMPL(__imp__sub_82641A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82641A70"))) PPC_WEAK_FUNC(sub_82641A70);
PPC_FUNC_IMPL(__imp__sub_82641A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,12852
	ctx.r8.s64 = ctx.r10.s64 + 12852;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// li r7,-47
	ctx.r7.s64 = -47;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r7,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r7.u32);
	// sth r11,172(r3)
	PPC_STORE_U16(ctx.r3.u32 + 172, r11.u16);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, r11.u32);
	// stw r11,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, r11.u32);
	// stw r10,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, ctx.r10.u32);
	// stw r11,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, r11.u32);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, r11.u32);
	// stw r10,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, ctx.r10.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, r11.u32);
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, r11.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, r11.u32);
	// stw r11,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, r11.u32);
	// stw r10,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r10.u32);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, r11.u32);
	// stw r11,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, r11.u32);
	// stw r10,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r10.u32);
	// stw r11,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, r11.u32);
	// stw r11,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, r11.u32);
	// stw r10,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, ctx.r10.u32);
	// stw r11,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, r11.u32);
	// stw r11,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, r11.u32);
	// stw r10,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r10.u32);
	// stw r11,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, r11.u32);
	// stw r11,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, r11.u32);
	// stw r10,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, ctx.r10.u32);
	// stw r11,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, r11.u32);
	// stw r11,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, r11.u32);
	// stw r10,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, ctx.r10.u32);
	// stw r11,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, r11.u32);
	// stw r11,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, r11.u32);
	// stw r10,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r10.u32);
	// stw r11,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, r11.u32);
	// stw r11,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, r11.u32);
	// stw r10,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, ctx.r10.u32);
	// stw r11,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, r11.u32);
	// stw r11,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, r11.u32);
	// stw r10,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, ctx.r10.u32);
	// stw r11,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, r11.u32);
	// stw r11,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, r11.u32);
	// stw r10,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_82641B5C"))) PPC_WEAK_FUNC(sub_82641B5C);
PPC_FUNC_IMPL(__imp__sub_82641B5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82641B60"))) PPC_WEAK_FUNC(sub_82641B60);
PPC_FUNC_IMPL(__imp__sub_82641B60) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lwz r31,116(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,12852
	ctx.r10.s64 = r11.s64 + 12852;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82641bd8
	if (cr6.eq) goto loc_82641BD8;
	// lwz r11,212(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// addi r29,r31,112
	r29.s64 = r31.s64 + 112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82641bb8
	if (cr6.eq) goto loc_82641BB8;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82641BB8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,256
	ctx.r5.s64 = 256;
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
loc_82641BD8:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// stw r31,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r31.u32);
	// lwz r29,184(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82641c18
	if (cr6.eq) goto loc_82641C18;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,28
	ctx.r5.s64 = 28;
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
	// stw r31,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r31.u32);
loc_82641C18:
	// lwz r29,196(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 196);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82641c48
	if (cr6.eq) goto loc_82641C48;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,28
	ctx.r5.s64 = 28;
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
	// stw r31,196(r30)
	PPC_STORE_U32(r30.u32 + 196, r31.u32);
loc_82641C48:
	// lwz r29,192(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 192);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82641c78
	if (cr6.eq) goto loc_82641C78;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,28
	ctx.r5.s64 = 28;
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
	// stw r31,192(r30)
	PPC_STORE_U32(r30.u32 + 192, r31.u32);
loc_82641C78:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82641c88
	if (cr6.eq) goto loc_82641C88;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82641C88:
	// stw r31,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82640e48
	sub_82640E48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x8263e6d8
	sub_8263E6D8(ctx, base);
	// stw r31,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x8264d2d8
	sub_8264D2D8(ctx, base);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82641cd4
	if (cr6.eq) goto loc_82641CD4;
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
loc_82641CD4:
	// stw r31,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82659980
	sub_82659980(ctx, base);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// stw r31,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r31.u32);
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// stw r31,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r31.u32);
	// lwz r29,100(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82641d2c
	if (cr6.eq) goto loc_82641D2C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c55238
	sub_82C55238(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,268
	ctx.r5.s64 = 268;
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
loc_82641D2C:
	// lwz r3,444(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 444);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82641d3c
	if (cr6.eq) goto loc_82641D3C;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82641D3C:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82641d5c
	if (cr6.eq) goto loc_82641D5C;
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
loc_82641D5C:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82641d7c
	if (cr6.eq) goto loc_82641D7C;
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
loc_82641D7C:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82641d9c
	if (cr6.eq) goto loc_82641D9C;
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
loc_82641D9C:
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r29,112(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82641ddc
	if (cr6.eq) goto loc_82641DDC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,16
	ctx.r5.s64 = 16;
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
loc_82641DDC:
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82641df0
	if (cr6.eq) goto loc_82641DF0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82646aa8
	sub_82646AA8(ctx, base);
loc_82641DF0:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r29,136(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82641e2c
	if (cr6.eq) goto loc_82641E2C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8265ad60
	sub_8265AD60(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,40
	ctx.r5.s64 = 40;
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
loc_82641E2C:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82641e3c
	if (cr6.eq) goto loc_82641E3C;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82641E3C:
	// addi r28,r30,432
	r28.s64 = r30.s64 + 432;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,436(r30)
	PPC_STORE_U32(r30.u32 + 436, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82641e78
	if (!cr6.eq) goto loc_82641E78;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82641E78:
	// lis r29,-32768
	r29.s64 = -2147483648;
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r27,r30,420
	r27.s64 = r30.s64 + 420;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,424(r30)
	PPC_STORE_U32(r30.u32 + 424, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82641ec0
	if (!cr6.eq) goto loc_82641EC0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82641EC0:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r28,r30,408
	r28.s64 = r30.s64 + 408;
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,416(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 416);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,412(r30)
	PPC_STORE_U32(r30.u32 + 412, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82641f04
	if (!cr6.eq) goto loc_82641F04;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82641F04:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r27,r30,396
	r27.s64 = r30.s64 + 396;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,404(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 404);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,400(r30)
	PPC_STORE_U32(r30.u32 + 400, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82641f48
	if (!cr6.eq) goto loc_82641F48;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82641F48:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r28,r30,384
	r28.s64 = r30.s64 + 384;
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,392(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 392);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,388(r30)
	PPC_STORE_U32(r30.u32 + 388, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82641f8c
	if (!cr6.eq) goto loc_82641F8C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82641F8C:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r27,r30,372
	r27.s64 = r30.s64 + 372;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,380(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 380);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,376(r30)
	PPC_STORE_U32(r30.u32 + 376, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82641fd0
	if (!cr6.eq) goto loc_82641FD0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82641FD0:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r28,r30,360
	r28.s64 = r30.s64 + 360;
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,368(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 368);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,364(r30)
	PPC_STORE_U32(r30.u32 + 364, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82642014
	if (!cr6.eq) goto loc_82642014;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82642014:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r27,r30,348
	r27.s64 = r30.s64 + 348;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,356(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,352(r30)
	PPC_STORE_U32(r30.u32 + 352, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82642058
	if (!cr6.eq) goto loc_82642058;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82642058:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r28,r30,336
	r28.s64 = r30.s64 + 336;
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,344(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 344);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,340(r30)
	PPC_STORE_U32(r30.u32 + 340, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264209c
	if (!cr6.eq) goto loc_8264209C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264209C:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r27,r30,324
	r27.s64 = r30.s64 + 324;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,332(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 332);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,328(r30)
	PPC_STORE_U32(r30.u32 + 328, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826420e0
	if (!cr6.eq) goto loc_826420E0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826420E0:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r28,r30,312
	r28.s64 = r30.s64 + 312;
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,320(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 320);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,316(r30)
	PPC_STORE_U32(r30.u32 + 316, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82642124
	if (!cr6.eq) goto loc_82642124;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82642124:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r27,r30,300
	r27.s64 = r30.s64 + 300;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,304(r30)
	PPC_STORE_U32(r30.u32 + 304, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82642168
	if (!cr6.eq) goto loc_82642168;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82642168:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r28,r30,288
	r28.s64 = r30.s64 + 288;
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,292(r30)
	PPC_STORE_U32(r30.u32 + 292, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826421ac
	if (!cr6.eq) goto loc_826421AC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826421AC:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r27,r30,276
	r27.s64 = r30.s64 + 276;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,280(r30)
	PPC_STORE_U32(r30.u32 + 280, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826421f0
	if (!cr6.eq) goto loc_826421F0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826421F0:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82642208
	if (cr6.eq) goto loc_82642208;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82642208:
	// stw r31,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r31.u32);
	// addi r27,r30,64
	r27.s64 = r30.s64 + 64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82642248
	if (!cr6.eq) goto loc_82642248;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82642248:
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r28,r30,52
	r28.s64 = r30.s64 + 52;
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264228c
	if (!cr6.eq) goto loc_8264228C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264228C:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r27,r30,40
	r27.s64 = r30.s64 + 40;
	// stw r29,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826422d0
	if (!cr6.eq) goto loc_826422D0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826422D0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// stw r29,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r29.u32);
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826422E8"))) PPC_WEAK_FUNC(sub_826422E8);
PPC_FUNC_IMPL(__imp__sub_826422E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826422EC"))) PPC_WEAK_FUNC(sub_826422EC);
PPC_FUNC_IMPL(__imp__sub_826422EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826422F0"))) PPC_WEAK_FUNC(sub_826422F0);
PPC_FUNC_IMPL(__imp__sub_826422F0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82642338
	if (cr6.eq) goto loc_82642338;
	// li r11,20
	r11.s64 = 20;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9454
	return;
loc_82642338:
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,12
	r24.s64 = 12;
	// li r11,1
	r11.s64 = 1;
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82642384
	if (!cr6.lt) goto loc_82642384;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,12924
	ctx.r7.s64 = ctx.r9.s64 + 12924;
	// addi r6,r8,12908
	ctx.r6.s64 = ctx.r8.s64 + 12908;
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
loc_82642384:
	// li r26,0
	r26.s64 = 0;
	// lwz r28,824(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 824);
	// lis r29,-32768
	r29.s64 = -2147483648;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// addi r30,r27,16
	r30.s64 = r27.s64 + 16;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r28,r29
	ctx.r9.u64 = r28.u64 | r29.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r30,20
	r28.s64 = r30.s64 + 20;
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r24,r25
	r11.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8264241c
	if (!cr6.lt) goto loc_8264241C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12888
	ctx.r8.s64 = ctx.r9.s64 + 12888;
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
loc_8264241C:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82642478
	if (!cr6.gt) goto loc_82642478;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r26
	r30.u64 = r26.u64;
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
loc_82642438:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x8264245c
	if (cr6.eq) goto loc_8264245C;
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8263dd68
	sub_8263DD68(ctx, base);
loc_8264245C:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// add r11,r30,r10
	r11.u64 = r30.u64 + ctx.r10.u64;
	// blt cr6,0x82642438
	if (cr6.lt) goto loc_82642438;
loc_82642478:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x826424c4
	if (cr6.eq) goto loc_826424C4;
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826424b0
	if (!cr6.lt) goto loc_826424B0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12868
	ctx.r8.s64 = ctx.r9.s64 + 12868;
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
loc_826424B0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826424C4:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x8264251c
	if (!cr0.eq) goto loc_8264251C;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264251c
	if (!cr6.eq) goto loc_8264251C;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826424f8
	if (cr6.eq) goto loc_826424F8;
	// stw r26,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r26.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_826424F8:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264251c
	if (!cr6.eq) goto loc_8264251C;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264251c
	if (cr6.eq) goto loc_8264251C;
	// stw r26,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r26.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_8264251C:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8264254c
	if (!cr6.lt) goto loc_8264254C;
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
loc_8264254C:
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
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826425b0
	if (!cr6.eq) goto loc_826425B0;
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
loc_826425B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_826425B4"))) PPC_WEAK_FUNC(sub_826425B4);
PPC_FUNC_IMPL(__imp__sub_826425B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_826425B8"))) PPC_WEAK_FUNC(sub_826425B8);
PPC_FUNC_IMPL(__imp__sub_826425B8) {
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
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82642608
	if (cr6.eq) goto loc_82642608;
	// li r11,18
	r11.s64 = 18;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stb r5,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r5.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// stb r6,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r6.u8);
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x828e9440
	return;
loc_82642608:
	// lwz r20,0(r13)
	r20.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r19,12
	r19.s64 = 12;
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8264264c
	if (!cr6.lt) goto loc_8264264C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,12992
	ctx.r7.s64 = ctx.r9.s64 + 12992;
	// addi r6,r8,12984
	ctx.r6.s64 = ctx.r8.s64 + 12984;
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
loc_8264264C:
	// lwz r11,148(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 148);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,148(r24)
	PPC_STORE_U32(r24.u32 + 148, r11.u32);
	// lbz r10,232(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x8264266c
	if (!cr6.eq) goto loc_8264266C;
	// addi r3,r23,16
	ctx.r3.s64 = r23.s64 + 16;
	// bl 0x82c5a830
	sub_82C5A830(ctx, base);
loc_8264266C:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// li r22,0
	r22.s64 = 0;
	// ori r28,r11,128
	r28.u64 = r11.u64 | 128;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// lis r18,-32768
	r18.s64 = -2147483648;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x826428e4
	if (!cr6.eq) goto loc_826428E4;
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826426c4
	if (!cr6.lt) goto loc_826426C4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12908
	ctx.r8.s64 = ctx.r9.s64 + 12908;
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
loc_826426C4:
	// lwz r3,88(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 88);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r23,36
	ctx.r4.s64 = r23.s64 + 36;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82642710
	if (!cr6.lt) goto loc_82642710;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12972
	ctx.r8.s64 = ctx.r9.s64 + 12972;
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
loc_82642710:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826427ec
	if (!cr6.gt) goto loc_826427EC;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r22
	r31.u64 = r22.u64;
	// add r11,r22,r11
	r11.u64 = r22.u64 + r11.u64;
loc_8264272C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r9,5(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 24);
	// cmplwi cr6,r8,2
	cr6.compare<uint32_t>(ctx.r8.u32, 2, xer);
	// bne cr6,0x826427d4
	if (!cr6.eq) goto loc_826427D4;
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + r11.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826427d4
	if (cr6.eq) goto loc_826427D4;
	// addi r4,r23,16
	ctx.r4.s64 = r23.s64 + 16;
	// lwz r5,124(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8263dd68
	sub_8263DD68(ctx, base);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x82642788
	if (cr6.eq) goto loc_82642788;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82642788:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x826427cc
	if (cr6.eq) goto loc_826427CC;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r11,r31,r9
	r11.u64 = r31.u64 + ctx.r9.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826427B8:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x826427b8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826427B8;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_826427CC:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
loc_826427D4:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// blt cr6,0x8264272c
	if (cr6.lt) goto loc_8264272C;
loc_826427EC:
	// addi r3,r23,16
	ctx.r3.s64 = r23.s64 + 16;
	// bl 0x82c5a808
	sub_82C5A808(ctx, base);
	// addi r11,r1,1164
	r11.s64 = ctx.r1.s64 + 1164;
	// stw r22,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, r22.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, r28.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// stw r11,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82642898
	if (!cr6.gt) goto loc_82642898;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_8264281C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,1160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// lwz r11,1156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x82642848
	if (!cr6.eq) goto loc_82642848;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
	// lwz r11,1156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1156);
loc_82642848:
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lwz r10,1152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r9.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + ctx.r8.u32);
	// lwz r10,16(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// addi r6,r10,20
	ctx.r6.s64 = ctx.r10.s64 + 20;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + ctx.r5.u32);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8264281c
	if (cr6.lt) goto loc_8264281C;
loc_82642898:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82c55380
	sub_82C55380(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,1160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1160);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r22,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, r22.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826428dc
	if (!cr6.eq) goto loc_826428DC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,1152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1152);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826428DC:
	// stw r22,1152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1152, r22.u32);
	// stw r18,1160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1160, r18.u32);
loc_826428E4:
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82642914
	if (!cr6.lt) goto loc_82642914;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12960
	ctx.r8.s64 = ctx.r9.s64 + 12960;
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
loc_82642914:
	// addi r26,r23,16
	r26.s64 = r23.s64 + 16;
	// lbz r11,42(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 42);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// extsb r28,r11
	r28.s64 = r11.s8;
	// bl 0x82c5a808
	sub_82C5A808(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82642a1c
	if (!cr6.gt) goto loc_82642A1C;
	// mr r30,r22
	r30.u64 = r22.u64;
	// li r25,1
	r25.s64 = 1;
loc_82642944:
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// add r31,r30,r10
	r31.u64 = r30.u64 + ctx.r10.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
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
	// beq cr6,0x826429ac
	if (cr6.eq) goto loc_826429AC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,128(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 128);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,26(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 26);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r6,7088(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7088);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x826429d0
	if (!cr6.eq) goto loc_826429D0;
loc_826429AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82665c90
	sub_82665C90(ctx, base);
	// lwz r11,204(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 204);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwimi r10,r25,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r25.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r10.u8);
	// b 0x82642a08
	goto loc_82642A08;
loc_826429D0:
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// bne cr6,0x82642a08
	if (!cr6.eq) goto loc_82642A08;
	// lbz r10,232(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x826429f8
	if (!cr6.eq) goto loc_826429F8;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r5,204(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// b 0x826429fc
	goto loc_826429FC;
loc_826429F8:
	// lwz r5,204(r23)
	ctx.r5.u64 = PPC_LOAD_U32(r23.u32 + 204);
loc_826429FC:
	// lwz r4,120(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 120);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82c59800
	sub_82C59800(ctx, base);
loc_82642A08:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82642944
	if (cr6.lt) goto loc_82642944;
loc_82642A1C:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82642a7c
	if (!cr6.gt) goto loc_82642A7C;
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82642a58
	if (!cr6.lt) goto loc_82642A58;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,12948
	ctx.r8.s64 = ctx.r9.s64 + 12948;
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
loc_82642A58:
	// lwz r11,124(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82642a6c
	if (!cr6.eq) goto loc_82642A6C;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_82642A6C:
	// lwz r3,100(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 100);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82c55258
	sub_82C55258(ctx, base);
loc_82642A7C:
	// lwz r11,148(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r24)
	PPC_STORE_U32(r24.u32 + 148, r11.u32);
	// bne 0x82642ad4
	if (!cr0.eq) goto loc_82642AD4;
	// lbz r11,156(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82642ad4
	if (!cr6.eq) goto loc_82642AD4;
	// lwz r11,140(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82642ab0
	if (cr6.eq) goto loc_82642AB0;
	// stw r22,140(r24)
	PPC_STORE_U32(r24.u32 + 140, r22.u32);
	// lwz r3,136(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_82642AB0:
	// lwz r11,164(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82642ad4
	if (!cr6.eq) goto loc_82642AD4;
	// lwz r11,144(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82642ad4
	if (cr6.eq) goto loc_82642AD4;
	// stw r22,144(r24)
	PPC_STORE_U32(r24.u32 + 144, r22.u32);
	// lwz r3,136(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_82642AD4:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r22,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r22.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82642b0c
	if (!cr6.eq) goto loc_82642B0C;
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
loc_82642B0C:
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r22.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82642b44
	if (!cr6.lt) goto loc_82642B44;
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
loc_82642B44:
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
}

__attribute__((alias("__imp__sub_82642B48"))) PPC_WEAK_FUNC(sub_82642B48);
PPC_FUNC_IMPL(__imp__sub_82642B48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_82642B4C"))) PPC_WEAK_FUNC(sub_82642B4C);
PPC_FUNC_IMPL(__imp__sub_82642B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82642B50"))) PPC_WEAK_FUNC(sub_82642B50);
PPC_FUNC_IMPL(__imp__sub_82642B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e4
	// stfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82643288
	if (cr6.eq) goto loc_82643288;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82642bb8
	if (cr6.eq) goto loc_82642BB8;
	// li r11,6
	r11.s64 = 6;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stb r6,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x828e9434
	return;
loc_82642BB8:
	// lwz r17,0(r13)
	r17.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r16,12
	r16.s64 = 12;
	// lwzx r10,r16,r17
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + r17.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82642bfc
	if (!cr6.lt) goto loc_82642BFC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,13060
	ctx.r7.s64 = ctx.r9.s64 + 13060;
	// addi r6,r8,12984
	ctx.r6.s64 = ctx.r8.s64 + 12984;
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
loc_82642BFC:
	// lwz r11,148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 148);
	// li r27,0
	r27.s64 = 0;
	// lis r18,-32768
	r18.s64 = -2147483648;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r27.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// stw r11,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r11.u32);
	// stw r18,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r18.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r21,2,0,29
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// or r31,r21,r18
	r31.u64 = r21.u64 | r18.u64;
	// addi r10,r11,127
	ctx.r10.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r18,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r18.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r21,5,0,26
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 5) & 0xFFFFFFE0;
	// li r22,1
	r22.s64 = 1;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r20,r27
	r20.u64 = r27.u64;
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lbz r6,200(r29)
	ctx.r6.u64 = PPC_LOAD_U8(r29.u32 + 200);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// beq cr6,0x82642d08
	if (cr6.eq) goto loc_82642D08;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,108
	ctx.r9.s64 = 108;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82665648
	sub_82665648(ctx, base);
	// lbz r8,37(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// rlwimi r8,r22,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(r22.u32, 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(r19.s32, 1, xer);
	// stb r8,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r8.u8);
	// bne cr6,0x82642cf0
	if (!cr6.eq) goto loc_82642CF0;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// li r10,5
	ctx.r10.s64 = 5;
	// lbz r9,38(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// rlwimi r9,r10,4,0,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0xFFFFFFF0) | (ctx.r9.u64 & 0xFFFFFFFF0000000F);
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, r11.u16);
	// stb r9,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r9.u8);
	// b 0x82642d54
	goto loc_82642D54;
loc_82642CF0:
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lbz r10,38(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 38);
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// sth r11,32(r25)
	PPC_STORE_U16(r25.u32 + 32, r11.u16);
	// stb r8,38(r25)
	PPC_STORE_U8(r25.u32 + 38, ctx.r8.u8);
	// b 0x82642d54
	goto loc_82642D54;
loc_82642D08:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r30,r25,72
	r30.s64 = r25.s64 + 72;
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// add r31,r11,r21
	r31.u64 = r11.u64 + r21.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,80(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 80);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r10,2
	r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82642d54
	if (!cr6.lt) goto loc_82642D54;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82642d44
	if (cr6.lt) goto loc_82642D44;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82642D44:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82642D54:
	// lwz r11,120(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * f0.f64));
	// ble cr6,0x82642eec
	if (!cr6.gt) goto loc_82642EEC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r26,r29,773
	r26.s64 = r29.s64 + 773;
	// mr r24,r15
	r24.u64 = r15.u64;
	// mr r23,r21
	r23.u64 = r21.u64;
	// lfs f31,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
loc_82642D84:
	// lwz r11,264(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 264);
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,264(r29)
	PPC_STORE_U32(r29.u32 + 264, r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82642dc4
	if (!cr6.eq) goto loc_82642DC4;
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
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_82642DC4:
	// addi r5,r31,240
	ctx.r5.s64 = r31.s64 + 240;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82bf65a8
	sub_82BF65A8(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// sth r27,234(r31)
	PPC_STORE_U16(r31.u32 + 234, r27.u16);
	// sth r27,236(r31)
	PPC_STORE_U16(r31.u32 + 236, r27.u16);
	// lbz r11,775(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 775);
	// lbz r10,233(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 233);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r7,r11,30
	ctx.r7.u64 = r11.u32 & 0x3;
	// lbz r8,1(r26)
	ctx.r8.u64 = PPC_LOAD_U8(r26.u32 + 1);
	// lbz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// cmplw cr6,r7,r6
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, xer);
	// bge cr6,0x82642e04
	if (!cr6.lt) goto loc_82642E04;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
loc_82642E04:
	// rlwinm r9,r9,14,0,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x82642e1c
	if (!cr6.lt) goto loc_82642E1C;
	// not r11,r8
	r11.u64 = ~ctx.r8.u64;
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// b 0x82642e20
	goto loc_82642E20;
loc_82642E1C:
	// rlwinm r11,r8,14,0,17
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0xFFFFC000;
loc_82642E20:
	// lhz r10,236(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 236);
	// lhz r8,234(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 234);
	// clrlwi r7,r10,18
	ctx.r7.u64 = ctx.r10.u32 & 0x3FFF;
	// clrlwi r6,r8,18
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFF;
	// or r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 | r11.u64;
	// or r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 | ctx.r9.u64;
	// sth r5,236(r31)
	PPC_STORE_U16(r31.u32 + 236, ctx.r5.u16);
	// sth r4,234(r31)
	PPC_STORE_U16(r31.u32 + 234, ctx.r4.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x82642e58
	if (!cr6.eq) goto loc_82642E58;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// b 0x82642e60
	goto loc_82642E60;
loc_82642E58:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r20,r22
	r20.u64 = r22.u64;
loc_82642E60:
	// bl 0x82665090
	sub_82665090(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r28,16(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r22,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r22.u32);
	// stw r27,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r27.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82642ee0
	if (cr6.eq) goto loc_82642EE0;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r30,20
	r11.s64 = r30.s64 + 20;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// bl 0x8263afc8
	sub_8263AFC8(ctx, base);
loc_82642EE0:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// bne 0x82642d84
	if (!cr0.eq) goto loc_82642D84;
loc_82642EEC:
	// lbz r11,200(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 200);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82642f84
	if (cr6.eq) goto loc_82642F84;
	// clrlwi r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82642f6c
	if (cr6.eq) goto loc_82642F6C;
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(r19.s32, 1, xer);
	// addi r31,r29,40
	r31.s64 = r29.s64 + 40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,212(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// stb r9,36(r25)
	PPC_STORE_U8(r25.u32 + 36, ctx.r9.u8);
	// beq cr6,0x82642f24
	if (cr6.eq) goto loc_82642F24;
	// addi r31,r29,52
	r31.s64 = r29.s64 + 52;
loc_82642F24:
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
	// bne cr6,0x82642f4c
	if (!cr6.eq) goto loc_82642F4C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82642F4C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r25.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// b 0x82642f84
	goto loc_82642F84;
loc_82642F6C:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82642F84:
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// lwz r31,824(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 824);
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
	// lwzx r10,r16,r17
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + r17.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x82642ff0
	if (!cr6.lt) goto loc_82642FF0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13044
	ctx.r8.s64 = ctx.r9.s64 + 13044;
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
loc_82642FF0:
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r16,r17
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + r17.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82643040
	if (!cr6.lt) goto loc_82643040;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13028
	ctx.r8.s64 = ctx.r9.s64 + 13028;
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
loc_82643040:
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82643054
	if (!cr6.eq) goto loc_82643054;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
loc_82643054:
	// lwz r3,100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82c55258
	sub_82C55258(ctx, base);
	// lwzx r10,r16,r17
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + r17.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82643094
	if (!cr6.lt) goto loc_82643094;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13016
	ctx.r8.s64 = ctx.r9.s64 + 13016;
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
loc_82643094:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x826430c4
	if (!cr6.gt) goto loc_826430C4;
	// addi r28,r15,-4
	r28.s64 = r15.s64 + -4;
	// mr r31,r21
	r31.u64 = r21.u64;
loc_826430A4:
	// lwzu r30,4(r28)
	ea = 4 + r28.u32;
	r30.u64 = PPC_LOAD_U32(ea);
	r28.u32 = ea;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82658dc0
	sub_82658DC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826579e8
	sub_826579E8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x826430a4
	if (!cr0.eq) goto loc_826430A4;
loc_826430C4:
	// lwz r11,148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r11.u32);
	// bne 0x8264311c
	if (!cr0.eq) goto loc_8264311C;
	// lbz r11,156(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264311c
	if (!cr6.eq) goto loc_8264311C;
	// lwz r11,140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826430f8
	if (cr6.eq) goto loc_826430F8;
	// stw r27,140(r29)
	PPC_STORE_U32(r29.u32 + 140, r27.u32);
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_826430F8:
	// lwz r11,164(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264311c
	if (!cr6.eq) goto loc_8264311C;
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264311c
	if (cr6.eq) goto loc_8264311C;
	// stw r27,144(r29)
	PPC_STORE_U32(r29.u32 + 144, r27.u32);
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_8264311C:
	// lwzx r10,r16,r17
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + r17.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8264314c
	if (!cr6.lt) goto loc_8264314C;
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
loc_8264314C:
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
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826431b0
	if (!cr6.eq) goto loc_826431B0;
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
loc_826431B0:
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
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
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
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264321c
	if (!cr6.eq) goto loc_8264321C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,32
	ctx.r6.s64 = 32;
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
loc_8264321C:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
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
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82643288
	if (!cr6.eq) goto loc_82643288;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82643288:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-160(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
}

__attribute__((alias("__imp__sub_82643294"))) PPC_WEAK_FUNC(sub_82643294);
PPC_FUNC_IMPL(__imp__sub_82643294) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9434
	return;
}

__attribute__((alias("__imp__sub_82643298"))) PPC_WEAK_FUNC(sub_82643298);
PPC_FUNC_IMPL(__imp__sub_82643298) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// blt cr6,0x826436c0
	if (cr6.lt) goto loc_826436C0;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826432e8
	if (cr6.eq) goto loc_826432E8;
	// li r11,7
	r11.s64 = 7;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9458
	return;
loc_826432E8:
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,12
	r24.s64 = 12;
	// li r11,1
	r11.s64 = 1;
	// stw r11,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r11.u32);
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82643334
	if (!cr6.lt) goto loc_82643334;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,13132
	ctx.r7.s64 = ctx.r9.s64 + 13132;
	// addi r6,r8,13116
	ctx.r6.s64 = ctx.r8.s64 + 13116;
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
loc_82643334:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r27,0
	r27.s64 = 0;
	// lis r28,-32768
	r28.s64 = -2147483648;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// or r7,r30,r28
	ctx.r7.u64 = r30.u64 | r28.u64;
	// addi r9,r11,127
	ctx.r9.s64 = r11.s64 + 127;
	// add r26,r11,r31
	r26.u64 = r11.u64 + r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r9,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// beq cr6,0x826433ec
	if (cr6.eq) goto loc_826433EC;
loc_826433B0:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x826433e0
	if (cr6.eq) goto loc_826433E0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r11.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
loc_826433E0:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r9,r26
	cr6.compare<uint32_t>(ctx.r9.u32, r26.u32, xer);
	// bne cr6,0x826433b0
	if (!cr6.eq) goto loc_826433B0;
loc_826433EC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82643530
	if (cr6.eq) goto loc_82643530;
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82643424
	if (!cr6.lt) goto loc_82643424;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13100
	ctx.r8.s64 = ctx.r9.s64 + 13100;
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
loc_82643424:
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
	// lwz r30,824(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 824);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r30,r28
	ctx.r9.u64 = r30.u64 | r28.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r24,r25
	r11.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x826434ac
	if (!cr6.lt) goto loc_826434AC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13088
	ctx.r8.s64 = ctx.r9.s64 + 13088;
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
loc_826434AC:
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82c55310
	sub_82C55310(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r11
	r30.u64 = r11.u64;
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
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82643520
	if (!cr6.eq) goto loc_82643520;
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
loc_82643520:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r28.u32);
loc_82643530:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - r11.s64;
	// mr r30,r11
	r30.u64 = r11.u64;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r4,r11,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x8264358c
	if (!cr6.eq) goto loc_8264358C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_8264358C:
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826435c4
	if (!cr6.lt) goto loc_826435C4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13076
	ctx.r8.s64 = ctx.r9.s64 + 13076;
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
loc_826435C4:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// beq cr6,0x82643638
	if (cr6.eq) goto loc_82643638;
loc_826435CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82658e98
	sub_82658E98(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82657ac0
	sub_82657AC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8264db98
	sub_8264DB98(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82643604
	if (cr6.eq) goto loc_82643604;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// bl 0x82c54b30
	sub_82C54B30(ctx, base);
loc_82643604:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lhz r11,4(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82643624
	if (!cr6.eq) goto loc_82643624;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82643624:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x826435cc
	if (!cr6.eq) goto loc_826435CC;
loc_82643638:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82643668
	if (!cr6.lt) goto loc_82643668;
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
loc_82643668:
	// lwz r11,148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r11.u32);
	// bne 0x826436c0
	if (!cr0.eq) goto loc_826436C0;
	// lbz r11,156(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826436c0
	if (!cr6.eq) goto loc_826436C0;
	// lwz r11,140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264369c
	if (cr6.eq) goto loc_8264369C;
	// stw r27,140(r29)
	PPC_STORE_U32(r29.u32 + 140, r27.u32);
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_8264369C:
	// lwz r11,164(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826436c0
	if (!cr6.eq) goto loc_826436C0;
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826436c0
	if (cr6.eq) goto loc_826436C0;
	// stw r27,144(r29)
	PPC_STORE_U32(r29.u32 + 144, r27.u32);
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_826436C0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826436C4"))) PPC_WEAK_FUNC(sub_826436C4);
PPC_FUNC_IMPL(__imp__sub_826436C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826436C8"))) PPC_WEAK_FUNC(sub_826436C8);
PPC_FUNC_IMPL(__imp__sub_826436C8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82643714
	if (cr0.eq) goto loc_82643714;
	// li r11,15
	r11.s64 = 15;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e9454
	return;
loc_82643714:
	// li r25,0
	r25.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lis r24,-32768
	r24.s64 = -2147483648;
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// stw r11,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r11.u32);
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r24.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// or r30,r31,r24
	r30.u64 = r31.u64 | r24.u64;
	// addi r10,r11,127
	ctx.r10.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r30.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,5,0,26
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
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
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// ble cr6,0x82643884
	if (!cr6.gt) goto loc_82643884;
	// addi r30,r29,276
	r30.s64 = r29.s64 + 276;
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r27,r25
	r27.u64 = r25.u64;
	// mr r26,r31
	r26.u64 = r31.u64;
loc_826437B0:
	// lwzx r31,r27,r23
	r31.u64 = PPC_LOAD_U32(r27.u32 + r23.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826437d8
	if (!cr6.eq) goto loc_826437D8;
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
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
loc_826437D8:
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r11,r27,r10
	PPC_STORE_U32(r27.u32 + ctx.r10.u32, r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// bl 0x82649f08
	sub_82649F08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r5,r7,2
	ctx.r5.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r6,r5
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, xer);
	// bne cr6,0x82643844
	if (!cr6.eq) goto loc_82643844;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82643844:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r31.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// bl 0x82659120
	sub_82659120(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264a190
	sub_8264A190(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
	// bne 0x826437b0
	if (!cr0.eq) goto loc_826437B0;
loc_82643884:
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r24.u32);
	// lwz r31,824(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 824);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r31,r24
	ctx.r9.u64 = r31.u64 | r24.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lwz r3,88(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x826438f4
	if (!cr6.eq) goto loc_826438F4;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_826438F4:
	// lwz r3,100(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 100);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82c55258
	sub_82C55258(ctx, base);
	// lwz r11,148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r29)
	PPC_STORE_U32(r29.u32 + 148, r11.u32);
	// bne 0x8264395c
	if (!cr0.eq) goto loc_8264395C;
	// lbz r11,156(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8264395c
	if (!cr6.eq) goto loc_8264395C;
	// lwz r11,140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82643938
	if (cr6.eq) goto loc_82643938;
	// stw r25,140(r29)
	PPC_STORE_U32(r29.u32 + 140, r25.u32);
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_82643938:
	// lwz r11,164(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8264395c
	if (!cr6.eq) goto loc_8264395C;
	// lwz r11,144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264395c
	if (cr6.eq) goto loc_8264395C;
	// stw r25,144(r29)
	PPC_STORE_U32(r29.u32 + 144, r25.u32);
	// lwz r3,136(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_8264395C:
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
	// bne cr6,0x826439c0
	if (!cr6.eq) goto loc_826439C0;
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
loc_826439C0:
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
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r24.u32);
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
	// bne cr6,0x82643a2c
	if (!cr6.eq) goto loc_82643A2C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,32
	ctx.r6.s64 = 32;
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
loc_82643A2C:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r11
	r31.u64 = r11.u64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// subfic r7,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82643a98
	if (!cr6.eq) goto loc_82643A98;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82643A98:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82643A9C"))) PPC_WEAK_FUNC(sub_82643A9C);
PPC_FUNC_IMPL(__imp__sub_82643A9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82643AA0"))) PPC_WEAK_FUNC(sub_82643AA0);
PPC_FUNC_IMPL(__imp__sub_82643AA0) {
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
	// lwz r10,152(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82643aec
	if (cr0.eq) goto loc_82643AEC;
	// li r11,16
	r11.s64 = 16;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9458
	return;
loc_82643AEC:
	// li r25,0
	r25.s64 = 0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r26,r27
	ctx.r9.u64 = r26.u64 | r27.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// ble cr6,0x82643b84
	if (!cr6.gt) goto loc_82643B84;
	// addi r28,r24,-4
	r28.s64 = r24.s64 + -4;
	// mr r29,r26
	r29.u64 = r26.u64;
loc_82643B44:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzu r30,4(r28)
	ea = 4 + r28.u32;
	r30.u64 = PPC_LOAD_U32(ea);
	r28.u32 = ea;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r11.u32);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x826591f8
	sub_826591F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264a128
	sub_8264A128(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82643b44
	if (!cr0.eq) goto loc_82643B44;
loc_82643B84:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82643c64
	if (cr6.eq) goto loc_82643C64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// lwz r30,824(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 824);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r30,r27
	ctx.r9.u64 = r30.u64 | r27.u64;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82c55310
	sub_82C55310(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r30,r11
	r30.u64 = r11.u64;
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
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
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
	// bne cr6,0x82643c5c
	if (!cr6.eq) goto loc_82643C5C;
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
loc_82643C5C:
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
loc_82643C64:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x82643d08
	if (!cr6.gt) goto loc_82643D08;
	// mr r29,r24
	r29.u64 = r24.u64;
loc_82643C70:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r11,r25
	r11.u64 = r25.u64;
	// stw r25,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r25.u32);
	// lwz r9,280(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82643ca8
	if (!cr6.gt) goto loc_82643CA8;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 276);
loc_82643C8C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x82643cac
	if (cr6.eq) goto loc_82643CAC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82643c8c
	if (cr6.lt) goto loc_82643C8C;
loc_82643CA8:
	// li r11,-1
	r11.s64 = -1;
loc_82643CAC:
	// lwz r10,280(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,280(r31)
	PPC_STORE_U32(r31.u32 + 280, ctx.r10.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82643cd4
	if (cr6.eq) goto loc_82643CD4;
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82643CD4:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82643cf4
	if (!cr6.eq) goto loc_82643CF4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82643CF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82643c70
	if (!cr0.eq) goto loc_82643C70;
loc_82643D08:
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x82643d60
	if (!cr0.eq) goto loc_82643D60;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82643d60
	if (!cr6.eq) goto loc_82643D60;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82643d3c
	if (cr6.eq) goto loc_82643D3C;
	// stw r25,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r25.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_82643D3C:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82643d60
	if (!cr6.eq) goto loc_82643D60;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82643d60
	if (cr6.eq) goto loc_82643D60;
	// stw r25,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r25.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_82643D60:
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
	// bne cr6,0x82643dc4
	if (!cr6.eq) goto loc_82643DC4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_82643DC4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82643DC8"))) PPC_WEAK_FUNC(sub_82643DC8);
PPC_FUNC_IMPL(__imp__sub_82643DC8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82643DCC"))) PPC_WEAK_FUNC(sub_82643DCC);
PPC_FUNC_IMPL(__imp__sub_82643DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82643DD0"))) PPC_WEAK_FUNC(sub_82643DD0);
PPC_FUNC_IMPL(__imp__sub_82643DD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f23{};
	PPCRegister f24{};
	PPCRegister f25{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCVRegister v31{};
	PPCVRegister v126{};
	PPCVRegister v127{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eaae4
	// li r12,-256
	r12.s64 = -256;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-240
	r12.s64 = -240;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r29,0
	r29.s64 = 0;
	// addi r10,r11,12852
	ctx.r10.s64 = r11.s64 + 12852;
	// li r20,1
	r20.s64 = 1;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// sth r20,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r20.u16);
	// li r8,-47
	ctx.r8.s64 = -47;
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r29.u32);
	// addi r10,r3,40
	ctx.r10.s64 = ctx.r3.s64 + 40;
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r29.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r29.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r29,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r29.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// addi r26,r3,80
	r26.s64 = ctx.r3.s64 + 80;
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r29.u32);
	// addi r9,r3,168
	ctx.r9.s64 = ctx.r3.s64 + 168;
	// stw r29,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r29.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r29,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r29.u32);
	// stw r8,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r8.u32);
	// sth r29,172(r3)
	PPC_STORE_U16(ctx.r3.u32 + 172, r29.u16);
	// stw r29,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, r29.u32);
	// stw r29,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, r29.u32);
	// stw r11,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, r11.u32);
	// stw r29,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, r29.u32);
	// stw r29,292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 292, r29.u32);
	// stw r11,296(r3)
	PPC_STORE_U32(ctx.r3.u32 + 296, r11.u32);
	// stw r29,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, r29.u32);
	// stw r29,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, r29.u32);
	// stw r11,308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 308, r11.u32);
	// stw r29,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, r29.u32);
	// stw r29,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, r29.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, r11.u32);
	// stw r29,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, r29.u32);
	// stw r29,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, r29.u32);
	// stw r11,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, r11.u32);
	// stw r29,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, r29.u32);
	// stw r29,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, r29.u32);
	// stw r11,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, r11.u32);
	// stw r29,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, r29.u32);
	// stw r29,352(r3)
	PPC_STORE_U32(ctx.r3.u32 + 352, r29.u32);
	// stw r11,356(r3)
	PPC_STORE_U32(ctx.r3.u32 + 356, r11.u32);
	// stw r29,360(r3)
	PPC_STORE_U32(ctx.r3.u32 + 360, r29.u32);
	// stw r29,364(r3)
	PPC_STORE_U32(ctx.r3.u32 + 364, r29.u32);
	// stw r11,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, r11.u32);
	// stw r29,372(r3)
	PPC_STORE_U32(ctx.r3.u32 + 372, r29.u32);
	// stw r29,376(r3)
	PPC_STORE_U32(ctx.r3.u32 + 376, r29.u32);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, r11.u32);
	// stw r29,384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 384, r29.u32);
	// stw r29,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, r29.u32);
	// stw r11,392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 392, r11.u32);
	// stw r29,396(r3)
	PPC_STORE_U32(ctx.r3.u32 + 396, r29.u32);
	// stw r29,400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 400, r29.u32);
	// stw r11,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, r11.u32);
	// stw r29,408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 408, r29.u32);
	// stw r29,412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 412, r29.u32);
	// stw r11,416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 416, r11.u32);
	// stw r29,420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 420, r29.u32);
	// stw r29,424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 424, r29.u32);
	// stw r11,428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 428, r11.u32);
	// stw r29,432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 432, r29.u32);
	// stw r29,436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 436, r29.u32);
	// stw r11,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, r11.u32);
	// stw r10,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, ctx.r10.u32);
	// stw r10,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, ctx.r10.u32);
	// stw r29,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, r29.u32);
	// stb r20,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, r20.u8);
	// stb r29,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, r29.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,40
	ctx.r4.s64 = 40;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82643f4c
	if (cr6.eq) goto loc_82643F4C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8265ad28
	sub_8265AD28(ctx, base);
	// b 0x82643f50
	goto loc_82643F50;
loc_82643F4C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82643F50:
	// addi r23,r30,48
	r23.s64 = r30.s64 + 48;
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// stw r29,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r29.u32);
	// addi r3,r31,784
	ctx.r3.s64 = r31.s64 + 784;
	// stw r29,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r29.u32);
	// addi r22,r30,64
	r22.s64 = r30.s64 + 64;
	// stw r29,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r29.u32);
	// addi r4,r31,800
	ctx.r4.s64 = r31.s64 + 800;
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// lis r10,-31935
	ctx.r10.s64 = -2092892160;
	// stw r29,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r29.u32);
	// addi r16,r31,184
	r16.s64 = r31.s64 + 184;
	// stb r29,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r29.u8);
	// addi r14,r31,196
	r14.s64 = r31.s64 + 196;
	// stb r20,157(r31)
	PPC_STORE_U8(r31.u32 + 157, r20.u8);
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// stw r29,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r29.u32);
	// addi r21,r31,88
	r21.s64 = r31.s64 + 88;
	// stw r29,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r29.u32);
	// stw r29,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r29.u32);
	// stw r20,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r20.u32);
	// stw r29,452(r31)
	PPC_STORE_U32(r31.u32 + 452, r29.u32);
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r22
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r22.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// stw r9,816(r31)
	PPC_STORE_U32(r31.u32 + 816, ctx.r9.u32);
	// lwz r5,112(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// lwz r8,30816(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30816);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// srawi r6,r7,1
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// stw r7,824(r31)
	PPC_STORE_U32(r31.u32 + 824, ctx.r7.u32);
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// ori r28,r5,4464
	r28.u64 = ctx.r5.u64 | 4464;
	// stw r4,828(r31)
	PPC_STORE_U32(r31.u32 + 828, ctx.r4.u32);
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// stw r3,820(r31)
	PPC_STORE_U32(r31.u32 + 820, ctx.r3.u32);
	// beq cr6,0x82644090
	if (cr6.eq) goto loc_82644090;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82bfa7e8
	sub_82BFA7E8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,13240
	ctx.r4.s64 = r11.s64 + 13240;
	// bl 0x82bf9ed0
	sub_82BF9ED0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82bfa020
	sub_82BFA020(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r10,13208
	ctx.r4.s64 = ctx.r10.s64 + 13208;
	// bl 0x82bf9ed0
	sub_82BF9ED0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bfa088
	sub_82BFA088(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r4,r9,13200
	ctx.r4.s64 = ctx.r9.s64 + 13200;
	// bl 0x82bf9ed0
	sub_82BF9ED0(ctx, base);
	// lis r6,-31931
	ctx.r6.s64 = -2092630016;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r5,21449
	ctx.r5.s64 = 1405681664;
	// addi r7,r4,13176
	ctx.r7.s64 = ctx.r4.s64 + 13176;
	// li r8,3023
	ctx.r8.s64 = 3023;
	// lwz r3,-25248(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + -25248);
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// ori r5,r5,19266
	ctx.r5.u64 = ctx.r5.u64 | 19266;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82644088
	if (cr6.eq) goto loc_82644088;
	// twi 31,r0,22
	if (r0.s32 < 22 || r0.s32 > 22 || r0.u32 == 22 || r0.u32 < 22 || r0.u32 > 22) __builtin_debugtrap();
loc_82644088:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82bf9cf0
	sub_82BF9CF0(ctx, base);
loc_82644090:
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// addi r17,r31,16
	r17.s64 = r31.s64 + 16;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r17
	_mm_store_si128((__m128i*)(base + ((r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f2,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,140(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82c5aa50
	sub_82C5AA50(ctx, base);
	// lfs f0,140(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 140);
	f0.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 204, temp.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lfs f13,140(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 208, temp.u32);
	// addi r11,r31,480
	r11.s64 = r31.s64 + 480;
	// lbz r7,148(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 148);
	// lfs f31,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f31.f64 = double(temp.f32);
	// stb r7,212(r31)
	PPC_STORE_U8(r31.u32 + 212, ctx.r7.u8);
	// lfs f0,3792(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3792);
	f0.f64 = double(temp.f32);
	// lbz r6,163(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 163);
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// addi r9,r11,64
	ctx.r9.s64 = r11.s64 + 64;
	// addi r18,r30,148
	r18.s64 = r30.s64 + 148;
	// addi r7,r30,164
	ctx.r7.s64 = r30.s64 + 164;
	// addi r8,r11,288
	ctx.r8.s64 = r11.s64 + 288;
	// stb r6,214(r31)
	PPC_STORE_U8(r31.u32 + 214, ctx.r6.u8);
	// lfs f12,168(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,220(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 220, temp.u32);
	// lwz r5,172(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// stw r5,224(r31)
	PPC_STORE_U32(r31.u32 + 224, ctx.r5.u32);
	// lbz r4,176(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 176);
	// stb r4,228(r31)
	PPC_STORE_U8(r31.u32 + 228, ctx.r4.u8);
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// stw r3,232(r31)
	PPC_STORE_U32(r31.u32 + 232, ctx.r3.u32);
	// lwz r6,184(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// stw r6,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r6.u32);
	// lfs f11,164(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,216(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 216, temp.u32);
	// stfs f31,480(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 480, temp.u32);
	// lfs f10,120(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f8,124(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f31,f8
	ctx.f7.f64 = double(float(f31.f64 / ctx.f8.f64));
	// fmuls f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// stfs f10,484(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 484, temp.u32);
	// fdivs f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f10.f64));
	// stfs f5,560(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 560, temp.u32);
	// fdivs f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// stfs f9,492(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 492, temp.u32);
	// fmuls f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f8,488(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 488, temp.u32);
	// stfs f6,564(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 564, temp.u32);
	// stfs f4,568(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 568, temp.u32);
	// stfs f3,572(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 572, temp.u32);
	// stfs f6,528(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 528, temp.u32);
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f2,560(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 560);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,544(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 544, temp.u32);
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// stvx128 v10,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,576(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 576, temp.u32);
	// lwz r5,128(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// stw r5,756(r31)
	PPC_STORE_U32(r31.u32 + 756, ctx.r5.u32);
	// lwz r4,128(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(f31.f64 / ctx.f12.f64));
	// stfs f11,768(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 768, temp.u32);
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// stw r10,760(r31)
	PPC_STORE_U32(r31.u32 + 760, ctx.r10.u32);
	// lwz r9,132(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)v127.u32, _mm_set1_epi32(int(0x0)));
	// addi r15,r10,7632
	r15.s64 = ctx.r10.s64 + 7632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// vor128 v9,v127,v127
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v127.u8));
	// lfs f30,21036(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21036);
	f30.f64 = double(temp.f32);
	// fdivs f7,f31,f8
	ctx.f7.f64 = double(float(f31.f64 / ctx.f8.f64));
	// stfs f7,764(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 764, temp.u32);
	// lbz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 136);
	// stb r10,772(r31)
	PPC_STORE_U8(r31.u32 + 772, ctx.r10.u8);
	// lbz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 160);
	// stb r9,773(r31)
	PPC_STORE_U8(r31.u32 + 773, ctx.r9.u8);
	// lbz r6,161(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 161);
	// stb r6,774(r31)
	PPC_STORE_U8(r31.u32 + 774, ctx.r6.u8);
	// lbz r5,162(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 162);
	// stfs f30,748(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 748, temp.u32);
	// stb r5,775(r31)
	PPC_STORE_U8(r31.u32 + 775, ctx.r5.u8);
	// stfs f30,752(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 752, temp.u32);
	// lvx128 v8,r0,r28
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vrsqrtefp v0,v6
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v6.f32))));
	// lvx128 v13,r0,r15
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r15.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v6,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v7,v127,v6
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v8,v10,v11,v13
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v9,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vmulfp128 v5,v6,v13
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v5,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lfs f25,13172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13172);
	f25.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x8264427c
	if (!cr6.eq) goto loc_8264427C;
	// fmr f11,f25
	ctx.f11.f64 = f25.f64;
loc_8264427C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfs f0,-13388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13388);
	f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,2992(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2992);
	ctx.f1.f64 = double(temp.f32);
	// lis r28,-32254
	r28.s64 = -2113798144;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f2,15536(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 15536);
	ctx.f2.f64 = double(temp.f32);
	// lfs f27,13168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 13168);
	f27.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f12,13164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13164);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f28,2816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2816);
	f28.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f3,-15528(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -15528);
	ctx.f3.f64 = double(temp.f32);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfs f5,-512(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -512);
	ctx.f5.f64 = double(temp.f32);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f6,10696(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 10696);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,4932(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4932);
	ctx.f7.f64 = double(temp.f32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lfs f4,10668(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10668);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lfs f8,13160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13160);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f26,f11,f0
	f26.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfs f9,4896(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4896);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,7832(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7832);
	ctx.f10.f64 = double(temp.f32);
	// lfs f29,20940(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20940);
	f29.f64 = double(temp.f32);
loc_826442FC:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bgt cr6,0x8264434c
	if (cr6.gt) goto loc_8264434C;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8264431c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8264431C;
	// bdzf 4*cr6+eq,0x82644328
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82644328;
	// bdzf 4*cr6+eq,0x82644334
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82644334;
	// bne cr6,0x82644340
	if (!cr6.eq) goto loc_82644340;
loc_8264431C:
	// fmr f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64;
	// fmr f0,f30
	f0.f64 = f30.f64;
	// b 0x82644354
	goto loc_82644354;
loc_82644328:
	// fmr f13,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f29.f64;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
	// b 0x82644354
	goto loc_82644354;
loc_82644334:
	// fmr f13,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f8.f64;
	// fmr f0,f7
	f0.f64 = ctx.f7.f64;
	// b 0x82644354
	goto loc_82644354;
loc_82644340:
	// fmr f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f6.f64;
	// fmr f0,f5
	f0.f64 = ctx.f5.f64;
	// b 0x82644354
	goto loc_82644354;
loc_8264434C:
	// fmr f13,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f4.f64;
	// fmr f0,f3
	f0.f64 = ctx.f3.f64;
loc_82644354:
	// fmuls f13,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// lfs f24,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f24.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// fdivs f23,f31,f13
	f23.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fmuls f13,f13,f26
	ctx.f13.f64 = double(float(ctx.f13.f64 * f26.f64));
	// stfs f23,100(r10)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// fmuls f23,f23,f0
	f23.f64 = double(float(f23.f64 * f0.f64));
	// fdivs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfs f13,104(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 104, temp.u32);
	// fmuls f13,f23,f11
	ctx.f13.f64 = double(float(f23.f64 * ctx.f11.f64));
	// fmuls f13,f13,f24
	ctx.f13.f64 = double(float(ctx.f13.f64 * f24.f64));
	// fnmsubs f13,f13,f12,f31
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - f31.f64)));
	// stfs f13,108(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 108, temp.u32);
	// ble cr6,0x826443a8
	if (!cr6.gt) goto loc_826443A8;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(f0.f64 * ctx.f12.f64));
	// stfs f13,112(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// b 0x826443ac
	goto loc_826443AC;
loc_826443A8:
	// stfs f27,112(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 112, temp.u32);
loc_826443AC:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f13,f0,f28
	ctx.f13.f64 = double(float(f0.f64 * f28.f64));
	// fmuls f24,f0,f1
	f24.f64 = double(float(f0.f64 * ctx.f1.f64));
	// cmpwi cr6,r9,6
	cr6.compare<int32_t>(ctx.r9.s32, 6, xer);
	// fmuls f23,f0,f2
	f23.f64 = double(float(f0.f64 * ctx.f2.f64));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// stfs f0,116(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f0,f24,f24
	f0.f64 = double(float(f24.f64 * f24.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r5,r6,16
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 16;
	// fmuls f13,f23,f23
	ctx.f13.f64 = double(float(f23.f64 * f23.f64));
	// srawi r6,r4,16
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 16;
	// stfs f13,120(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// sth r5,124(r10)
	PPC_STORE_U16(ctx.r10.u32 + 124, ctx.r5.u16);
	// sth r6,126(r10)
	PPC_STORE_U16(ctx.r10.u32 + 126, ctx.r6.u16);
	// blt cr6,0x826442fc
	if (cr6.lt) goto loc_826442FC;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82644410
	if (cr6.eq) goto loc_82644410;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_82644410:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82644420
	if (cr6.eq) goto loc_82644420;
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82644420:
	// lwz r11,108(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 108);
	// addi r19,r31,200
	r19.s64 = r31.s64 + 200;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lbz r10,206(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 206);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,200(r31)
	PPC_STORE_U8(r31.u32 + 200, ctx.r10.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lbz r11,204(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 204);
	// stb r11,213(r31)
	PPC_STORE_U8(r31.u32 + 213, r11.u8);
	// bne cr6,0x82644458
	if (!cr6.eq) goto loc_82644458;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82644458
	if (cr6.eq) goto loc_82644458;
	// stb r29,213(r31)
	PPC_STORE_U8(r31.u32 + 213, r29.u8);
loc_82644458:
	// lbz r11,212(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 212);
	// stb r11,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r11.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,268
	ctx.r4.s64 = 268;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264448c
	if (cr6.eq) goto loc_8264448C;
	// bl 0x82c55150
	sub_82C55150(ctx, base);
	// b 0x82644490
	goto loc_82644490;
loc_8264448C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82644490:
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
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
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// sth r20,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r20.u16);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r28,12
	r28.s64 = 12;
	// addi r27,r9,11900
	r27.s64 = ctx.r9.s64 + 11900;
	// addi r6,r8,12020
	ctx.r6.s64 = ctx.r8.s64 + 12020;
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// addi r5,r7,12004
	ctx.r5.s64 = ctx.r7.s64 + 12004;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
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
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8266ffc0
	sub_8266FFC0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// sth r20,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r20.u16);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r4,r6,12036
	ctx.r4.s64 = ctx.r6.s64 + 12036;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r27.u32);
	// addi r11,r5,12052
	r11.s64 = ctx.r5.s64 + 12052;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x8264456c
	if (!cr6.eq) goto loc_8264456C;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8264456C:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, r11.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82644588
	if (!cr6.eq) goto loc_82644588;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82644588:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, r11.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x826445a4
	if (!cr6.eq) goto loc_826445A4;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_826445A4:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, r11.u32);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x826445c0
	if (!cr6.eq) goto loc_826445C0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_826445C0:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, r11.u32);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x826445dc
	if (!cr6.eq) goto loc_826445DC;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_826445DC:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r11.u32);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x826445f8
	if (!cr6.eq) goto loc_826445F8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_826445F8:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, r11.u32);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82644614
	if (!cr6.eq) goto loc_82644614;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82644614:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, r11.u32);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x82644630
	if (!cr6.eq) goto loc_82644630;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82644630:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, r11.u32);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x8264464c
	if (!cr6.eq) goto loc_8264464C;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8264464C:
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, r11.u32);
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
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82662ce8
	sub_82662CE8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,7760
	ctx.r4.s64 = 7760;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,7760
	r11.s64 = 7760;
	// lis r10,-32058
	ctx.r10.s64 = -2100953088;
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r11.u16);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r10,-22000
	ctx.r4.s64 = ctx.r10.s64 + -22000;
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
	// bl 0x82c57e38
	sub_82C57E38(ctx, base);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82644744
	if (!cr6.eq) goto loc_82644744;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82c56308
	sub_82C56308(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stw r20,32(r28)
	PPC_STORE_U32(r28.u32 + 32, r20.u32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// addi r3,r8,12144
	ctx.r3.s64 = ctx.r8.s64 + 12144;
	// addi r11,r7,12132
	r11.s64 = ctx.r7.s64 + 12132;
	// addi r10,r6,12100
	ctx.r10.s64 = ctx.r6.s64 + 12100;
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// addi r9,r5,12120
	ctx.r9.s64 = ctx.r5.s64 + 12120;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// addi r8,r4,12088
	ctx.r8.s64 = ctx.r4.s64 + 12088;
	// stw r10,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r10.u32);
	// stw r9,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r9.u32);
	// stw r8,20(r28)
	PPC_STORE_U32(r28.u32 + 20, ctx.r8.u32);
	// stw r28,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r28.u32);
	// b 0x8264474c
	goto loc_8264474C;
loc_82644744:
	// stw r3,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8264474C:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82644794
	if (!cr6.eq) goto loc_82644794;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// sth r20,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r20.u16);
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r9,11960
	ctx.r7.s64 = ctx.r9.s64 + 11960;
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// b 0x8264479c
	goto loc_8264479C;
loc_82644794:
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_8264479C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,128
	ctx.r4.s64 = 128;
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
	// beq cr6,0x826447cc
	if (cr6.eq) goto loc_826447CC;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r29,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r29.u32);
	// b 0x826447d0
	goto loc_826447D0;
loc_826447CC:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_826447D0:
	// stw r28,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r28.u32);
	// addi r25,r31,120
	r25.s64 = r31.s64 + 120;
	// stb r29,4(r28)
	PPC_STORE_U8(r28.u32 + 4, r29.u8);
	// addi r24,r30,116
	r24.s64 = r30.s64 + 116;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 8, temp.u32);
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stw r10,12(r28)
	PPC_STORE_U32(r28.u32 + 12, ctx.r10.u32);
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// stw r9,16(r28)
	PPC_STORE_U32(r28.u32 + 16, ctx.r9.u32);
	// lbz r8,116(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 116);
	// stb r8,832(r31)
	PPC_STORE_U8(r31.u32 + 832, ctx.r8.u8);
	// lbz r7,117(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 117);
	// stb r7,109(r28)
	PPC_STORE_U8(r28.u32 + 109, ctx.r7.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82644848
	if (cr6.eq) goto loc_82644848;
	// li r10,20
	ctx.r10.s64 = 20;
	// stfs f29,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x8264484c
	goto loc_8264484C;
loc_82644848:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8264484C:
	// stw r11,112(r28)
	PPC_STORE_U32(r28.u32 + 112, r11.u32);
	// lfs f0,152(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 152);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r11,156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r26,112(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 112);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vxor128 v11,v126,v126
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// addi r7,r9,13156
	ctx.r7.s64 = ctx.r9.s64 + 13156;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// addi r6,r28,64
	ctx.r6.s64 = r28.s64 + 64;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// addi r9,r5,8976
	ctx.r9.s64 = ctx.r5.s64 + 8976;
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// addi r4,r28,32
	ctx.r4.s64 = r28.s64 + 32;
	// addi r3,r3,13152
	ctx.r3.s64 = ctx.r3.s64 + 13152;
	// addi r5,r28,48
	ctx.r5.s64 = r28.s64 + 48;
	// lbz r26,149(r30)
	r26.u64 = PPC_LOAD_U8(r30.u32 + 149);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r29,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r29.u32);
	// addi r11,r11,7264
	r11.s64 = r11.s64 + 7264;
	// stb r26,108(r28)
	PPC_STORE_U8(r28.u32 + 108, r26.u8);
	// stw r11,96(r28)
	PPC_STORE_U32(r28.u32 + 96, r11.u32);
	// stfs f30,84(r28)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r28.u32 + 84, temp.u32);
	// stfs f30,80(r28)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r28.u32 + 80, temp.u32);
	// stfs f30,92(r28)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r28.u32 + 92, temp.u32);
	// stfs f30,88(r28)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r28.u32 + 88, temp.u32);
	// lvx128 v10,r0,r22
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r23
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// vsubfp v13,v10,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,168(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// lvlx v8,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// fdivs f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fdivs f9,f31,f12
	ctx.f9.f64 = double(float(f31.f64 / ctx.f12.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f8,f31,f10
	ctx.f8.f64 = double(float(f31.f64 / ctx.f10.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v5,v6,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v5,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v2,v5,v5
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r23
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((r23.u32) & ~0xF), VectorMaskL));
	// vxor v0,v4,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v2,v11,1,0
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 228), 1));
	// lvlx v3,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v3,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xFF));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v1,v11,1,0
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 228), 1));
	// stvx128 v1,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r5
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v31,v11,1,0
	_mm_store_ps(v31.f32, _mm_blend_ps(_mm_load_ps(v31.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 228), 1));
	// stvx128 v31,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x8263e288
	sub_8263E288(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r28,3
	r28.s64 = 3;
	// lbz r11,-11468(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + -11468);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82644984
	if (cr6.eq) goto loc_82644984;
	// stb r28,205(r30)
	PPC_STORE_U8(r30.u32 + 205, r28.u8);
loc_82644984:
	// stw r29,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r29.u32);
	// addi r23,r30,205
	r23.s64 = r30.s64 + 205;
	// lbz r11,205(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 205);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82644a8c
	if (cr6.eq) goto loc_82644A8C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82644a5c
	if (cr6.eq) goto loc_82644A5C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82644abc
	if (!cr6.eq) goto loc_82644ABC;
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826449e0
	if (cr6.eq) goto loc_826449E0;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x8262a2b8
	sub_8262A2B8(ctx, base);
	// b 0x826449e4
	goto loc_826449E4;
loc_826449E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_826449E4:
	// stw r3,0(r16)
	PPC_STORE_U32(r16.u32 + 0, ctx.r3.u32);
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82644a18
	if (cr6.eq) goto loc_82644A18;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x8262a2b8
	sub_8262A2B8(ctx, base);
	// b 0x82644a1c
	goto loc_82644A1C;
loc_82644A18:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82644A1C:
	// stw r3,0(r14)
	PPC_STORE_U32(r14.u32 + 0, ctx.r3.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,384
	ctx.r4.s64 = 384;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,384
	ctx.r9.s64 = 384;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8265ff60
	sub_8265FF60(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lwz r8,208(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// stw r8,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r8.u32);
	// b 0x82644abc
	goto loc_82644ABC;
loc_82644A5C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,80
	ctx.r9.s64 = 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8266c098
	sub_8266C098(ctx, base);
	// b 0x82644ab8
	goto loc_82644AB8;
loc_82644A8C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,44
	ctx.r9.s64 = 44;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8265c2d0
	sub_8265C2D0(ctx, base);
loc_82644AB8:
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_82644ABC:
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82644aec
	if (cr6.eq) goto loc_82644AEC;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x8262a2b8
	sub_8262A2B8(ctx, base);
	// b 0x82644af0
	goto loc_82644AF0;
loc_82644AEC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82644AF0:
	// stw r3,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r3.u32);
	// vor128 v9,v127,v127
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v127.u8));
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// lfs f0,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 216);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lvx128 v13,r0,r15
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r15.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r17
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r17.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vrsqrtefp v0,v6
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v6.f32))));
	// vmulfp128 v10,v6,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp128 v7,v127,v6
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(v127.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v8,v10,v11,v13
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v9,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vmulfp128 v5,v6,v13
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v5,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x82644b58
	if (!cr6.eq) goto loc_82644B58;
	// fmr f0,f25
	f0.f64 = f25.f64;
loc_82644B58:
	// lfs f13,188(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stfs f13,244(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 244, temp.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// rlwinm r6,r20,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r26,5
	r26.s64 = 5;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,192(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 192);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,248(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 248, temp.u32);
	// lfs f11,196(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,252(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 252, temp.u32);
	// lfs f10,200(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,256(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 256, temp.u32);
	// lfs f3,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lbz r22,0(r18)
	r22.u64 = PPC_LOAD_U8(r18.u32 + 0);
	// lfs f9,192(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 192);
	ctx.f9.f64 = double(temp.f32);
	// lbz r11,0(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// lfs f7,188(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 188);
	ctx.f7.f64 = double(temp.f32);
	// lbz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// lfs f6,200(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 200);
	ctx.f6.f64 = double(temp.f32);
	// extsb r24,r11
	r24.s64 = r11.s8;
	// extsb r11,r7
	r11.s64 = ctx.r7.s8;
	// lfs f8,196(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 196);
	ctx.f8.f64 = double(temp.f32);
	// srawi r7,r24,31
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r24.s32 >> 31;
	// lfs f5,96(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// subfc r10,r10,r24
	xer.ca = r24.u32 >= ctx.r10.u32;
	ctx.r10.s64 = r24.s64 - ctx.r10.s64;
	// lfs f4,104(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// addi r24,r11,-2
	r24.s64 = r11.s64 + -2;
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// adde r10,r8,r7
	temp.u8 = (ctx.r8.u32 + ctx.r7.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// srawi r8,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = r11.s32 >> 31;
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stb r10,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r10.u8);
	// subfc r7,r20,r11
	xer.ca = r11.u32 >= r20.u32;
	ctx.r7.s64 = r11.s64 - r20.s64;
	// cntlzw r10,r24
	ctx.r10.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// adde r11,r6,r8
	temp.u8 = (ctx.r6.u32 + ctx.r8.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	r11.u64 = ctx.r6.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// sth r20,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r20.u16);
	// sth r28,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, r28.u16);
	// stb r22,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, r22.u8);
	// sth r5,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r5.u16);
	// sth r26,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, r26.u16);
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, r11.u8);
	// stb r9,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, ctx.r9.u8);
	// bl 0x82c57308
	sub_82C57308(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r8,r11,7264
	ctx.r8.s64 = r11.s64 + 7264;
	// stw r8,96(r7)
	PPC_STORE_U32(ctx.r7.u32 + 96, ctx.r8.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,108
	r28.s64 = 108;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// bl 0x82665648
	sub_82665648(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// sth r4,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r4.u16);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lbz r3,38(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 38);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stb r10,38(r11)
	PPC_STORE_U8(r11.u32 + 38, ctx.r10.u8);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lbz r9,38(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 38);
	// clrlwi r8,r9,26
	ctx.r8.u64 = ctx.r9.u32 & 0x3F;
	// stb r8,38(r11)
	PPC_STORE_U8(r11.u32 + 38, ctx.r8.u8);
	// lbz r7,0(r19)
	ctx.r7.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82644d24
	if (!cr6.eq) goto loc_82644D24;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,108
	ctx.r4.s64 = 108;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// sth r28,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, r28.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82665648
	sub_82665648(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r27,r31,40
	r27.s64 = r31.s64 + 40;
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x82644d04
	if (!cr6.eq) goto loc_82644D04;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82644D04:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r28.u32);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r9.u32);
	// sth r29,32(r28)
	PPC_STORE_U16(r28.u32 + 32, r29.u16);
loc_82644D24:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8266a7c8
	sub_8266A7C8(ctx, base);
	// stfs f30,336(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stb r26,372(r1)
	PPC_STORE_U8(ctx.r1.u32 + 372, r26.u8);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,544
	ctx.r4.s64 = 544;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,544
	ctx.r9.s64 = 544;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x8264ba70
	sub_8264BA70(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e510
	sub_8263E510(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// stfs f30,464(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 464, temp.u32);
	// addi r11,r31,464
	r11.s64 = r31.s64 + 464;
	// lfs f0,27400(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 27400);
	f0.f64 = double(temp.f32);
	// lfs f13,13148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,472(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 472, temp.u32);
	// stfs f13,476(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 476, temp.u32);
	// stfs f0,468(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 468, temp.u32);
	// lwz r6,0(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r11,104(r6)
	PPC_STORE_U32(ctx.r6.u32 + 104, r11.u32);
	// lbz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// beq cr6,0x82644df4
	if (cr6.eq) goto loc_82644DF4;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,68
	ctx.r4.s64 = 68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,68
	ctx.r9.s64 = 68;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// lbz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 40);
	// lbz r6,41(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 41);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// bl 0x8266a1e8
	sub_8266A1E8(ctx, base);
	// stw r3,444(r31)
	PPC_STORE_U32(r31.u32 + 444, ctx.r3.u32);
	// b 0x82644df8
	goto loc_82644DF8;
loc_82644DF4:
	// stw r29,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r29.u32);
loc_82644DF8:
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
	// li r9,16
	ctx.r9.s64 = 16;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82669bb8
	sub_82669BB8(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r29.u32);
	// lbz r6,220(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 220);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82644e50
	if (cr6.eq) goto loc_82644E50;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826698c0
	sub_826698C0(ctx, base);
loc_82644E50:
	// lbz r11,80(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82644e9c
	if (cr6.eq) goto loc_82644E9C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826687d8
	sub_826687D8(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lbz r8,83(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 83);
	// stb r8,96(r31)
	PPC_STORE_U8(r31.u32 + 96, ctx.r8.u8);
	// b 0x82644ef4
	goto loc_82644EF4;
loc_82644E9C:
	// lbz r11,81(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 81);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82644ef0
	if (cr6.eq) goto loc_82644EF0;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,112
	ctx.r4.s64 = 112;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,112
	ctx.r9.s64 = 112;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// lbz r8,82(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 82);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// bl 0x82666cd0
	sub_82666CD0(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lbz r7,83(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 83);
	// stb r7,96(r31)
	PPC_STORE_U8(r31.u32 + 96, ctx.r7.u8);
	// b 0x82644ef4
	goto loc_82644EF4;
loc_82644EF0:
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
loc_82644EF4:
	// lbz r11,0(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82644f08
	if (cr6.eq) goto loc_82644F08;
	// addi r3,r31,168
	ctx.r3.s64 = r31.s64 + 168;
	// bl 0x8262a208
	sub_8262A208(ctx, base);
loc_82644F08:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82644f40
	if (cr6.eq) goto loc_82644F40;
	// stw r29,212(r11)
	PPC_STORE_U32(r11.u32 + 212, r29.u32);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// b 0x82644f44
	goto loc_82644F44;
loc_82644F40:
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
loc_82644F44:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// li r0,-256
	r0.s64 = -256;
	// lvx128 v126,r1,r0
	simd::store_shuffled(v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// li r0,-240
	r0.s64 = -240;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x828eab30
}

__attribute__((alias("__imp__sub_82644F60"))) PPC_WEAK_FUNC(sub_82644F60);
PPC_FUNC_IMPL(__imp__sub_82644F60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82644F64"))) PPC_WEAK_FUNC(sub_82644F64);
PPC_FUNC_IMPL(__imp__sub_82644F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82644F68"))) PPC_WEAK_FUNC(sub_82644F68);
PPC_FUNC_IMPL(__imp__sub_82644F68) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r13)
	r20.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r19,12
	r19.s64 = 12;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwzx r11,r19,r20
	r11.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82644fb8
	if (!cr6.lt) goto loc_82644FB8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13276
	ctx.r8.s64 = ctx.r9.s64 + 13276;
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
loc_82644FB8:
	// li r22,0
	r22.s64 = 0;
	// lwz r3,88(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 88);
	// lis r21,-32768
	r21.s64 = -2147483648;
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,88(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 88);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,120(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 120);
	// addi r5,r11,48
	ctx.r5.s64 = r11.s64 + 48;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r26,784
	r11.s64 = r26.s64 + 784;
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r10,r26,800
	ctx.r10.s64 = r26.s64 + 800;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r31
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// vaddfp v9,v11,v10
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// lwz r10,148(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 148);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r7,148(r26)
	PPC_STORE_U32(r26.u32 + 148, ctx.r7.u32);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bne cr6,0x82645050
	if (!cr6.eq) goto loc_82645050;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_82645050:
	// lwz r3,100(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 100);
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82c55258
	sub_82C55258(ctx, base);
	// lwz r11,444(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 444);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826450e8
	if (cr6.eq) goto loc_826450E8;
	// addi r29,r11,24
	r29.s64 = r11.s64 + 24;
	// li r28,6
	r28.s64 = 6;
loc_82645074:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x826450b4
	if (cr6.lt) goto loc_826450B4;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x826450dc
	if (!cr6.lt) goto loc_826450DC;
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x826450dc
	goto loc_826450DC;
loc_826450B4:
	// addi r11,r30,176
	r11.s64 = r30.s64 + 176;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r31
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_826450DC:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82645074
	if (!cr0.eq) goto loc_82645074;
loc_826450E8:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x82645318
	if (!cr6.eq) goto loc_82645318;
	// lwz r11,44(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// addi r29,r26,40
	r29.s64 = r26.s64 + 40;
	// lwz r10,56(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 56);
	// addi r28,r26,52
	r28.s64 = r26.s64 + 52;
	// lwz r30,32(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq 0x826453e0
	if (cr0.eq) goto loc_826453E0;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r23,r11
	r23.u64 = r11.u64;
	// bne cr6,0x8264515c
	if (!cr6.eq) goto loc_8264515C;
	// mr r23,r21
	r23.u64 = r21.u64;
loc_8264515C:
	// addic r10,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r10.s64 = r30.s64 + -1;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// subfe r31,r10,r30
	temp.u8 = (~ctx.r10.u32 + r30.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r30.u32 + xer.ca < xer.ca);
	r31.u64 = ~ctx.r10.u64 + r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r8,r30,0
	xer.ca = r30.u32 <= 0;
	ctx.r8.s64 = 0 - r30.s64;
	// mr r30,r11
	r30.u64 = r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// and r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 & ctx.r9.u64;
	// ble cr6,0x8264518c
	if (!cr6.gt) goto loc_8264518C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x828ea638
	sub_828EA638(ctx, base);
loc_8264518C:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826451bc
	if (!cr6.gt) goto loc_826451BC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_826451AC:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x826451ac
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826451AC;
loc_826451BC:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// ble cr6,0x826451f4
	if (!cr6.gt) goto loc_826451F4;
	// mtctr r11
	ctr.u64 = r11.u64;
	// subf r11,r10,r9
	r11.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_826451E4:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826451e4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826451E4;
loc_826451F4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82645298
	if (!cr6.gt) goto loc_82645298;
	// mr r27,r24
	r27.u64 = r24.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
loc_82645204:
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r28,r22
	r28.u64 = r22.u64;
	// lwz r11,76(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264528c
	if (!cr6.gt) goto loc_8264528C;
	// mr r31,r22
	r31.u64 = r22.u64;
loc_8264521C:
	// lwz r30,72(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 72);
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82645278
	if (cr6.eq) goto loc_82645278;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82645258
	if (!cr6.eq) goto loc_82645258;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82645258:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
loc_82645278:
	// lwz r11,76(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 76);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x8264521c
	if (cr6.lt) goto loc_8264521C;
loc_8264528C:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x82645204
	if (!cr0.eq) goto loc_82645204;
loc_82645298:
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,120(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 120);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826558d0
	sub_826558D0(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r23,0,0,0
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x80000000;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826452d8
	if (!cr6.eq) goto loc_826452D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r23,2
	ctx.r5.u64 = r23.u32 & 0x3FFFFFFF;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826452D8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82645310
	if (!cr6.eq) goto loc_82645310;
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
loc_82645310:
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
loc_82645318:
	// lwz r11,148(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r26)
	PPC_STORE_U32(r26.u32 + 148, r11.u32);
	// bne 0x82645370
	if (!cr0.eq) goto loc_82645370;
	// lbz r11,156(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82645370
	if (!cr6.eq) goto loc_82645370;
	// lwz r11,140(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264534c
	if (cr6.eq) goto loc_8264534C;
	// stw r22,140(r26)
	PPC_STORE_U32(r26.u32 + 140, r22.u32);
	// lwz r3,136(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_8264534C:
	// lwz r11,164(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82645370
	if (!cr6.eq) goto loc_82645370;
	// lwz r11,144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82645370
	if (cr6.eq) goto loc_82645370;
	// stw r22,144(r26)
	PPC_STORE_U32(r26.u32 + 144, r22.u32);
	// lwz r3,136(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_82645370:
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826453a0
	if (!cr6.lt) goto loc_826453A0;
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
loc_826453A0:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826453d8
	if (!cr6.eq) goto loc_826453D8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826453D8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x828e9444
	return;
loc_826453E0:
	// mr r24,r22
	r24.u64 = r22.u64;
}

__attribute__((alias("__imp__sub_826453E4"))) PPC_WEAK_FUNC(sub_826453E4);
PPC_FUNC_IMPL(__imp__sub_826453E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82645158
	// ERROR 82645158
	return;
}

__attribute__((alias("__imp__sub_826453E8"))) PPC_WEAK_FUNC(sub_826453E8);
PPC_FUNC_IMPL(__imp__sub_826453E8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,12
	r23.s64 = 12;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82645448
	if (!cr6.lt) goto loc_82645448;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,13312
	ctx.r7.s64 = ctx.r9.s64 + 13312;
	// addi r6,r8,12908
	ctx.r6.s64 = ctx.r8.s64 + 12908;
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
loc_82645448:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,120(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 120);
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,3792(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3792);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f13.f64)));
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// lwz r3,88(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 88);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// ori r4,r7,128
	ctx.r4.u64 = ctx.r7.u64 | 128;
	// li r21,0
	r21.s64 = 0;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r21.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r23,r24
	r11.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// lwz r28,12(r8)
	r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bge cr6,0x826454f0
	if (!cr6.lt) goto loc_826454F0;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,13296
	ctx.r7.s64 = ctx.r8.s64 + 13296;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// mftb r6
	ctx.r6.u64 = __rdtsc();
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
loc_826454F0:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addic. r22,r11,-1
	xer.ca = r11.u32 > 0;
	r22.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// blt 0x826455a4
	if (cr0.lt) goto loc_826455A4;
	// addi r25,r9,4
	r25.s64 = ctx.r9.s64 + 4;
loc_82645500:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82645598
	if (cr6.eq) goto loc_82645598;
	// lwz r11,124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 124);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
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
	// beq cr6,0x82645598
	if (cr6.eq) goto loc_82645598;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82645598
	if (cr6.eq) goto loc_82645598;
	// addi r9,r28,13
	ctx.r9.s64 = r28.s64 + 13;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r8,r10
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,2472(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2472);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82645598:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// bge 0x82645500
	if (!cr0.lt) goto loc_82645500;
loc_826455A4:
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826455d4
	if (!cr6.lt) goto loc_826455D4;
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
loc_826455D4:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r21.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8264560c
	if (!cr6.eq) goto loc_8264560C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264560C:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
}

__attribute__((alias("__imp__sub_82645610"))) PPC_WEAK_FUNC(sub_82645610);
PPC_FUNC_IMPL(__imp__sub_82645610) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82645614"))) PPC_WEAK_FUNC(sub_82645614);
PPC_FUNC_IMPL(__imp__sub_82645614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82645618"))) PPC_WEAK_FUNC(sub_82645618);
PPC_FUNC_IMPL(__imp__sub_82645618) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stwu r1,-1264(r1)
	ea = -1264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,0(r13)
	r24.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r23,12
	r23.s64 = 12;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82645678
	if (!cr6.lt) goto loc_82645678;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r9,13344
	ctx.r7.s64 = ctx.r9.s64 + 13344;
	// addi r6,r8,12908
	ctx.r6.s64 = ctx.r8.s64 + 12908;
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
loc_82645678:
	// lwz r11,120(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 120);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f0,3792(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3792);
	f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fnmsubs f11,f12,f0,f13
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f13.f64)));
	// lfs f0,21036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f1,f10,f0,f11
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? f0.f64 : ctx.f11.f64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// lwz r3,88(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 88);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// ori r4,r6,128
	ctx.r4.u64 = ctx.r6.u64 | 128;
	// li r21,0
	r21.s64 = 0;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r21.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r11,r23,r24
	r11.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// lwz r27,12(r8)
	r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// bge cr6,0x82645730
	if (!cr6.lt) goto loc_82645730;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r8,13296
	ctx.r7.s64 = ctx.r8.s64 + 13296;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// mftb r6
	ctx.r6.u64 = __rdtsc();
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
loc_82645730:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addic. r22,r11,-1
	xer.ca = r11.u32 > 0;
	r22.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// blt 0x826457f0
	if (cr0.lt) goto loc_826457F0;
	// addi r25,r9,4
	r25.s64 = ctx.r9.s64 + 4;
loc_82645740:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x826457e4
	if (cr6.eq) goto loc_826457E4;
	// lwz r11,124(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 124);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
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
	// beq cr6,0x826457e4
	if (cr6.eq) goto loc_826457E4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826457e4
	if (cr6.eq) goto loc_826457E4;
	// addi r9,r27,13
	ctx.r9.s64 = r27.s64 + 13;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r8,r10
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,2468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2468);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826457f0
	if (!cr6.eq) goto loc_826457F0;
loc_826457E4:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// bge 0x82645740
	if (!cr0.lt) goto loc_82645740;
loc_826457F0:
	// lwzx r10,r23,r24
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + r24.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82645820
	if (!cr6.lt) goto loc_82645820;
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
loc_82645820:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r21.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82645858
	if (!cr6.eq) goto loc_82645858;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82645858:
	// addi r1,r1,1264
	ctx.r1.s64 = ctx.r1.s64 + 1264;
}

__attribute__((alias("__imp__sub_8264585C"))) PPC_WEAK_FUNC(sub_8264585C);
PPC_FUNC_IMPL(__imp__sub_8264585C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82645860"))) PPC_WEAK_FUNC(sub_82645860);
PPC_FUNC_IMPL(__imp__sub_82645860) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826458a4
	if (cr6.eq) goto loc_826458A4;
	// li r10,21
	ctx.r10.s64 = 21;
	// stb r4,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r4.u8);
	// stb r5,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r5.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x828e9430
	return;
loc_826458A4:
	// lwz r14,0(r13)
	r14.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r11,12
	r11.s64 = 12;
	// li r24,1
	r24.s64 = 1;
	// stb r24,156(r25)
	PPC_STORE_U8(r25.u32 + 156, r24.u8);
	// lwzx r10,r11,r14
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r14.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826458e4
	if (!cr6.lt) goto loc_826458E4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13372
	ctx.r8.s64 = ctx.r9.s64 + 13372;
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
loc_826458E4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// li r17,0
	r17.s64 = 0;
	// bne cr6,0x82645aa0
	if (!cr6.eq) goto loc_82645AA0;
	// lwz r11,44(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 44);
	// addi r27,r25,40
	r27.s64 = r25.s64 + 40;
	// mr r26,r17
	r26.u64 = r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82645968
	if (!cr6.gt) goto loc_82645968;
	// mr r28,r17
	r28.u64 = r17.u64;
loc_82645908:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r31,r17
	r31.u64 = r17.u64;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// addi r29,r11,72
	r29.s64 = r11.s64 + 72;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82645954
	if (!cr6.gt) goto loc_82645954;
	// mr r30,r17
	r30.u64 = r17.u64;
loc_82645928:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x826425b8
	sub_826425B8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82645928
	if (cr6.lt) goto loc_82645928;
loc_82645954:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82645908
	if (cr6.lt) goto loc_82645908;
loc_82645968:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// mr r27,r17
	r27.u64 = r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826459dc
	if (!cr6.gt) goto loc_826459DC;
	// mr r28,r17
	r28.u64 = r17.u64;
loc_8264597C:
	// lwz r11,52(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 52);
	// mr r31,r17
	r31.u64 = r17.u64;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// addi r29,r11,72
	r29.s64 = r11.s64 + 72;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826459c8
	if (!cr6.gt) goto loc_826459C8;
	// mr r30,r17
	r30.u64 = r17.u64;
loc_8264599C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x826425b8
	sub_826425B8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8264599c
	if (cr6.lt) goto loc_8264599C;
loc_826459C8:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x8264597c
	if (cr6.lt) goto loc_8264597C;
loc_826459DC:
	// lwz r11,280(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 280);
	// mr r30,r17
	r30.u64 = r17.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82645a18
	if (!cr6.gt) goto loc_82645A18;
	// mr r31,r17
	r31.u64 = r17.u64;
loc_826459F0:
	// lwz r11,276(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 276);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// bl 0x826422f0
	sub_826422F0(ctx, base);
	// lwz r10,280(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 280);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// blt cr6,0x826459f0
	if (cr6.lt) goto loc_826459F0;
loc_82645A18:
	// lwz r11,148(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 148);
	// stb r17,156(r25)
	PPC_STORE_U8(r25.u32 + 156, r17.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82645a64
	if (!cr6.eq) goto loc_82645A64;
	// lwz r11,140(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82645a40
	if (cr6.eq) goto loc_82645A40;
	// stw r17,140(r25)
	PPC_STORE_U32(r25.u32 + 140, r17.u32);
	// lwz r3,136(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_82645A40:
	// lwz r11,164(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82645a64
	if (!cr6.eq) goto loc_82645A64;
	// lwz r11,144(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82645a64
	if (cr6.eq) goto loc_82645A64;
	// stw r17,144(r25)
	PPC_STORE_U32(r25.u32 + 144, r17.u32);
	// lwz r3,136(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_82645A64:
	// li r11,12
	r11.s64 = 12;
	// lwzx r10,r11,r14
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r14.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82645a98
	if (!cr6.lt) goto loc_82645A98;
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
loc_82645A98:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x828e9430
	return;
loc_82645AA0:
	// lwz r11,148(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 148);
	// addi r10,r25,40
	ctx.r10.s64 = r25.s64 + 40;
	// addi r9,r25,52
	ctx.r9.s64 = r25.s64 + 52;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r20,r1,88
	r20.s64 = ctx.r1.s64 + 88;
	// stw r8,148(r25)
	PPC_STORE_U32(r25.u32 + 148, ctx.r8.u32);
	// li r18,2
	r18.s64 = 2;
	// ori r19,r11,32
	r19.u64 = r11.u64 | 32;
	// lis r16,-32768
	r16.s64 = -2147483648;
loc_82645AD0:
	// addi r11,r1,108
	r11.s64 = ctx.r1.s64 + 108;
	// lwz r23,0(r20)
	r23.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// mr r21,r17
	r21.u64 = r17.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82645c90
	if (!cr6.gt) goto loc_82645C90;
	// mr r22,r17
	r22.u64 = r17.u64;
loc_82645AF8:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// lwzx r30,r11,r22
	r30.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// addi r28,r30,88
	r28.s64 = r30.s64 + 88;
	// lwz r9,96(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82645c7c
	if (!cr6.gt) goto loc_82645C7C;
	// mr r26,r17
	r26.u64 = r17.u64;
loc_82645B20:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r27,r9
	cr6.compare<int32_t>(r27.s32, ctx.r9.s32, xer);
	// lwzx r31,r11,r26
	r31.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne cr6,0x82645b48
	if (!cr6.eq) goto loc_82645B48;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// b 0x82645b4c
	goto loc_82645B4C;
loc_82645B48:
	// addi r29,r31,512
	r29.s64 = r31.s64 + 512;
loc_82645B4C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x82645c40
	if (!cr6.lt) goto loc_82645C40;
loc_82645B54:
	// lwz r11,124(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 124);
	// addi r3,r1,83
	ctx.r3.s64 = ctx.r1.s64 + 83;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
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
	// beq cr6,0x82645bc0
	if (cr6.eq) goto loc_82645BC0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,128(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 128);
	// lbz r8,26(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 26);
	// lbz r7,26(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 26);
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// lbz r4,7088(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7088);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82645c14
	if (!cr6.eq) goto loc_82645C14;
loc_82645BC0:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82645be8
	if (!cr6.eq) goto loc_82645BE8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82645BE8:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lbz r8,37(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// rlwimi r8,r24,6,0,25
	ctx.r8.u64 = (__builtin_rotateleft32(r24.u32, 6) & 0xFFFFFFC0) | (ctx.r8.u64 & 0xFFFFFFFF0000003F);
	// stb r8,37(r30)
	PPC_STORE_U8(r30.u32 + 37, ctx.r8.u8);
	// b 0x82645c2c
	goto loc_82645C2C;
loc_82645C14:
	// cmpwi cr6,r15,1
	cr6.compare<int32_t>(r15.s32, 1, xer);
	// bne cr6,0x82645c2c
	if (!cr6.eq) goto loc_82645C2C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,120(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c59800
	sub_82C59800(ctx, base);
loc_82645C2C:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82645b54
	if (cr6.lt) goto loc_82645B54;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82645C40:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82645b20
	if (cr6.lt) goto loc_82645B20;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82645c7c
	if (cr6.eq) goto loc_82645C7C;
loc_82645C54:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82665c90
	sub_82665C90(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82645c54
	if (!cr6.eq) goto loc_82645C54;
loc_82645C7C:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r21,r11
	cr6.compare<int32_t>(r21.s32, r11.s32, xer);
	// blt cr6,0x82645af8
	if (cr6.lt) goto loc_82645AF8;
loc_82645C90:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82645cc8
	if (!cr6.eq) goto loc_82645CC8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_82645CC8:
	// addic. r18,r18,-1
	xer.ca = r18.u32 > 0;
	r18.s64 = r18.s64 + -1;
	cr0.compare<int32_t>(r18.s32, 0, xer);
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r17.u32);
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r16.u32);
	// bne 0x82645ad0
	if (!cr0.eq) goto loc_82645AD0;
	// lwz r11,148(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 148);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,148(r25)
	PPC_STORE_U32(r25.u32 + 148, r11.u32);
}

__attribute__((alias("__imp__sub_82645CE8"))) PPC_WEAK_FUNC(sub_82645CE8);
PPC_FUNC_IMPL(__imp__sub_82645CE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82645a18
	// ERROR 82645A18
	return;
}

__attribute__((alias("__imp__sub_82645CEC"))) PPC_WEAK_FUNC(sub_82645CEC);
PPC_FUNC_IMPL(__imp__sub_82645CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82645CF0"))) PPC_WEAK_FUNC(sub_82645CF0);
PPC_FUNC_IMPL(__imp__sub_82645CF0) {
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
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82645d34
	if (cr6.eq) goto loc_82645D34;
	// li r11,10
	r11.s64 = 10;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e945c
	return;
loc_82645D34:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r11,148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 148);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// stw r9,148(r28)
	PPC_STORE_U32(r28.u32 + 148, ctx.r9.u32);
	// ori r7,r10,4
	ctx.r7.u64 = ctx.r10.u64 | 4;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lwz r5,16(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r27,r25
	r27.u64 = r25.u64;
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// mr r26,r25
	r26.u64 = r25.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82645e44
	if (!cr6.gt) goto loc_82645E44;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_82645D98:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// addi r31,r11,520
	r31.s64 = r11.s64 + 520;
	// lhz r10,526(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 526);
	// lhz r9,524(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 524);
	// clrlwi r8,r10,18
	ctx.r8.u64 = ctx.r10.u32 & 0x3FFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82645dc4
	if (!cr6.eq) goto loc_82645DC4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7c70
	sub_82BF7C70(ctx, base);
loc_82645DC4:
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
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// lwz r3,204(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 204);
	// lhz r6,32(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// cmplwi cr6,r6,65535
	cr6.compare<uint32_t>(ctx.r6.u32, 65535, xer);
	// beq cr6,0x82645e28
	if (cr6.eq) goto loc_82645E28;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82645e10
	if (!cr6.eq) goto loc_82645E10;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x82665118
	sub_82665118(ctx, base);
	// b 0x82645e28
	goto loc_82645E28;
loc_82645E10:
	// lwz r11,204(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 204);
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// beq cr6,0x82645e28
	if (cr6.eq) goto loc_82645E28;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264ef68
	sub_8264EF68(ctx, base);
loc_82645E28:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x82645d98
	if (cr6.lt) goto loc_82645D98;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x82645e58
	if (!cr6.eq) goto loc_82645E58;
loc_82645E44:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r3,204(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 204);
	// bl 0x82665118
	sub_82665118(ctx, base);
loc_82645E58:
	// lwz r11,148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r28)
	PPC_STORE_U32(r28.u32 + 148, r11.u32);
	// bne 0x82645eb0
	if (!cr0.eq) goto loc_82645EB0;
	// lbz r11,156(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82645eb0
	if (!cr6.eq) goto loc_82645EB0;
	// lwz r11,140(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82645e8c
	if (cr6.eq) goto loc_82645E8C;
	// stw r25,140(r28)
	PPC_STORE_U32(r28.u32 + 140, r25.u32);
	// lwz r3,136(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_82645E8C:
	// lwz r11,164(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82645eb0
	if (!cr6.eq) goto loc_82645EB0;
	// lwz r11,144(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82645eb0
	if (cr6.eq) goto loc_82645EB0;
	// stw r25,144(r28)
	PPC_STORE_U32(r28.u32 + 144, r25.u32);
	// lwz r3,136(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_82645EB0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658c10
	sub_82658C10(ctx, base);
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
	// bne cr6,0x82645ef4
	if (!cr6.eq) goto loc_82645EF4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_82645EF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82645EFC"))) PPC_WEAK_FUNC(sub_82645EFC);
PPC_FUNC_IMPL(__imp__sub_82645EFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82645F00"))) PPC_WEAK_FUNC(sub_82645F00);
PPC_FUNC_IMPL(__imp__sub_82645F00) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r11,148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 148);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,148(r28)
	PPC_STORE_U32(r28.u32 + 148, r11.u32);
	// bl 0x82658ce8
	sub_82658CE8(ctx, base);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// li r27,0
	r27.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r6,16(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82645ff8
	if (!cr6.gt) goto loc_82645FF8;
	// lis r11,0
	r11.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// ori r5,r11,65535
	ctx.r5.u64 = r11.u64 | 65535;
loc_82645F84:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r27
	r11.u64 = r27.u64;
	// lwzx r9,r7,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lhz r8,524(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 524);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82645fbc
	if (!cr6.gt) goto loc_82645FBC;
	// lwz r10,520(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 520);
loc_82645FA0:
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r29
	cr6.compare<uint32_t>(ctx.r4.u32, r29.u32, xer);
	// beq cr6,0x82645fc0
	if (cr6.eq) goto loc_82645FC0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// blt cr6,0x82645fa0
	if (cr6.lt) goto loc_82645FA0;
loc_82645FBC:
	// li r11,-1
	r11.s64 = -1;
loc_82645FC0:
	// lhz r10,524(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 524);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,520(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 520);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3FFFC;
	// sth r11,524(r9)
	PPC_STORE_U16(ctx.r9.u32 + 524, r11.u16);
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stwx r9,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// blt cr6,0x82645f84
	if (cr6.lt) goto loc_82645F84;
loc_82645FF8:
	// lwz r30,12(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82664c90
	sub_82664C90(ctx, base);
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lhz r10,34(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 34);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82646074
	if (!cr6.eq) goto loc_82646074;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// addi r31,r11,64
	r31.s64 = r11.s64 + 64;
	// sth r10,34(r30)
	PPC_STORE_U16(r30.u32 + 34, ctx.r10.u16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r6,r8,2
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bne cr6,0x82646058
	if (!cr6.eq) goto loc_82646058;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82646058:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
loc_82646074:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826460ac
	if (!cr6.eq) goto loc_826460AC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_826460AC:
	// lwz r11,148(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 148);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,148(r28)
	PPC_STORE_U32(r28.u32 + 148, r11.u32);
	// bne 0x82646110
	if (!cr0.eq) goto loc_82646110;
	// lbz r11,156(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82646110
	if (!cr6.eq) goto loc_82646110;
	// lwz r11,140(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826460ec
	if (cr6.eq) goto loc_826460EC;
	// stw r27,140(r28)
	PPC_STORE_U32(r28.u32 + 140, r27.u32);
	// lwz r3,136(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_826460EC:
	// lwz r11,164(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82646110
	if (!cr6.eq) goto loc_82646110;
	// lwz r11,144(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82646110
	if (cr6.eq) goto loc_82646110;
	// stw r27,144(r28)
	PPC_STORE_U32(r28.u32 + 144, r27.u32);
	// lwz r3,136(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_82646110:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8264611C"))) PPC_WEAK_FUNC(sub_8264611C);
PPC_FUNC_IMPL(__imp__sub_8264611C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82646120"))) PPC_WEAK_FUNC(sub_82646120);
PPC_FUNC_IMPL(__imp__sub_82646120) {
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
	// lhz r9,524(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 524);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82646168
	if (!cr6.gt) goto loc_82646168;
	// lwz r10,520(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 520);
loc_8264614C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r29
	cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, xer);
	// beq cr6,0x8264616c
	if (cr6.eq) goto loc_8264616C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8264614c
	if (cr6.lt) goto loc_8264614C;
loc_82646168:
	// li r11,-1
	r11.s64 = -1;
loc_8264616C:
	// lhz r10,524(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 524);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,520(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 520);
	// li r7,1
	ctx.r7.s64 = 1;
	// addis r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 65536;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// rlwinm r6,r4,2,14,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// sth r4,524(r31)
	PPC_STORE_U16(r31.u32 + 524, ctx.r4.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r6,r8
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r11.u32);
	// lwz r11,204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwimi r9,r7,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stb r9,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r9.u8);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82646220
	if (!cr6.gt) goto loc_82646220;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826461F0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, xer);
	// beq cr6,0x82646210
	if (cr6.eq) goto loc_82646210;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r30,204(r8)
	r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 204);
	// lhz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U16(r30.u32 + 32);
	// cmplwi cr6,r7,65535
	cr6.compare<uint32_t>(ctx.r7.u32, 65535, xer);
	// bne cr6,0x82646220
	if (!cr6.eq) goto loc_82646220;
loc_82646210:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x826461f0
	if (cr6.lt) goto loc_826461F0;
loc_82646220:
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r30,r3
	cr6.compare<uint32_t>(r30.u32, ctx.r3.u32, xer);
	// beq cr6,0x82646240
	if (cr6.eq) goto loc_82646240;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82664c90
	sub_82664C90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82665118
	sub_82665118(ctx, base);
loc_82646240:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82646278
	if (!cr6.eq) goto loc_82646278;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_82646278:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8264627C"))) PPC_WEAK_FUNC(sub_8264627C);
PPC_FUNC_IMPL(__imp__sub_8264627C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82646280"))) PPC_WEAK_FUNC(sub_82646280);
PPC_FUNC_IMPL(__imp__sub_82646280) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x826462d8
	if (!cr6.eq) goto loc_826462D8;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// bl 0x82646bf8
	sub_82646BF8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x826462e0
	goto loc_826462E0;
loc_826462D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
loc_826462E0:
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// extsb r11,r29
	r11.s64 = r29.s8;
	// stw r31,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r31.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r31.u32);
	// beq cr6,0x82646310
	if (cr6.eq) goto loc_82646310;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82645860
	sub_82645860(ctx, base);
loc_82646310:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82646314"))) PPC_WEAK_FUNC(sub_82646314);
PPC_FUNC_IMPL(__imp__sub_82646314) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82646318"))) PPC_WEAK_FUNC(sub_82646318);
PPC_FUNC_IMPL(__imp__sub_82646318) {
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
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264635c
	if (cr6.eq) goto loc_8264635C;
	// li r11,8
	r11.s64 = 8;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_8264635C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r3,12
	cr6.compare<int32_t>(ctx.r3.s32, 12, xer);
	// bne cr6,0x826463c0
	if (!cr6.eq) goto loc_826463C0;
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lhz r11,28(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826463c0
	if (!cr6.eq) goto loc_826463C0;
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r28.u8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// sth r8,28(r29)
	PPC_STORE_U16(r29.u32 + 28, ctx.r8.u16);
	// sth r7,30(r29)
	PPC_STORE_U16(r29.u32 + 30, ctx.r7.u16);
loc_826463C0:
	// stb r28,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r28.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82639e48
	sub_82639E48(ctx, base);
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// bl 0x8264ceb0
	sub_8264CEB0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82646438
	if (!cr6.eq) goto loc_82646438;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82646424
	if (!cr6.eq) goto loc_82646424;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82645cf0
	sub_82645CF0(ctx, base);
loc_82646424:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82646438:
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// li r11,0
	r11.s64 = 0;
	// stb r11,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r11.u8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82646464
	if (!cr6.eq) goto loc_82646464;
	// lwz r10,140(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82646464
	if (cr6.eq) goto loc_82646464;
	// stw r11,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r11.u32);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_82646464:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8264646C"))) PPC_WEAK_FUNC(sub_8264646C);
PPC_FUNC_IMPL(__imp__sub_8264646C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82646470"))) PPC_WEAK_FUNC(sub_82646470);
PPC_FUNC_IMPL(__imp__sub_82646470) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// li r7,1
	ctx.r7.s64 = 1;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82639eb8
	sub_82639EB8(ctx, base);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r8,44(r30)
	PPC_STORE_U32(r30.u32 + 44, ctx.r8.u32);
	// bl 0x82646318
	sub_82646318(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826464E4"))) PPC_WEAK_FUNC(sub_826464E4);
PPC_FUNC_IMPL(__imp__sub_826464E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826464E8"))) PPC_WEAK_FUNC(sub_826464E8);
PPC_FUNC_IMPL(__imp__sub_826464E8) {
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
	// lwz r11,148(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 148);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82646538
	if (cr6.eq) goto loc_82646538;
	// li r11,9
	r11.s64 = 9;
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r29)
	PPC_STORE_U8(r29.u32 + 0, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82646538:
	// li r28,1
	r28.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r28.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82646574
	if (!cr6.eq) goto loc_82646574;
	// lwz r4,68(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82646574
	if (!cr6.eq) goto loc_82646574;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82645f00
	sub_82645F00(ctx, base);
loc_82646574:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264d050
	sub_8264D050(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826394a0
	sub_826394A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x826465fc
	if (!cr0.eq) goto loc_826465FC;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826465fc
	if (!cr6.eq) goto loc_826465FC;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826465d8
	if (cr6.eq) goto loc_826465D8;
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b4c0
	sub_8265B4C0(ctx, base);
loc_826465D8:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826465fc
	if (!cr6.eq) goto loc_826465FC;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826465fc
	if (cr6.eq) goto loc_826465FC;
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// bl 0x8265b370
	sub_8265B370(ctx, base);
loc_826465FC:
	// stb r28,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r28.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82646608"))) PPC_WEAK_FUNC(sub_82646608);
PPC_FUNC_IMPL(__imp__sub_82646608) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8264660C"))) PPC_WEAK_FUNC(sub_8264660C);
PPC_FUNC_IMPL(__imp__sub_8264660C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82646610"))) PPC_WEAK_FUNC(sub_82646610);
PPC_FUNC_IMPL(__imp__sub_82646610) {
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
	// lwz r11,148(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82646650
	if (cr6.eq) goto loc_82646650;
	// li r11,11
	r11.s64 = 11;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,136(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82646650:
	// bl 0x82645f00
	sub_82645F00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82646660"))) PPC_WEAK_FUNC(sub_82646660);
PPC_FUNC_IMPL(__imp__sub_82646660) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646664"))) PPC_WEAK_FUNC(sub_82646664);
PPC_FUNC_IMPL(__imp__sub_82646664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82646668"))) PPC_WEAK_FUNC(sub_82646668);
PPC_FUNC_IMPL(__imp__sub_82646668) {
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
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82646734
	if (!cr6.gt) goto loc_82646734;
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x826466c4
	if (!cr6.gt) goto loc_826466C4;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_8264669C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826466bc
	if (cr6.eq) goto loc_826466BC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8264669c
	if (cr6.lt) goto loc_8264669C;
	// b 0x826466c4
	goto loc_826466C4;
loc_826466BC:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x826466e4
	if (!cr6.eq) goto loc_826466E4;
loc_826466C4:
	// lbz r11,64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// addic r9,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r6,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x82642b50
	sub_82642B50(ctx, base);
	// b 0x82646734
	goto loc_82646734;
loc_826466E4:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x82646734
	if (!cr6.gt) goto loc_82646734;
	// li r30,0
	r30.s64 = 0;
loc_826466F4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82646720
	if (cr6.eq) goto loc_82646720;
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r5,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// bl 0x8263e510
	sub_8263E510(ctx, base);
loc_82646720:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826466f4
	if (cr6.lt) goto loc_826466F4;
loc_82646734:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x826467d8
	if (!cr6.gt) goto loc_826467D8;
	// rotlwi r9,r5,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82646788
	if (!cr6.gt) goto loc_82646788;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
loc_82646754:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82646780
	if (cr6.eq) goto loc_82646780;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82646754
	if (cr6.lt) goto loc_82646754;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x826436c8
	sub_826436C8(ctx, base);
	// b 0x826467d8
	goto loc_826467D8;
loc_82646780:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82646798
	if (!cr6.eq) goto loc_82646798;
loc_82646788:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x826436c8
	sub_826436C8(ctx, base);
	// b 0x826467d8
	goto loc_826467D8;
loc_82646798:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble cr6,0x826467d8
	if (!cr6.gt) goto loc_826467D8;
	// li r30,0
	r30.s64 = 0;
loc_826467A8:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826467c4
	if (cr6.eq) goto loc_826467C4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82640fe8
	sub_82640FE8(ctx, base);
loc_826467C4:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826467a8
	if (cr6.lt) goto loc_826467A8;
loc_826467D8:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8264681c
	if (!cr6.gt) goto loc_8264681C;
	// li r30,0
	r30.s64 = 0;
loc_826467EC:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82646808
	if (cr6.eq) goto loc_82646808;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82645cf0
	sub_82645CF0(ctx, base);
loc_82646808:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826467ec
	if (cr6.lt) goto loc_826467EC;
loc_8264681C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82646878
	if (!cr6.gt) goto loc_82646878;
	// li r30,0
	r30.s64 = 0;
loc_82646830:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82646864
	if (cr6.eq) goto loc_82646864;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8264685c
	if (!cr6.eq) goto loc_8264685C;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82646864
	if (cr6.eq) goto loc_82646864;
loc_8264685C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82646318
	sub_82646318(ctx, base);
loc_82646864:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82646830
	if (cr6.lt) goto loc_82646830;
loc_82646878:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8264687C"))) PPC_WEAK_FUNC(sub_8264687C);
PPC_FUNC_IMPL(__imp__sub_8264687C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82646880"))) PPC_WEAK_FUNC(sub_82646880);
PPC_FUNC_IMPL(__imp__sub_82646880) {
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
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826468dc
	if (!cr6.gt) goto loc_826468DC;
	// li r31,0
	r31.s64 = 0;
loc_826468A8:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826468c8
	if (cr6.eq) goto loc_826468C8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826464e8
	sub_826464E8(ctx, base);
loc_826468C8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826468a8
	if (cr6.lt) goto loc_826468A8;
loc_826468DC:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82646948
	if (!cr6.gt) goto loc_82646948;
	// li r31,0
	r31.s64 = 0;
	// li r28,11
	r28.s64 = 11;
loc_826468F4:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82646934
	if (cr6.eq) goto loc_82646934;
	// lwz r10,148(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 148);
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8264692c
	if (cr6.eq) goto loc_8264692C;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stb r28,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r28.u8);
	// lwz r3,136(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// bl 0x8265ae48
	sub_8265AE48(ctx, base);
	// b 0x82646934
	goto loc_82646934;
loc_8264692C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82645f00
	sub_82645F00(ctx, base);
loc_82646934:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826468f4
	if (cr6.lt) goto loc_826468F4;
loc_82646948:
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82646994
	if (!cr6.gt) goto loc_82646994;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_8264695C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8264698c
	if (cr6.eq) goto loc_8264698C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x8264695c
	if (cr6.lt) goto loc_8264695C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82643298
	sub_82643298(ctx, base);
	// b 0x826469f0
	goto loc_826469F0;
loc_8264698C:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x826469a8
	if (!cr6.eq) goto loc_826469A8;
loc_82646994:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82643298
	sub_82643298(ctx, base);
	// b 0x826469f0
	goto loc_826469F0;
loc_826469A8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826469f0
	if (!cr6.gt) goto loc_826469F0;
	// li r31,0
	r31.s64 = 0;
loc_826469BC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826469dc
	if (cr6.eq) goto loc_826469DC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r5,r10,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8263e6d8
	sub_8263E6D8(ctx, base);
loc_826469DC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826469bc
	if (cr6.lt) goto loc_826469BC;
loc_826469F0:
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82646a40
	if (!cr6.gt) goto loc_82646A40;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
loc_82646A04:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82646a38
	if (cr6.eq) goto loc_82646A38;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82646a04
	if (cr6.lt) goto loc_82646A04;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82643aa0
	sub_82643AA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_82646A38:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x82646a58
	if (!cr6.eq) goto loc_82646A58;
loc_82646A40:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,48(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r4,44(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// bl 0x82643aa0
	sub_82643AA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9464
	return;
loc_82646A58:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82646a9c
	if (!cr6.gt) goto loc_82646A9C;
	// li r31,0
	r31.s64 = 0;
loc_82646A6C:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82646a88
	if (cr6.eq) goto loc_82646A88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x826402a8
	sub_826402A8(ctx, base);
loc_82646A88:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82646a6c
	if (cr6.lt) goto loc_82646A6C;
loc_82646A9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82646AA0"))) PPC_WEAK_FUNC(sub_82646AA0);
PPC_FUNC_IMPL(__imp__sub_82646AA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82646AA4"))) PPC_WEAK_FUNC(sub_82646AA4);
PPC_FUNC_IMPL(__imp__sub_82646AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82646AA8"))) PPC_WEAK_FUNC(sub_82646AA8);
PPC_FUNC_IMPL(__imp__sub_82646AA8) {
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
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82646af0
	if (cr6.eq) goto loc_82646AF0;
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
loc_82646AF0:
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82646b1c
	if (cr6.eq) goto loc_82646B1C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,128
	ctx.r5.s64 = 128;
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
loc_82646B1C:
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

__attribute__((alias("__imp__sub_82646B34"))) PPC_WEAK_FUNC(sub_82646B34);
PPC_FUNC_IMPL(__imp__sub_82646B34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646B38"))) PPC_WEAK_FUNC(sub_82646B38);
PPC_FUNC_IMPL(__imp__sub_82646B38) {
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
	// lwz r11,212(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// addi r31,r3,112
	r31.s64 = ctx.r3.s64 + 112;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82646b78
	if (cr6.eq) goto loc_82646B78;
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
loc_82646B78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82646B88"))) PPC_WEAK_FUNC(sub_82646B88);
PPC_FUNC_IMPL(__imp__sub_82646B88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646B8C"))) PPC_WEAK_FUNC(sub_82646B8C);
PPC_FUNC_IMPL(__imp__sub_82646B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82646B90"))) PPC_WEAK_FUNC(sub_82646B90);
PPC_FUNC_IMPL(__imp__sub_82646B90) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-13048
	ctx.r9.s64 = r11.s64 + -13048;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82646be0
	if (cr6.eq) goto loc_82646BE0;
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
loc_82646BE0:
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

__attribute__((alias("__imp__sub_82646BF4"))) PPC_WEAK_FUNC(sub_82646BF4);
PPC_FUNC_IMPL(__imp__sub_82646BF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646BF8"))) PPC_WEAK_FUNC(sub_82646BF8);
PPC_FUNC_IMPL(__imp__sub_82646BF8) {
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
	// bl 0x82c56308
	sub_82C56308(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r6,r11,12144
	ctx.r6.s64 = r11.s64 + 12144;
	// addi r5,r10,12132
	ctx.r5.s64 = ctx.r10.s64 + 12132;
	// addi r3,r8,12120
	ctx.r3.s64 = ctx.r8.s64 + 12120;
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// addi r4,r9,12100
	ctx.r4.s64 = ctx.r9.s64 + 12100;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// addi r11,r7,12088
	r11.s64 = ctx.r7.s64 + 12088;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82646C68"))) PPC_WEAK_FUNC(sub_82646C68);
PPC_FUNC_IMPL(__imp__sub_82646C68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646C6C"))) PPC_WEAK_FUNC(sub_82646C6C);
PPC_FUNC_IMPL(__imp__sub_82646C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82646C70"))) PPC_WEAK_FUNC(sub_82646C70);
PPC_FUNC_IMPL(__imp__sub_82646C70) {
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
	// bl 0x82c56398
	sub_82C56398(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82646cbc
	if (cr6.eq) goto loc_82646CBC;
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
loc_82646CBC:
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

__attribute__((alias("__imp__sub_82646CD4"))) PPC_WEAK_FUNC(sub_82646CD4);
PPC_FUNC_IMPL(__imp__sub_82646CD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646CD8"))) PPC_WEAK_FUNC(sub_82646CD8);
PPC_FUNC_IMPL(__imp__sub_82646CD8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
}

__attribute__((alias("__imp__sub_82646CDC"))) PPC_WEAK_FUNC(sub_82646CDC);
PPC_FUNC_IMPL(__imp__sub_82646CDC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82646c70
	sub_82646C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646CE0"))) PPC_WEAK_FUNC(sub_82646CE0);
PPC_FUNC_IMPL(__imp__sub_82646CE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
}

__attribute__((alias("__imp__sub_82646CE4"))) PPC_WEAK_FUNC(sub_82646CE4);
PPC_FUNC_IMPL(__imp__sub_82646CE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82646c70
	sub_82646C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646CE8"))) PPC_WEAK_FUNC(sub_82646CE8);
PPC_FUNC_IMPL(__imp__sub_82646CE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
}

__attribute__((alias("__imp__sub_82646CEC"))) PPC_WEAK_FUNC(sub_82646CEC);
PPC_FUNC_IMPL(__imp__sub_82646CEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82646c70
	sub_82646C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646CF0"))) PPC_WEAK_FUNC(sub_82646CF0);
PPC_FUNC_IMPL(__imp__sub_82646CF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
}

__attribute__((alias("__imp__sub_82646CF4"))) PPC_WEAK_FUNC(sub_82646CF4);
PPC_FUNC_IMPL(__imp__sub_82646CF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82646c70
	sub_82646C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82646CF8"))) PPC_WEAK_FUNC(sub_82646CF8);
PPC_FUNC_IMPL(__imp__sub_82646CF8) {
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
	// bl 0x82641b60
	sub_82641B60(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82646d44
	if (cr6.eq) goto loc_82646D44;
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
loc_82646D44:
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

__attribute__((alias("__imp__sub_82646D5C"))) PPC_WEAK_FUNC(sub_82646D5C);
PPC_FUNC_IMPL(__imp__sub_82646D5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82646D60"))) PPC_WEAK_FUNC(sub_82646D60);
PPC_FUNC_IMPL(__imp__sub_82646D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r10,15(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 15);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82646e7c
	if (cr6.eq) goto loc_82646E7C;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82646e7c
	if (cr6.eq) goto loc_82646E7C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82646db0
	if (cr6.gt) goto loc_82646DB0;
	// lwz r11,36(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r30,0
	r30.s64 = 0;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// b 0x82646dbc
	goto loc_82646DBC;
loc_82646DB0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r30,1
	r30.s64 = 1;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
loc_82646DBC:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82646dd0
	if (cr6.eq) goto loc_82646DD0;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82646de8
	goto loc_82646DE8;
loc_82646DD0:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r4,320
	ctx.r6.s64 = ctx.r4.s64 + 320;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r5,r3,320
	ctx.r5.s64 = ctx.r3.s64 + 320;
	// bl 0x826700c0
	sub_826700C0(ctx, base);
loc_82646DE8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r8,r10,20
	ctx.r8.s64 = ctx.r10.s64 + 20;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r4,r9,16
	ctx.r4.s64 = ctx.r9.s64 + 16;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// blt cr6,0x82646e3c
	if (cr6.lt) goto loc_82646E3C;
	// beq cr6,0x82646e88
	if (cr6.eq) goto loc_82646E88;
	// li r11,0
	r11.s64 = 0;
loc_82646E3C:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bgt cr6,0x82646e7c
	if (cr6.gt) goto loc_82646E7C;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_82646E7C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x828e946c
	return;
loc_82646E88:
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_82646E8C"))) PPC_WEAK_FUNC(sub_82646E8C);
PPC_FUNC_IMPL(__imp__sub_82646E8C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82646e40
	// ERROR 82646E40
	return;
}

__attribute__((alias("__imp__sub_82646E90"))) PPC_WEAK_FUNC(sub_82646E90);
PPC_FUNC_IMPL(__imp__sub_82646E90) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82646fe0
	if (cr6.eq) goto loc_82646FE0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,12
	r27.s64 = 12;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82646f14
	if (!cr6.lt) goto loc_82646F14;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13412
	ctx.r8.s64 = ctx.r9.s64 + 13412;
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
loc_82646F14:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c380
	sub_8264C380(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82646f7c
	if (!cr6.eq) goto loc_82646F7C;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,64
	ctx.r4.s64 = 64;
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
	// beq cr6,0x82646f68
	if (cr6.eq) goto loc_82646F68;
	// li r11,24
	r11.s64 = 24;
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// b 0x82646f6c
	goto loc_82646F6C;
loc_82646F68:
	// li r31,0
	r31.s64 = 0;
loc_82646F6C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c5b8
	sub_8264C5B8(ctx, base);
loc_82646F7C:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r10,48
	ctx.r10.s64 = 48;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,32
	r11.s64 = 32;
	// bne cr6,0x82646fa0
	if (!cr6.eq) goto loc_82646FA0;
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// b 0x82646fac
	goto loc_82646FAC;
loc_82646FA0:
	// lvx128 v0,r0,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
loc_82646FAC:
	// stvx128 v13,r31,r10
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82646fe0
	if (!cr6.lt) goto loc_82646FE0;
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
loc_82646FE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82646FE4"))) PPC_WEAK_FUNC(sub_82646FE4);
PPC_FUNC_IMPL(__imp__sub_82646FE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82646FE8"))) PPC_WEAK_FUNC(sub_82646FE8);
PPC_FUNC_IMPL(__imp__sub_82646FE8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826471ac
	if (cr6.eq) goto loc_826471AC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r26,0(r13)
	r26.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r25,12
	r25.s64 = 12;
	// lwzx r10,r25,r26
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647068
	if (!cr6.lt) goto loc_82647068;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13412
	ctx.r8.s64 = ctx.r9.s64 + 13412;
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
loc_82647068:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c380
	sub_8264C380(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82647130
	if (!cr6.eq) goto loc_82647130;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,64
	ctx.r4.s64 = 64;
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
	// beq cr6,0x826470b8
	if (cr6.eq) goto loc_826470B8;
	// li r11,24
	r11.s64 = 24;
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// b 0x826470bc
	goto loc_826470BC;
loc_826470B8:
	// li r31,0
	r31.s64 = 0;
loc_826470BC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c5b8
	sub_8264C5B8(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x82647104
	if (!cr6.eq) goto loc_82647104;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r31,48
	r11.s64 = r31.s64 + 48;
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8264717c
	goto loc_8264717C;
loc_82647104:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// lfs f0,-25600(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r27
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r31,r9
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8264717c
	goto loc_8264717C;
loc_82647130:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// li r11,32
	r11.s64 = 32;
	// beq cr6,0x82647148
	if (cr6.eq) goto loc_82647148;
	// li r11,48
	r11.s64 = 48;
loc_82647148:
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21036(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x8264717c
	if (!cr6.eq) goto loc_8264717C;
	// lfs f13,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x8264717c
	if (!cr6.eq) goto loc_8264717C;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
loc_8264717C:
	// lwzx r10,r25,r26
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826471ac
	if (!cr6.lt) goto loc_826471AC;
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
loc_826471AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826471B0"))) PPC_WEAK_FUNC(sub_826471B0);
PPC_FUNC_IMPL(__imp__sub_826471B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826471B4"))) PPC_WEAK_FUNC(sub_826471B4);
PPC_FUNC_IMPL(__imp__sub_826471B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826471B8"))) PPC_WEAK_FUNC(sub_826471B8);
PPC_FUNC_IMPL(__imp__sub_826471B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82647308
	if (cr6.eq) goto loc_82647308;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r28,0(r13)
	r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r27,12
	r27.s64 = 12;
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x8264723c
	if (!cr6.lt) goto loc_8264723C;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13412
	ctx.r8.s64 = ctx.r9.s64 + 13412;
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
loc_8264723C:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c380
	sub_8264C380(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826472a4
	if (!cr6.eq) goto loc_826472A4;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,64
	ctx.r4.s64 = 64;
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
	// beq cr6,0x82647290
	if (cr6.eq) goto loc_82647290;
	// li r11,28
	r11.s64 = 28;
	// li r10,64
	ctx.r10.s64 = 64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// b 0x82647294
	goto loc_82647294;
loc_82647290:
	// li r31,0
	r31.s64 = 0;
loc_82647294:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264c5b8
	sub_8264C5B8(ctx, base);
loc_826472A4:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r10,48
	ctx.r10.s64 = 48;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,32
	r11.s64 = 32;
	// bne cr6,0x826472c8
	if (!cr6.eq) goto loc_826472C8;
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// b 0x826472d4
	goto loc_826472D4;
loc_826472C8:
	// lvx128 v0,r0,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
loc_826472D4:
	// stvx128 v13,r31,r10
	_mm_store_si128((__m128i*)(base + ((r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r10,r27,r28
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r28.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647308
	if (!cr6.lt) goto loc_82647308;
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
loc_82647308:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8264730C"))) PPC_WEAK_FUNC(sub_8264730C);
PPC_FUNC_IMPL(__imp__sub_8264730C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82647310"))) PPC_WEAK_FUNC(sub_82647310);
PPC_FUNC_IMPL(__imp__sub_82647310) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82647454
	if (cr6.eq) goto loc_82647454;
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
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647398
	if (!cr6.lt) goto loc_82647398;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13428
	ctx.r8.s64 = ctx.r9.s64 + 13428;
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
loc_82647398:
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264c380
	sub_8264C380(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826473b8
	if (cr6.eq) goto loc_826473B8;
	// stfs f31,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f30,36(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// b 0x82647424
	goto loc_82647424;
loc_826473B8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264740c
	if (cr6.eq) goto loc_8264740C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,23
	r11.s64 = 23;
	// li r8,48
	ctx.r8.s64 = 48;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// lfs f0,-13388(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -13388);
	f0.f64 = double(temp.f32);
	// sth r8,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r8.u16);
	// lfs f13,-24324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24324);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// b 0x82647410
	goto loc_82647410;
loc_8264740C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82647410:
	// stfs f31,32(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f30,36(r5)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264c5b8
	sub_8264C5B8(ctx, base);
loc_82647424:
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647454
	if (!cr6.lt) goto loc_82647454;
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
loc_82647454:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_82647460"))) PPC_WEAK_FUNC(sub_82647460);
PPC_FUNC_IMPL(__imp__sub_82647460) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82647464"))) PPC_WEAK_FUNC(sub_82647464);
PPC_FUNC_IMPL(__imp__sub_82647464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82647468"))) PPC_WEAK_FUNC(sub_82647468);
PPC_FUNC_IMPL(__imp__sub_82647468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v127{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// li r12,-80
	r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826475b4
	if (cr6.eq) goto loc_826475B4;
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
	// lwz r27,0(r13)
	r27.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r26,12
	r26.s64 = 12;
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826474f0
	if (!cr6.lt) goto loc_826474F0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13448
	ctx.r8.s64 = ctx.r9.s64 + 13448;
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
loc_826474F0:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lvx128 v127,r0,r28
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82647510
	if (!cr6.eq) goto loc_82647510;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r10,r11,8976
	ctx.r10.s64 = r11.s64 + 8976;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vxor128 v127,v127,v0
	_mm_store_si128((__m128i*)v127.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
loc_82647510:
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c380
	sub_8264C380(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82647530
	if (cr6.eq) goto loc_82647530;
	// li r11,32
	r11.s64 = 32;
	// stvx128 v127,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82647584
	goto loc_82647584;
loc_82647530:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8264756c
	if (cr6.eq) goto loc_8264756C;
	// li r11,26
	r11.s64 = 26;
	// li r10,48
	ctx.r10.s64 = 48;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// b 0x82647570
	goto loc_82647570;
loc_8264756C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82647570:
	// li r11,32
	r11.s64 = 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stvx128 v127,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8264c5b8
	sub_8264C5B8(ctx, base);
loc_82647584:
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + r27.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826475b4
	if (!cr6.lt) goto loc_826475B4;
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
loc_826475B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-80
	r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + r0.u32) & ~0xF), VectorMaskL));
}

__attribute__((alias("__imp__sub_826475C0"))) PPC_WEAK_FUNC(sub_826475C0);
PPC_FUNC_IMPL(__imp__sub_826475C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826475C4"))) PPC_WEAK_FUNC(sub_826475C4);
PPC_FUNC_IMPL(__imp__sub_826475C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826475C8"))) PPC_WEAK_FUNC(sub_826475C8);
PPC_FUNC_IMPL(__imp__sub_826475C8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82647680
	if (cr6.eq) goto loc_82647680;
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
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647640
	if (!cr6.lt) goto loc_82647640;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13464
	ctx.r8.s64 = ctx.r9.s64 + 13464;
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
loc_82647640:
	// li r5,26
	ctx.r5.s64 = 26;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264c1f8
	sub_8264C1F8(ctx, base);
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647680
	if (!cr6.lt) goto loc_82647680;
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
loc_82647680:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82647684"))) PPC_WEAK_FUNC(sub_82647684);
PPC_FUNC_IMPL(__imp__sub_82647684) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82647688"))) PPC_WEAK_FUNC(sub_82647688);
PPC_FUNC_IMPL(__imp__sub_82647688) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82647790
	if (cr6.eq) goto loc_82647790;
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
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647700
	if (!cr6.lt) goto loc_82647700;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13480
	ctx.r8.s64 = ctx.r9.s64 + 13480;
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
loc_82647700:
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264c380
	sub_8264C380(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82647760
	if (!cr6.eq) goto loc_82647760;
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
	// beq cr6,0x82647750
	if (cr6.eq) goto loc_82647750;
	// li r11,25
	r11.s64 = 25;
	// li r10,32
	ctx.r10.s64 = 32;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// b 0x82647754
	goto loc_82647754;
loc_82647750:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82647754:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264c5b8
	sub_8264C5B8(ctx, base);
loc_82647760:
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647790
	if (!cr6.lt) goto loc_82647790;
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
loc_82647790:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82647794"))) PPC_WEAK_FUNC(sub_82647794);
PPC_FUNC_IMPL(__imp__sub_82647794) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82647798"))) PPC_WEAK_FUNC(sub_82647798);
PPC_FUNC_IMPL(__imp__sub_82647798) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,0(r13)
	r30.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r29,12
	r29.s64 = 12;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826477f8
	if (!cr6.lt) goto loc_826477F8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13496
	ctx.r8.s64 = ctx.r9.s64 + 13496;
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
loc_826477F8:
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264c380
	sub_8264C380(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82647858
	if (!cr6.eq) goto loc_82647858;
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
	// beq cr6,0x82647848
	if (cr6.eq) goto loc_82647848;
	// li r11,27
	r11.s64 = 27;
	// li r10,32
	ctx.r10.s64 = 32;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// sth r10,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r10.u16);
	// b 0x8264784c
	goto loc_8264784C;
loc_82647848:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8264784C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8264c5b8
	sub_8264C5B8(ctx, base);
loc_82647858:
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647888
	if (!cr6.lt) goto loc_82647888;
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
loc_82647888:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8264788C"))) PPC_WEAK_FUNC(sub_8264788C);
PPC_FUNC_IMPL(__imp__sub_8264788C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82647890"))) PPC_WEAK_FUNC(sub_82647890);
PPC_FUNC_IMPL(__imp__sub_82647890) {
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
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r29,0(r13)
	r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,12
	r28.s64 = 12;
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826478f0
	if (!cr6.lt) goto loc_826478F0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13512
	ctx.r8.s64 = ctx.r9.s64 + 13512;
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
loc_826478F0:
	// li r5,27
	ctx.r5.s64 = 27;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8264c1f8
	sub_8264C1F8(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r31,28(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82647954
	if (cr6.eq) goto loc_82647954;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82647954
	if (!cr6.gt) goto loc_82647954;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
loc_82647948:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfsu f0,8(r11)
	temp.f32 = float(f0.f64);
	ea = 8 + r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	r11.u32 = ea;
	// bdnz 0x82647948
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82647948;
loc_82647954:
	// lwzx r10,r28,r29
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r29.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647984
	if (!cr6.lt) goto loc_82647984;
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
loc_82647984:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82647988"))) PPC_WEAK_FUNC(sub_82647988);
PPC_FUNC_IMPL(__imp__sub_82647988) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8264798C"))) PPC_WEAK_FUNC(sub_8264798C);
PPC_FUNC_IMPL(__imp__sub_8264798C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82647990"))) PPC_WEAK_FUNC(sub_82647990);
PPC_FUNC_IMPL(__imp__sub_82647990) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x826479cc
	if (!cr6.eq) goto loc_826479CC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
loc_826479CC:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x826479fc
	if (cr6.eq) goto loc_826479FC;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82646e90
	sub_82646E90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_826479FC:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// ld r25,40(r31)
	r25.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// bl 0x8262a208
	sub_8262A208(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82646e90
	sub_82646E90(ctx, base);
	// std r25,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r25.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82647A2C"))) PPC_WEAK_FUNC(sub_82647A2C);
PPC_FUNC_IMPL(__imp__sub_82647A2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82647A30"))) PPC_WEAK_FUNC(sub_82647A30);
PPC_FUNC_IMPL(__imp__sub_82647A30) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82647a64
	if (!cr6.eq) goto loc_82647A64;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
loc_82647A64:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82647a8c
	if (cr6.eq) goto loc_82647A8C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82646fe8
	sub_82646FE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_82647A8C:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// ld r27,40(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// bl 0x8262a208
	sub_8262A208(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82646fe8
	sub_82646FE8(ctx, base);
	// std r27,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r27.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82647AB4"))) PPC_WEAK_FUNC(sub_82647AB4);
PPC_FUNC_IMPL(__imp__sub_82647AB4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82647AB8"))) PPC_WEAK_FUNC(sub_82647AB8);
PPC_FUNC_IMPL(__imp__sub_82647AB8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
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
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82647af4
	if (!cr6.eq) goto loc_82647AF4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
loc_82647AF4:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82647b24
	if (cr6.eq) goto loc_82647B24;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826471b8
	sub_826471B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e945c
	return;
loc_82647B24:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// ld r25,40(r31)
	r25.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// bl 0x8262a208
	sub_8262A208(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826471b8
	sub_826471B8(ctx, base);
	// std r25,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r25.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82647B54"))) PPC_WEAK_FUNC(sub_82647B54);
PPC_FUNC_IMPL(__imp__sub_82647B54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82647B58"))) PPC_WEAK_FUNC(sub_82647B58);
PPC_FUNC_IMPL(__imp__sub_82647B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82647b9c
	if (!cr6.eq) goto loc_82647B9C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
loc_82647B9C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82647bd4
	if (cr6.eq) goto loc_82647BD4;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82647310
	sub_82647310(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x828e9464
	return;
loc_82647BD4:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// ld r27,40(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// bl 0x8262a208
	sub_8262A208(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82647310
	sub_82647310(ctx, base);
	// std r27,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r27.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
}

__attribute__((alias("__imp__sub_82647C0C"))) PPC_WEAK_FUNC(sub_82647C0C);
PPC_FUNC_IMPL(__imp__sub_82647C0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82647C10"))) PPC_WEAK_FUNC(sub_82647C10);
PPC_FUNC_IMPL(__imp__sub_82647C10) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82647c44
	if (!cr6.eq) goto loc_82647C44;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
loc_82647C44:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82647c6c
	if (cr6.eq) goto loc_82647C6C;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82647468
	sub_82647468(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_82647C6C:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// ld r27,40(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// bl 0x8262a208
	sub_8262A208(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82647468
	sub_82647468(ctx, base);
	// std r27,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r27.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82647C94"))) PPC_WEAK_FUNC(sub_82647C94);
PPC_FUNC_IMPL(__imp__sub_82647C94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82647C98"))) PPC_WEAK_FUNC(sub_82647C98);
PPC_FUNC_IMPL(__imp__sub_82647C98) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82647cc8
	if (!cr6.eq) goto loc_82647CC8;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
loc_82647CC8:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82647cec
	if (cr6.eq) goto loc_82647CEC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826475c8
	sub_826475C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_82647CEC:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// ld r28,40(r31)
	r28.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// bl 0x8262a208
	sub_8262A208(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x826475c8
	sub_826475C8(ctx, base);
	// std r28,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r28.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82647D10"))) PPC_WEAK_FUNC(sub_82647D10);
PPC_FUNC_IMPL(__imp__sub_82647D10) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82647D14"))) PPC_WEAK_FUNC(sub_82647D14);
PPC_FUNC_IMPL(__imp__sub_82647D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82647D18"))) PPC_WEAK_FUNC(sub_82647D18);
PPC_FUNC_IMPL(__imp__sub_82647D18) {
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
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 32);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x82647d44
	if (!cr6.eq) goto loc_82647D44;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,204(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 204);
loc_82647D44:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82647d64
	if (cr6.eq) goto loc_82647D64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82647688
	sub_82647688(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_82647D64:
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// ld r29,40(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// bl 0x8262a208
	sub_8262A208(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82647688
	sub_82647688(ctx, base);
	// std r29,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r29.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82647D84"))) PPC_WEAK_FUNC(sub_82647D84);
PPC_FUNC_IMPL(__imp__sub_82647D84) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82647D88"))) PPC_WEAK_FUNC(sub_82647D88);
PPC_FUNC_IMPL(__imp__sub_82647D88) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82647D90"))) PPC_WEAK_FUNC(sub_82647D90);
PPC_FUNC_IMPL(__imp__sub_82647D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,176
	r11.s64 = ctx.r3.s64 + 176;
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82647DAC"))) PPC_WEAK_FUNC(sub_82647DAC);
PPC_FUNC_IMPL(__imp__sub_82647DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82647DB0"))) PPC_WEAK_FUNC(sub_82647DB0);
PPC_FUNC_IMPL(__imp__sub_82647DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r3,176
	ctx.r4.s64 = ctx.r3.s64 + 176;
	// li r11,16
	r11.s64 = 16;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r10,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
}

__attribute__((alias("__imp__sub_82647DCC"))) PPC_WEAK_FUNC(sub_82647DCC);
PPC_FUNC_IMPL(__imp__sub_82647DCC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8264a5f8
	sub_8264A5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82647DD0"))) PPC_WEAK_FUNC(sub_82647DD0);
PPC_FUNC_IMPL(__imp__sub_82647DD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,212(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 212);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82647e00
	if (!cr6.gt) goto loc_82647E00;
	// lwz r10,208(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 208);
loc_82647DE4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x82647e0c
	if (cr6.eq) goto loc_82647E0C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82647de4
	if (cr6.lt) goto loc_82647DE4;
loc_82647E00:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
loc_82647E0C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82647E18"))) PPC_WEAK_FUNC(sub_82647E18);
PPC_FUNC_IMPL(__imp__sub_82647E18) {
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
	// lwz r11,216(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82647e80
	if (!cr6.eq) goto loc_82647E80;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,208(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// addi r5,r9,13528
	ctx.r5.s64 = ctx.r9.s64 + 13528;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82647E80:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,-10972
	ctx.r5.s64 = r11.s64 + -10972;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8264a370
	sub_8264A370(ctx, base);
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

__attribute__((alias("__imp__sub_82647EA8"))) PPC_WEAK_FUNC(sub_82647EA8);
PPC_FUNC_IMPL(__imp__sub_82647EA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82647EAC"))) PPC_WEAK_FUNC(sub_82647EAC);
PPC_FUNC_IMPL(__imp__sub_82647EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82647EB0"))) PPC_WEAK_FUNC(sub_82647EB0);
PPC_FUNC_IMPL(__imp__sub_82647EB0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,12
	r24.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwzx r11,r24,r25
	r11.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82647efc
	if (!cr6.lt) goto loc_82647EFC;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13544
	ctx.r8.s64 = ctx.r9.s64 + 13544;
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
loc_82647EFC:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// beq cr6,0x82647f34
	if (cr6.eq) goto loc_82647F34;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82647f34
	if (cr6.eq) goto loc_82647F34;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// b 0x82647f38
	goto loc_82647F38;
loc_82647F34:
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
loc_82647F38:
	// lwz r11,212(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r31,208(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x82648010
	if (cr0.lt) goto loc_82648010;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r28,16
	r28.s64 = 16;
	// addi r29,r11,7520
	r29.s64 = r11.s64 + 7520;
loc_82647F54:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82648004
	if (cr6.eq) goto loc_82648004;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// lvx128 v12,r30,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + r28.u32) & ~0xF), VectorMaskL));
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// vsubfp v9,v13,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v8,v9
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v5,v7,v9
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v4,v11,v9
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// vmrghw v3,v6,v0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v2,v4,v5
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrghw v1,v2,v3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// stvx128 v1,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r0,r11
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r0,r9
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r0,r8
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r0,r10
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v27,v12,v28
	_mm_store_ps(v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v28.f32)));
	// vmsum3fp128 v26,v31,v27
	_mm_store_ps(v26.f32, _mm_dp_ps(_mm_load_ps(v31.f32), _mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v25,v30,v27
	_mm_store_ps(v25.f32, _mm_dp_ps(_mm_load_ps(v30.f32), _mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v24,v29,v27
	_mm_store_ps(v24.f32, _mm_dp_ps(_mm_load_ps(v29.f32), _mm_load_ps(v27.f32), 0xEF));
	// vmrghw v23,v26,v0
	_mm_store_si128((__m128i*)v23.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v26.u32)));
	// vmrghw v22,v24,v25
	_mm_store_si128((__m128i*)v22.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v25.u32), _mm_load_si128((__m128i*)v24.u32)));
	// vmrghw v21,v22,v23
	_mm_store_si128((__m128i*)v21.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v23.u32), _mm_load_si128((__m128i*)v22.u32)));
	// stvx128 v21,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82648004:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bge 0x82647f54
	if (!cr0.lt) goto loc_82647F54;
loc_82648010:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82648040
	if (!cr6.lt) goto loc_82648040;
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
loc_82648040:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82648044"))) PPC_WEAK_FUNC(sub_82648044);
PPC_FUNC_IMPL(__imp__sub_82648044) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82648048"))) PPC_WEAK_FUNC(sub_82648048);
PPC_FUNC_IMPL(__imp__sub_82648048) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,0(r13)
	r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r24,12
	r24.s64 = 12;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwzx r11,r24,r25
	r11.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82648094
	if (!cr6.lt) goto loc_82648094;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13544
	ctx.r8.s64 = ctx.r9.s64 + 13544;
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
loc_82648094:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// beq cr6,0x826480cc
	if (cr6.eq) goto loc_826480CC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826480cc
	if (cr6.eq) goto loc_826480CC;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// b 0x826480d0
	goto loc_826480D0;
loc_826480CC:
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
loc_826480D0:
	// lwz r11,212(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lwz r27,208(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// addic. r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// blt 0x826481bc
	if (cr0.lt) goto loc_826481BC;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r28,16
	r28.s64 = 16;
	// addi r29,r11,7520
	r29.s64 = r11.s64 + 7520;
loc_826480EC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826481b0
	if (cr6.eq) goto loc_826481B0;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// lvx128 v12,r31,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r31.u32 + r28.u32) & ~0xF), VectorMaskL));
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vsubfp v9,v13,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v8,r0,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v6,v8,v9
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v5,v7,v9
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// vmsum3fp128 v4,v11,v9
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// vmrghw v3,v6,v0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v2,v4,v5
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrghw v1,v2,v3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// stvx128 v1,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v29,r0,r11
	simd::store_shuffled(v29, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r0,r9
	simd::store_shuffled(v31, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r0,r8
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r0,r10
	simd::store_shuffled(v28, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v27,v12,v28
	_mm_store_ps(v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v28.f32)));
	// vmsum3fp128 v26,v31,v27
	_mm_store_ps(v26.f32, _mm_dp_ps(_mm_load_ps(v31.f32), _mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v25,v30,v27
	_mm_store_ps(v25.f32, _mm_dp_ps(_mm_load_ps(v30.f32), _mm_load_ps(v27.f32), 0xEF));
	// vmsum3fp128 v24,v29,v27
	_mm_store_ps(v24.f32, _mm_dp_ps(_mm_load_ps(v29.f32), _mm_load_ps(v27.f32), 0xEF));
	// vmrghw v23,v26,v0
	_mm_store_si128((__m128i*)v23.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)v26.u32)));
	// vmrghw v22,v24,v25
	_mm_store_si128((__m128i*)v22.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v25.u32), _mm_load_si128((__m128i*)v24.u32)));
	// vmrghw v21,v22,v23
	_mm_store_si128((__m128i*)v21.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v23.u32), _mm_load_si128((__m128i*)v22.u32)));
	// stvx128 v21,r0,r23
	_mm_store_si128((__m128i*)(base + ((r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826481b0
	if (cr6.eq) goto loc_826481B0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
loc_826481B0:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bge 0x826480ec
	if (!cr0.lt) goto loc_826480EC;
loc_826481BC:
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826481d8
	if (cr6.eq) goto loc_826481D8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82628178
	sub_82628178(ctx, base);
loc_826481D8:
	// lwzx r10,r24,r25
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + r25.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82648208
	if (!cr6.lt) goto loc_82648208;
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
loc_82648208:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8264820C"))) PPC_WEAK_FUNC(sub_8264820C);
PPC_FUNC_IMPL(__imp__sub_8264820C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82648210"))) PPC_WEAK_FUNC(sub_82648210);
PPC_FUNC_IMPL(__imp__sub_82648210) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// add r22,r10,r11
	r22.u64 = ctx.r10.u64 + r11.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82648268
	if (!cr6.lt) goto loc_82648268;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,13556
	ctx.r8.s64 = ctx.r9.s64 + 13556;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r4,r10,12
	ctx.r4.s64 = ctx.r10.s64 + 12;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
loc_82648268:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,48
	ctx.r10.s64 = 48;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// addi r4,r7,7632
	ctx.r4.s64 = ctx.r7.s64 + 7632;
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,7832(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7832);
	f0.f64 = double(temp.f32);
	// vsubfp v8,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stfs f0,192(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lwz r11,120(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r11,32
	ctx.r10.s64 = r11.s64 + 32;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lbz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// vmsum3fp128 v7,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// stb r8,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r8.u8);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// vrsqrtefp v0,v7
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v7.f32))));
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// vmulfp128 v6,v7,v13
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)));
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// vnmsubfp v9,v6,v10,v13
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// vcmpeqfp v9,v12,v7
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32)));
	// lvx128 v5,r0,r10
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v5,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,32
	ctx.r6.s64 = 32;
	// lvx128 v4,r10,r8
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vnmsubfp v13,v6,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// stvx128 v4,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v3,r10,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v3,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r28,8
	ctx.r9.s64 = r28.s64 + 8;
	// vsel v13,v0,v12,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// stvx128 v8,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v2,v7,v13
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v2,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lfs f13,20(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,212(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// lfs f12,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,192(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r29,128(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// lwz r10,124(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// ble cr6,0x82648428
	if (!cr6.gt) goto loc_82648428;
	// addi r27,r10,8
	r27.s64 = ctx.r10.s64 + 8;
	// li r26,0
	r26.s64 = 0;
	// mr r23,r11
	r23.u64 = r11.u64;
loc_82648388:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r10,208(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwzx r30,r26,r10
	r30.u64 = PPC_LOAD_U32(r26.u32 + ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8264841c
	if (cr6.eq) goto loc_8264841C;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8264841c
	if (cr6.eq) goto loc_8264841C;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x8264841c
	if (cr6.eq) goto loc_8264841C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r8,r11,13
	ctx.r8.s64 = r11.s64 + 13;
	// rlwinm r11,r8,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r29
	ctx.r9.u64 = r11.u64 + r29.u64;
	// lwz r8,2476(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2476);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8264841C:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x82648388
	if (!cr0.eq) goto loc_82648388;
loc_82648428:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82648458
	if (!cr6.lt) goto loc_82648458;
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
loc_82648458:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_8264845C"))) PPC_WEAK_FUNC(sub_8264845C);
PPC_FUNC_IMPL(__imp__sub_8264845C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82648460"))) PPC_WEAK_FUNC(sub_82648460);
PPC_FUNC_IMPL(__imp__sub_82648460) {
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
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826484a8
	if (!cr6.gt) goto loc_826484A8;
	// lwz r11,208(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
loc_8264848C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beq cr6,0x826484ac
	if (cr6.eq) goto loc_826484AC;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x8264848c
	if (cr6.lt) goto loc_8264848C;
loc_826484A8:
	// li r31,-1
	r31.s64 = -1;
loc_826484AC:
	// rlwinm r11,r31,1,31,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// xori r9,r11,1
	ctx.r9.u64 = r11.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x826489b8
	sub_826489B8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82648500
	if (cr6.lt) goto loc_82648500;
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,212(r30)
	PPC_STORE_U32(r30.u32 + 212, r11.u32);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// beq cr6,0x826484f8
	if (cr6.eq) goto loc_826484F8;
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 208);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r11.u32);
loc_826484F8:
	// li r11,1
	r11.s64 = 1;
	// stb r11,220(r30)
	PPC_STORE_U8(r30.u32 + 220, r11.u8);
loc_82648500:
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

__attribute__((alias("__imp__sub_82648514"))) PPC_WEAK_FUNC(sub_82648514);
PPC_FUNC_IMPL(__imp__sub_82648514) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82648518"))) PPC_WEAK_FUNC(sub_82648518);
PPC_FUNC_IMPL(__imp__sub_82648518) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82648948
	sub_82648948(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82648588
	if (!cr6.eq) goto loc_82648588;
	// addi r31,r30,208
	r31.s64 = r30.s64 + 208;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82648564
	if (!cr6.eq) goto loc_82648564;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82648564:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stb r9,220(r30)
	PPC_STORE_U8(r30.u32 + 220, ctx.r9.u8);
loc_82648588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8264858C"))) PPC_WEAK_FUNC(sub_8264858C);
PPC_FUNC_IMPL(__imp__sub_8264858C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82648590"))) PPC_WEAK_FUNC(sub_82648590);
PPC_FUNC_IMPL(__imp__sub_82648590) {
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
	// lbz r11,220(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 220);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826485e4
	if (cr6.eq) goto loc_826485E4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,212(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// ble cr6,0x826485e0
	if (!cr6.gt) goto loc_826485E0;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// lwz r3,208(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82648a20
	sub_82648A20(ctx, base);
loc_826485E0:
	// stb r30,220(r31)
	PPC_STORE_U8(r31.u32 + 220, r30.u8);
loc_826485E4:
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

__attribute__((alias("__imp__sub_826485F8"))) PPC_WEAK_FUNC(sub_826485F8);
PPC_FUNC_IMPL(__imp__sub_826485F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826485FC"))) PPC_WEAK_FUNC(sub_826485FC);
PPC_FUNC_IMPL(__imp__sub_826485FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82648600"))) PPC_WEAK_FUNC(sub_82648600);
PPC_FUNC_IMPL(__imp__sub_82648600) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,13592
	ctx.r10.s64 = r11.s64 + 13592;
	// addi r31,r3,208
	r31.s64 = ctx.r3.s64 + 208;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,212(r30)
	PPC_STORE_U32(r30.u32 + 212, r29.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8264865c
	if (!cr6.eq) goto loc_8264865C;
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
loc_8264865C:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x8264a910
	sub_8264A910(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82648674"))) PPC_WEAK_FUNC(sub_82648674);
PPC_FUNC_IMPL(__imp__sub_82648674) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82648678"))) PPC_WEAK_FUNC(sub_82648678);
PPC_FUNC_IMPL(__imp__sub_82648678) {
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
	// lwz r11,212(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826486e0
	if (!cr6.eq) goto loc_826486E0;
	// addi r31,r3,208
	r31.s64 = ctx.r3.s64 + 208;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,216(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 216);
	// li r30,0
	r30.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r30,212(r29)
	PPC_STORE_U32(r29.u32 + 212, r30.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826486d4
	if (!cr6.eq) goto loc_826486D4;
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
loc_826486D4:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_826486E0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8264a538
	sub_8264A538(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826486EC"))) PPC_WEAK_FUNC(sub_826486EC);
PPC_FUNC_IMPL(__imp__sub_826486EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826486F0"))) PPC_WEAK_FUNC(sub_826486F0);
PPC_FUNC_IMPL(__imp__sub_826486F0) {
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
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82657808
	sub_82657808(ctx, base);
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// subf r7,r10,r31
	ctx.r7.s64 = r31.s64 - ctx.r10.s64;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
	// stw r9,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r9.u32);
	// addi r6,r8,13592
	ctx.r6.s64 = ctx.r8.s64 + 13592;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// addi r10,r31,176
	ctx.r10.s64 = r31.s64 + 176;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r7,32(r31)
	PPC_STORE_U8(r31.u32 + 32, ctx.r7.u8);
	// stw r6,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// stw r9,216(r31)
	PPC_STORE_U32(r31.u32 + 216, ctx.r9.u32);
	// stb r11,220(r31)
	PPC_STORE_U8(r31.u32 + 220, r11.u8);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r30,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r30.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r29,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r29.u32);
	// bl 0x82648b10
	sub_82648B10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82648788"))) PPC_WEAK_FUNC(sub_82648788);
PPC_FUNC_IMPL(__imp__sub_82648788) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8264878C"))) PPC_WEAK_FUNC(sub_8264878C);
PPC_FUNC_IMPL(__imp__sub_8264878C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82648790"))) PPC_WEAK_FUNC(sub_82648790);
PPC_FUNC_IMPL(__imp__sub_82648790) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,224
	ctx.r4.s64 = 224;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r9,224
	ctx.r9.s64 = 224;
	// addi r4,r28,176
	ctx.r4.s64 = r28.s64 + 176;
	// sth r9,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r9.u16);
	// lwz r5,44(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// bl 0x826486f0
	sub_826486F0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r30,r28,140
	r30.s64 = r28.s64 + 140;
	// addi r31,r3,140
	r31.s64 = ctx.r3.s64 + 140;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,148(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 148);
	// lwz r8,144(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 144);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r8
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, xer);
	// bge cr6,0x82648850
	if (!cr6.lt) goto loc_82648850;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82648820
	if (!cr6.eq) goto loc_82648820;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82648820:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
loc_82648850:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ble cr6,0x82648880
	if (!cr6.gt) goto loc_82648880;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_82648870:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82648870
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82648870;
loc_82648880:
	// addi r30,r28,152
	r30.s64 = r28.s64 + 152;
	// addi r31,r27,152
	r31.s64 = r27.s64 + 152;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,160(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 160);
	// lwz r10,156(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 156);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bge cr6,0x826488fc
	if (!cr6.lt) goto loc_826488FC;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826488cc
	if (!cr6.eq) goto loc_826488CC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826488CC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
loc_826488FC:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ble cr6,0x8264892c
	if (!cr6.gt) goto loc_8264892C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_8264891C:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8264891c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8264891C;
loc_8264892C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82648b98
	sub_82648B98(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82648940"))) PPC_WEAK_FUNC(sub_82648940);
PPC_FUNC_IMPL(__imp__sub_82648940) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82648944"))) PPC_WEAK_FUNC(sub_82648944);
PPC_FUNC_IMPL(__imp__sub_82648944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82648948"))) PPC_WEAK_FUNC(sub_82648948);
PPC_FUNC_IMPL(__imp__sub_82648948) {
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
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// blt 0x826489b0
	if (cr0.lt) goto loc_826489B0;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_82648978:
	// lwz r11,140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 140);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826489a0
	if (cr6.eq) goto loc_826489A0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826489A0:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x82648978
	if (!cr0.lt) goto loc_82648978;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826489B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826489B4"))) PPC_WEAK_FUNC(sub_826489B4);
PPC_FUNC_IMPL(__imp__sub_826489B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826489B8"))) PPC_WEAK_FUNC(sub_826489B8);
PPC_FUNC_IMPL(__imp__sub_826489B8) {
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
	// lwz r11,144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stb r5,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r5.u8);
	// blt 0x82648a18
	if (cr0.lt) goto loc_82648A18;
	// rlwinm r31,r30,2,0,29
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_826489E4:
	// lwz r11,140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 140);
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82648a0c
	if (cr6.eq) goto loc_82648A0C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82648A0C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// bge 0x826489e4
	if (!cr0.lt) goto loc_826489E4;
loc_82648A18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82648A1C"))) PPC_WEAK_FUNC(sub_82648A1C);
PPC_FUNC_IMPL(__imp__sub_82648A1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82648A20"))) PPC_WEAK_FUNC(sub_82648A20);
PPC_FUNC_IMPL(__imp__sub_82648A20) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_82648A38:
	// add r11,r4,r29
	r11.u64 = ctx.r4.u64 + r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
loc_82648A50:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bge cr6,0x82648a80
	if (!cr6.lt) goto loc_82648A80;
loc_82648A6C:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x82648a6c
	if (cr6.lt) goto loc_82648A6C;
loc_82648A80:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x82648aac
	if (!cr6.lt) goto loc_82648AAC;
loc_82648A98:
	// lwzu r9,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82648a98
	if (cr6.lt) goto loc_82648A98;
loc_82648AAC:
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// blt cr6,0x82648ae0
	if (cr6.lt) goto loc_82648AE0;
	// beq cr6,0x82648ad0
	if (cr6.eq) goto loc_82648AD0;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwzx r7,r11,r30
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// stwx r7,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r7.u32);
loc_82648AD0:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// ble cr6,0x82648a50
	if (!cr6.gt) goto loc_82648A50;
loc_82648AE0:
	// cmpw cr6,r4,r5
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, xer);
	// bge cr6,0x82648af4
	if (!cr6.lt) goto loc_82648AF4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82648a20
	sub_82648A20(ctx, base);
loc_82648AF4:
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// bge cr6,0x82648b04
	if (!cr6.lt) goto loc_82648B04;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82648a38
	goto loc_82648A38;
loc_82648B04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82648B08"))) PPC_WEAK_FUNC(sub_82648B08);
PPC_FUNC_IMPL(__imp__sub_82648B08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82648B0C"))) PPC_WEAK_FUNC(sub_82648B0C);
PPC_FUNC_IMPL(__imp__sub_82648B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82648B10"))) PPC_WEAK_FUNC(sub_82648B10);
PPC_FUNC_IMPL(__imp__sub_82648B10) {
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
	// lwz r11,216(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82648b44
	if (cr6.eq) goto loc_82648B44;
	// lwz r10,208(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x82648b80
	if (cr6.eq) goto loc_82648B80;
loc_82648B44:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// bge cr6,0x82648b54
	if (!cr6.lt) goto loc_82648B54;
	// li r30,4
	r30.s64 = 4;
loc_82648B54:
	// addi r31,r3,208
	r31.s64 = ctx.r3.s64 + 208;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r11,2
	ctx.r10.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bge cr6,0x82648b80
	if (!cr6.lt) goto loc_82648B80;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82648B80:
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

__attribute__((alias("__imp__sub_82648B94"))) PPC_WEAK_FUNC(sub_82648B94);
PPC_FUNC_IMPL(__imp__sub_82648B94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82648B98"))) PPC_WEAK_FUNC(sub_82648B98);
PPC_FUNC_IMPL(__imp__sub_82648B98) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r3,120
	r30.s64 = ctx.r3.s64 + 120;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r28,124(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r28,r31
	cr6.compare<int32_t>(r28.s32, r31.s32, xer);
	// bgt cr6,0x82648bc8
	if (cr6.gt) goto loc_82648BC8;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82648BC8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bge cr6,0x82648bf8
	if (!cr6.lt) goto loc_82648BF8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82648be8
	if (cr6.lt) goto loc_82648BE8;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82648BE8:
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82648BF8:
	// lwz r10,120(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ble cr6,0x82648c30
	if (!cr6.gt) goto loc_82648C30;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82648C10:
	// ldx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// ld r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r6.u64);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82648c10
	if (!cr0.eq) goto loc_82648C10;
loc_82648C30:
	// lwz r8,120(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 120);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf. r10,r31,r28
	ctx.r10.s64 = r28.s64 - r31.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// ble 0x82648c78
	if (!cr0.gt) goto loc_82648C78;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - r11.s64;
loc_82648C50:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82648c6c
	if (cr6.eq) goto loc_82648C6C;
	// ldx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + r11.u32);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// ld r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// std r6,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r6.u64);
loc_82648C6C:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne 0x82648c50
	if (!cr0.eq) goto loc_82648C50;
loc_82648C78:
	// stw r28,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82648C80"))) PPC_WEAK_FUNC(sub_82648C80);
PPC_FUNC_IMPL(__imp__sub_82648C80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82648C84"))) PPC_WEAK_FUNC(sub_82648C84);
PPC_FUNC_IMPL(__imp__sub_82648C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

