#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8265FF58"))) PPC_WEAK_FUNC(sub_8265FF58);
PPC_FUNC_IMPL(__imp__sub_8265FF58) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_8265FF5C"))) PPC_WEAK_FUNC(sub_8265FF5C);
PPC_FUNC_IMPL(__imp__sub_8265FF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8265FF60"))) PPC_WEAK_FUNC(sub_8265FF60);
PPC_FUNC_IMPL(__imp__sub_8265FF60) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// bl 0x8266c098
	sub_8266C098(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,18044
	ctx.r8.s64 = r11.s64 + 18044;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r30,0
	r30.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r6,r10,17888
	ctx.r6.s64 = ctx.r10.s64 + 17888;
	// addi r5,r9,17904
	ctx.r5.s64 = ctx.r9.s64 + 17904;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r4,r7,17920
	ctx.r4.s64 = ctx.r7.s64 + 17920;
	// stw r6,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r6.u32);
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r5,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r5.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// stw r4,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r4.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// addi r26,r31,80
	r26.s64 = r31.s64 + 80;
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// addi r28,r31,88
	r28.s64 = r31.s64 + 88;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// stw r27,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r27.u32);
	// bl 0x8262a2b8
	sub_8262A2B8(ctx, base);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// stw r27,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r27.u32);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x8262a2b8
	sub_8262A2B8(ctx, base);
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x8263dd58
	sub_8263DD58(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x8262a2b8
	sub_8262A2B8(ctx, base);
	// addi r27,r31,320
	r27.s64 = r31.s64 + 320;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8262a2b8
	sub_8262A2B8(ctx, base);
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stb r30,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r30.u8);
	// li r4,10000
	ctx.r4.s64 = 10000;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// bl 0x82c66d30
	sub_82C66D30(ctx, base);
	// stw r31,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r31.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// stw r26,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r26.u32);
	// lwz r10,100(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// stw r28,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, r28.u32);
	// lwz r9,100(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// stw r28,40(r9)
	PPC_STORE_U32(ctx.r9.u32 + 40, r28.u32);
	// lwz r8,100(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// stw r28,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, r28.u32);
	// stw r27,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r27.u32);
	// lwz r7,100(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// stw r29,44(r7)
	PPC_STORE_U32(ctx.r7.u32 + 44, r29.u32);
	// lwz r6,100(r25)
	ctx.r6.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// stw r29,100(r6)
	PPC_STORE_U32(ctx.r6.u32 + 100, r29.u32);
	// lwz r5,100(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// stw r29,76(r5)
	PPC_STORE_U32(ctx.r5.u32 + 76, r29.u32);
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// stw r29,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, r29.u32);
	// lwz r11,100(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// stw r29,108(r11)
	PPC_STORE_U32(r11.u32 + 108, r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82660090"))) PPC_WEAK_FUNC(sub_82660090);
PPC_FUNC_IMPL(__imp__sub_82660090) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82660094"))) PPC_WEAK_FUNC(sub_82660094);
PPC_FUNC_IMPL(__imp__sub_82660094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660098"))) PPC_WEAK_FUNC(sub_82660098);
PPC_FUNC_IMPL(__imp__sub_82660098) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r11,18044
	ctx.r10.s64 = r11.s64 + 18044;
	// addi r29,r3,148
	r29.s64 = ctx.r3.s64 + 148;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,156(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 156);
	// li r28,0
	r28.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r28.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x826600f4
	if (!cr6.eq) goto loc_826600F4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
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
loc_826600F4:
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// addi r31,r30,108
	r31.s64 = r30.s64 + 108;
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r28,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r28.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266013c
	if (!cr6.eq) goto loc_8266013C;
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
loc_8266013C:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r11,11900
	ctx.r10.s64 = r11.s64 + 11900;
	// stw r10,96(r30)
	PPC_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// stw r10,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r10.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// bl 0x8266c180
	sub_8266C180(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82660164"))) PPC_WEAK_FUNC(sub_82660164);
PPC_FUNC_IMPL(__imp__sub_82660164) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_82660168"))) PPC_WEAK_FUNC(sub_82660168);
PPC_FUNC_IMPL(__imp__sub_82660168) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82660358
	if (cr6.eq) goto loc_82660358;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// ble cr6,0x82660358
	if (!cr6.gt) goto loc_82660358;
	// ld r5,88(r6)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r6.u32 + 88);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// ld r9,80(r6)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r6.u32 + 80);
	// li r31,0
	r31.s64 = 0;
	// lwz r4,232(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r28,80
	r28.s64 = 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r26,-1
	r26.s64 = -1;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// li r3,15
	ctx.r3.s64 = 15;
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r28.u16);
	// sth r26,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r26.u16);
	// addi r6,r6,80
	ctx.r6.s64 = ctx.r6.s64 + 80;
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
	// li r28,2
	r28.s64 = 2;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// oris r24,r30,32768
	r24.u64 = r30.u64 | 2147483648;
	// std r9,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.r9.u64);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// std r5,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r5.u64);
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r31.u16);
	// sth r31,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, r31.u16);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// sth r30,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r30.u16);
	// sth r4,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r4.u16);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r8,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r8.u8);
	// lwz r5,116(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// ble cr6,0x82660264
	if (!cr6.gt) goto loc_82660264;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// twllei r4,0
	if (ctx.r4.u32 <= 0) __builtin_debugtrap();
	// rotlwi r11,r10,1
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r4
	ctx.r10.s32 = ctx.r10.s32 / ctx.r4.s32;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// andc r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 & ~ctx.r9.u64;
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// bl 0x82660fa0
	sub_82660FA0(ctx, base);
	// lhz r7,32(r27)
	ctx.r7.u64 = PPC_LOAD_U16(r27.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r28,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r28.u8);
	// lwz r3,200(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 200);
	// sth r7,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r7.u16);
	// bl 0x82bf86f8
	sub_82BF86F8(ctx, base);
loc_82660264:
	// lwz r3,200(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 200);
	// bl 0x82bf8ca8
	sub_82BF8CA8(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x82660320
	if (!cr6.gt) goto loc_82660320;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// li r10,14
	ctx.r10.s64 = 14;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r8,48
	ctx.r8.s64 = 48;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r6,r11,464
	ctx.r6.s64 = r11.s64 + 464;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lhz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// stb r10,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, ctx.r10.u8);
	// stb r31,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, r31.u8);
	// stb r28,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, r28.u8);
	// sth r8,164(r1)
	PPC_STORE_U16(ctx.r1.u32 + 164, ctx.r8.u16);
	// sth r26,166(r1)
	PPC_STORE_U16(ctx.r1.u32 + 166, r26.u16);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// sth r5,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r5.u16);
	// stw r4,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r27.u32);
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, r31.u32);
	// stw r6,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r6.u32);
	// lwz r4,120(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// bl 0x82649cd0
	sub_82649CD0(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r5,r11,464
	ctx.r5.s64 = r11.s64 + 464;
	// addi r4,r11,480
	ctx.r4.s64 = r11.s64 + 480;
	// bl 0x8265e3c8
	sub_8265E3C8(ctx, base);
	// stw r29,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, r29.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// lis r10,-31919
	ctx.r10.s64 = -2091843584;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r9,r10,-8448
	ctx.r9.s64 = ctx.r10.s64 + -8448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stw r9,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r9.u32);
	// stfs f0,456(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// bl 0x826759b0
	sub_826759B0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82646b38
	sub_82646B38(ctx, base);
loc_82660320:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r24,0,0,0
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x80000000;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8266036c
	if (!cr6.eq) goto loc_8266036C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r24,2
	ctx.r5.u64 = r24.u32 & 0x3FFFFFFF;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x828e9454
	return;
loc_82660358:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8266b938
	sub_8266B938(ctx, base);
loc_8266036C:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
}

__attribute__((alias("__imp__sub_82660370"))) PPC_WEAK_FUNC(sub_82660370);
PPC_FUNC_IMPL(__imp__sub_82660370) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82660374"))) PPC_WEAK_FUNC(sub_82660374);
PPC_FUNC_IMPL(__imp__sub_82660374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660378"))) PPC_WEAK_FUNC(sub_82660378);
PPC_FUNC_IMPL(__imp__sub_82660378) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93ec
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 200);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82660688
	if (cr6.eq) goto loc_82660688;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r25,204(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// lwz r31,76(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// addi r9,r31,127
	ctx.r9.s64 = r31.s64 + 127;
	// lwz r23,0(r3)
	r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r9,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// lis r19,-32768
	r19.s64 = -2147483648;
	// add r8,r11,r23
	ctx.r8.u64 = r11.u64 + r23.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// or r17,r31,r19
	r17.u64 = r31.u64 | r19.u64;
	// bl 0x8262d7e0
	sub_8262D7E0(ctx, base);
	// li r24,0
	r24.s64 = 0;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r19.u32);
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// addi r5,r11,4096
	ctx.r5.s64 = r11.s64 + 4096;
	// ori r6,r7,1000
	ctx.r6.u64 = ctx.r7.u64 | 1000;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r19.u32);
	// ble cr6,0x82660570
	if (!cr6.gt) goto loc_82660570;
	// li r20,1
	r20.s64 = 1;
loc_82660430:
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// lhz r11,168(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 168);
	// stbx r20,r11,r23
	PPC_STORE_U8(r11.u32 + r23.u32, r20.u8);
	// bl 0x82c5a8d0
	sub_82C5A8D0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r26,r24
	r26.u64 = r24.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82660564
	if (!cr6.gt) goto loc_82660564;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_8266045C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r31,r27,r11
	r31.u64 = r27.u64 + r11.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmplw cr6,r9,r25
	cr6.compare<uint32_t>(ctx.r9.u32, r25.u32, xer);
	// bne cr6,0x82660490
	if (!cr6.eq) goto loc_82660490;
	// lhz r11,168(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 168);
	// lbzx r10,r11,r23
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r23.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82660550
	if (!cr6.eq) goto loc_82660550;
loc_82660490:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// lwz r11,128(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r7,7216(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82660510
	if (cr6.eq) goto loc_82660510;
	// lbz r11,7220(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 7220);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82660510
	if (!cr6.eq) goto loc_82660510;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x826604ec
	if (!cr6.eq) goto loc_826604EC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826604EC:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// b 0x82660550
	goto loc_82660550;
loc_82660510:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,212(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82bfc8f8
	sub_82BFC8F8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82660550
	if (!cr6.eq) goto loc_82660550;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// lwz r31,212(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 212);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
loc_82660550:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x8266045c
	if (cr6.lt) goto loc_8266045C;
loc_82660564:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82660430
	if (!cr0.eq) goto loc_82660430;
loc_82660570:
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8266059c
	if (cr6.eq) goto loc_8266059C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r24.u8);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x82660168
	sub_82660168(ctx, base);
loc_8266059C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826605d4
	if (!cr6.eq) goto loc_826605D4;
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
loc_826605D4:
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
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// stw r19,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r19.u32);
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
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82660640
	if (!cr6.eq) goto loc_82660640;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_82660640:
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r19.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r17,0,0,0
	r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 0) & 0x80000000;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826606a0
	if (!cr6.eq) goto loc_826606A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// clrlwi r5,r17,2
	ctx.r5.u64 = r17.u32 & 0x3FFFFFFF;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x828e943c
	return;
loc_82660688:
	// addi r7,r22,60
	ctx.r7.s64 = r22.s64 + 60;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x8266cdd0
	sub_8266CDD0(ctx, base);
loc_826606A0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_826606A4"))) PPC_WEAK_FUNC(sub_826606A4);
PPC_FUNC_IMPL(__imp__sub_826606A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_826606A8"))) PPC_WEAK_FUNC(sub_826606A8);
PPC_FUNC_IMPL(__imp__sub_826606A8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,0(r13)
	r20.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r19,12
	r19.s64 = 12;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826606f8
	if (!cr6.lt) goto loc_826606F8;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,18128
	ctx.r8.s64 = ctx.r9.s64 + 18128;
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
loc_826606F8:
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// li r27,0
	r27.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r11,148(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r8.u32);
	// stw r27,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r27.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,16(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// bl 0x82bfd118
	sub_82BFD118(ctx, base);
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lis r21,-32768
	r21.s64 = -2147483648;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// mr r22,r27
	r22.u64 = r27.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// mr r11,r27
	r11.u64 = r27.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// blt cr6,0x82660784
	if (cr6.lt) goto loc_82660784;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
loc_82660768:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// bne cr6,0x82660784
	if (!cr6.eq) goto loc_82660784;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82660768
	if (!cr6.gt) goto loc_82660768;
loc_82660784:
	// mr r25,r11
	r25.u64 = r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82660a98
	if (cr6.gt) goto loc_82660A98;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
loc_82660798:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r10,r25,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r29,4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r21.u32);
	// bl 0x82c5a8d0
	sub_82C5A8D0(ctx, base);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82660a08
	if (!cr6.gt) goto loc_82660A08;
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_826607D4:
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwzx r31,r28,r11
	r31.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82bfc8f8
	sub_82BFC8F8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826609fc
	if (!cr6.eq) goto loc_826609FC;
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// lfs f0,332(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 332);
	f0.f64 = double(temp.f32);
	// lwz r9,12(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// extsb r8,r11
	ctx.r8.s64 = r11.s8;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r11,128(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 128);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,7216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 7216);
	// lbz r11,7220(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 7220);
	// beq cr6,0x82660828
	if (cr6.eq) goto loc_82660828;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
loc_82660828:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82660848
	if (cr6.eq) goto loc_82660848;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826609fc
	if (cr6.eq) goto loc_826609FC;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826609fc
	if (cr6.eq) goto loc_826609FC;
loc_82660848:
	// lbz r11,232(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 232);
	// lwz r30,204(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 204);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x82660884
	if (!cr6.eq) goto loc_82660884;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// lbz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// xor r4,r5,r29
	ctx.r4.u64 = ctx.r5.u64 ^ r29.u64;
	// lwz r30,204(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
loc_82660884:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfc7d8
	sub_82BFC7D8(ctx, base);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x826608cc
	if (!cr6.eq) goto loc_826608CC;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_826608CC:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// mr r11,r27
	r11.u64 = r27.u64;
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r31.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x8266091c
	if (!cr6.gt) goto loc_8266091C;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82660900:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r7
	cr6.compare<uint32_t>(r30.u32, ctx.r7.u32, xer);
	// beq cr6,0x82660dc4
	if (cr6.eq) goto loc_82660DC4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82660900
	if (cr6.lt) goto loc_82660900;
loc_8266091C:
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
	// bne cr6,0x82660948
	if (!cr6.eq) goto loc_82660948;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82660948:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8266097c
	if (cr0.eq) goto loc_8266097C;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r27.u32);
	// stw r27,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r27.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8266097C:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826609b8
	if (cr0.eq) goto loc_826609B8;
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r27.u32);
	// stw r27,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_826609B8:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r30,-24(r7)
	PPC_STORE_U32(ctx.r7.u32 + -24, r30.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
loc_826609EC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_826609FC:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// bne 0x826607d4
	if (!cr0.eq) goto loc_826607D4;
loc_82660A08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// addi r31,r25,1
	r31.s64 = r25.s64 + 1;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// bgt cr6,0x82660a48
	if (cr6.gt) goto loc_82660A48;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_82660A2C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x82660a48
	if (!cr6.eq) goto loc_82660A48;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// ble cr6,0x82660a2c
	if (!cr6.gt) goto loc_82660A2C;
loc_82660A48:
	// mr r25,r31
	r25.u64 = r31.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82660a84
	if (!cr6.eq) goto loc_82660A84;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,8
	ctx.r6.s64 = 8;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82660A84:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// stw r21,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r21.u32);
	// ble cr6,0x82660798
	if (!cr6.gt) goto loc_82660798;
loc_82660A98:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82bfcaf8
	sub_82BFCAF8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82660af8
	if (!cr6.gt) goto loc_82660AF8;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r11,r27
	r11.u64 = r27.u64;
	// add r8,r27,r8
	ctx.r8.u64 = r27.u64 + ctx.r8.u64;
loc_82660AC0:
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// add r7,r11,r8
	ctx.r7.u64 = r11.u64 + ctx.r8.u64;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// blt cr6,0x82660ac0
	if (cr6.lt) goto loc_82660AC0;
loc_82660AF8:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// rlwinm r11,r22,2,0,29
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r26,0(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r27
	r28.u64 = r27.u64;
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r11,r26
	ctx.r10.u64 = r11.u64 + r26.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82660c64
	if (!cr6.gt) goto loc_82660C64;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_82660B28:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r30,r11
	ctx.r10.u64 = r30.u64 + r11.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwzx r29,r30,r11
	r29.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// mr r11,r27
	r11.u64 = r27.u64;
	// lwz r31,4(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// ble cr6,0x82660b6c
	if (!cr6.gt) goto loc_82660B6C;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82660B50:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r7
	cr6.compare<uint32_t>(r31.u32, ctx.r7.u32, xer);
	// beq cr6,0x82660dd8
	if (cr6.eq) goto loc_82660DD8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82660b50
	if (cr6.lt) goto loc_82660B50;
loc_82660B6C:
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
	// bne cr6,0x82660b98
	if (!cr6.eq) goto loc_82660B98;
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82660B98:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82660bcc
	if (cr0.eq) goto loc_82660BCC;
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// stw r27,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r27.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r27.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82660BCC:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// add. r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82660c08
	if (cr0.eq) goto loc_82660C08;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// stw r27,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r27.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// stw r27,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r27.u32);
	// stw r27,20(r11)
	PPC_STORE_U32(r11.u32 + 20, r27.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82660C08:
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r31,-24(r7)
	PPC_STORE_U32(ctx.r7.u32 + -24, r31.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r9
	ctx.r6.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-24
	r11.s64 = r11.s64 + -24;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// stwx r29,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + r26.u32, r29.u32);
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r28,r7
	cr6.compare<int32_t>(r28.s32, ctx.r7.s32, xer);
	// blt cr6,0x82660b28
	if (cr6.lt) goto loc_82660B28;
loc_82660C64:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,120(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x8265fae8
	sub_8265FAE8(ctx, base);
	// lwz r31,12(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// lwz r9,148(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addic. r11,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r11.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r11.u32);
	// bne 0x82660ce4
	if (!cr0.eq) goto loc_82660CE4;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82660ce4
	if (!cr6.eq) goto loc_82660CE4;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82660cc4
	if (cr6.eq) goto loc_82660CC4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0b0
	sub_8263E0B0(ctx, base);
loc_82660CC4:
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82660ce4
	if (!cr6.eq) goto loc_82660CE4;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82660ce4
	if (cr6.eq) goto loc_82660CE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e0c8
	sub_8263E0C8(ctx, base);
loc_82660CE4:
	// lwzx r10,r19,r20
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + r20.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82660d14
	if (!cr6.lt) goto loc_82660D14;
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
loc_82660D14:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82660d54
	if (!cr6.eq) goto loc_82660D54;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,24
	ctx.r6.s64 = 24;
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
loc_82660D54:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82660d94
	if (!cr6.eq) goto loc_82660D94;
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
loc_82660D94:
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// stw r21,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r21.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x82bfcb30
	sub_82BFCB30(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x828e9444
	return;
loc_82660DC4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// b 0x826609ec
	goto loc_826609EC;
loc_82660DD8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
}

__attribute__((alias("__imp__sub_82660DE8"))) PPC_WEAK_FUNC(sub_82660DE8);
PPC_FUNC_IMPL(__imp__sub_82660DE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82660c3c
	// ERROR 82660C3C
	return;
}

__attribute__((alias("__imp__sub_82660DEC"))) PPC_WEAK_FUNC(sub_82660DEC);
PPC_FUNC_IMPL(__imp__sub_82660DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660DF0"))) PPC_WEAK_FUNC(sub_82660DF0);
PPC_FUNC_IMPL(__imp__sub_82660DF0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
loc_82660E0C:
	// add r11,r26,r25
	r11.u64 = r26.u64 + r25.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// mr r30,r26
	r30.u64 = r26.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r9.u32 + r28.u32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
loc_82660E28:
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
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
	// beq cr6,0x82660e70
	if (cr6.eq) goto loc_82660E70;
loc_82660E4C:
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
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
	// bne cr6,0x82660e4c
	if (!cr6.eq) goto loc_82660E4C;
loc_82660E70:
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
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
	// beq cr6,0x82660eb8
	if (cr6.eq) goto loc_82660EB8;
loc_82660E94:
	// addi r29,r29,-8
	r29.s64 = r29.s64 + -8;
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
	// bne cr6,0x82660e94
	if (!cr6.eq) goto loc_82660E94;
loc_82660EB8:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// blt cr6,0x82660efc
	if (cr6.lt) goto loc_82660EFC;
	// beq cr6,0x82660eec
	if (cr6.eq) goto loc_82660EEC;
	// rlwinm r11,r30,3,0,28
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
loc_82660EEC:
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r31
	cr6.compare<int32_t>(r30.s32, r31.s32, xer);
	// ble cr6,0x82660e28
	if (!cr6.gt) goto loc_82660E28;
loc_82660EFC:
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(r26.s32, r31.s32, xer);
	// bge cr6,0x82660f18
	if (!cr6.lt) goto loc_82660F18;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82660df0
	sub_82660DF0(ctx, base);
loc_82660F18:
	// cmpw cr6,r30,r25
	cr6.compare<int32_t>(r30.s32, r25.s32, xer);
	// bge cr6,0x82660f28
	if (!cr6.lt) goto loc_82660F28;
	// mr r26,r30
	r26.u64 = r30.u64;
	// b 0x82660e0c
	goto loc_82660E0C;
loc_82660F28:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82660F2C"))) PPC_WEAK_FUNC(sub_82660F2C);
PPC_FUNC_IMPL(__imp__sub_82660F2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82660F30"))) PPC_WEAK_FUNC(sub_82660F30);
PPC_FUNC_IMPL(__imp__sub_82660F30) {
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
	// bl 0x82660098
	sub_82660098(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82660f7c
	if (cr6.eq) goto loc_82660F7C;
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
loc_82660F7C:
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

__attribute__((alias("__imp__sub_82660F94"))) PPC_WEAK_FUNC(sub_82660F94);
PPC_FUNC_IMPL(__imp__sub_82660F94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82660F98"))) PPC_WEAK_FUNC(sub_82660F98);
PPC_FUNC_IMPL(__imp__sub_82660F98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82660F9C"))) PPC_WEAK_FUNC(sub_82660F9C);
PPC_FUNC_IMPL(__imp__sub_82660F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82660FA0"))) PPC_WEAK_FUNC(sub_82660FA0);
PPC_FUNC_IMPL(__imp__sub_82660FA0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// extsh r11,r31
	r11.s64 = r31.s16;
	// addi r9,r11,3
	ctx.r9.s64 = r11.s64 + 3;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r28,r30,4,0,27
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r26,r28,32
	r26.s64 = r28.s64 + 32;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r26.u32);
	// ble cr6,0x82661050
	if (!cr6.gt) goto loc_82661050;
	// mr r30,r11
	r30.u64 = r11.u64;
	// li r27,0
	r27.s64 = 0;
loc_82661004:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82661044
	if (cr6.eq) goto loc_82661044;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// stw r28,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r28.u32);
	// stw r27,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r27.u32);
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
loc_82661044:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82661004
	if (!cr0.eq) goto loc_82661004;
loc_82661050:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82661058"))) PPC_WEAK_FUNC(sub_82661058);
PPC_FUNC_IMPL(__imp__sub_82661058) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8266105C"))) PPC_WEAK_FUNC(sub_8266105C);
PPC_FUNC_IMPL(__imp__sub_8266105C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82661060"))) PPC_WEAK_FUNC(sub_82661060);
PPC_FUNC_IMPL(__imp__sub_82661060) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826610c0
	if (!cr6.gt) goto loc_826610C0;
	// addi r29,r10,-4
	r29.s64 = ctx.r10.s64 + -4;
loc_82661088:
	// lwz r27,8(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwzu r28,4(r29)
	ea = 4 + r29.u32;
	r28.u64 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82661088
	if (cr6.lt) goto loc_82661088;
loc_826610C0:
	// extsh r11,r11
	r11.s64 = r11.s16;
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826610F0"))) PPC_WEAK_FUNC(sub_826610F0);
PPC_FUNC_IMPL(__imp__sub_826610F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826610F4"))) PPC_WEAK_FUNC(sub_826610F4);
PPC_FUNC_IMPL(__imp__sub_826610F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826610F8"))) PPC_WEAK_FUNC(sub_826610F8);
PPC_FUNC_IMPL(__imp__sub_826610F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// subf r7,r6,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
loc_82661110:
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,-8(r10)
	PPC_STORE_U32(ctx.r10.u32 + -8, ctx.r8.u32);
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r5,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r5.u32);
	// lwzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwzu r8,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82661110
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82661110;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lhz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 16);
	// rotlwi r8,r9,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r4,r10,40
	ctx.r4.s64 = ctx.r10.s64 + 40;
	// lwz r7,40(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r5,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r5.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bgt cr6,0x82661324
	if (cr6.gt) {
		// ERROR 82661324
		return;
	}
	// lis r12,-32154
	r12.s64 = -2107244544;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4476
	r12.s64 = r12.s64 + 4476;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x826611BC
		return;
	case 1:
		// ERROR: 0x826611E8
		return;
	case 2:
		// ERROR: 0x82661324
		return;
	case 3:
		// ERROR: 0x82661308
		return;
	case 4:
		// ERROR: 0x8266121C
		return;
	case 5:
		// ERROR: 0x82661324
		return;
	case 6:
		// ERROR: 0x82661308
		return;
	case 7:
		// ERROR: 0x82661298
		return;
	case 8:
		// ERROR: 0x826612BC
		return;
	case 9:
		// ERROR: 0x826612DC
		return;
	case 10:
		// ERROR: 0x8266121C
		return;
	case 11:
		// ERROR: 0x82661248
		return;
	case 12:
		// ERROR: 0x8266123C
		return;
	case 13:
		// ERROR: 0x8266132C
		return;
	case 14:
		// ERROR: 0x82661308
		return;
	case 15:
		// ERROR: 0x82661374
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8266117C"))) PPC_WEAK_FUNC(sub_8266117C);
PPC_FUNC_IMPL(__imp__sub_8266117C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r19{};
	// lwz r19,4540(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4540);
	// lwz r19,4584(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4584);
	// lwz r19,4900(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4900);
	// lwz r19,4872(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4872);
	// lwz r19,4636(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4636);
	// lwz r19,4900(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4900);
	// lwz r19,4872(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4872);
	// lwz r19,4760(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4760);
	// lwz r19,4796(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4796);
	// lwz r19,4828(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4828);
	// lwz r19,4636(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4636);
	// lwz r19,4680(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4680);
	// lwz r19,4668(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4668);
	// lwz r19,4908(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4908);
	// lwz r19,4872(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4872);
	// lwz r19,4980(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4980);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// ble cr6,0x82661324
	if (!cr6.gt) {
		// ERROR 82661324
		return;
	}
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// stw r9,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r9.u32);
	// sth r8,16(r11)
	PPC_STORE_U16(r11.u32 + 16, ctx.r8.u16);
	// stw r3,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826611E8"))) PPC_WEAK_FUNC(sub_826611E8);
PPC_FUNC_IMPL(__imp__sub_826611E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r10,38(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 38);
	// cmplwi cr6,r10,128
	cr6.compare<uint32_t>(ctx.r10.u32, 128, xer);
	// ble cr6,0x82661324
	if (!cr6.gt) {
		// ERROR 82661324
		return;
	}
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// lhz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// sth r9,38(r11)
	PPC_STORE_U16(r11.u32 + 38, ctx.r9.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r7,36(r11)
	PPC_STORE_U16(r11.u32 + 36, ctx.r7.u16);
	// sth r8,38(r6)
	PPC_STORE_U16(ctx.r6.u32 + 38, ctx.r8.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266121C"))) PPC_WEAK_FUNC(sub_8266121C);
PPC_FUNC_IMPL(__imp__sub_8266121C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82661324
	if (cr6.eq) {
		// ERROR 82661324
		return;
	}
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266123C"))) PPC_WEAK_FUNC(sub_8266123C);
PPC_FUNC_IMPL(__imp__sub_8266123C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82679400
	sub_82679400(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82661248"))) PPC_WEAK_FUNC(sub_82661248);
PPC_FUNC_IMPL(__imp__sub_82661248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 52);
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// ble cr6,0x8266127c
	if (!cr6.gt) goto loc_8266127C;
	// lhz r10,54(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 54);
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// addi r7,r10,128
	ctx.r7.s64 = ctx.r10.s64 + 128;
	// sth r9,52(r11)
	PPC_STORE_U16(r11.u32 + 52, ctx.r9.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r7,54(r11)
	PPC_STORE_U16(r11.u32 + 54, ctx.r7.u16);
	// sth r8,52(r6)
	PPC_STORE_U16(ctx.r6.u32 + 52, ctx.r8.u16);
	// blr 
	return;
loc_8266127C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82661324
	if (cr6.eq) {
		// ERROR 82661324
		return;
	}
	// li r10,10
	ctx.r10.s64 = 10;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661298"))) PPC_WEAK_FUNC(sub_82661298);
PPC_FUNC_IMPL(__imp__sub_82661298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82661324
	if (!cr6.lt) {
		// ERROR 82661324
		return;
	}
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826612BC"))) PPC_WEAK_FUNC(sub_826612BC);
PPC_FUNC_IMPL(__imp__sub_826612BC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lbz r9,28(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 28);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82661324
	if (!cr6.eq) {
		// ERROR 82661324
		return;
	}
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826612DC"))) PPC_WEAK_FUNC(sub_826612DC);
PPC_FUNC_IMPL(__imp__sub_826612DC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r8,r10,16384
	ctx.r8.s64 = ctx.r10.s64 + 16384;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x82661324
	if (!cr6.lt) {
		// ERROR 82661324
		return;
	}
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r10,r10,16384
	ctx.r10.s64 = ctx.r10.s64 + 16384;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661308"))) PPC_WEAK_FUNC(sub_82661308);
PPC_FUNC_IMPL(__imp__sub_82661308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	uint32_t ea{};
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// addi r10,r6,-8
	ctx.r10.s64 = ctx.r6.s64 + -8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82661318:
	// ldu r9,8(r11)
	ea = 8 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82661318
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82661318;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266132C"))) PPC_WEAK_FUNC(sub_8266132C);
PPC_FUNC_IMPL(__imp__sub_8266132C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r9,42(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// lhz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 40);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ble cr6,0x82661324
	if (!cr6.gt) {
		// ERROR 82661324
		return;
	}
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lhz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// li r5,512
	ctx.r5.s64 = 512;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// sth r8,40(r11)
	PPC_STORE_U16(r11.u32 + 40, ctx.r8.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r4,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,36(r11)
	PPC_STORE_U16(r11.u32 + 36, ctx.r10.u16);
	// sth r9,40(r6)
	PPC_STORE_U16(ctx.r6.u32 + 40, ctx.r9.u16);
	// sth r5,68(r6)
	PPC_STORE_U16(ctx.r6.u32 + 68, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661374"))) PPC_WEAK_FUNC(sub_82661374);
PPC_FUNC_IMPL(__imp__sub_82661374) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r10,42(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 42);
	// lhz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 40);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// ble cr6,0x82661324
	if (!cr6.gt) {
		// ERROR 82661324
		return;
	}
	// lhz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 36);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r8,40(r11)
	PPC_STORE_U16(r11.u32 + 40, ctx.r8.u16);
	// sth r7,36(r11)
	PPC_STORE_U16(r11.u32 + 36, ctx.r7.u16);
	// sth r10,40(r6)
	PPC_STORE_U16(ctx.r6.u32 + 40, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826613A8"))) PPC_WEAK_FUNC(sub_826613A8);
PPC_FUNC_IMPL(__imp__sub_826613A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addic. r11,r5,16
	xer.ca = ctx.r5.u32 > 4294967279;
	r11.s64 = ctx.r5.s64 + 16;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x82661410
	if (cr0.eq) goto loc_82661410;
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r7,104(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	// li r6,48
	ctx.r6.s64 = 48;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r9,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r9.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// sth r6,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r6.u16);
	// sth r8,6(r11)
	PPC_STORE_U16(r11.u32 + 6, ctx.r8.u16);
	// lhz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// sth r6,16(r11)
	PPC_STORE_U16(r11.u32 + 16, ctx.r6.u16);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// lwz r6,24(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r6,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r6.u32);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r3,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r3.u32);
	// lwz r8,76(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	// stw r8,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r8.u32);
	// lbz r6,88(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 88);
	// stb r6,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r6.u8);
	// stw r7,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r7.u32);
loc_82661410:
	// lwz r11,108(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stb r10,18(r5)
	PPC_STORE_U8(ctx.r5.u32 + 18, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_82661420"))) PPC_WEAK_FUNC(sub_82661420);
PPC_FUNC_IMPL(__imp__sub_82661420) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661424"))) PPC_WEAK_FUNC(sub_82661424);
PPC_FUNC_IMPL(__imp__sub_82661424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82661428"))) PPC_WEAK_FUNC(sub_82661428);
PPC_FUNC_IMPL(__imp__sub_82661428) {
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
	// lbz r9,33(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826614a4
	if (cr6.eq) goto loc_826614A4;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r8,5
	ctx.r8.s64 = 5;
	// lhz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// li r31,0
	r31.s64 = 0;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// li r30,2
	r30.s64 = 2;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// li r29,32
	r29.s64 = 32;
	// li r28,-1
	r28.s64 = -1;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r9,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r9.u16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stb r31,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r31.u8);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r30.u8);
	// sth r29,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r29.u16);
	// sth r28,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, r28.u16);
	// bl 0x82bf8610
	sub_82BF8610(ctx, base);
loc_826614A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826614A8"))) PPC_WEAK_FUNC(sub_826614A8);
PPC_FUNC_IMPL(__imp__sub_826614A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826614AC"))) PPC_WEAK_FUNC(sub_826614AC);
PPC_FUNC_IMPL(__imp__sub_826614AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826614B0"))) PPC_WEAK_FUNC(sub_826614B0);
PPC_FUNC_IMPL(__imp__sub_826614B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// li r30,1
	r30.s64 = 1;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bgt cr6,0x82661b64
	if (cr6.gt) goto loc_82661B64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r12,-32154
	r12.s64 = -2107244544;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5372
	r12.s64 = r12.s64 + 5372;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_8266153C;
	case 1:
		goto loc_8266153C;
	case 2:
		goto loc_826615D0;
	case 3:
		goto loc_826615E8;
	case 4:
		goto loc_82661B90;
	case 5:
		goto loc_82661B60;
	case 6:
		goto loc_82661790;
	case 7:
		goto loc_82661818;
	case 8:
		goto loc_82661A0C;
	case 9:
		goto loc_82661B28;
	case 10:
		goto loc_82661B70;
	case 11:
		goto loc_82661B64;
	case 12:
		goto loc_82661C0C;
	case 13:
		goto loc_82661B64;
	case 14:
		goto loc_82661B64;
	case 15:
		goto loc_82661B64;
	default:
		__builtin_unreachable();
	}
	// lwz r19,5436(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5436);
	// lwz r19,5436(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5436);
	// lwz r19,5584(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5584);
	// lwz r19,5608(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 5608);
	// lwz r19,7056(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7056);
	// lwz r19,7008(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7008);
	// lwz r19,6032(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6032);
	// lwz r19,6168(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6168);
	// lwz r19,6668(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6668);
	// lwz r19,6952(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 6952);
	// lwz r19,7024(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7024);
	// lwz r19,7012(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7012);
	// lwz r19,7180(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7180);
	// lwz r19,7012(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7012);
	// lwz r19,7012(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7012);
	// lwz r19,7012(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 7012);
loc_8266153C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bne 0x82661b64
	if (!cr0.eq) goto loc_82661B64;
	// lwz r10,116(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826615b8
	if (!cr6.gt) goto loc_826615B8;
	// addic. r10,r5,16
	xer.ca = ctx.r5.u32 > 4294967279;
	ctx.r10.s64 = ctx.r5.s64 + 16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x826615a8
	if (cr0.eq) goto loc_826615A8;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// sth r4,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r3,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r3.u16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
loc_826615A8:
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_826615B8:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x826613a8
	sub_826613A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_826615D0:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x826613a8
	sub_826613A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_826615E8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bne 0x82661b64
	if (!cr0.eq) goto loc_82661B64;
	// lbz r10,88(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 88);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addic. r10,r5,16
	xer.ca = ctx.r5.u32 > 4294967279;
	ctx.r10.s64 = ctx.r5.s64 + 16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826616c4
	if (cr6.eq) goto loc_826616C4;
	// beq 0x826616a0
	if (cr0.eq) goto loc_826616A0;
	// li r6,6
	ctx.r6.s64 = 6;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// li r6,64
	ctx.r6.s64 = 64;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r30.u8);
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// sth r7,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r7.u16);
	// lhz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r6,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r6.u16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r6,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r6,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lwz r6,20(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// rotlwi r11,r6,0
	r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r6.u32);
	// rotlwi r31,r6,0
	r31.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r30,48(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// subf r6,r6,r30
	ctx.r6.s64 = r30.s64 - ctx.r6.s64;
	// stw r6,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r6.u32);
	// lwz r6,60(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// subf r11,r11,r6
	r11.s64 = ctx.r6.s64 - r11.s64;
	// stw r11,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, r11.u32);
	// lwz r6,64(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// subf r11,r31,r6
	r11.s64 = ctx.r6.s64 - r31.s64;
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, r11.u32);
	// lwz r6,24(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// stw r6,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r6.u32);
	// lwz r11,68(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// stw r11,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, r11.u32);
	// lwz r6,72(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stw r6,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r6.u32);
	// b 0x826616a4
	goto loc_826616A4;
loc_826616A0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_826616A4:
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lbz r11,89(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 89);
	// cntlzw r6,r11
	ctx.r6.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r6,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// stb r6,18(r5)
	PPC_STORE_U8(ctx.r5.u32 + 18, ctx.r6.u8);
	// b 0x8266172c
	goto loc_8266172C;
loc_826616C4:
	// beq 0x82661718
	if (cr0.eq) goto loc_82661718;
	// li r6,7
	ctx.r6.s64 = 7;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// li r6,48
	ctx.r6.s64 = 48;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r30.u8);
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// sth r7,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r7.u16);
	// lhz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r6,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r6.u16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r6,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r6,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lwz r6,48(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r6,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r6.u32);
	// lwz r11,52(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r11,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, r11.u32);
	// b 0x8266171c
	goto loc_8266171C;
loc_82661718:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8266171C:
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stb r30,18(r5)
	PPC_STORE_U8(ctx.r5.u32 + 18, r30.u8);
	// lhz r11,56(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 56);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_8266172C:
	// lbz r11,33(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 33);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82661b1c
	if (cr6.eq) goto loc_82661B1C;
	// lhz r11,16(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r31,20(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r30,2
	r30.s64 = 2;
	// lwz r29,24(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r28,32
	r28.s64 = 32;
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r11.u16);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stb r30,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r30.u8);
	// sth r28,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, r28.u16);
	// sth r7,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// bl 0x82bf8610
	sub_82BF8610(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_82661790:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bne 0x82661b64
	if (!cr0.eq) goto loc_82661B64;
	// addic. r10,r5,16
	xer.ca = ctx.r5.u32 > 4294967279;
	ctx.r10.s64 = ctx.r5.s64 + 16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x826617fc
	if (cr0.eq) goto loc_826617FC;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,48
	ctx.r6.s64 = 48;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r30.u8);
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// sth r4,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r3,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r3.u16);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r6,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r4,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r4.u32);
	// lwz r3,120(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stw r8,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r8.u32);
	// stw r8,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// stw r3,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r3.u32);
loc_826617FC:
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r30,18(r5)
	PPC_STORE_U8(ctx.r5.u32 + 18, r30.u8);
	// lhz r11,124(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 124);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_82661818:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bne 0x82661a00
	if (!cr0.eq) goto loc_82661A00;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lhz r31,30(r10)
	r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 30);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826618cc
	if (cr6.eq) goto loc_826618CC;
	// addic. r10,r5,16
	xer.ca = ctx.r5.u32 > 4294967279;
	ctx.r10.s64 = ctx.r5.s64 + 16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x826618b0
	if (cr0.eq) goto loc_826618B0;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,48
	ctx.r6.s64 = 48;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// li r29,-1
	r29.s64 = -1;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r30.u8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// addi r4,r10,-8
	ctx.r4.s64 = ctx.r10.s64 + -8;
	// sth r29,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, r29.u16);
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r3,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r3.u16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r6,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
loc_82661898:
	// ldu r6,8(r7)
	ea = 8 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdu r6,8(r4)
	ea = 8 + ctx.r4.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r4.u32 = ea;
	// bdnz 0x82661898
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82661898;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r7,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r7.u32);
loc_826618B0:
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// mr r11,r31
	r11.u64 = r31.u64;
	// stb r30,18(r5)
	PPC_STORE_U8(ctx.r5.u32 + 18, r30.u8);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_826618CC:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addic. r10,r5,16
	xer.ca = ctx.r5.u32 > 4294967279;
	ctx.r10.s64 = ctx.r5.s64 + 16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// bge cr6,0x82661990
	if (!cr6.lt) goto loc_82661990;
	// beq 0x8266195c
	if (cr0.eq) goto loc_8266195C;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,48
	ctx.r6.s64 = 48;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r30.u8);
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// sth r4,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// addi r4,r10,-8
	ctx.r4.s64 = ctx.r10.s64 + -8;
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r3,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r3.u16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r6,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r3,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r3.u32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
loc_8266193C:
	// ldu r6,8(r7)
	ea = 8 + ctx.r7.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r7.u32 = ea;
	// stdu r6,8(r4)
	ea = 8 + ctx.r4.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r4.u32 = ea;
	// bdnz 0x8266193c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266193C;
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r6,32(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// stw r6,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r6.u32);
	// b 0x82661960
	goto loc_82661960;
loc_8266195C:
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82661960:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// lwz r7,120(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stw r7,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r7.u32);
	// lhz r11,124(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 124);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stb r30,18(r5)
	PPC_STORE_U8(ctx.r5.u32 + 18, r30.u8);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_82661990:
	// beq 0x826619f0
	if (cr0.eq) goto loc_826619F0;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,48
	ctx.r6.s64 = 48;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r30.u8);
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// sth r4,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r3,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r3.u16);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r6,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r4,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r4.u32);
	// lwz r3,48(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// stw r3,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r3.u32);
	// lwz r7,52(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r7,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r6,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r6.u32);
	// stb r8,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r8.u8);
loc_826619F0:
	// lhz r11,58(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 58);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stb r30,18(r5)
	PPC_STORE_U8(ctx.r5.u32 + 18, r30.u8);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_82661A00:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_82661A0C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// bne 0x82661b64
	if (!cr0.eq) goto loc_82661B64;
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addic. r10,r5,16
	xer.ca = ctx.r5.u32 > 4294967279;
	ctx.r10.s64 = ctx.r5.s64 + 16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82661aa8
	if (!cr6.eq) goto loc_82661AA8;
	// beq 0x82661a8c
	if (cr0.eq) goto loc_82661A8C;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,48
	ctx.r6.s64 = 48;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r30,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, r30.u8);
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// sth r4,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r3,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r3.u16);
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r6,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r4,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r4.u32);
	// lwz r3,120(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// stw r3,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r3.u32);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r8,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
loc_82661A8C:
	// lhz r11,124(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 124);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stb r30,18(r5)
	PPC_STORE_U8(ctx.r5.u32 + 18, r30.u8);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_82661AA8:
	// beq 0x82661b0c
	if (cr0.eq) goto loc_82661B0C;
	// li r7,11
	ctx.r7.s64 = 11;
	// li r6,2
	ctx.r6.s64 = 2;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// li r4,64
	ctx.r4.s64 = 64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// sth r3,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r3.u16);
	// lhz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r7,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r7.u16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r6,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r4,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r4.u32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r3,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r3.u32);
	// lwz r11,120(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 120);
	// sth r8,54(r10)
	PPC_STORE_U16(ctx.r10.u32 + 54, ctx.r8.u16);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// lhz r7,84(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 84);
	// sth r7,52(r10)
	PPC_STORE_U16(ctx.r10.u32 + 52, ctx.r7.u16);
	// lwz r6,20(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// stw r6,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r6.u32);
loc_82661B0C:
	// lwz r11,108(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 108);
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stb r30,18(r5)
	PPC_STORE_U8(ctx.r5.u32 + 18, r30.u8);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_82661B1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_82661B28:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82661b54
	if (cr6.eq) goto loc_82661B54;
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, r11.u32);
loc_82661B54:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82661b64
	if (!cr6.eq) goto loc_82661B64;
loc_82661B60:
	// stb r30,32(r9)
	PPC_STORE_U8(ctx.r9.u32 + 32, r30.u8);
loc_82661B64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_82661B70:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// bgt cr6,0x82661b80
	if (cr6.gt) goto loc_82661B80;
	// stw r8,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
loc_82661B80:
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 52);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
loc_82661B90:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf. r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bne 0x82661b64
	if (!cr0.eq) goto loc_82661B64;
	// addic. r10,r5,16
	xer.ca = ctx.r5.u32 > 4294967279;
	ctx.r10.s64 = ctx.r5.s64 + 16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82661bfc
	if (cr0.eq) goto loc_82661BFC;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r6,2
	ctx.r6.s64 = 2;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// li r4,48
	ctx.r4.s64 = 48;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// stb r6,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r6.u8);
	// sth r4,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r4.u16);
	// sth r3,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r3.u16);
	// lhz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r9,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r9.u16);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r6,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r6.u32);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r4,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r4.u32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// sth r30,32(r10)
	PPC_STORE_U16(ctx.r10.u32 + 32, r30.u16);
	// stw r3,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r3.u32);
loc_82661BFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_82661C0C:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82661b64
	if (cr6.eq) goto loc_82661B64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// bne 0x82661b64
	if (!cr0.eq) goto loc_82661B64;
	// addic. r10,r5,16
	xer.ca = ctx.r5.u32 > 4294967279;
	ctx.r10.s64 = ctx.r5.s64 + 16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x82661c88
	if (cr0.eq) goto loc_82661C88;
	// li r9,14
	ctx.r9.s64 = 14;
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// li r6,48
	ctx.r6.s64 = 48;
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// sth r4,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, ctx.r4.u16);
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r3,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r3.u16);
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// lhz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 16);
	// sth r4,16(r10)
	PPC_STORE_U16(ctx.r10.u32 + 16, ctx.r4.u16);
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r3,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r3.u32);
loc_82661C88:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82661C94"))) PPC_WEAK_FUNC(sub_82661C94);
PPC_FUNC_IMPL(__imp__sub_82661C94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82661C98"))) PPC_WEAK_FUNC(sub_82661C98);
PPC_FUNC_IMPL(__imp__sub_82661C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661CA8"))) PPC_WEAK_FUNC(sub_82661CA8);
PPC_FUNC_IMPL(__imp__sub_82661CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,1
	r11.s64 = 1;
	// addi r9,r10,18148
	ctx.r9.s64 = ctx.r10.s64 + 18148;
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lhz r11,170(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 170);
	// lhz r10,170(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 170);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82661cdc
	if (!cr6.lt) goto loc_82661CDC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82661CDC:
	// sth r11,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, r11.u16);
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661CF0"))) PPC_WEAK_FUNC(sub_82661CF0);
PPC_FUNC_IMPL(__imp__sub_82661CF0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,16(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r29,96
	r29.s64 = 96;
	// lwz r28,20(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r30,224
	r11.s64 = r30.s64 + 224;
	// addi r10,r28,224
	ctx.r10.s64 = r28.s64 + 224;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r9,r11,224
	ctx.r9.s64 = r11.s64 + 224;
	// lvx128 v13,r11,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + r29.u32) & ~0xF), VectorMaskL));
	// addi r7,r10,224
	ctx.r7.s64 = ctx.r10.s64 + 224;
	// lvx128 v12,r10,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + r29.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v10,v0,v12
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,208
	ctx.r3.s64 = 208;
	// lvx128 v9,r0,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r25,16
	r25.s64 = 16;
	// lvx128 v8,r0,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v7,v9,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vpermwi128 v6,v9,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// li r9,1
	ctx.r9.s64 = 1;
	// vpermwi128 v4,v8,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// vpermwi128 v2,v8,99
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// lvx128 v5,r11,r3
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((r11.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r10,r3
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r26,r25
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((r26.u32 + r25.u32) & ~0xF), VectorMaskL));
	// li r11,0
	r11.s64 = 0;
	// vpermwi128 v31,v11,99
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v30,v11,135
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vpermwi128 v29,v10,99
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v28,v10,135
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// vmulfp128 v27,v7,v31
	_mm_store_ps(v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(v31.f32)));
	// vmulfp128 v26,v6,v30
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v30.f32)));
	// vmulfp128 v25,v4,v29
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(v29.f32)));
	// vmulfp128 v24,v2,v28
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v28.f32)));
	// vsubfp v23,v26,v27
	_mm_store_ps(v23.f32, _mm_sub_ps(_mm_load_ps(v26.f32), _mm_load_ps(v27.f32)));
	// vsubfp v22,v24,v25
	_mm_store_ps(v22.f32, _mm_sub_ps(_mm_load_ps(v24.f32), _mm_load_ps(v25.f32)));
	// vaddfp v21,v23,v5
	_mm_store_ps(v21.f32, _mm_add_ps(_mm_load_ps(v23.f32), _mm_load_ps(ctx.v5.f32)));
	// vaddfp v20,v22,v3
	_mm_store_ps(v20.f32, _mm_add_ps(_mm_load_ps(v22.f32), _mm_load_ps(ctx.v3.f32)));
	// vsubfp v19,v20,v21
	_mm_store_ps(v19.f32, _mm_sub_ps(_mm_load_ps(v20.f32), _mm_load_ps(v21.f32)));
	// vmsum3fp128 v18,v19,v1
	_mm_store_ps(v18.f32, _mm_dp_ps(_mm_load_ps(v19.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// stvewx v18,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, v18.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// sth r11,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r11.u16);
	// bne cr6,0x82661df0
	if (!cr6.eq) goto loc_82661DF0;
	// lhz r11,18(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 18);
loc_82661DF0:
	// sth r11,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, r11.u16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8265a5a8
	sub_8265A5A8(ctx, base);
	// lhz r11,516(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82661e18
	if (cr6.eq) goto loc_82661E18;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82658260
	sub_82658260(ctx, base);
loc_82661E18:
	// lhz r11,516(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82661e30
	if (cr6.eq) goto loc_82661E30;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658260
	sub_82658260(ctx, base);
loc_82661E30:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82661e64
	if (!cr6.eq) goto loc_82661E64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x828e945c
	return;
loc_82661E64:
	// lhz r11,146(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 146);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,24(r31)
	PPC_STORE_U16(r31.u32 + 24, r11.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_82661E74"))) PPC_WEAK_FUNC(sub_82661E74);
PPC_FUNC_IMPL(__imp__sub_82661E74) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82661E78"))) PPC_WEAK_FUNC(sub_82661E78);
PPC_FUNC_IMPL(__imp__sub_82661E78) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,284(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// li r11,0
	r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r26,276(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r11,12(r30)
	PPC_STORE_U8(r30.u32 + 12, r11.u8);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stb r11,14(r30)
	PPC_STORE_U8(r30.u32 + 14, r11.u8);
	// stb r11,13(r30)
	PPC_STORE_U8(r30.u32 + 13, r11.u8);
	// stb r8,15(r30)
	PPC_STORE_U8(r30.u32 + 15, ctx.r8.u8);
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r27,20(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r29,16(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8265a5a8
	sub_8265A5A8(ctx, base);
	// lhz r7,516(r29)
	ctx.r7.u64 = PPC_LOAD_U16(r29.u32 + 516);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82661f0c
	if (cr6.eq) goto loc_82661F0C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82658260
	sub_82658260(ctx, base);
loc_82661F0C:
	// lhz r11,516(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82661f24
	if (cr6.eq) goto loc_82661F24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82658260
	sub_82658260(ctx, base);
loc_82661F24:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82661f58
	if (!cr6.eq) goto loc_82661F58;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x828e9460
	return;
loc_82661F58:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82661F64"))) PPC_WEAK_FUNC(sub_82661F64);
PPC_FUNC_IMPL(__imp__sub_82661F64) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82661F68"))) PPC_WEAK_FUNC(sub_82661F68);
PPC_FUNC_IMPL(__imp__sub_82661F68) {
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
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r30,20(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x8265a688
	sub_8265A688(ctx, base);
	// lhz r8,516(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 516);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82661fcc
	if (cr6.eq) goto loc_82661FCC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658338
	sub_82658338(ctx, base);
loc_82661FCC:
	// lhz r11,516(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82661fe4
	if (cr6.eq) goto loc_82661FE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82658338
	sub_82658338(ctx, base);
loc_82661FE4:
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

__attribute__((alias("__imp__sub_82661FF8"))) PPC_WEAK_FUNC(sub_82661FF8);
PPC_FUNC_IMPL(__imp__sub_82661FF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82661FFC"))) PPC_WEAK_FUNC(sub_82661FFC);
PPC_FUNC_IMPL(__imp__sub_82661FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662000"))) PPC_WEAK_FUNC(sub_82662000);
PPC_FUNC_IMPL(__imp__sub_82662000) {
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
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r11,0
	r11.s64 = 0;
	// lwz r30,20(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8265a688
	sub_8265A688(ctx, base);
	// lhz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 516);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8266205c
	if (cr6.eq) goto loc_8266205C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658338
	sub_82658338(ctx, base);
loc_8266205C:
	// lhz r11,516(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82662074
	if (cr6.eq) goto loc_82662074;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82658338
	sub_82658338(ctx, base);
loc_82662074:
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

__attribute__((alias("__imp__sub_82662088"))) PPC_WEAK_FUNC(sub_82662088);
PPC_FUNC_IMPL(__imp__sub_82662088) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266208C"))) PPC_WEAK_FUNC(sub_8266208C);
PPC_FUNC_IMPL(__imp__sub_8266208C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662090"))) PPC_WEAK_FUNC(sub_82662090);
PPC_FUNC_IMPL(__imp__sub_82662090) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r4,24
	ctx.r3.s64 = ctx.r4.s64 + 24;
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stfs f1,196(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r5,r4,80
	ctx.r5.s64 = ctx.r4.s64 + 80;
	// stb r30,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, r30.u8);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r8,r4,44
	ctx.r8.s64 = ctx.r4.s64 + 44;
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, r30.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stb r30,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, r30.u8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x826596f8
	sub_826596F8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lhz r7,516(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82662140
	if (cr6.eq) goto loc_82662140;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82657fd8
	sub_82657FD8(ctx, base);
loc_82662140:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lhz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82662160
	if (cr6.eq) goto loc_82662160;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82657fd8
	sub_82657FD8(ctx, base);
loc_82662160:
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

__attribute__((alias("__imp__sub_82662174"))) PPC_WEAK_FUNC(sub_82662174);
PPC_FUNC_IMPL(__imp__sub_82662174) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662178"))) PPC_WEAK_FUNC(sub_82662178);
PPC_FUNC_IMPL(__imp__sub_82662178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18228
	ctx.r9.s64 = r11.s64 + 18228;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_82662190"))) PPC_WEAK_FUNC(sub_82662190);
PPC_FUNC_IMPL(__imp__sub_82662190) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662194"))) PPC_WEAK_FUNC(sub_82662194);
PPC_FUNC_IMPL(__imp__sub_82662194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662198"))) PPC_WEAK_FUNC(sub_82662198);
PPC_FUNC_IMPL(__imp__sub_82662198) {
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
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r31,r11,r4
	r31.u64 = r11.u64 + ctx.r4.u64;
	// add r30,r10,r5
	r30.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r6,28
	ctx.r6.s64 = 28;
	// li r11,1
	r11.s64 = 1;
	// addi r5,r7,18148
	ctx.r5.s64 = ctx.r7.s64 + 18148;
	// sth r6,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r6.u16);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r11.u16);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// lhz r11,170(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 170);
	// lhz r10,170(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 170);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8266221c
	if (!cr6.lt) goto loc_8266221C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8266221C:
	// sth r11,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, r11.u16);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82662230"))) PPC_WEAK_FUNC(sub_82662230);
PPC_FUNC_IMPL(__imp__sub_82662230) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82662234"))) PPC_WEAK_FUNC(sub_82662234);
PPC_FUNC_IMPL(__imp__sub_82662234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662238"))) PPC_WEAK_FUNC(sub_82662238);
PPC_FUNC_IMPL(__imp__sub_82662238) {
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
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,24(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// extsh r11,r11
	r11.s64 = r11.s16;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// sth r10,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r10.u16);
	// bne cr6,0x82662324
	if (!cr6.eq) goto loc_82662324;
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// lbz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 16);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// add r31,r10,r4
	r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r30,r11,r5
	r30.u64 = r11.u64 + ctx.r5.u64;
	// lhz r11,170(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 170);
	// lhz r10,170(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 170);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82662298
	if (cr6.lt) goto loc_82662298;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82662298:
	// sth r11,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, r11.u16);
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subf r11,r7,r9
	r11.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r8,r11,-16
	ctx.r8.s64 = r11.s64 + -16;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// divw r6,r8,r10
	ctx.r6.s32 = ctx.r8.s32 / ctx.r10.s32;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r3,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, ctx.r3.u32);
	// addic. r11,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	r11.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x826622e8
	if (cr0.lt) goto loc_826622E8;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826622E0:
	// stwu r10,-4(r11)
	ea = -4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bdnz 0x826622e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826622E0;
loc_826622E8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8265a768
	sub_8265A768(ctx, base);
	// lhz r11,516(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266230c
	if (cr6.eq) goto loc_8266230C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658410
	sub_82658410(ctx, base);
loc_8266230C:
	// lhz r11,516(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82662324
	if (cr6.eq) goto loc_82662324;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82658410
	sub_82658410(ctx, base);
loc_82662324:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82662338"))) PPC_WEAK_FUNC(sub_82662338);
PPC_FUNC_IMPL(__imp__sub_82662338) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266233C"))) PPC_WEAK_FUNC(sub_8266233C);
PPC_FUNC_IMPL(__imp__sub_8266233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662340"))) PPC_WEAK_FUNC(sub_82662340);
PPC_FUNC_IMPL(__imp__sub_82662340) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662348"))) PPC_WEAK_FUNC(sub_82662348);
PPC_FUNC_IMPL(__imp__sub_82662348) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r8,60(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lhz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r8.u32 + 4);
	// lhz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 12);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r8,-2
	ctx.r7.s64 = ctx.r8.s64 + -2;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// ble cr6,0x82662378
	if (!cr6.gt) goto loc_82662378;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82662378:
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// sth r9,16(r11)
	PPC_STORE_U16(r11.u32 + 16, ctx.r9.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266238C"))) PPC_WEAK_FUNC(sub_8266238C);
PPC_FUNC_IMPL(__imp__sub_8266238C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662390"))) PPC_WEAK_FUNC(sub_82662390);
PPC_FUNC_IMPL(__imp__sub_82662390) {
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
	// lwz r31,88(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r11,-1
	r11.s64 = -1;
	// lwz r30,92(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8265a688
	sub_8265A688(ctx, base);
	// lhz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 516);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826623ec
	if (cr6.eq) goto loc_826623EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82658338
	sub_82658338(ctx, base);
loc_826623EC:
	// lhz r11,516(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82662404
	if (cr6.eq) goto loc_82662404;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82658338
	sub_82658338(ctx, base);
loc_82662404:
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

__attribute__((alias("__imp__sub_82662418"))) PPC_WEAK_FUNC(sub_82662418);
PPC_FUNC_IMPL(__imp__sub_82662418) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266241C"))) PPC_WEAK_FUNC(sub_8266241C);
PPC_FUNC_IMPL(__imp__sub_8266241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662420"))) PPC_WEAK_FUNC(sub_82662420);
PPC_FUNC_IMPL(__imp__sub_82662420) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r6,r4,80
	ctx.r6.s64 = ctx.r4.s64 + 80;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// stb r30,110(r1)
	PPC_STORE_U8(ctx.r1.u32 + 110, r30.u8);
	// addi r11,r4,44
	r11.s64 = ctx.r4.s64 + 44;
	// stb r30,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, r30.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stb r30,109(r1)
	PPC_STORE_U8(ctx.r1.u32 + 109, r30.u8);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x826596f8
	sub_826596F8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lhz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826624c4
	if (cr6.eq) goto loc_826624C4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82657fd8
	sub_82657FD8(ctx, base);
loc_826624C4:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lhz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 516);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826624e4
	if (cr6.eq) goto loc_826624E4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82657fd8
	sub_82657FD8(ctx, base);
loc_826624E4:
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

__attribute__((alias("__imp__sub_826624F8"))) PPC_WEAK_FUNC(sub_826624F8);
PPC_FUNC_IMPL(__imp__sub_826624F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826624FC"))) PPC_WEAK_FUNC(sub_826624FC);
PPC_FUNC_IMPL(__imp__sub_826624FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662500"))) PPC_WEAK_FUNC(sub_82662500);
PPC_FUNC_IMPL(__imp__sub_82662500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82662514"))) PPC_WEAK_FUNC(sub_82662514);
PPC_FUNC_IMPL(__imp__sub_82662514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662518"))) PPC_WEAK_FUNC(sub_82662518);
PPC_FUNC_IMPL(__imp__sub_82662518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8266252C"))) PPC_WEAK_FUNC(sub_8266252C);
PPC_FUNC_IMPL(__imp__sub_8266252C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662530"))) PPC_WEAK_FUNC(sub_82662530);
PPC_FUNC_IMPL(__imp__sub_82662530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lbz r10,39(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 39);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lbz r11,232(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82662564
	if (cr6.eq) goto loc_82662564;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82662568
	if (!cr6.eq) goto loc_82662568;
loc_82662564:
	// li r11,1
	r11.s64 = 1;
loc_82662568:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8266259c
	if (cr6.eq) goto loc_8266259C;
	// lbz r11,232(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x8266258c
	if (cr6.eq) goto loc_8266258C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x82662590
	if (!cr6.eq) goto loc_82662590;
loc_8266258C:
	// li r11,1
	r11.s64 = 1;
loc_82662590:
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_8266259C:
	// b 0x8266b2e8
	sub_8266B2E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826625A0"))) PPC_WEAK_FUNC(sub_826625A0);
PPC_FUNC_IMPL(__imp__sub_826625A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826625A4"))) PPC_WEAK_FUNC(sub_826625A4);
PPC_FUNC_IMPL(__imp__sub_826625A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826625A8"))) PPC_WEAK_FUNC(sub_826625A8);
PPC_FUNC_IMPL(__imp__sub_826625A8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,316(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// bl 0x82663140
	sub_82663140(ctx, base);
	// lwz r26,308(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r11,0
	r11.s64 = 0;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lfs f0,0(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	f0.f64 = double(temp.f32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// xor r9,r11,r10
	ctx.r9.u64 = r11.u64 ^ ctx.r10.u64;
	// xor r27,r9,r30
	r27.u64 = ctx.r9.u64 ^ r30.u64;
	// bl 0x8265a5a8
	sub_8265A5A8(ctx, base);
	// lhz r8,516(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 516);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8266265c
	if (cr6.eq) goto loc_8266265C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82658260
	sub_82658260(ctx, base);
loc_8266265C:
	// lhz r11,516(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82662674
	if (cr6.eq) goto loc_82662674;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82658260
	sub_82658260(ctx, base);
loc_82662674:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x826626ac
	if (!cr6.eq) goto loc_826626AC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x828e9454
	return;
loc_826626AC:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
}

__attribute__((alias("__imp__sub_826626BC"))) PPC_WEAK_FUNC(sub_826626BC);
PPC_FUNC_IMPL(__imp__sub_826626BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_826626C0"))) PPC_WEAK_FUNC(sub_826626C0);
PPC_FUNC_IMPL(__imp__sub_826626C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister f30{};
	PPCRegister f31{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93fc
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lhz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bgt cr6,0x826628fc
	if (cr6.gt) goto loc_826628FC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82662730
	if (!cr6.eq) goto loc_82662730;
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82662730:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r24,r27,4
	r24.s64 = r27.s64 + 4;
	// bl 0x82679f90
	sub_82679F90(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r6,10000
	ctx.r6.s64 = 10000;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82663140
	sub_82663140(ctx, base);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lvx128 v12,r0,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r11,r3,224
	r11.s64 = ctx.r3.s64 + 224;
	// li r5,96
	ctx.r5.s64 = 96;
	// lvx128 v11,r0,r30
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r30.u32) & ~0xF), VectorMaskL));
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// addi r8,r11,224
	ctx.r8.s64 = r11.s64 + 224;
	// xor r28,r7,r3
	r28.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// li r6,208
	ctx.r6.s64 = 208;
	// addi r10,r28,224
	ctx.r10.s64 = r28.s64 + 224;
	// lvx128 v10,r11,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v11,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)));
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r7,r10,224
	ctx.r7.s64 = ctx.r10.s64 + 224;
	// lvx128 v8,r0,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v8,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// vpermwi128 v4,v8,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// lvx128 v30,r11,r6
	simd::store_shuffled(v30, simd::load_and_shuffle(base + ((r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r10,r5
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// vsubfp v5,v11,v7
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32)));
	// lvx128 v1,r10,r6
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r0,r7
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r9,0
	ctx.r9.s64 = 0;
	// vpermwi128 v2,v3,135
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0x78));
	// li r11,1
	r11.s64 = 1;
	// vpermwi128 v31,v3,99
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0x9C));
	// vpermwi128 v29,v9,99
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// vpermwi128 v28,v9,135
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vmulfp128 v25,v6,v29
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v29.f32)));
	// vpermwi128 v27,v5,99
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x9C));
	// vmulfp128 v24,v4,v28
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(v28.f32)));
	// vpermwi128 v26,v5,135
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x78));
	// vmulfp128 v23,v2,v27
	_mm_store_ps(v23.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(v27.f32)));
	// vmulfp128 v22,v31,v26
	_mm_store_ps(v22.f32, _mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(v26.f32)));
	// vsubfp v21,v24,v25
	_mm_store_ps(v21.f32, _mm_sub_ps(_mm_load_ps(v24.f32), _mm_load_ps(v25.f32)));
	// vsubfp v20,v22,v23
	_mm_store_ps(v20.f32, _mm_sub_ps(_mm_load_ps(v22.f32), _mm_load_ps(v23.f32)));
	// vaddfp v19,v21,v30
	_mm_store_ps(v19.f32, _mm_add_ps(_mm_load_ps(v21.f32), _mm_load_ps(v30.f32)));
	// vaddfp v18,v20,v1
	_mm_store_ps(v18.f32, _mm_add_ps(_mm_load_ps(v20.f32), _mm_load_ps(ctx.v1.f32)));
	// vsubfp v17,v19,v18
	_mm_store_ps(v17.f32, _mm_sub_ps(_mm_load_ps(v19.f32), _mm_load_ps(v18.f32)));
	// vmsum3fp128 v16,v17,v12
	_mm_store_ps(v16.f32, _mm_dp_ps(_mm_load_ps(v17.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v16,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, v16.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f30,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f30.f64 = double(temp.f32);
	// lfs f31,21036(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21036);
	f31.f64 = double(temp.f32);
	// stfs f31,0(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r21.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// sth r22,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r22.u16);
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// bne cr6,0x82662894
	if (!cr6.eq) goto loc_82662894;
	// lhz r11,18(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 18);
	// sth r11,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, r11.u16);
	// b 0x82662898
	goto loc_82662898;
loc_82662894:
	// sth r9,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, ctx.r9.u16);
loc_82662898:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8265a5a8
	sub_8265A5A8(ctx, base);
	// lhz r11,516(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826628bc
	if (cr6.eq) goto loc_826628BC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82658260
	sub_82658260(ctx, base);
loc_826628BC:
	// lhz r11,516(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826628d4
	if (cr6.eq) goto loc_826628D4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658260
	sub_82658260(ctx, base);
loc_826628D4:
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82662910
	if (!cr6.eq) goto loc_82662910;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826628FC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x828e944c
	return;
loc_82662910:
	// lhz r11,146(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 146);
	// sth r11,18(r31)
	PPC_STORE_U16(r31.u32 + 18, r11.u16);
	// lbz r10,109(r21)
	ctx.r10.u64 = PPC_LOAD_U8(r21.u32 + 109);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826629ec
	if (cr6.eq) goto loc_826629EC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lbz r8,13(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 13);
	// lfs f0,18244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18244);
	f0.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * f0.f64));
	// fcmpu cr6,f10,f31
	cr6.compare(ctx.f10.f64, f31.f64);
	// bne cr6,0x826629ec
	if (!cr6.eq) goto loc_826629EC;
	// lhz r11,516(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826629ec
	if (!cr6.eq) goto loc_826629EC;
	// lhz r11,516(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826629ec
	if (!cr6.eq) goto loc_826629EC;
	// li r11,416
	r11.s64 = 416;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lvx128 v0,r29,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r29.u32 + r11.u32) & ~0xF), VectorMaskL));
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// stvewx v13,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v12,r28,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r28.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v12,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// stvewx v11,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,18248(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 18248);
	f0.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f13,1468(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 1468);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + f0.f64));
	// lfs f0,-25600(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 * f30.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f31,4(r4)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f6,28(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-112(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x828e944c
	return;
loc_826629EC:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
}

__attribute__((alias("__imp__sub_82662A18"))) PPC_WEAK_FUNC(sub_82662A18);
PPC_FUNC_IMPL(__imp__sub_82662A18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82662A1C"))) PPC_WEAK_FUNC(sub_82662A1C);
PPC_FUNC_IMPL(__imp__sub_82662A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662A20"))) PPC_WEAK_FUNC(sub_82662A20);
PPC_FUNC_IMPL(__imp__sub_82662A20) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r30,40(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r7,255
	ctx.r7.s64 = 255;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lbzx r29,r10,r11
	r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stbx r7,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r7.u8);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lhz r28,4(r30)
	r28.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// lwz r26,40(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// bne cr6,0x82662a7c
	if (!cr6.eq) goto loc_82662A7C;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82662A7C:
	// clrlwi r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r11,r9,48
	r11.s64 = ctx.r9.s64 + 48;
	// bne cr6,0x82662a98
	if (!cr6.eq) goto loc_82662A98;
	// addi r11,r9,64
	r11.s64 = ctx.r9.s64 + 64;
loc_82662A98:
	// addi r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// bl 0x826632b0
	sub_826632B0(ctx, base);
	// lbz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// extsh r10,r29
	ctx.r10.s64 = r29.s16;
	// lhz r8,6(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mullw r11,r9,r10
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rotlwi r10,r8,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// li r4,1
	ctx.r4.s64 = 1;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r10,r11,63
	ctx.r10.s64 = r11.s64 + 63;
	// lbz r7,63(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 63);
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r6,r6,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r6,63(r11)
	PPC_STORE_U8(r11.u32 + 63, ctx.r6.u8);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x82679908
	sub_82679908(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addic. r11,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	r11.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82662b38
	if (cr0.lt) goto loc_82662B38;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82662B0C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// beq cr6,0x82662b30
	if (cr6.eq) goto loc_82662B30;
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, r29.s32, xer);
	// ble cr6,0x82662b30
	if (!cr6.gt) goto loc_82662B30;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
loc_82662B30:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// bdnz 0x82662b0c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82662B0C;
loc_82662B38:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8264cc78
	sub_8264CC78(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82662b74
	if (cr6.eq) goto loc_82662B74;
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lhz r6,2(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// bl 0x8264c0e8
	sub_8264C0E8(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
loc_82662B74:
	// lhz r11,16(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// addi r3,r28,-1
	ctx.r3.s64 = r28.s64 + -1;
	// ori r10,r11,5
	ctx.r10.u64 = r11.u64 | 5;
	// sth r10,16(r30)
	PPC_STORE_U16(r30.u32 + 16, ctx.r10.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82662B88"))) PPC_WEAK_FUNC(sub_82662B88);
PPC_FUNC_IMPL(__imp__sub_82662B88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82662B8C"))) PPC_WEAK_FUNC(sub_82662B8C);
PPC_FUNC_IMPL(__imp__sub_82662B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662B90"))) PPC_WEAK_FUNC(sub_82662B90);
PPC_FUNC_IMPL(__imp__sub_82662B90) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r28,88(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r26,92(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bne cr6,0x82662bd0
	if (!cr6.eq) goto loc_82662BD0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82662bf4
	goto loc_82662BF4;
loc_82662BD0:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rotlwi r9,r7,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
loc_82662BF4:
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8265a688
	sub_8265A688(ctx, base);
	// lhz r11,516(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82662c30
	if (cr6.eq) goto loc_82662C30;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658338
	sub_82658338(ctx, base);
loc_82662C30:
	// lhz r11,516(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82662c48
	if (cr6.eq) goto loc_82662C48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82658338
	sub_82658338(ctx, base);
loc_82662C48:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82662a20
	sub_82662A20(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82662c78
	if (!cr6.eq) goto loc_82662C78;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82662C78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_82662C7C"))) PPC_WEAK_FUNC(sub_82662C7C);
PPC_FUNC_IMPL(__imp__sub_82662C7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82662C80"))) PPC_WEAK_FUNC(sub_82662C80);
PPC_FUNC_IMPL(__imp__sub_82662C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rotlwi r10,r8,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662CA0"))) PPC_WEAK_FUNC(sub_82662CA0);
PPC_FUNC_IMPL(__imp__sub_82662CA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bne cr6,0x82662cbc
	if (!cr6.eq) goto loc_82662CBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82662CBC:
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lbz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// rotlwi r10,r7,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 5);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = r11.s64 + 48;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662CE4"))) PPC_WEAK_FUNC(sub_82662CE4);
PPC_FUNC_IMPL(__imp__sub_82662CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662CE8"))) PPC_WEAK_FUNC(sub_82662CE8);
PPC_FUNC_IMPL(__imp__sub_82662CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18256
	ctx.r9.s64 = r11.s64 + 18256;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_82662D00"))) PPC_WEAK_FUNC(sub_82662D00);
PPC_FUNC_IMPL(__imp__sub_82662D00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662D04"))) PPC_WEAK_FUNC(sub_82662D04);
PPC_FUNC_IMPL(__imp__sub_82662D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662D08"))) PPC_WEAK_FUNC(sub_82662D08);
PPC_FUNC_IMPL(__imp__sub_82662D08) {
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
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,18(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 18);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r26,48
	r26.s64 = 48;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
	// bne cr6,0x82662e48
	if (!cr6.eq) goto loc_82662E48;
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// lbz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
	// add r27,r10,r5
	r27.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lhz r11,170(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 170);
	// lhz r10,170(r27)
	ctx.r10.u64 = PPC_LOAD_U16(r27.u32 + 170);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82662d64
	if (!cr6.lt) goto loc_82662D64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82662D64:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r8,r30,16
	ctx.r8.s64 = r30.s64 + 16;
	// clrlwi r29,r10,16
	r29.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// stw r31,1120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1120, r31.u32);
	// bge cr6,0x82662df0
	if (!cr6.lt) goto loc_82662DF0;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// divwu r11,r11,r26
	r11.u32 = r11.u32 / r26.u32;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82662DA8:
	// lwz r11,32(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lbzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r6.u32);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bne cr6,0x82662dc0
	if (!cr6.eq) goto loc_82662DC0;
	// li r11,0
	r11.s64 = 0;
	// b 0x82662de4
	goto loc_82662DE4;
loc_82662DC0:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lbz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// lhz r4,6(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// rotlwi r9,r4,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 5);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
loc_82662DE4:
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// addi r8,r8,48
	ctx.r8.s64 = ctx.r8.s64 + 48;
	// bdnz 0x82662da8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82662DA8;
loc_82662DF0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8265a768
	sub_8265A768(ctx, base);
	// lhz r11,516(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82662e14
	if (cr6.eq) goto loc_82662E14;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82658410
	sub_82658410(ctx, base);
loc_82662E14:
	// lhz r11,516(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 516);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82662e2c
	if (cr6.eq) goto loc_82662E2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82658410
	sub_82658410(ctx, base);
loc_82662E2C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82662E48:
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// sth r29,18(r31)
	PPC_STORE_U16(r31.u32 + 18, r29.u16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82662eac
	if (!cr6.lt) goto loc_82662EAC;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r9,r31,20
	ctx.r9.s64 = r31.s64 + 20;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r7,16
	ctx.r7.s64 = 16;
	// divwu r10,r10,r26
	ctx.r10.u32 = ctx.r10.u32 / r26.u32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82662E78:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// lbzx r5,r10,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// rotlwi r10,r5,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 5);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stvx128 v13,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82662e78
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82662E78;
loc_82662EAC:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
}

__attribute__((alias("__imp__sub_82662EB0"))) PPC_WEAK_FUNC(sub_82662EB0);
PPC_FUNC_IMPL(__imp__sub_82662EB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82662EB4"))) PPC_WEAK_FUNC(sub_82662EB4);
PPC_FUNC_IMPL(__imp__sub_82662EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82662EB8"))) PPC_WEAK_FUNC(sub_82662EB8);
PPC_FUNC_IMPL(__imp__sub_82662EB8) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,18296
	ctx.r4.s64 = ctx.r10.s64 + 18296;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,60(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r4,r8,18284
	ctx.r4.s64 = ctx.r8.s64 + 18284;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r6,2(r5)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// bl 0x8262cfd0
	sub_8262CFD0(ctx, base);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r7,r11,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x82662f54
	if (!cr6.eq) goto loc_82662F54;
	// clrlwi r4,r11,2
	ctx.r4.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r5,r10,18272
	ctx.r5.s64 = ctx.r10.s64 + 18272;
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
loc_82662F54:
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

__attribute__((alias("__imp__sub_82662F7C"))) PPC_WEAK_FUNC(sub_82662F7C);
PPC_FUNC_IMPL(__imp__sub_82662F7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82662F80"))) PPC_WEAK_FUNC(sub_82662F80);
PPC_FUNC_IMPL(__imp__sub_82662F80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x82663368
	sub_82663368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82662F88"))) PPC_WEAK_FUNC(sub_82662F88);
PPC_FUNC_IMPL(__imp__sub_82662F88) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,18412
	ctx.r9.s64 = r11.s64 + 18412;
	// li r30,0
	r30.s64 = 0;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r29,r3,68
	r29.s64 = ctx.r3.s64 + 68;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r28,r3,20
	r28.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x8267a118
	sub_8267A118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82639f68
	sub_82639F68(ctx, base);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r8,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r8.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// stw r25,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r25.u32);
	// stw r27,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r27.u32);
	// sth r30,18(r31)
	PPC_STORE_U16(r31.u32 + 18, r30.u16);
	// sth r30,16(r31)
	PPC_STORE_U16(r31.u32 + 16, r30.u16);
	// sth r30,24(r31)
	PPC_STORE_U16(r31.u32 + 24, r30.u16);
	// sth r30,72(r31)
	PPC_STORE_U16(r31.u32 + 72, r30.u16);
	// lbz r7,42(r25)
	ctx.r7.u64 = PPC_LOAD_U8(r25.u32 + 42);
	// lwz r10,128(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 128);
	// lbz r6,42(r26)
	ctx.r6.u64 = PPC_LOAD_U8(r26.u32 + 42);
	// extsb r11,r6
	r11.s64 = ctx.r6.s8;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// add r5,r11,r9
	ctx.r5.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// lbz r11,7088(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7088);
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
	// rlwinm r11,r9,6,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lhz r4,7260(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 7260);
	// bl 0x826394e8
	sub_826394E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82663054"))) PPC_WEAK_FUNC(sub_82663054);
PPC_FUNC_IMPL(__imp__sub_82663054) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82663058"))) PPC_WEAK_FUNC(sub_82663058);
PPC_FUNC_IMPL(__imp__sub_82663058) {
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
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,18412
	ctx.r9.s64 = r11.s64 + 18412;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82663098
	if (cr6.eq) goto loc_82663098;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r31,68
	ctx.r4.s64 = r31.s64 + 68;
	// bl 0x8264d050
	sub_8264D050(ctx, base);
loc_82663098:
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8263a148
	sub_8263A148(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82663478
	sub_82663478(ctx, base);
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

__attribute__((alias("__imp__sub_826630D4"))) PPC_WEAK_FUNC(sub_826630D4);
PPC_FUNC_IMPL(__imp__sub_826630D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826630D8"))) PPC_WEAK_FUNC(sub_826630D8);
PPC_FUNC_IMPL(__imp__sub_826630D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lbz r11,16(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r31,r11,r4
	r31.u64 = r11.u64 + ctx.r4.u64;
	// add r30,r10,r5
	r30.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// sth r7,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r7.u16);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82662f88
	sub_82662F88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82663138"))) PPC_WEAK_FUNC(sub_82663138);
PPC_FUNC_IMPL(__imp__sub_82663138) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8266313C"))) PPC_WEAK_FUNC(sub_8266313C);
PPC_FUNC_IMPL(__imp__sub_8266313C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663140"))) PPC_WEAK_FUNC(sub_82663140);
PPC_FUNC_IMPL(__imp__sub_82663140) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,88(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,92(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r7,12
	ctx.r3.s64 = ctx.r7.s64 + 12;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lfs f0,144(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 144);
	f0.f64 = double(temp.f32);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lfs f13,144(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82628d30
	sub_82628D30(ctx, base);
	// lfs f10,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,148(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 148);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r28
	r11.u64 = r28.u64;
	// stb r9,14(r27)
	PPC_STORE_U8(r27.u32 + 14, ctx.r9.u8);
	// lfs f0,10324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 10324);
	f0.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r8,13(r27)
	PPC_STORE_U8(r27.u32 + 13, ctx.r8.u8);
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826631dc
	if (cr6.eq) goto loc_826631DC;
loc_826631CC:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826631cc
	if (!cr6.eq) goto loc_826631CC;
loc_826631DC:
	// lwz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// lbz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 8);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// lbz r5,9(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 9);
	// add. r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x826632a4
	if (cr0.eq) goto loc_826632A4;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x82663210
	if (!cr6.eq) goto loc_82663210;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x82663218
	goto loc_82663218;
loc_82663210:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_82663218:
	// cmpw cr6,r7,r25
	cr6.compare<int32_t>(ctx.r7.s32, r25.s32, xer);
	// blt cr6,0x82663224
	if (cr6.lt) goto loc_82663224;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_82663224:
	// subf r10,r7,r25
	ctx.r10.s64 = r25.s64 - ctx.r7.s64;
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// blt cr6,0x82663234
	if (cr6.lt) goto loc_82663234;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82663234:
	// addi r10,r7,5
	ctx.r10.s64 = ctx.r7.s64 + 5;
	// addi r8,r27,20
	ctx.r8.s64 = r27.s64 + 20;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r6,r9,r27
	ctx.r6.u64 = ctx.r9.u64 + r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82663274
	if (cr6.eq) goto loc_82663274;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
loc_82663254:
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bge cr6,0x82663274
	if (!cr6.lt) goto loc_82663274;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82663254
	if (!cr6.eq) goto loc_82663254;
loc_82663274:
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826632a4
	if (cr6.eq) goto loc_826632A4;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
loc_82663284:
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// bge cr6,0x826632a4
	if (!cr6.lt) goto loc_826632A4;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r28,12(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82663284
	if (!cr6.eq) goto loc_82663284;
loc_826632A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_826632A8"))) PPC_WEAK_FUNC(sub_826632A8);
PPC_FUNC_IMPL(__imp__sub_826632A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_826632AC"))) PPC_WEAK_FUNC(sub_826632AC);
PPC_FUNC_IMPL(__imp__sub_826632AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826632B0"))) PPC_WEAK_FUNC(sub_826632B0);
PPC_FUNC_IMPL(__imp__sub_826632B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lbz r31,10(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// lhz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// rlwinm r11,r4,5,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r10,r31,r6
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r6.s32);
	// lhz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rotlwi r9,r9,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bge cr6,0x8266335c
	if (!cr6.lt) goto loc_8266335C;
	// srawi r3,r31,2
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3) != 0);
	ctx.r3.s64 = r31.s32 >> 2;
	// subf r4,r4,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r4.s64;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82663308:
	// addi r5,r11,32
	ctx.r5.s64 = r11.s64 + 32;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r11,r7
	_mm_store_si128((__m128i*)(base + ((r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x82663344
	if (!cr6.gt) goto loc_82663344;
	// subf r11,r10,r9
	r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mtctr r3
	ctr.u64 = ctx.r3.u64;
loc_82663334:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stwx r9,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82663334
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82663334;
loc_82663344:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,16
	ctx.r7.s64 = 16;
	// bne 0x82663308
	if (!cr0.eq) goto loc_82663308;
loc_8266335C:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_82663360"))) PPC_WEAK_FUNC(sub_82663360);
PPC_FUNC_IMPL(__imp__sub_82663360) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663364"))) PPC_WEAK_FUNC(sub_82663364);
PPC_FUNC_IMPL(__imp__sub_82663364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663368"))) PPC_WEAK_FUNC(sub_82663368);
PPC_FUNC_IMPL(__imp__sub_82663368) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826633f4
	if (!cr6.gt) goto loc_826633F4;
loc_8266338C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lbzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// beq cr6,0x826633e4
	if (cr6.eq) goto loc_826633E4;
	// clrlwi r30,r29,16
	r30.u64 = r29.u32 & 0xFFFF;
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
	// bne cr6,0x826633c8
	if (!cr6.eq) goto loc_826633C8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826633C8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r11,r10
	PPC_STORE_U16(r11.u32 + ctx.r10.u32, r30.u16);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_826633E4:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8266338c
	if (cr6.lt) goto loc_8266338C;
loc_826633F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826633F8"))) PPC_WEAK_FUNC(sub_826633F8);
PPC_FUNC_IMPL(__imp__sub_826633F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_826633FC"))) PPC_WEAK_FUNC(sub_826633FC);
PPC_FUNC_IMPL(__imp__sub_826633FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663400"))) PPC_WEAK_FUNC(sub_82663400);
PPC_FUNC_IMPL(__imp__sub_82663400) {
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
	// bne cr6,0x82663454
	if (!cr6.eq) goto loc_82663454;
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
loc_82663454:
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

__attribute__((alias("__imp__sub_82663474"))) PPC_WEAK_FUNC(sub_82663474);
PPC_FUNC_IMPL(__imp__sub_82663474) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663478"))) PPC_WEAK_FUNC(sub_82663478);
PPC_FUNC_IMPL(__imp__sub_82663478) {
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
	// lwz r30,40(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,18332
	ctx.r10.s64 = r11.s64 + 18332;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x826634cc
	if (cr6.eq) goto loc_826634CC;
	// lhz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// bl 0x82679568
	sub_82679568(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
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
loc_826634CC:
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82663400
	sub_82663400(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826634E4"))) PPC_WEAK_FUNC(sub_826634E4);
PPC_FUNC_IMPL(__imp__sub_826634E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826634E8"))) PPC_WEAK_FUNC(sub_826634E8);
PPC_FUNC_IMPL(__imp__sub_826634E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-11068
	ctx.r3.s64 = r11.s64 + -11068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826634F4"))) PPC_WEAK_FUNC(sub_826634F4);
PPC_FUNC_IMPL(__imp__sub_826634F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826634F8"))) PPC_WEAK_FUNC(sub_826634F8);
PPC_FUNC_IMPL(__imp__sub_826634F8) {
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
	// bl 0x82663478
	sub_82663478(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82663544
	if (cr6.eq) goto loc_82663544;
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
loc_82663544:
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

__attribute__((alias("__imp__sub_8266355C"))) PPC_WEAK_FUNC(sub_8266355C);
PPC_FUNC_IMPL(__imp__sub_8266355C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663560"))) PPC_WEAK_FUNC(sub_82663560);
PPC_FUNC_IMPL(__imp__sub_82663560) {
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
	// bl 0x82663058
	sub_82663058(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826635ac
	if (cr6.eq) goto loc_826635AC;
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
loc_826635AC:
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

__attribute__((alias("__imp__sub_826635C4"))) PPC_WEAK_FUNC(sub_826635C4);
PPC_FUNC_IMPL(__imp__sub_826635C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826635C8"))) PPC_WEAK_FUNC(sub_826635C8);
PPC_FUNC_IMPL(__imp__sub_826635C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8263e0f0
	sub_8263E0F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,180(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 180);
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
	// bne cr6,0x82663740
	if (!cr6.eq) goto loc_82663740;
loc_82663614:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82663694
	if (cr6.eq) goto loc_82663694;
loc_82663628:
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82663684
	if (cr6.eq) goto loc_82663684;
loc_82663638:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82650de0
	sub_82650DE0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82640128
	sub_82640128(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x82663684
	if (!cr6.eq) goto loc_82663684;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// bne cr6,0x82663684
	if (!cr6.eq) goto loc_82663684;
	// lwz r10,180(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,180(r31)
	PPC_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// lbz r8,37(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwinm r7,r8,0,26,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x30;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82663638
	if (!cr6.eq) goto loc_82663638;
loc_82663684:
	// lbz r10,37(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwinm r10,r10,28,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82663628
	if (!cr6.eq) goto loc_82663628;
loc_82663694:
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
	// bne cr6,0x82663718
	if (!cr6.eq) goto loc_82663718;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826655b8
	sub_826655B8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826636ec
	if (!cr6.eq) goto loc_826636EC;
	// lbz r11,37(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 37);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// ori r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 16;
	// stb r9,37(r30)
	PPC_STORE_U8(r30.u32 + 37, ctx.r9.u8);
	// b 0x82663718
	goto loc_82663718;
loc_826636EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82640e40
	sub_82640E40(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82640128
	sub_82640128(ctx, base);
loc_82663718:
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
	// beq cr6,0x82663614
	if (cr6.eq) goto loc_82663614;
loc_82663740:
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8263e128
	sub_8263E128(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82663750"))) PPC_WEAK_FUNC(sub_82663750);
PPC_FUNC_IMPL(__imp__sub_82663750) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82663754"))) PPC_WEAK_FUNC(sub_82663754);
PPC_FUNC_IMPL(__imp__sub_82663754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663758"))) PPC_WEAK_FUNC(sub_82663758);
PPC_FUNC_IMPL(__imp__sub_82663758) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82663784
	if (cr6.eq) goto loc_82663784;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82663798
	if (!cr6.eq) goto loc_82663798;
loc_82663784:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82663798:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826637b0
	if (cr6.eq) goto loc_826637B0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x826637c4
	if (!cr6.eq) goto loc_826637C4;
loc_826637B0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826637C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_826637D4"))) PPC_WEAK_FUNC(sub_826637D4);
PPC_FUNC_IMPL(__imp__sub_826637D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826637D8"))) PPC_WEAK_FUNC(sub_826637D8);
PPC_FUNC_IMPL(__imp__sub_826637D8) {
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
	// bl 0x82640e40
	sub_82640E40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826638d4
	if (cr6.eq) goto loc_826638D4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82640e40
	sub_82640E40(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,36(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x826638bc
	if (!cr6.eq) goto loc_826638BC;
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
	// bge cr6,0x82663870
	if (!cr6.lt) goto loc_82663870;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r9,18488
	ctx.r8.s64 = ctx.r9.s64 + 18488;
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
loc_82663870:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82640e40
	sub_82640E40(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826638bc
	if (!cr6.lt) goto loc_826638BC;
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
loc_826638BC:
	// lis r11,-31931
	r11.s64 = -2092630016;
	// lwz r11,-24484(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -24484);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826638d4
	if (cr6.eq) goto loc_826638D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfc538
	sub_82BFC538(ctx, base);
loc_826638D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_826638D8"))) PPC_WEAK_FUNC(sub_826638D8);
PPC_FUNC_IMPL(__imp__sub_826638D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_826638DC"))) PPC_WEAK_FUNC(sub_826638DC);
PPC_FUNC_IMPL(__imp__sub_826638DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826638E0"))) PPC_WEAK_FUNC(sub_826638E0);
PPC_FUNC_IMPL(__imp__sub_826638E0) {
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
	// bl 0x82640e40
	sub_82640E40(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826639b0
	if (cr6.eq) goto loc_826639B0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r30,10
	r30.s64 = 10;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826639b0
	if (cr6.eq) goto loc_826639B0;
loc_82663918:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// ble cr6,0x826639b0
	if (!cr6.gt) goto loc_826639B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82640e40
	sub_82640E40(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82bfc538
	sub_82BFC538(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,40(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82663960
	if (cr6.eq) goto loc_82663960;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x82663974
	if (!cr6.eq) goto loc_82663974;
loc_82663960:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82663974:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8266398c
	if (cr6.eq) goto loc_8266398C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x826639a0
	if (!cr6.eq) goto loc_826639A0;
loc_8266398C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826639A0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82663918
	if (!cr6.eq) goto loc_82663918;
loc_826639B0:
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

__attribute__((alias("__imp__sub_826639C4"))) PPC_WEAK_FUNC(sub_826639C4);
PPC_FUNC_IMPL(__imp__sub_826639C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826639C8"))) PPC_WEAK_FUNC(sub_826639C8);
PPC_FUNC_IMPL(__imp__sub_826639C8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x82663a60
	if (cr6.lt) goto loc_82663A60;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// bge cr6,0x82663ac0
	if (!cr6.lt) goto loc_82663AC0;
	// addi r11,r31,176
	r11.s64 = r31.s64 + 176;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r11,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lvx128 v12,r11,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r11,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stvx128 v13,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82630798
	sub_82630798(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82648e30
	sub_82648E30(ctx, base);
	// b 0x82663ac0
	goto loc_82663AC0;
loc_82663A60:
	// ld r11,192(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 192);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ld r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 200);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,48
	r11.s64 = 48;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r30,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r30.u32 + r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v9,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v9,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v10,v11,v12
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v10,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82647db0
	sub_82647DB0(ctx, base);
loc_82663AC0:
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

__attribute__((alias("__imp__sub_82663AD4"))) PPC_WEAK_FUNC(sub_82663AD4);
PPC_FUNC_IMPL(__imp__sub_82663AD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663AD8"))) PPC_WEAK_FUNC(sub_82663AD8);
PPC_FUNC_IMPL(__imp__sub_82663AD8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82663b74
	if (!cr6.gt) goto loc_82663B74;
	// addi r27,r4,16
	r27.s64 = ctx.r4.s64 + 16;
	// addi r26,r4,32
	r26.s64 = ctx.r4.s64 + 32;
	// addi r25,r4,48
	r25.s64 = ctx.r4.s64 + 48;
	// li r30,0
	r30.s64 = 0;
loc_82663B0C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((r28.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((r27.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r0,r26
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((r26.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lvx128 v11,r0,r25
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((r25.u32) & ~0xF), VectorMaskL));
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwzx r11,r30,r7
	r11.u64 = PPC_LOAD_U32(r30.u32 + ctx.r7.u32);
	// addi r4,r11,240
	ctx.r4.s64 = r11.s64 + 240;
	// bl 0x82630798
	sub_82630798(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r30,r6
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + ctx.r6.u32);
	// bl 0x8264b490
	sub_8264B490(ctx, base);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r5
	cr6.compare<int32_t>(r29.s32, ctx.r5.s32, xer);
	// blt cr6,0x82663b0c
	if (cr6.lt) goto loc_82663B0C;
loc_82663B74:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82663bac
	if (!cr6.gt) goto loc_82663BAC;
	// li r30,0
	r30.s64 = 0;
loc_82663B88:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x826397f0
	sub_826397F0(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x82663b88
	if (cr6.lt) goto loc_82663B88;
loc_82663BAC:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82663be4
	if (!cr6.gt) goto loc_82663BE4;
	// li r30,0
	r30.s64 = 0;
loc_82663BC0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x826639c8
	sub_826639C8(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r10
	cr6.compare<int32_t>(r29.s32, ctx.r10.s32, xer);
	// blt cr6,0x82663bc0
	if (cr6.lt) goto loc_82663BC0;
loc_82663BE4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82663BE8"))) PPC_WEAK_FUNC(sub_82663BE8);
PPC_FUNC_IMPL(__imp__sub_82663BE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82663BEC"))) PPC_WEAK_FUNC(sub_82663BEC);
PPC_FUNC_IMPL(__imp__sub_82663BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663BF0"))) PPC_WEAK_FUNC(sub_82663BF0);
PPC_FUNC_IMPL(__imp__sub_82663BF0) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82663c3c
	if (!cr6.gt) goto loc_82663C3C;
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82663C18:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82663c30
	if (cr6.eq) goto loc_82663C30;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82663C30:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82663c18
	if (!cr0.eq) goto loc_82663C18;
loc_82663C3C:
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// stw r28,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82663c78
	if (!cr6.gt) goto loc_82663C78;
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82663C54:
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82663c6c
	if (cr6.eq) goto loc_82663C6C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82663C6C:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82663c54
	if (!cr0.eq) goto loc_82663C54;
loc_82663C78:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// stw r28,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82663cb4
	if (!cr6.gt) goto loc_82663CB4;
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82663C90:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82663ca8
	if (cr6.eq) goto loc_82663CA8;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82663CA8:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82663c90
	if (!cr0.eq) goto loc_82663C90;
loc_82663CB4:
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// stw r28,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82663cf0
	if (!cr6.gt) goto loc_82663CF0;
	// mr r31,r28
	r31.u64 = r28.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82663CCC:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82663ce4
	if (cr6.eq) goto loc_82663CE4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82628608
	sub_82628608(ctx, base);
loc_82663CE4:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82663ccc
	if (!cr0.eq) goto loc_82663CCC;
loc_82663CF0:
	// stw r28,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82663CF8"))) PPC_WEAK_FUNC(sub_82663CF8);
PPC_FUNC_IMPL(__imp__sub_82663CF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82663CFC"))) PPC_WEAK_FUNC(sub_82663CFC);
PPC_FUNC_IMPL(__imp__sub_82663CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663D00"))) PPC_WEAK_FUNC(sub_82663D00);
PPC_FUNC_IMPL(__imp__sub_82663D00) {
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
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x82663d48
	if (cr6.eq) goto loc_82663D48;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82663D48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82663D4C"))) PPC_WEAK_FUNC(sub_82663D4C);
PPC_FUNC_IMPL(__imp__sub_82663D4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82663D50"))) PPC_WEAK_FUNC(sub_82663D50);
PPC_FUNC_IMPL(__imp__sub_82663D50) {
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
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x82663d98
	if (cr6.eq) goto loc_82663D98;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82663D98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82663D9C"))) PPC_WEAK_FUNC(sub_82663D9C);
PPC_FUNC_IMPL(__imp__sub_82663D9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82663DA0"))) PPC_WEAK_FUNC(sub_82663DA0);
PPC_FUNC_IMPL(__imp__sub_82663DA0) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x82663de8
	if (cr6.eq) goto loc_82663DE8;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82663DE8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82663DEC"))) PPC_WEAK_FUNC(sub_82663DEC);
PPC_FUNC_IMPL(__imp__sub_82663DEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82663DF0"))) PPC_WEAK_FUNC(sub_82663DF0);
PPC_FUNC_IMPL(__imp__sub_82663DF0) {
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
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x82628608
	sub_82628608(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// beq cr6,0x82663e38
	if (cr6.eq) goto loc_82663E38;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_82663E38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82663E3C"))) PPC_WEAK_FUNC(sub_82663E3C);
PPC_FUNC_IMPL(__imp__sub_82663E3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82663E40"))) PPC_WEAK_FUNC(sub_82663E40);
PPC_FUNC_IMPL(__imp__sub_82663E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addic. r8,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r8.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bltlr 
	if (cr0.lt) return;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82663E50:
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82663eac
	if (!cr6.eq) goto loc_82663EAC;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82663eac
	if (!cr6.gt) goto loc_82663EAC;
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
loc_82663E9C:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82663e9c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82663E9C;
loc_82663EAC:
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// bge 0x82663e50
	if (!cr0.lt) goto loc_82663E50;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82663EBC"))) PPC_WEAK_FUNC(sub_82663EBC);
PPC_FUNC_IMPL(__imp__sub_82663EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82663EC0"))) PPC_WEAK_FUNC(sub_82663EC0);
PPC_FUNC_IMPL(__imp__sub_82663EC0) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r4,8
	r30.s64 = ctx.r4.s64 + 8;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bge cr6,0x82663f50
	if (!cr6.lt) goto loc_82663F50;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82663f20
	if (!cr6.eq) goto loc_82663F20;
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
loc_82663F20:
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
loc_82663F50:
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
	// ble cr6,0x82663f80
	if (!cr6.gt) goto loc_82663F80;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_82663F70:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82663f70
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82663F70;
loc_82663F80:
	// addi r30,r27,44
	r30.s64 = r27.s64 + 44;
	// addi r31,r28,44
	r31.s64 = r28.s64 + 44;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bge cr6,0x82663ffc
	if (!cr6.lt) goto loc_82663FFC;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82663fcc
	if (!cr6.eq) goto loc_82663FCC;
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
loc_82663FCC:
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
loc_82663FFC:
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
	// ble cr6,0x8266402c
	if (!cr6.gt) goto loc_8266402C;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_8266401C:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8266401c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8266401C;
loc_8266402C:
	// addi r30,r27,20
	r30.s64 = r27.s64 + 20;
	// addi r31,r28,20
	r31.s64 = r28.s64 + 20;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bge cr6,0x826640a8
	if (!cr6.lt) goto loc_826640A8;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82664078
	if (!cr6.eq) goto loc_82664078;
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
loc_82664078:
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
loc_826640A8:
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
	// ble cr6,0x826640d8
	if (!cr6.gt) goto loc_826640D8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_826640C8:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x826640c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826640C8;
loc_826640D8:
	// addi r30,r27,32
	r30.s64 = r27.s64 + 32;
	// addi r31,r28,32
	r31.s64 = r28.s64 + 32;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r10,36(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r29,16(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bge cr6,0x82664154
	if (!cr6.lt) goto loc_82664154;
	// rlwinm r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82664124
	if (!cr6.eq) goto loc_82664124;
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
loc_82664124:
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
loc_82664154:
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
	// ble cr6,0x82664184
	if (!cr6.gt) goto loc_82664184;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - r11.s64;
loc_82664174:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x82664174
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82664174;
loc_82664184:
	// addi r4,r27,56
	ctx.r4.s64 = r27.s64 + 56;
	// addi r3,r28,56
	ctx.r3.s64 = r28.s64 + 56;
	// bl 0x82bf79e8
	sub_82BF79E8(ctx, base);
	// lwz r11,60(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// stw r11,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r11.u32);
	// lbz r10,64(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 64);
	// stb r10,64(r28)
	PPC_STORE_U8(r28.u32 + 64, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_826641A4"))) PPC_WEAK_FUNC(sub_826641A4);
PPC_FUNC_IMPL(__imp__sub_826641A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826641A8"))) PPC_WEAK_FUNC(sub_826641A8);
PPC_FUNC_IMPL(__imp__sub_826641A8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8266421c
	if (cr6.eq) goto loc_8266421C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
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
	// bne cr6,0x82664200
	if (!cr6.eq) goto loc_82664200;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82664200:
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
loc_8266421C:
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

__attribute__((alias("__imp__sub_82664230"))) PPC_WEAK_FUNC(sub_82664230);
PPC_FUNC_IMPL(__imp__sub_82664230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664234"))) PPC_WEAK_FUNC(sub_82664234);
PPC_FUNC_IMPL(__imp__sub_82664234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664238"))) PPC_WEAK_FUNC(sub_82664238);
PPC_FUNC_IMPL(__imp__sub_82664238) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826642ac
	if (cr6.eq) goto loc_826642AC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r31,r31,44
	r31.s64 = r31.s64 + 44;
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
	// bne cr6,0x82664290
	if (!cr6.eq) goto loc_82664290;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82664290:
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
loc_826642AC:
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

__attribute__((alias("__imp__sub_826642C0"))) PPC_WEAK_FUNC(sub_826642C0);
PPC_FUNC_IMPL(__imp__sub_826642C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826642C4"))) PPC_WEAK_FUNC(sub_826642C4);
PPC_FUNC_IMPL(__imp__sub_826642C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826642C8"))) PPC_WEAK_FUNC(sub_826642C8);
PPC_FUNC_IMPL(__imp__sub_826642C8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8266433c
	if (cr6.eq) goto loc_8266433C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
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
	// bne cr6,0x82664320
	if (!cr6.eq) goto loc_82664320;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82664320:
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
loc_8266433C:
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

__attribute__((alias("__imp__sub_82664350"))) PPC_WEAK_FUNC(sub_82664350);
PPC_FUNC_IMPL(__imp__sub_82664350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664354"))) PPC_WEAK_FUNC(sub_82664354);
PPC_FUNC_IMPL(__imp__sub_82664354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664358"))) PPC_WEAK_FUNC(sub_82664358);
PPC_FUNC_IMPL(__imp__sub_82664358) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826643cc
	if (cr6.eq) goto loc_826643CC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82628558
	sub_82628558(ctx, base);
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
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
	// bne cr6,0x826643b0
	if (!cr6.eq) goto loc_826643B0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826643B0:
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
loc_826643CC:
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

__attribute__((alias("__imp__sub_826643E0"))) PPC_WEAK_FUNC(sub_826643E0);
PPC_FUNC_IMPL(__imp__sub_826643E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826643E4"))) PPC_WEAK_FUNC(sub_826643E4);
PPC_FUNC_IMPL(__imp__sub_826643E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826643E8"))) PPC_WEAK_FUNC(sub_826643E8);
PPC_FUNC_IMPL(__imp__sub_826643E8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,18512
	ctx.r10.s64 = r11.s64 + 18512;
	// li r29,1
	r29.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// sth r29,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, r29.u16);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// bl 0x82bf77c8
	sub_82BF77C8(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stb r29,64(r31)
	PPC_STORE_U8(r31.u32 + 64, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82664460"))) PPC_WEAK_FUNC(sub_82664460);
PPC_FUNC_IMPL(__imp__sub_82664460) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82664464"))) PPC_WEAK_FUNC(sub_82664464);
PPC_FUNC_IMPL(__imp__sub_82664464) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664468"))) PPC_WEAK_FUNC(sub_82664468);
PPC_FUNC_IMPL(__imp__sub_82664468) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r11,18512
	ctx.r10.s64 = r11.s64 + 18512;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82663bf0
	sub_82663BF0(ctx, base);
	// addi r3,r28,56
	ctx.r3.s64 = r28.s64 + 56;
	// bl 0x82bf78f8
	sub_82BF78F8(ctx, base);
	// addi r30,r28,44
	r30.s64 = r28.s64 + 44;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r31.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x826644d0
	if (!cr6.eq) goto loc_826644D0;
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
loc_826644D0:
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r28,32
	r29.s64 = r28.s64 + 32;
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,36(r28)
	PPC_STORE_U32(r28.u32 + 36, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82664518
	if (!cr6.eq) goto loc_82664518;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_82664518:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r30,r28,20
	r30.s64 = r28.s64 + 20;
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8266455c
	if (!cr6.eq) goto loc_8266455C;
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
loc_8266455C:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r31,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r31.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826645a0
	if (!cr6.eq) goto loc_826645A0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_826645A0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826645B8"))) PPC_WEAK_FUNC(sub_826645B8);
PPC_FUNC_IMPL(__imp__sub_826645B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826645BC"))) PPC_WEAK_FUNC(sub_826645BC);
PPC_FUNC_IMPL(__imp__sub_826645BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826645C0"))) PPC_WEAK_FUNC(sub_826645C0);
PPC_FUNC_IMPL(__imp__sub_826645C0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
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
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// addi r4,r24,56
	ctx.r4.s64 = r24.s64 + 56;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// bl 0x82bf79e8
	sub_82BF79E8(ctx, base);
	// lwz r8,60(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 60);
	// addi r22,r20,8
	r22.s64 = r20.s64 + 8;
	// stw r8,60(r20)
	PPC_STORE_U32(r20.u32 + 60, ctx.r8.u32);
	// lbz r7,64(r24)
	ctx.r7.u64 = PPC_LOAD_U8(r24.u32 + 64);
	// stb r7,64(r20)
	PPC_STORE_U8(r20.u32 + 64, ctx.r7.u8);
	// lwz r31,12(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r6,16(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r6,2
	r11.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82664658
	if (!cr6.lt) goto loc_82664658;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82664648
	if (cr6.lt) goto loc_82664648;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82664648:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82664658:
	// stw r31,4(r22)
	PPC_STORE_U32(r22.u32 + 4, r31.u32);
	// addi r21,r20,44
	r21.s64 = r20.s64 + 44;
	// lwz r31,48(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,52(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 52);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8266469c
	if (!cr6.lt) goto loc_8266469C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8266468c
	if (cr6.lt) goto loc_8266468C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8266468C:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8266469C:
	// stw r31,4(r21)
	PPC_STORE_U32(r21.u32 + 4, r31.u32);
	// addi r26,r20,20
	r26.s64 = r20.s64 + 20;
	// lwz r31,24(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,28(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 28);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x826646e0
	if (!cr6.lt) goto loc_826646E0;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x826646d0
	if (cr6.lt) goto loc_826646D0;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_826646D0:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_826646E0:
	// stw r31,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r31.u32);
	// addi r23,r20,32
	r23.s64 = r20.s64 + 32;
	// lwz r31,36(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,40(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 40);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r11,2
	r11.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82664724
	if (!cr6.lt) goto loc_82664724;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82664714
	if (cr6.lt) goto loc_82664714;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82664714:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82664724:
	// stw r31,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r31.u32);
	// li r25,0
	r25.s64 = 0;
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82664774
	if (!cr6.gt) goto loc_82664774;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82664740:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r29,0(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r3,r29,r31
	PPC_STORE_U32(r29.u32 + r31.u32, ctx.r3.u32);
	// lwz r8,12(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(r30.s32, ctx.r8.s32, xer);
	// blt cr6,0x82664740
	if (cr6.lt) goto loc_82664740;
loc_82664774:
	// lwz r11,48(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826647bc
	if (!cr6.gt) goto loc_826647BC;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_82664788:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// lwz r29,0(r21)
	r29.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwx r3,r29,r31
	PPC_STORE_U32(r29.u32 + r31.u32, ctx.r3.u32);
	// lwz r8,48(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r30,r8
	cr6.compare<int32_t>(r30.s32, ctx.r8.s32, xer);
	// blt cr6,0x82664788
	if (cr6.lt) goto loc_82664788;
loc_826647BC:
	// lwz r11,24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// mr r27,r25
	r27.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826648ac
	if (!cr6.gt) goto loc_826648AC;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_826647D0:
	// lwz r10,20(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwzx r30,r10,r29
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// ble cr6,0x8266480c
	if (!cr6.gt) goto loc_8266480C;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
loc_826647F0:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82664810
	if (cr6.eq) goto loc_82664810;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x826647f0
	if (cr6.lt) goto loc_826647F0;
loc_8266480C:
	// li r11,-1
	r11.s64 = -1;
loc_82664810:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwzx r28,r9,r10
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x82639578
	sub_82639578(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8266483c
	if (cr6.eq) goto loc_8266483C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// b 0x82664880
	goto loc_82664880;
loc_8266483C:
	// lwz r9,12(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82664870
	if (!cr6.gt) goto loc_82664870;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 8);
loc_82664854:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x82664874
	if (cr6.eq) goto loc_82664874;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82664854
	if (cr6.lt) goto loc_82664854;
loc_82664870:
	// li r11,-1
	r11.s64 = -1;
loc_82664874:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82664880:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82639ff0
	sub_82639FF0(ctx, base);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stwx r3,r31,r29
	PPC_STORE_U32(r31.u32 + r29.u32, ctx.r3.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,24(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x826647d0
	if (cr6.lt) goto loc_826647D0;
loc_826648AC:
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// mr r27,r25
	r27.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82664bd0
	if (!cr6.gt) goto loc_82664BD0;
	// mr r28,r25
	r28.u64 = r25.u64;
	// lis r29,-32768
	r29.s64 = -2147483648;
loc_826648C4:
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// lwzx r30,r11,r28
	r30.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826648e0
	if (!cr6.eq) goto loc_826648E0;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// stwx r25,r28,r11
	PPC_STORE_U32(r28.u32 + r11.u32, r25.u32);
	// b 0x82664bbc
	goto loc_82664BBC;
loc_826648E0:
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r25.u32);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// lwz r31,140(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r9,2
	r11.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x8266494c
	if (!cr6.lt) goto loc_8266494C;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8266493c
	if (cr6.lt) goto loc_8266493C;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8266493C:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_8266494C:
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x826649bc
	if (!cr6.gt) goto loc_826649BC;
	// addi r6,r24,8
	ctx.r6.s64 = r24.s64 + 8;
	// mtctr r31
	ctr.u64 = r31.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_82664964:
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwzx r8,r7,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// ble cr6,0x8266499c
	if (!cr6.gt) goto loc_8266499C;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82664980:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// beq cr6,0x826649a0
	if (cr6.eq) goto loc_826649A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82664980
	if (cr6.lt) goto loc_82664980;
loc_8266499C:
	// li r11,-1
	r11.s64 = -1;
loc_826649A0:
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r5,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82664964
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82664964;
loc_826649BC:
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// lwz r31,124(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// clrlwi r11,r9,2
	r11.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x82664a28
	if (!cr6.lt) goto loc_82664A28;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82664a18
	if (cr6.lt) goto loc_82664A18;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82664A18:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82632e00
	sub_82632E00(ctx, base);
loc_82664A28:
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82664a98
	if (!cr6.gt) goto loc_82664A98;
	// addi r6,r24,44
	ctx.r6.s64 = r24.s64 + 44;
	// mtctr r31
	ctr.u64 = r31.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
loc_82664A40:
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwzx r8,r7,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// ble cr6,0x82664a78
	if (!cr6.gt) goto loc_82664A78;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82664A5C:
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r8
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, xer);
	// beq cr6,0x82664a7c
	if (cr6.eq) goto loc_82664A7C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82664a5c
	if (cr6.lt) goto loc_82664A5C;
loc_82664A78:
	// li r11,-1
	r11.s64 = -1;
loc_82664A7C:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r5,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x82664a40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82664A40;
loc_82664A98:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r31,0(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stwx r3,r28,r31
	PPC_STORE_U32(r28.u32 + r31.u32, ctx.r3.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82664af4
	if (!cr6.eq) goto loc_82664AF4;
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
loc_82664AF4:
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82664b34
	if (!cr6.eq) goto loc_82664B34;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82664B34:
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r25.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82664b74
	if (!cr6.eq) goto loc_82664B74;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
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
loc_82664B74:
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r25.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82664bb4
	if (!cr6.eq) goto loc_82664BB4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = r11.u32 & 0x3FFFFFFF;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82664BB4:
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r25.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
loc_82664BBC:
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x826648c4
	if (cr6.lt) goto loc_826648C4;
loc_82664BD0:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_82664BD8"))) PPC_WEAK_FUNC(sub_82664BD8);
PPC_FUNC_IMPL(__imp__sub_82664BD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_82664BDC"))) PPC_WEAK_FUNC(sub_82664BDC);
PPC_FUNC_IMPL(__imp__sub_82664BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664BE0"))) PPC_WEAK_FUNC(sub_82664BE0);
PPC_FUNC_IMPL(__imp__sub_82664BE0) {
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
	// bl 0x82664468
	sub_82664468(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82664c2c
	if (cr6.eq) goto loc_82664C2C;
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
loc_82664C2C:
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

__attribute__((alias("__imp__sub_82664C44"))) PPC_WEAK_FUNC(sub_82664C44);
PPC_FUNC_IMPL(__imp__sub_82664C44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664C48"))) PPC_WEAK_FUNC(sub_82664C48);
PPC_FUNC_IMPL(__imp__sub_82664C48) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664C4C"))) PPC_WEAK_FUNC(sub_82664C4C);
PPC_FUNC_IMPL(__imp__sub_82664C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664C50"))) PPC_WEAK_FUNC(sub_82664C50);
PPC_FUNC_IMPL(__imp__sub_82664C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
}

__attribute__((alias("__imp__sub_82664C58"))) PPC_WEAK_FUNC(sub_82664C58);
PPC_FUNC_IMPL(__imp__sub_82664C58) {
	PPC_FUNC_PROLOGUE();
	// b 0x8264ce68
	sub_8264CE68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664C5C"))) PPC_WEAK_FUNC(sub_82664C5C);
PPC_FUNC_IMPL(__imp__sub_82664C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664C60"))) PPC_WEAK_FUNC(sub_82664C60);
PPC_FUNC_IMPL(__imp__sub_82664C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
}

__attribute__((alias("__imp__sub_82664C68"))) PPC_WEAK_FUNC(sub_82664C68);
PPC_FUNC_IMPL(__imp__sub_82664C68) {
	PPC_FUNC_PROLOGUE();
	// b 0x8264d010
	sub_8264D010(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82664C6C"))) PPC_WEAK_FUNC(sub_82664C6C);
PPC_FUNC_IMPL(__imp__sub_82664C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664C70"))) PPC_WEAK_FUNC(sub_82664C70);
PPC_FUNC_IMPL(__imp__sub_82664C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// lbz r10,18(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 18);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stb r9,18(r11)
	PPC_STORE_U8(r11.u32 + 18, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664C84"))) PPC_WEAK_FUNC(sub_82664C84);
PPC_FUNC_IMPL(__imp__sub_82664C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664C88"))) PPC_WEAK_FUNC(sub_82664C88);
PPC_FUNC_IMPL(__imp__sub_82664C88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664C8C"))) PPC_WEAK_FUNC(sub_82664C8C);
PPC_FUNC_IMPL(__imp__sub_82664C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664C90"))) PPC_WEAK_FUNC(sub_82664C90);
PPC_FUNC_IMPL(__imp__sub_82664C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,60(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x82664cc4
	if (!cr6.gt) goto loc_82664CC4;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
loc_82664CA8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r4
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, xer);
	// beq cr6,0x82664cc8
	if (cr6.eq) goto loc_82664CC8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x82664ca8
	if (cr6.lt) goto loc_82664CA8;
loc_82664CC4:
	// li r11,-1
	r11.s64 = -1;
loc_82664CC8:
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lbz r8,37(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// clrlwi r7,r8,26
	ctx.r7.u64 = ctx.r8.u32 & 0x3F;
	// rlwinm r7,r7,0,30,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// ori r6,r7,68
	ctx.r6.u64 = ctx.r7.u64 | 68;
	// stb r6,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r6.u8);
}

__attribute__((alias("__imp__sub_82664CEC"))) PPC_WEAK_FUNC(sub_82664CEC);
PPC_FUNC_IMPL(__imp__sub_82664CEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664CF0"))) PPC_WEAK_FUNC(sub_82664CF0);
PPC_FUNC_IMPL(__imp__sub_82664CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82664d04
	if (!cr6.gt) goto loc_82664D04;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82664D04:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_82664D38"))) PPC_WEAK_FUNC(sub_82664D38);
PPC_FUNC_IMPL(__imp__sub_82664D38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664D3C"))) PPC_WEAK_FUNC(sub_82664D3C);
PPC_FUNC_IMPL(__imp__sub_82664D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82664D40"))) PPC_WEAK_FUNC(sub_82664D40);
PPC_FUNC_IMPL(__imp__sub_82664D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r7,168(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 168);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r10,r3,72
	ctx.r10.s64 = ctx.r3.s64 + 72;
	// lwz r5,-4(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	// stwx r5,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + r11.u32, ctx.r5.u32);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lhz r10,168(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 168);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r5,r7,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// sth r10,168(r5)
	PPC_STORE_U16(ctx.r5.u32 + 168, ctx.r10.u16);
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r9,204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 204, ctx.r9.u32);
	// sth r8,168(r4)
	PPC_STORE_U16(ctx.r4.u32 + 168, ctx.r8.u16);
	// lbz r10,37(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// rlwimi r10,r6,6,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stb r10,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_82664DA4"))) PPC_WEAK_FUNC(sub_82664DA4);
PPC_FUNC_IMPL(__imp__sub_82664DA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82664DA8"))) PPC_WEAK_FUNC(sub_82664DA8);
PPC_FUNC_IMPL(__imp__sub_82664DA8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82664e08
	if (!cr6.eq) goto loc_82664E08;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,72(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// addi r5,r9,18616
	ctx.r5.s64 = ctx.r9.s64 + 18616;
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
loc_82664E08:
	// lwz r11,76(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82664f90
	if (!cr6.gt) goto loc_82664F90;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// li r26,0
	r26.s64 = 0;
	// addi r22,r11,18608
	r22.s64 = r11.s64 + 18608;
	// addi r21,r10,18596
	r21.s64 = ctx.r10.s64 + 18596;
	// addi r25,r9,18584
	r25.s64 = ctx.r9.s64 + 18584;
	// addi r24,r8,18572
	r24.s64 = ctx.r8.s64 + 18572;
	// addi r23,r7,18564
	r23.s64 = ctx.r7.s64 + 18564;
loc_82664E44:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r10,72(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 72);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r30,r26,r10
	r30.u64 = PPC_LOAD_U32(r26.u32 + ctx.r10.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lhz r11,178(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 178);
	// rlwinm r6,r11,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82664ed4
	if (!cr6.eq) goto loc_82664ED4;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r9,r11,18
	ctx.r9.u64 = r11.u32 & 0x3FFF;
	// lhz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 176);
	// rlwinm r11,r11,1,17,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x7FFE;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,172(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// lwz r11,20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82664ED4:
	// lhz r11,176(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 176);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82664f68
	if (cr6.eq) goto loc_82664F68;
	// li r29,0
	r29.s64 = 0;
loc_82664EE8:
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// lwzx r5,r11,r29
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82664f1c
	if (cr6.eq) goto loc_82664F1C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82664F1C:
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lhz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// clrlwi r8,r9,17
	ctx.r8.u64 = ctx.r9.u32 & 0x7FFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82664f54
	if (cr6.eq) goto loc_82664F54;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82664F54:
	// lhz r11,176(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 176);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82664ee8
	if (cr6.lt) goto loc_82664EE8;
loc_82664F68:
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
	// lwz r9,76(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r20,r9
	cr6.compare<int32_t>(r20.s32, ctx.r9.s32, xer);
	// blt cr6,0x82664e44
	if (cr6.lt) goto loc_82664E44;
loc_82664F90:
	// lwz r11,64(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 64);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82664fdc
	if (!cr6.eq) goto loc_82664FDC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,56(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// bl 0x8262cf78
	sub_8262CF78(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,60(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r6,56(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// addi r5,r9,18552
	ctx.r5.s64 = ctx.r9.s64 + 18552;
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
loc_82664FDC:
	// lwz r11,60(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82665030
	if (!cr6.gt) goto loc_82665030;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r30,0
	r30.s64 = 0;
	// addi r28,r11,18544
	r28.s64 = r11.s64 + 18544;
loc_82664FF8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,56(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwzx r5,r30,r10
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,60(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 60);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r8
	cr6.compare<int32_t>(r29.s32, ctx.r8.s32, xer);
	// blt cr6,0x82664ff8
	if (cr6.lt) goto loc_82664FF8;
loc_82665030:
	// addi r30,r27,88
	r30.s64 = r27.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c67840
	sub_82C67840(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,18532
	ctx.r4.s64 = r11.s64 + 18532;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,24(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,120(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 120);
	// bl 0x82c67530
	sub_82C67530(ctx, base);
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
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82665088"))) PPC_WEAK_FUNC(sub_82665088);
PPC_FUNC_IMPL(__imp__sub_82665088) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8266508C"))) PPC_WEAK_FUNC(sub_8266508C);
PPC_FUNC_IMPL(__imp__sub_8266508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665090"))) PPC_WEAK_FUNC(sub_82665090);
PPC_FUNC_IMPL(__imp__sub_82665090) {
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
	// stw r3,204(r4)
	PPC_STORE_U32(ctx.r4.u32 + 204, ctx.r3.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r31,r3,72
	r31.s64 = ctx.r3.s64 + 72;
	// sth r11,168(r4)
	PPC_STORE_U16(ctx.r4.u32 + 168, r11.u16);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// bne cr6,0x826650e0
	if (!cr6.eq) goto loc_826650E0;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_826650E0:
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

__attribute__((alias("__imp__sub_82665110"))) PPC_WEAK_FUNC(sub_82665110);
PPC_FUNC_IMPL(__imp__sub_82665110) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665114"))) PPC_WEAK_FUNC(sub_82665114);
PPC_FUNC_IMPL(__imp__sub_82665114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665118"))) PPC_WEAK_FUNC(sub_82665118);
PPC_FUNC_IMPL(__imp__sub_82665118) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r31,r3,56
	r31.s64 = ctx.r3.s64 + 56;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,64(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// clrlwi r9,r11,2
	ctx.r9.u64 = r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bne cr6,0x82665158
	if (!cr6.eq) goto loc_82665158;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82632ea0
	sub_82632EA0(ctx, base);
loc_82665158:
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
	// stw r29,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8266517C"))) PPC_WEAK_FUNC(sub_8266517C);
PPC_FUNC_IMPL(__imp__sub_8266517C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82665180"))) PPC_WEAK_FUNC(sub_82665180);
PPC_FUNC_IMPL(__imp__sub_82665180) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r24,0
	r24.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r24
	r28.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82665244
	if (!cr6.gt) goto loc_82665244;
	// mr r27,r24
	r27.u64 = r24.u64;
loc_826651AC:
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwzx r11,r27,r11
	r11.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r31,r11,96
	r31.s64 = r11.s64 + 96;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82665230
	if (!cr6.gt) goto loc_82665230;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_826651CC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// beq cr6,0x8266521c
	if (cr6.eq) goto loc_8266521C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lhz r5,168(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 168);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82bfb3a0
	sub_82BFB3A0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x826654a4
	if (cr6.eq) goto loc_826654A4;
loc_8266521C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826651cc
	if (cr6.lt) goto loc_826651CC;
loc_82665230:
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x826651ac
	if (cr6.lt) goto loc_826651AC;
loc_82665244:
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826652ec
	if (!cr6.gt) goto loc_826652EC;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82665254:
	// lwz r11,72(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 72);
	// mr r29,r24
	r29.u64 = r24.u64;
	// lwzx r30,r28,r11
	r30.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lhz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 176);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826652d8
	if (cr6.eq) goto loc_826652D8;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_82665270:
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r9,232(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// beq cr6,0x826652c4
	if (cr6.eq) goto loc_826652C4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// beq cr6,0x826652c4
	if (cr6.eq) goto loc_826652C4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lhz r5,168(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 168);
	// lhz r4,168(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 168);
	// bl 0x82bfb3a0
	sub_82BFB3A0(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// beq cr6,0x826654a4
	if (cr6.eq) goto loc_826654A4;
loc_826652C4:
	// lhz r11,176(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 176);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82665270
	if (cr6.lt) goto loc_82665270;
loc_826652D8:
	// lwz r11,76(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82665254
	if (cr6.lt) goto loc_82665254;
loc_826652EC:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// lwz r10,60(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 60);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// ori r8,r11,10
	ctx.r8.u64 = r11.u64 | 10;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r27,r24
	r27.u64 = r24.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82665400
	if (!cr6.gt) goto loc_82665400;
	// mr r28,r24
	r28.u64 = r24.u64;
loc_82665318:
	// lwz r11,56(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 56);
	// lwzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826653ec
	if (cr6.eq) goto loc_826653EC;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r24
	r31.u64 = r24.u64;
	// li r29,-1
	r29.s64 = -1;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82665358:
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// bge cr6,0x826653ec
	if (!cr6.lt) goto loc_826653EC;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r7,232(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 232);
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// beq cr6,0x82665374
	if (cr6.eq) goto loc_82665374;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_82665374:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x82665358
	if (cr6.eq) goto loc_82665358;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// bge cr6,0x826653ec
	if (!cr6.lt) goto loc_826653EC;
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82665390:
	// lwzx r11,r30,r10
	r11.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lbz r8,232(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r8,5
	cr6.compare<uint32_t>(ctx.r8.u32, 5, xer);
	// beq cr6,0x826653dc
	if (cr6.eq) goto loc_826653DC;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r5,168(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 168);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lhz r4,168(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 168);
	// bl 0x82bfb3a0
	sub_82BFB3A0(ctx, base);
	// lwz r7,0(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// neg r5,r6
	ctx.r5.s64 = -ctx.r6.s64;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r3,r5
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, xer);
	// beq cr6,0x8266546c
	if (cr6.eq) goto loc_8266546C;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826653DC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r31,r9
	cr6.compare<int32_t>(r31.s32, ctx.r9.s32, xer);
	// blt cr6,0x82665390
	if (cr6.lt) goto loc_82665390;
loc_826653EC:
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 60);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82665318
	if (cr6.lt) goto loc_82665318;
loc_82665400:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82665438
	if (!cr6.eq) goto loc_82665438;
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
loc_82665438:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r3,r4,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9458
	return;
loc_8266546C:
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826654a4
	if (!cr6.eq) goto loc_826654A4;
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
loc_826654A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_826654AC"))) PPC_WEAK_FUNC(sub_826654AC);
PPC_FUNC_IMPL(__imp__sub_826654AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_826654B0"))) PPC_WEAK_FUNC(sub_826654B0);
PPC_FUNC_IMPL(__imp__sub_826654B0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r10,r11,18632
	ctx.r10.s64 = r11.s64 + 18632;
	// addi r30,r3,92
	r30.s64 = ctx.r3.s64 + 92;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,100(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 100);
	// li r29,0
	r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,96(r28)
	PPC_STORE_U32(r28.u32 + 96, r29.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x8266550c
	if (!cr6.eq) goto loc_8266550C;
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
loc_8266550C:
	// lis r27,-32768
	r27.s64 = -2147483648;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// addi r31,r28,72
	r31.s64 = r28.s64 + 72;
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,80(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,76(r28)
	PPC_STORE_U32(r28.u32 + 76, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82665554
	if (!cr6.eq) goto loc_82665554;
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
loc_82665554:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r30,r28,56
	r30.s64 = r28.s64 + 56;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// lwz r11,64(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// stw r29,60(r28)
	PPC_STORE_U32(r28.u32 + 60, r29.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82665598
	if (!cr6.eq) goto loc_82665598;
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
loc_82665598:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r27.u32);
	// addi r10,r11,-13048
	ctx.r10.s64 = r11.s64 + -13048;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_826655B0"))) PPC_WEAK_FUNC(sub_826655B0);
PPC_FUNC_IMPL(__imp__sub_826655B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826655B4"))) PPC_WEAK_FUNC(sub_826655B4);
PPC_FUNC_IMPL(__imp__sub_826655B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826655B8"))) PPC_WEAK_FUNC(sub_826655B8);
PPC_FUNC_IMPL(__imp__sub_826655B8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,76(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,127
	ctx.r8.s64 = r11.s64 + 127;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r8,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x82bfb298
	sub_82BFB298(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665180
	sub_82665180(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82627d10
	sub_82627D10(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_82665640"))) PPC_WEAK_FUNC(sub_82665640);
PPC_FUNC_IMPL(__imp__sub_82665640) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665644"))) PPC_WEAK_FUNC(sub_82665644);
PPC_FUNC_IMPL(__imp__sub_82665644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665648"))) PPC_WEAK_FUNC(sub_82665648);
PPC_FUNC_IMPL(__imp__sub_82665648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,37(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// clrlwi r7,r11,26
	ctx.r7.u64 = r11.u32 & 0x3F;
	// addi r6,r10,18632
	ctx.r6.s64 = ctx.r10.s64 + 18632;
	// rlwinm r7,r7,0,30,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r7,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r7.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lfs f0,21036(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21036);
	f0.f64 = double(temp.f32);
	// li r10,80
	ctx.r10.s64 = 80;
	// sth r5,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r5.u16);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// sth r4,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r4.u16);
	// li r11,0
	r11.s64 = 0;
	// stb r10,38(r3)
	PPC_STORE_U8(ctx.r3.u32 + 38, ctx.r10.u8);
	// li r6,-47
	ctx.r6.s64 = -47;
	// addi r9,r3,88
	ctx.r9.s64 = ctx.r3.s64 + 88;
	// sth r11,44(r3)
	PPC_STORE_U16(ctx.r3.u32 + 44, r11.u16);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// stw r6,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r6.u32);
	// addi r8,r3,72
	ctx.r8.s64 = ctx.r3.s64 + 72;
	// stfs f0,48(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,52(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// lfs f0,11928(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11928);
	f0.f64 = double(temp.f32);
	// ori r10,r5,1
	ctx.r10.u64 = ctx.r5.u64 | 1;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// addi r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 + 12;
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// li r6,512
	ctx.r6.s64 = 512;
	// stw r8,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r7,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r7.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stw r6,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// lbz r5,37(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// rlwinm r4,r5,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r4,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r4.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lbz r10,37(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,28,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stb r9,37(r3)
	PPC_STORE_U8(ctx.r3.u32 + 37, ctx.r9.u8);
}

__attribute__((alias("__imp__sub_82665728"))) PPC_WEAK_FUNC(sub_82665728);
PPC_FUNC_IMPL(__imp__sub_82665728) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266572C"))) PPC_WEAK_FUNC(sub_8266572C);
PPC_FUNC_IMPL(__imp__sub_8266572C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665730"))) PPC_WEAK_FUNC(sub_82665730);
PPC_FUNC_IMPL(__imp__sub_82665730) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// ble cr6,0x82665744
	if (!cr6.gt) goto loc_82665744;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82665744:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
}

__attribute__((alias("__imp__sub_82665778"))) PPC_WEAK_FUNC(sub_82665778);
PPC_FUNC_IMPL(__imp__sub_82665778) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266577C"))) PPC_WEAK_FUNC(sub_8266577C);
PPC_FUNC_IMPL(__imp__sub_8266577C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665780"))) PPC_WEAK_FUNC(sub_82665780);
PPC_FUNC_IMPL(__imp__sub_82665780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,-11020
	ctx.r3.s64 = r11.s64 + -11020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8266578C"))) PPC_WEAK_FUNC(sub_8266578C);
PPC_FUNC_IMPL(__imp__sub_8266578C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665790"))) PPC_WEAK_FUNC(sub_82665790);
PPC_FUNC_IMPL(__imp__sub_82665790) {
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
	// bl 0x826654b0
	sub_826654B0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826657dc
	if (cr6.eq) goto loc_826657DC;
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
loc_826657DC:
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

__attribute__((alias("__imp__sub_826657F4"))) PPC_WEAK_FUNC(sub_826657F4);
PPC_FUNC_IMPL(__imp__sub_826657F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826657F8"))) PPC_WEAK_FUNC(sub_826657F8);
PPC_FUNC_IMPL(__imp__sub_826657F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,32(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lhz r11,32(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665818"))) PPC_WEAK_FUNC(sub_82665818);
PPC_FUNC_IMPL(__imp__sub_82665818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,96(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,96(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	// srawi r9,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r11.s32 >> 31;
	// subfc r6,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	ctx.r6.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// adde r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// extsb r31,r11
	r31.s64 = r11.s8;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8266584c
	if (!cr6.eq) goto loc_8266584C;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_8266584C:
	// lwz r8,96(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x82665894
	if (!cr6.gt) goto loc_82665894;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
loc_82665864:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bgt cr6,0x8266587c
	if (cr6.gt) goto loc_8266587C;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// blt cr6,0x82665890
	if (cr6.lt) goto loc_82665890;
loc_8266587C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x82665864
	if (cr6.lt) goto loc_82665864;
	// b 0x82665894
	goto loc_82665894;
loc_82665890:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82665894:
	// extsb r11,r6
	r11.s64 = ctx.r6.s8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addic r10,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r10.s64 = r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r8,r31,-1
	xer.ca = r31.u32 > 0;
	ctx.r8.s64 = r31.s64 + -1;
	// subfe r7,r8,r31
	temp.u8 = (~ctx.r8.u32 + r31.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + r31.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + r31.u64 + xer.ca;
	xer.ca = temp.u8;
	// xor r6,r9,r7
	ctx.r6.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x826658bc
	if (!cr6.eq) goto loc_826658BC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_826658BC:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_826658C0"))) PPC_WEAK_FUNC(sub_826658C0);
PPC_FUNC_IMPL(__imp__sub_826658C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826658C4"))) PPC_WEAK_FUNC(sub_826658C4);
PPC_FUNC_IMPL(__imp__sub_826658C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826658C8"))) PPC_WEAK_FUNC(sub_826658C8);
PPC_FUNC_IMPL(__imp__sub_826658C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x826658dc
	if (!cr6.eq) goto loc_826658DC;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// blr 
	return;
loc_826658DC:
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826658E4"))) PPC_WEAK_FUNC(sub_826658E4);
PPC_FUNC_IMPL(__imp__sub_826658E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826658E8"))) PPC_WEAK_FUNC(sub_826658E8);
PPC_FUNC_IMPL(__imp__sub_826658E8) {
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
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r29,r3,96
	r29.s64 = ctx.r3.s64 + 96;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82665934
	if (!cr6.gt) goto loc_82665934;
	// li r30,0
	r30.s64 = 0;
loc_82665910:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x82c58520
	sub_82C58520(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// blt cr6,0x82665910
	if (cr6.lt) goto loc_82665910;
loc_82665934:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82665938"))) PPC_WEAK_FUNC(sub_82665938);
PPC_FUNC_IMPL(__imp__sub_82665938) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8266593C"))) PPC_WEAK_FUNC(sub_8266593C);
PPC_FUNC_IMPL(__imp__sub_8266593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82665940"))) PPC_WEAK_FUNC(sub_82665940);
PPC_FUNC_IMPL(__imp__sub_82665940) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826659dc
	if (!cr6.gt) goto loc_826659DC;
	// li r27,0
	r27.s64 = 0;
loc_82665978:
	// lwz r11,92(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// cmpw cr6,r28,r10
	cr6.compare<int32_t>(r28.s32, ctx.r10.s32, xer);
	// lwzx r31,r27,r11
	r31.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne cr6,0x826659a0
	if (!cr6.eq) goto loc_826659A0;
	// lwz r11,88(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 88);
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// b 0x826659a4
	goto loc_826659A4;
loc_826659A0:
	// addi r30,r31,512
	r30.s64 = r31.s64 + 512;
loc_826659A4:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bge cr6,0x826659d0
	if (!cr6.lt) goto loc_826659D0;
loc_826659AC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82c58600
	sub_82C58600(ctx, base);
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x826659ac
	if (cr6.lt) goto loc_826659AC;
loc_826659D0:
	// lwz r11,96(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 96);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82665978
	if (cr6.lt) goto loc_82665978;
loc_826659DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_826659E8"))) PPC_WEAK_FUNC(sub_826659E8);
PPC_FUNC_IMPL(__imp__sub_826659E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_826659EC"))) PPC_WEAK_FUNC(sub_826659EC);
PPC_FUNC_IMPL(__imp__sub_826659EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826659F0"))) PPC_WEAK_FUNC(sub_826659F0);
PPC_FUNC_IMPL(__imp__sub_826659F0) {
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
	// stwu r1,-1728(r1)
	ea = -1728 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,16(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r26,r11,r3
	r26.u64 = r11.u64 + ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// add r25,r10,r4
	r25.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lbz r9,232(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// beq cr6,0x82665a58
	if (cr6.eq) goto loc_82665A58;
	// lbz r11,232(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82665a58
	if (cr6.eq) goto loc_82665A58;
	// lwz r11,204(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 204);
	// lwz r10,204(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 204);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82665a58
	if (cr6.eq) goto loc_82665A58;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8264ef68
	sub_8264EF68(ctx, base);
loc_82665A58:
	// lwz r11,204(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 204);
	// lwz r10,204(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 204);
	// lhz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 32);
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x82665a7c
	if (!cr6.eq) goto loc_82665A7C;
	// lhz r9,32(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// bne cr6,0x82665a80
	if (!cr6.eq) goto loc_82665A80;
loc_82665A7C:
	// mr r24,r11
	r24.u64 = r11.u64;
loc_82665A80:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r31
	r29.u64 = r31.u64;
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// mr r28,r30
	r28.u64 = r30.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r9,15
	cr6.compare<int32_t>(ctx.r9.s32, 15, xer);
	// bne cr6,0x82665abc
	if (!cr6.eq) goto loc_82665ABC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82c58cc8
	sub_82C58CC8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82665ABC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r10,15
	cr6.compare<int32_t>(ctx.r10.s32, 15, xer);
	// bne cr6,0x82665ae8
	if (!cr6.eq) goto loc_82665AE8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,944
	ctx.r5.s64 = ctx.r1.s64 + 944;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82c58cc8
	sub_82C58CC8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82665AE8:
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82c589a8
	sub_82C589A8(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82665b24
	if (cr6.eq) goto loc_82665B24;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r31,r30
	r31.u64 = r30.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r30,r11
	r30.u64 = r11.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82665B24:
	// lbz r11,140(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 140);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lbz r10,140(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 140);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// extsb r9,r11
	ctx.r9.s64 = r11.s8;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r7,r11,3
	ctx.r7.s64 = r11.s64 + 3;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lbz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r24,88
	ctx.r3.s64 = r24.s64 + 88;
	// bl 0x82c59448
	sub_82C59448(ctx, base);
	// addi r1,r1,1728
	ctx.r1.s64 = ctx.r1.s64 + 1728;
}

__attribute__((alias("__imp__sub_82665B94"))) PPC_WEAK_FUNC(sub_82665B94);
PPC_FUNC_IMPL(__imp__sub_82665B94) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_82665B98"))) PPC_WEAK_FUNC(sub_82665B98);
PPC_FUNC_IMPL(__imp__sub_82665B98) {
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
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// lbz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r8,r10
	r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r5,204(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lwz r4,204(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bne cr6,0x82665bf8
	if (!cr6.eq) goto loc_82665BF8;
	// lbz r11,37(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// rlwimi r11,r10,6,0,25
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (r11.u64 & 0xFFFFFFFF0000003F);
	// stb r11,37(r4)
	PPC_STORE_U8(ctx.r4.u32 + 37, r11.u8);
	// b 0x82665c4c
	goto loc_82665C4C;
loc_82665BF8:
	// lbz r11,232(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x82665c0c
	if (!cr6.eq) goto loc_82665C0C;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x82665c4c
	goto loc_82665C4C;
loc_82665C0C:
	// lbz r11,232(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x82665c20
	if (!cr6.eq) goto loc_82665C20;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// b 0x82665c4c
	goto loc_82665C4C;
loc_82665C20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665818
	sub_82665818(ctx, base);
	// lbz r11,37(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// rlwimi r11,r10,6,0,25
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (r11.u64 & 0xFFFFFFFF0000003F);
	// stb r11,37(r4)
	PPC_STORE_U8(ctx.r4.u32 + 37, r11.u8);
	// lwz r11,204(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 204);
	// lbz r9,37(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 37);
	// rlwimi r9,r10,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stb r9,37(r11)
	PPC_STORE_U8(r11.u32 + 37, ctx.r9.u8);
loc_82665C4C:
	// lwz r11,24(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r6,88
	ctx.r3.s64 = ctx.r6.s64 + 88;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,128(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// bl 0x82c59648
	sub_82C59648(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,36(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
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

__attribute__((alias("__imp__sub_82665C8C"))) PPC_WEAK_FUNC(sub_82665C8C);
PPC_FUNC_IMPL(__imp__sub_82665C8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665C90"))) PPC_WEAK_FUNC(sub_82665C90);
PPC_FUNC_IMPL(__imp__sub_82665C90) {
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
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 16);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwz r8,204(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r3,8(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82665b98
	sub_82665B98(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82665CEC"))) PPC_WEAK_FUNC(sub_82665CEC);
PPC_FUNC_IMPL(__imp__sub_82665CEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665CF0"))) PPC_WEAK_FUNC(sub_82665CF0);
PPC_FUNC_IMPL(__imp__sub_82665CF0) {
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
	// li r28,0
	r28.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82c5a8d0
	sub_82C5A8D0(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x82665dd0
	if (!cr6.gt) goto loc_82665DD0;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82665D34:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lbz r11,1(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,5832(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 5832);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82665dbc
	if (cr6.eq) goto loc_82665DBC;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r11,16(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lbz r9,232(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 232);
	// cmplwi cr6,r9,5
	cr6.compare<uint32_t>(ctx.r9.u32, 5, xer);
	// bne cr6,0x82665d94
	if (!cr6.eq) goto loc_82665D94;
	// lbz r11,16(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 16);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// add r9,r11,r6
	ctx.r9.u64 = r11.u64 + ctx.r6.u64;
	// lwz r9,204(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// b 0x82665d98
	goto loc_82665D98;
loc_82665D94:
	// lwz r9,204(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 204);
loc_82665D98:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x82665dac
	if (cr6.eq) goto loc_82665DAC;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
loc_82665DAC:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82665DBC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82665d34
	if (cr6.lt) goto loc_82665D34;
loc_82665DD0:
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
	// bne cr6,0x82665e08
	if (!cr6.eq) goto loc_82665E08;
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
loc_82665E08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82665E0C"))) PPC_WEAK_FUNC(sub_82665E0C);
PPC_FUNC_IMPL(__imp__sub_82665E0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82665E10"))) PPC_WEAK_FUNC(sub_82665E10);
PPC_FUNC_IMPL(__imp__sub_82665E10) {
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
	// addi r9,r11,18684
	ctx.r9.s64 = r11.s64 + 18684;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82665e44
	if (cr6.eq) goto loc_82665E44;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82665E44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82665E54"))) PPC_WEAK_FUNC(sub_82665E54);
PPC_FUNC_IMPL(__imp__sub_82665E54) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82665E58"))) PPC_WEAK_FUNC(sub_82665E58);
PPC_FUNC_IMPL(__imp__sub_82665E58) {
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
	// addi r9,r11,18700
	ctx.r9.s64 = r11.s64 + 18700;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82665e8c
	if (cr6.eq) goto loc_82665E8C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82665E8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82665E9C"))) PPC_WEAK_FUNC(sub_82665E9C);
PPC_FUNC_IMPL(__imp__sub_82665E9C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

