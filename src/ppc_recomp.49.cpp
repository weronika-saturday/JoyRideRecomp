#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823896DC"))) PPC_WEAK_FUNC(sub_823896DC);
PPC_FUNC_IMPL(__imp__sub_823896DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_823896E0"))) PPC_WEAK_FUNC(sub_823896E0);
PPC_FUNC_IMPL(__imp__sub_823896E0) {
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
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82389ad8
	sub_82389AD8(ctx, base);
	// lwz r11,1572(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1572);
	// addi r29,r31,1568
	r29.s64 = r31.s64 + 1568;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r9,1572(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 1572);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// lwz r8,1572(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 1572);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lwz r7,1572(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 1572);
	// stw r7,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r7.u32);
	// stw r10,1576(r31)
	PPC_STORE_U32(r31.u32 + 1576, ctx.r10.u32);
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// addi r3,r31,1584
	ctx.r3.s64 = r31.s64 + 1584;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lwz r6,1572(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1572);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,1572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1572);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r6,3436
	ctx.r5.s64 = ctx.r6.s64 + 3436;
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// bl 0x82389ad8
	sub_82389AD8(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r4,3424
	r11.s64 = ctx.r4.s64 + 3424;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x82389ad8
	sub_82389AD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82389794"))) PPC_WEAK_FUNC(sub_82389794);
PPC_FUNC_IMPL(__imp__sub_82389794) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82389798"))) PPC_WEAK_FUNC(sub_82389798);
PPC_FUNC_IMPL(__imp__sub_82389798) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	r23.s64 = 0;
	// li r11,17
	r11.s64 = 17;
	// stw r23,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r23.u32);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// stw r23,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r23.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r23,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r23.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r23,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r23.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r5,-1876(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1876);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,18432(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18432);
	// bl 0x826cd7a8
	sub_826CD7A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82389a4c
	if (cr6.eq) goto loc_82389A4C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82389a4c
	if (cr6.eq) goto loc_82389A4C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826cb680
	sub_826CB680(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x82389a4c
	if (cr6.eq) goto loc_82389A4C;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r23.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r27,-31934
	r27.s64 = -2092826624;
	// addi r28,r11,21336
	r28.s64 = r11.s64 + 21336;
	// addi r25,r10,-29240
	r25.s64 = ctx.r10.s64 + -29240;
	// addi r24,r9,32052
	r24.s64 = ctx.r9.s64 + 32052;
loc_8238986C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823898cc
	if (cr6.eq) goto loc_823898CC;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823898cc
	if (cr6.eq) goto loc_823898CC;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823898d0
	if (!cr6.eq) goto loc_823898D0;
loc_823898CC:
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_823898D0:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82389940
	if (cr6.eq) goto loc_82389940;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82389940
	if (cr6.eq) goto loc_82389940;
	// bl 0x822d5720
	sub_822D5720(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82389940
	if (cr6.eq) goto loc_82389940;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82389970
	goto loc_82389970;
loc_82389940:
	// lwz r11,21344(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 21344);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238996c
	if (!cr6.eq) goto loc_8238996C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,21344(r27)
	PPC_STORE_U32(r27.u32 + 21344, r11.u32);
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// lis r11,-31979
	r11.s64 = -2095775744;
	// addi r3,r11,-32248
	ctx.r3.s64 = r11.s64 + -32248;
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_8238996C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82389970:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826ca4c8
	sub_826CA4C8(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826ca118
	sub_826CA118(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82389a1c
	if (cr6.eq) goto loc_82389A1C;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823899dc
	if (cr6.eq) goto loc_823899DC;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82328230
	sub_82328230(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823899dc
	if (cr6.eq) goto loc_823899DC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x823899e0
	goto loc_823899E0;
loc_823899DC:
	// mr r29,r23
	r29.u64 = r23.u64;
loc_823899E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// addi r31,r26,1568
	r31.s64 = r26.s64 + 1568;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82493bd8
	sub_82493BD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82389a0c
	if (cr0.eq) goto loc_82389A0C;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
loc_82389A0C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826ebf08
	sub_826EBF08(ctx, base);
loc_82389A1C:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826cb690
	sub_826CB690(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8238986c
	if (!cr6.eq) goto loc_8238986C;
loc_82389A4C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_82389A50"))) PPC_WEAK_FUNC(sub_82389A50);
PPC_FUNC_IMPL(__imp__sub_82389A50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82389A54"))) PPC_WEAK_FUNC(sub_82389A54);
PPC_FUNC_IMPL(__imp__sub_82389A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389A58"))) PPC_WEAK_FUNC(sub_82389A58);
PPC_FUNC_IMPL(__imp__sub_82389A58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,24
	ctx.r9.s64 = r11.s64 + 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r10,3436
	ctx.r7.s64 = ctx.r10.s64 + 3436;
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// stw r6,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r6.u32);
	// addi r3,r31,1568
	ctx.r3.s64 = r31.s64 + 1568;
	// stw r5,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r5.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// addi r3,r31,1584
	ctx.r3.s64 = r31.s64 + 1584;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82389798
	sub_82389798(ctx, base);
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

__attribute__((alias("__imp__sub_82389AD4"))) PPC_WEAK_FUNC(sub_82389AD4);
PPC_FUNC_IMPL(__imp__sub_82389AD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389AD8"))) PPC_WEAK_FUNC(sub_82389AD8);
PPC_FUNC_IMPL(__imp__sub_82389AD8) {
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82389b28
	if (!cr6.gt) goto loc_82389B28;
loc_82389AF8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,7,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,-128
	ctx.r3.s64 = r11.s64 + -128;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bgt cr6,0x82389af8
	if (cr6.gt) goto loc_82389AF8;
loc_82389B28:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82389B38"))) PPC_WEAK_FUNC(sub_82389B38);
PPC_FUNC_IMPL(__imp__sub_82389B38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389B3C"))) PPC_WEAK_FUNC(sub_82389B3C);
PPC_FUNC_IMPL(__imp__sub_82389B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389B40"))) PPC_WEAK_FUNC(sub_82389B40);
PPC_FUNC_IMPL(__imp__sub_82389B40) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,3424
	ctx.r10.s64 = r11.s64 + 3424;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82389ad8
	sub_82389AD8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82389b84
	if (cr6.eq) goto loc_82389B84;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82389B84:
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

__attribute__((alias("__imp__sub_82389B98"))) PPC_WEAK_FUNC(sub_82389B98);
PPC_FUNC_IMPL(__imp__sub_82389B98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389B9C"))) PPC_WEAK_FUNC(sub_82389B9C);
PPC_FUNC_IMPL(__imp__sub_82389B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389BA0"))) PPC_WEAK_FUNC(sub_82389BA0);
PPC_FUNC_IMPL(__imp__sub_82389BA0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,3436
	ctx.r10.s64 = r11.s64 + 3436;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82389ad8
	sub_82389AD8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r9,3424
	ctx.r8.s64 = ctx.r9.s64 + 3424;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// bl 0x82389ad8
	sub_82389AD8(ctx, base);
	// clrlwi r7,r30,31
	ctx.r7.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82389bf8
	if (cr6.eq) goto loc_82389BF8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82389BF8:
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

__attribute__((alias("__imp__sub_82389C0C"))) PPC_WEAK_FUNC(sub_82389C0C);
PPC_FUNC_IMPL(__imp__sub_82389C0C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389C10"))) PPC_WEAK_FUNC(sub_82389C10);
PPC_FUNC_IMPL(__imp__sub_82389C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389C14"))) PPC_WEAK_FUNC(sub_82389C14);
PPC_FUNC_IMPL(__imp__sub_82389C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389C18"))) PPC_WEAK_FUNC(sub_82389C18);
PPC_FUNC_IMPL(__imp__sub_82389C18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389C1C"))) PPC_WEAK_FUNC(sub_82389C1C);
PPC_FUNC_IMPL(__imp__sub_82389C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389C20"))) PPC_WEAK_FUNC(sub_82389C20);
PPC_FUNC_IMPL(__imp__sub_82389C20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389C24"))) PPC_WEAK_FUNC(sub_82389C24);
PPC_FUNC_IMPL(__imp__sub_82389C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389C28"))) PPC_WEAK_FUNC(sub_82389C28);
PPC_FUNC_IMPL(__imp__sub_82389C28) {
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
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,3472
	ctx.r9.s64 = r11.s64 + 3472;
	// addi r8,r10,3464
	ctx.r8.s64 = ctx.r10.s64 + 3464;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// bl 0x82605300
	sub_82605300(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// addi r3,r6,3448
	ctx.r3.s64 = ctx.r6.s64 + 3448;
	// addi r4,r7,-32392
	ctx.r4.s64 = ctx.r7.s64 + -32392;
	// li r11,0
	r11.s64 = 0;
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// stw r4,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,22304(r5)
	PPC_STORE_U32(ctx.r5.u32 + 22304, r11.u32);
	// bl 0x826cf618
	sub_826CF618(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82389C98"))) PPC_WEAK_FUNC(sub_82389C98);
PPC_FUNC_IMPL(__imp__sub_82389C98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389C9C"))) PPC_WEAK_FUNC(sub_82389C9C);
PPC_FUNC_IMPL(__imp__sub_82389C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389CA0"))) PPC_WEAK_FUNC(sub_82389CA0);
PPC_FUNC_IMPL(__imp__sub_82389CA0) {
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
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// bl 0x82605590
	sub_82605590(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x82605ae8
	sub_82605AE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82389CD8"))) PPC_WEAK_FUNC(sub_82389CD8);
PPC_FUNC_IMPL(__imp__sub_82389CD8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389CDC"))) PPC_WEAK_FUNC(sub_82389CDC);
PPC_FUNC_IMPL(__imp__sub_82389CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389CE0"))) PPC_WEAK_FUNC(sub_82389CE0);
PPC_FUNC_IMPL(__imp__sub_82389CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
}

__attribute__((alias("__imp__sub_82389CE4"))) PPC_WEAK_FUNC(sub_82389CE4);
PPC_FUNC_IMPL(__imp__sub_82389CE4) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605aa8
	sub_82605AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82389CE8"))) PPC_WEAK_FUNC(sub_82389CE8);
PPC_FUNC_IMPL(__imp__sub_82389CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_82389CFC"))) PPC_WEAK_FUNC(sub_82389CFC);
PPC_FUNC_IMPL(__imp__sub_82389CFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605aa8
	sub_82605AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82389D00"))) PPC_WEAK_FUNC(sub_82389D00);
PPC_FUNC_IMPL(__imp__sub_82389D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_82389D14"))) PPC_WEAK_FUNC(sub_82389D14);
PPC_FUNC_IMPL(__imp__sub_82389D14) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605aa8
	sub_82605AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82389D18"))) PPC_WEAK_FUNC(sub_82389D18);
PPC_FUNC_IMPL(__imp__sub_82389D18) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,3500
	ctx.r9.s64 = r11.s64 + 3500;
	// addi r8,r10,3492
	ctx.r8.s64 = ctx.r10.s64 + 3492;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// bl 0x826dade8
	sub_826DADE8(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// addi r3,r6,3456
	ctx.r3.s64 = ctx.r6.s64 + 3456;
	// addi r4,r7,-32392
	ctx.r4.s64 = ctx.r7.s64 + -32392;
	// li r11,0
	r11.s64 = 0;
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// stw r4,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,22308(r5)
	PPC_STORE_U32(ctx.r5.u32 + 22308, r11.u32);
	// bl 0x826cfd20
	sub_826CFD20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82389D88"))) PPC_WEAK_FUNC(sub_82389D88);
PPC_FUNC_IMPL(__imp__sub_82389D88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82389D8C"))) PPC_WEAK_FUNC(sub_82389D8C);
PPC_FUNC_IMPL(__imp__sub_82389D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389D90"))) PPC_WEAK_FUNC(sub_82389D90);
PPC_FUNC_IMPL(__imp__sub_82389D90) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,124
	r23.s64 = ctx.r3.s64 + 124;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82389e20
	if (!cr6.eq) goto loc_82389E20;
	// lbz r11,152(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82389e20
	if (cr6.eq) goto loc_82389E20;
	// li r26,3
	r26.s64 = 3;
	// addi r31,r25,157
	r31.s64 = r25.s64 + 157;
	// mr r29,r26
	r29.u64 = r26.u64;
	// li r27,11
	r27.s64 = 11;
	// li r28,0
	r28.s64 = 0;
	// lis r30,-31933
	r30.s64 = -2092761088;
loc_82389DE0:
	// lbz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82389df8
	if (cr6.eq) goto loc_82389DF8;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// ldx r4,r31,r27
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + r27.u32);
	// bl 0x825d1768
	sub_825D1768(ctx, base);
loc_82389DF8:
	// lbz r10,23(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 23);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82389e10
	if (cr6.eq) goto loc_82389E10;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// ldx r4,r31,r26
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + r26.u32);
	// bl 0x825d1768
	sub_825D1768(ctx, base);
loc_82389E10:
	// stb r28,23(r31)
	PPC_STORE_U8(r31.u32 + 23, r28.u8);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stbu r28,24(r31)
	ea = 24 + r31.u32;
	PPC_STORE_U8(ea, r28.u8);
	r31.u32 = ea;
	// bne 0x82389de0
	if (!cr0.eq) goto loc_82389DE0;
loc_82389E20:
	// stb r24,152(r25)
	PPC_STORE_U8(r25.u32 + 152, r24.u8);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82389E30"))) PPC_WEAK_FUNC(sub_82389E30);
PPC_FUNC_IMPL(__imp__sub_82389E30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82389E34"))) PPC_WEAK_FUNC(sub_82389E34);
PPC_FUNC_IMPL(__imp__sub_82389E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82389E38"))) PPC_WEAK_FUNC(sub_82389E38);
PPC_FUNC_IMPL(__imp__sub_82389E38) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r29,8(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r5,r31,40
	ctx.r5.s64 = r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x826d0268
	sub_826D0268(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r4,r8,3448
	ctx.r4.s64 = ctx.r8.s64 + 3448;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r11,r11,-36
	r11.s64 = r11.s64 + -36;
	// stw r4,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r4.u32);
	// addi r10,r6,3472
	ctx.r10.s64 = ctx.r6.s64 + 3472;
	// addi r9,r5,3464
	ctx.r9.s64 = ctx.r5.s64 + 3464;
	// stw r11,22304(r7)
	PPC_STORE_U32(ctx.r7.u32 + 22304, r11.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r8,r3,-32392
	ctx.r8.s64 = ctx.r3.s64 + -32392;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r31.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// bl 0x82605260
	sub_82605260(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stb r30,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r30.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_82389F24"))) PPC_WEAK_FUNC(sub_82389F24);
PPC_FUNC_IMPL(__imp__sub_82389F24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82389F28"))) PPC_WEAK_FUNC(sub_82389F28);
PPC_FUNC_IMPL(__imp__sub_82389F28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
}

__attribute__((alias("__imp__sub_82389F2C"))) PPC_WEAK_FUNC(sub_82389F2C);
PPC_FUNC_IMPL(__imp__sub_82389F2C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605aa8
	sub_82605AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82389F30"))) PPC_WEAK_FUNC(sub_82389F30);
PPC_FUNC_IMPL(__imp__sub_82389F30) {
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
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// addi r27,r3,40
	r27.s64 = ctx.r3.s64 + 40;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cf6f8
	sub_826CF6F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cf750
	sub_826CF750(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8238a010
	if (!cr6.eq) goto loc_8238A010;
	// li r28,-1
	r28.s64 = -1;
	// li r29,1
	r29.s64 = 1;
	// li r30,0
	r30.s64 = 0;
loc_82389F80:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x82605590
	sub_82605590(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x82605ae8
	sub_82605AE8(ctx, base);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82389F9C:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x82389fb4
	if (!cr6.eq) goto loc_82389FB4;
	// lwz r8,88(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x82389ffc
	if (cr6.eq) goto loc_82389FFC;
loc_82389FB4:
	// lbz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82389fd4
	if (!cr6.eq) goto loc_82389FD4;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82389fd4
	if (cr6.eq) goto loc_82389FD4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r29,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r29.u8);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_82389FD4:
	// lbz r11,92(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82389f9c
	if (cr6.eq) goto loc_82389F9C;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// beq cr6,0x82389f9c
	if (cr6.eq) goto loc_82389F9C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r30,92(r31)
	PPC_STORE_U8(r31.u32 + 92, r30.u8);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// b 0x82389f9c
	goto loc_82389F9C;
loc_82389FFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cf750
	sub_826CF750(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82389f80
	if (cr6.eq) goto loc_82389F80;
loc_8238A010:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8238A028"))) PPC_WEAK_FUNC(sub_8238A028);
PPC_FUNC_IMPL(__imp__sub_8238A028) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8238A02C"))) PPC_WEAK_FUNC(sub_8238A02C);
PPC_FUNC_IMPL(__imp__sub_8238A02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A030"))) PPC_WEAK_FUNC(sub_8238A030);
PPC_FUNC_IMPL(__imp__sub_8238A030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,22304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8238A050"))) PPC_WEAK_FUNC(sub_8238A050);
PPC_FUNC_IMPL(__imp__sub_8238A050) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605aa8
	sub_82605AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238A054"))) PPC_WEAK_FUNC(sub_8238A054);
PPC_FUNC_IMPL(__imp__sub_8238A054) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A058"))) PPC_WEAK_FUNC(sub_8238A058);
PPC_FUNC_IMPL(__imp__sub_8238A058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,22304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_8238A078"))) PPC_WEAK_FUNC(sub_8238A078);
PPC_FUNC_IMPL(__imp__sub_8238A078) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605aa8
	sub_82605AA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238A07C"))) PPC_WEAK_FUNC(sub_8238A07C);
PPC_FUNC_IMPL(__imp__sub_8238A07C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A080"))) PPC_WEAK_FUNC(sub_8238A080);
PPC_FUNC_IMPL(__imp__sub_8238A080) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,19960(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r29,r11,8
	r29.s64 = r11.s64 + 8;
	// bne cr6,0x8238a0ac
	if (!cr6.eq) goto loc_8238A0AC;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8238A0AC:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// lwz r27,8(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,13
	ctx.r3.s64 = 13;
	// lwz r26,16(r9)
	r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,92
	ctx.r5.s64 = r31.s64 + 92;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d04f8
	sub_826D04F8(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r4,r8,3456
	ctx.r4.s64 = ctx.r8.s64 + 3456;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r11,r11,-88
	r11.s64 = r11.s64 + -88;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// addi r10,r6,3500
	ctx.r10.s64 = ctx.r6.s64 + 3500;
	// addi r9,r5,3492
	ctx.r9.s64 = ctx.r5.s64 + 3492;
	// stw r11,22308(r7)
	PPC_STORE_U32(ctx.r7.u32 + 22308, r11.u32);
	// addi r8,r3,-32392
	ctx.r8.s64 = ctx.r3.s64 + -32392;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// ori r4,r4,65280
	ctx.r4.u64 = ctx.r4.u64 | 65280;
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r31,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r31.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// bl 0x826dadb8
	sub_826DADB8(ctx, base);
	// stb r30,180(r31)
	PPC_STORE_U8(r31.u32 + 180, r30.u8);
	// stb r30,181(r31)
	PPC_STORE_U8(r31.u32 + 181, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// stb r30,204(r31)
	PPC_STORE_U8(r31.u32 + 204, r30.u8);
	// stb r30,205(r31)
	PPC_STORE_U8(r31.u32 + 205, r30.u8);
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// stb r30,228(r31)
	PPC_STORE_U8(r31.u32 + 228, r30.u8);
	// stb r30,229(r31)
	PPC_STORE_U8(r31.u32 + 229, r30.u8);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// stb r30,152(r31)
	PPC_STORE_U8(r31.u32 + 152, r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8238A1AC"))) PPC_WEAK_FUNC(sub_8238A1AC);
PPC_FUNC_IMPL(__imp__sub_8238A1AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8238A1B0"))) PPC_WEAK_FUNC(sub_8238A1B0);
PPC_FUNC_IMPL(__imp__sub_8238A1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// addi r21,r3,124
	r21.s64 = ctx.r3.s64 + 124;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lbz r11,152(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238a2ec
	if (cr6.eq) goto loc_8238A2EC;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,22220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22220);
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
loc_8238A1E8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r27,r10
	ctx.r9.u64 = r27.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8238a1e8
	if (!cr0.eq) goto loc_8238A1E8;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r24,r27
	r24.u64 = r27.u64;
	// addi r31,r31,176
	r31.s64 = r31.s64 + 176;
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r25,-32255
	r25.s64 = -2113863680;
	// addi r23,r11,3572
	r23.s64 = r11.s64 + 3572;
	// addi r26,r10,29528
	r26.s64 = ctx.r10.s64 + 29528;
	// addi r22,r9,3540
	r22.s64 = ctx.r9.s64 + 3540;
loc_8238A234:
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238a288
	if (cr6.eq) goto loc_8238A288;
	// lwz r11,4328(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4328);
	// ld r4,-16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + -16);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,25320(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 25320);
	// bl 0x825d1768
	sub_825D1768(ctx, base);
	// stb r27,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r27.u8);
	// lbz r11,4324(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 4324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238a288
	if (cr6.eq) goto loc_8238A288;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82605b20
	sub_82605B20(ctx, base);
loc_8238A288:
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238a2dc
	if (cr6.eq) goto loc_8238A2DC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8238a2dc
	if (cr6.lt) goto loc_8238A2DC;
	// lwz r3,25320(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 25320);
	// ld r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + -8);
	// bl 0x825d1768
	sub_825D1768(ctx, base);
	// stb r27,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r27.u8);
	// lbz r11,4324(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 4324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238a2dc
	if (cr6.eq) goto loc_8238A2DC;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82605b20
	sub_82605B20(ctx, base);
loc_8238A2DC:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// cmpwi cr6,r24,3
	cr6.compare<int32_t>(r24.s32, 3, xer);
	// blt cr6,0x8238a234
	if (cr6.lt) goto loc_8238A234;
loc_8238A2EC:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8238A2F8"))) PPC_WEAK_FUNC(sub_8238A2F8);
PPC_FUNC_IMPL(__imp__sub_8238A2F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8238A2FC"))) PPC_WEAK_FUNC(sub_8238A2FC);
PPC_FUNC_IMPL(__imp__sub_8238A2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A300"))) PPC_WEAK_FUNC(sub_8238A300);
PPC_FUNC_IMPL(__imp__sub_8238A300) {
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
	// lbz r11,152(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238a3dc
	if (cr6.eq) goto loc_8238A3DC;
	// lwz r11,232(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,25320(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25320);
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// bl 0x825d1b60
	sub_825D1B60(ctx, base);
	// std r3,160(r31)
	PPC_STORE_U64(r31.u32 + 160, ctx.r3.u64);
	// addi r29,r30,124
	r29.s64 = r30.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r3,180(r31)
	PPC_STORE_U8(r31.u32 + 180, ctx.r3.u8);
	// lbz r11,4324(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238a3d4
	if (cr6.eq) goto loc_8238A3D4;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,22220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22220);
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
loc_8238A38C:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r10,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x8238a38c
	if (!cr0.eq) goto loc_8238A38C;
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lwz r6,232(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r31,r5,29528
	r31.s64 = ctx.r5.s64 + 29528;
	// addi r5,r4,3604
	ctx.r5.s64 = ctx.r4.s64 + 3604;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82605b20
	sub_82605B20(ctx, base);
loc_8238A3D4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
loc_8238A3DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238A3E0"))) PPC_WEAK_FUNC(sub_8238A3E0);
PPC_FUNC_IMPL(__imp__sub_8238A3E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238A3E4"))) PPC_WEAK_FUNC(sub_8238A3E4);
PPC_FUNC_IMPL(__imp__sub_8238A3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A3E8"))) PPC_WEAK_FUNC(sub_8238A3E8);
PPC_FUNC_IMPL(__imp__sub_8238A3E8) {
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
	// lbz r11,152(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238a4dc
	if (cr6.eq) goto loc_8238A4DC;
	// lwz r11,232(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,25320(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25320);
	// rlwinm r11,r5,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r30,160
	r11.s64 = r30.s64 + 160;
	// bl 0x825d1b60
	sub_825D1B60(ctx, base);
	// std r3,168(r30)
	PPC_STORE_U64(r30.u32 + 168, ctx.r3.u64);
	// addi r29,r31,124
	r29.s64 = r31.s64 + 124;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf0
	sub_826DADF0(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// stb r3,181(r30)
	PPC_STORE_U8(r30.u32 + 181, ctx.r3.u8);
	// lbz r11,4324(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4324);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238a4bc
	if (cr6.eq) goto loc_8238A4BC;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,22220(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22220);
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
loc_8238A474:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8238a474
	if (!cr0.eq) goto loc_8238A474;
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lwz r6,232(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r30,r5,29528
	r30.s64 = ctx.r5.s64 + 29528;
	// addi r5,r4,3636
	ctx.r5.s64 = ctx.r4.s64 + 3636;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82605b20
	sub_82605B20(ctx, base);
loc_8238A4BC:
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x8238a4d4
	if (!cr6.eq) goto loc_8238A4D4;
	// stw r28,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r28.u32);
loc_8238A4D4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826dadf8
	sub_826DADF8(ctx, base);
loc_8238A4DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8238A4E0"))) PPC_WEAK_FUNC(sub_8238A4E0);
PPC_FUNC_IMPL(__imp__sub_8238A4E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8238A4E4"))) PPC_WEAK_FUNC(sub_8238A4E4);
PPC_FUNC_IMPL(__imp__sub_8238A4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A4E8"))) PPC_WEAK_FUNC(sub_8238A4E8);
PPC_FUNC_IMPL(__imp__sub_8238A4E8) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238a53c
	if (cr6.eq) goto loc_8238A53C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,3532
	ctx.r8.s64 = ctx.r10.s64 + 3532;
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8238A53C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238A54C"))) PPC_WEAK_FUNC(sub_8238A54C);
PPC_FUNC_IMPL(__imp__sub_8238A54C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A550"))) PPC_WEAK_FUNC(sub_8238A550);
PPC_FUNC_IMPL(__imp__sub_8238A550) {
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
	// lis r30,-31934
	r30.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,21640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21640);
	// lwz r31,92(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238a5a8
	if (cr6.eq) goto loc_8238A5A8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,3532
	ctx.r8.s64 = ctx.r10.s64 + 3532;
	// stb r9,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r9.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8238A5A8:
	// lwz r11,21640(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21640);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826d0688
	sub_826D0688(ctx, base);
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

__attribute__((alias("__imp__sub_8238A5CC"))) PPC_WEAK_FUNC(sub_8238A5CC);
PPC_FUNC_IMPL(__imp__sub_8238A5CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A5D0"))) PPC_WEAK_FUNC(sub_8238A5D0);
PPC_FUNC_IMPL(__imp__sub_8238A5D0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,3448
	ctx.r9.s64 = r11.s64 + 3448;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,22304(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22304, r11.u32);
	// beq cr6,0x8238a610
	if (cr6.eq) goto loc_8238A610;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8238A610:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238A620"))) PPC_WEAK_FUNC(sub_8238A620);
PPC_FUNC_IMPL(__imp__sub_8238A620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A624"))) PPC_WEAK_FUNC(sub_8238A624);
PPC_FUNC_IMPL(__imp__sub_8238A624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A628"))) PPC_WEAK_FUNC(sub_8238A628);
PPC_FUNC_IMPL(__imp__sub_8238A628) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,3456
	ctx.r9.s64 = r11.s64 + 3456;
	// clrlwi r8,r4,31
	ctx.r8.u64 = ctx.r4.u32 & 0x1;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r11,22308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22308, r11.u32);
	// beq cr6,0x8238a668
	if (cr6.eq) goto loc_8238A668;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8238A668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238A678"))) PPC_WEAK_FUNC(sub_8238A678);
PPC_FUNC_IMPL(__imp__sub_8238A678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A67C"))) PPC_WEAK_FUNC(sub_8238A67C);
PPC_FUNC_IMPL(__imp__sub_8238A67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A680"))) PPC_WEAK_FUNC(sub_8238A680);
PPC_FUNC_IMPL(__imp__sub_8238A680) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-36
	ctx.r3.s64 = ctx.r3.s64 + -36;
}

__attribute__((alias("__imp__sub_8238A684"))) PPC_WEAK_FUNC(sub_8238A684);
PPC_FUNC_IMPL(__imp__sub_8238A684) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238a690
	sub_8238A690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238A688"))) PPC_WEAK_FUNC(sub_8238A688);
PPC_FUNC_IMPL(__imp__sub_8238A688) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-88
	ctx.r3.s64 = ctx.r3.s64 + -88;
}

__attribute__((alias("__imp__sub_8238A68C"))) PPC_WEAK_FUNC(sub_8238A68C);
PPC_FUNC_IMPL(__imp__sub_8238A68C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238a6f0
	sub_8238A6F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238A690"))) PPC_WEAK_FUNC(sub_8238A690);
PPC_FUNC_IMPL(__imp__sub_8238A690) {
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
	// bl 0x82389c28
	sub_82389C28(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238a6c8
	if (cr6.eq) goto loc_8238A6C8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8238A6C8:
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

__attribute__((alias("__imp__sub_8238A6DC"))) PPC_WEAK_FUNC(sub_8238A6DC);
PPC_FUNC_IMPL(__imp__sub_8238A6DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A6E0"))) PPC_WEAK_FUNC(sub_8238A6E0);
PPC_FUNC_IMPL(__imp__sub_8238A6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lbz r4,16(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// lwz r3,22308(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22308);
	// b 0x82389d90
	sub_82389D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238A6F0"))) PPC_WEAK_FUNC(sub_8238A6F0);
PPC_FUNC_IMPL(__imp__sub_8238A6F0) {
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
	// bl 0x82389d18
	sub_82389D18(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238a728
	if (cr6.eq) goto loc_8238A728;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8238A728:
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

__attribute__((alias("__imp__sub_8238A73C"))) PPC_WEAK_FUNC(sub_8238A73C);
PPC_FUNC_IMPL(__imp__sub_8238A73C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A740"))) PPC_WEAK_FUNC(sub_8238A740);
PPC_FUNC_IMPL(__imp__sub_8238A740) {
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
	// addi r10,r3,116
	ctx.r10.s64 = ctx.r3.s64 + 116;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r31,r11,236
	r31.s64 = r11.s64 + 236;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82710018
	sub_82710018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238A79C"))) PPC_WEAK_FUNC(sub_8238A79C);
PPC_FUNC_IMPL(__imp__sub_8238A79C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A7A0"))) PPC_WEAK_FUNC(sub_8238A7A0);
PPC_FUNC_IMPL(__imp__sub_8238A7A0) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// addi r11,r31,116
	r11.s64 = r31.s64 + 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r11.u32);
	// addi r31,r31,236
	r31.s64 = r31.s64 + 236;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82710018
	sub_82710018(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
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

__attribute__((alias("__imp__sub_8238A838"))) PPC_WEAK_FUNC(sub_8238A838);
PPC_FUNC_IMPL(__imp__sub_8238A838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A83C"))) PPC_WEAK_FUNC(sub_8238A83C);
PPC_FUNC_IMPL(__imp__sub_8238A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A840"))) PPC_WEAK_FUNC(sub_8238A840);
PPC_FUNC_IMPL(__imp__sub_8238A840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r8,r10,-1192
	ctx.r8.s64 = ctx.r10.s64 + -1192;
	// add r9,r11,r5
	ctx.r9.u64 = r11.u64 + ctx.r5.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
}

__attribute__((alias("__imp__sub_8238A85C"))) PPC_WEAK_FUNC(sub_8238A85C);
PPC_FUNC_IMPL(__imp__sub_8238A85C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A860"))) PPC_WEAK_FUNC(sub_8238A860);
PPC_FUNC_IMPL(__imp__sub_8238A860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A868"))) PPC_WEAK_FUNC(sub_8238A868);
PPC_FUNC_IMPL(__imp__sub_8238A868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A870"))) PPC_WEAK_FUNC(sub_8238A870);
PPC_FUNC_IMPL(__imp__sub_8238A870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A878"))) PPC_WEAK_FUNC(sub_8238A878);
PPC_FUNC_IMPL(__imp__sub_8238A878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A880"))) PPC_WEAK_FUNC(sub_8238A880);
PPC_FUNC_IMPL(__imp__sub_8238A880) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// srawi r3,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A888"))) PPC_WEAK_FUNC(sub_8238A888);
PPC_FUNC_IMPL(__imp__sub_8238A888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r6,r11,r4
	ctx.r6.u64 = r11.u64 + ctx.r4.u64;
	// srad r5,r7,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r5.s64 = ctx.r7.s64 >> temp.u64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srd r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r4.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A8B0"))) PPC_WEAK_FUNC(sub_8238A8B0);
PPC_FUNC_IMPL(__imp__sub_8238A8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r10,r3,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r5,r7,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srad r3,r5,r4
	temp.u64 = ctx.r4.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r5.s64 < 0) & (((ctx.r5.s64 >> temp.u64) << temp.u64) != ctx.r5.s64);
	ctx.r3.s64 = ctx.r5.s64 >> temp.u64;
	// srd r3,r3,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r10.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A8DC"))) PPC_WEAK_FUNC(sub_8238A8DC);
PPC_FUNC_IMPL(__imp__sub_8238A8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A8E0"))) PPC_WEAK_FUNC(sub_8238A8E0);
PPC_FUNC_IMPL(__imp__sub_8238A8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r11,32
	ctx.r9.u64 = r11.u64 & 0xFFFFFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r3,r8,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A8F8"))) PPC_WEAK_FUNC(sub_8238A8F8);
PPC_FUNC_IMPL(__imp__sub_8238A8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + ctx.r3.u32);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stdx r9,r11,r3
	PPC_STORE_U64(r11.u32 + ctx.r3.u32, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A90C"))) PPC_WEAK_FUNC(sub_8238A90C);
PPC_FUNC_IMPL(__imp__sub_8238A90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238A910"))) PPC_WEAK_FUNC(sub_8238A910);
PPC_FUNC_IMPL(__imp__sub_8238A910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A950"))) PPC_WEAK_FUNC(sub_8238A950);
PPC_FUNC_IMPL(__imp__sub_8238A950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A990"))) PPC_WEAK_FUNC(sub_8238A990);
PPC_FUNC_IMPL(__imp__sub_8238A990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238A9D0"))) PPC_WEAK_FUNC(sub_8238A9D0);
PPC_FUNC_IMPL(__imp__sub_8238A9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1164
	ctx.r10.s64 = r11.s64 + 1164;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1164);
	// rlwimi r10,r5,23,7,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r10.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r10,1164(r11)
	PPC_STORE_U32(r11.u32 + 1164, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AA14"))) PPC_WEAK_FUNC(sub_8238AA14);
PPC_FUNC_IMPL(__imp__sub_8238AA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AA18"))) PPC_WEAK_FUNC(sub_8238AA18);
PPC_FUNC_IMPL(__imp__sub_8238AA18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r10,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// subfe r7,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r5,r8,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = r11.s64 + 1172;
	// lwz r4,1172(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// srd r10,r5,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r6.u8 & 0x7F));
	// rlwimi r7,r4,0,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// stw r7,1172(r11)
	PPC_STORE_U32(r11.u32 + 1172, ctx.r7.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AA64"))) PPC_WEAK_FUNC(sub_8238AA64);
PPC_FUNC_IMPL(__imp__sub_8238AA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AA68"))) PPC_WEAK_FUNC(sub_8238AA68);
PPC_FUNC_IMPL(__imp__sub_8238AA68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = r11.s64 + 1172;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// rlwimi r10,r5,3,27,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r10,1172(r11)
	PPC_STORE_U32(r11.u32 + 1172, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AAAC"))) PPC_WEAK_FUNC(sub_8238AAAC);
PPC_FUNC_IMPL(__imp__sub_8238AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AAB0"))) PPC_WEAK_FUNC(sub_8238AAB0);
PPC_FUNC_IMPL(__imp__sub_8238AAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1168
	ctx.r10.s64 = r11.s64 + 1168;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1168);
	// rlwimi r10,r5,22,5,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r10.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r10,1168(r11)
	PPC_STORE_U32(r11.u32 + 1168, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AAF4"))) PPC_WEAK_FUNC(sub_8238AAF4);
PPC_FUNC_IMPL(__imp__sub_8238AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AAF8"))) PPC_WEAK_FUNC(sub_8238AAF8);
PPC_FUNC_IMPL(__imp__sub_8238AAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1168
	ctx.r10.s64 = r11.s64 + 1168;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1168);
	// rlwimi r10,r5,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r10,1168(r11)
	PPC_STORE_U32(r11.u32 + 1168, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AB3C"))) PPC_WEAK_FUNC(sub_8238AB3C);
PPC_FUNC_IMPL(__imp__sub_8238AB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AB40"))) PPC_WEAK_FUNC(sub_8238AB40);
PPC_FUNC_IMPL(__imp__sub_8238AB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = r11.s64 + 1172;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// rlwimi r10,r5,2,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r10,1172(r11)
	PPC_STORE_U32(r11.u32 + 1172, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AB84"))) PPC_WEAK_FUNC(sub_8238AB84);
PPC_FUNC_IMPL(__imp__sub_8238AB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AB88"))) PPC_WEAK_FUNC(sub_8238AB88);
PPC_FUNC_IMPL(__imp__sub_8238AB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r11,1156
	ctx.r10.s64 = r11.s64 + 1156;
	// clrldi r5,r8,32
	ctx.r5.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,1156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1156);
	// srd r9,r4,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r5.u8 & 0x7F));
	// rlwimi r10,r6,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,1156(r11)
	PPC_STORE_U32(r11.u32 + 1156, ctx.r10.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238ABD4"))) PPC_WEAK_FUNC(sub_8238ABD4);
PPC_FUNC_IMPL(__imp__sub_8238ABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238ABD8"))) PPC_WEAK_FUNC(sub_8238ABD8);
PPC_FUNC_IMPL(__imp__sub_8238ABD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r11,32
	ctx.r9.u64 = r11.u64 & 0xFFFFFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// b 0x825d5690
	sub_825D5690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238ABF0"))) PPC_WEAK_FUNC(sub_8238ABF0);
PPC_FUNC_IMPL(__imp__sub_8238ABF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// add r11,r3,r5
	r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 468);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8238AC04"))) PPC_WEAK_FUNC(sub_8238AC04);
PPC_FUNC_IMPL(__imp__sub_8238AC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AC08"))) PPC_WEAK_FUNC(sub_8238AC08);
PPC_FUNC_IMPL(__imp__sub_8238AC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r10,r4,376
	ctx.r10.s64 = ctx.r4.s64 + 376;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6028(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 6028, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f13,6020(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 6020, temp.u32);
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfsx f0,r9,r3
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// stfs f12,6024(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 6024, temp.u32);
	// srd r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// ld r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r11,r5,r4
	r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AC58"))) PPC_WEAK_FUNC(sub_8238AC58);
PPC_FUNC_IMPL(__imp__sub_8238AC58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// add r11,r4,r6
	r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r8,r9,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r9,r7,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// subf r11,r10,r8
	r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// srad r7,r9,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r7.s64 = ctx.r9.s64 >> temp.u64;
	// srd r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x825d7258
	sub_825D7258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238AC84"))) PPC_WEAK_FUNC(sub_8238AC84);
PPC_FUNC_IMPL(__imp__sub_8238AC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AC88"))) PPC_WEAK_FUNC(sub_8238AC88);
PPC_FUNC_IMPL(__imp__sub_8238AC88) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r11,0
	r11.s64 = 0;
	// lis r5,6688
	ctx.r5.s64 = 438304768;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r10,24192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24192);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// bl 0x825fee78
	sub_825FEE78(ctx, base);
	// lis r31,-31933
	r31.s64 = -2092761088;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238AD18"))) PPC_WEAK_FUNC(sub_8238AD18);
PPC_FUNC_IMPL(__imp__sub_8238AD18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AD1C"))) PPC_WEAK_FUNC(sub_8238AD1C);
PPC_FUNC_IMPL(__imp__sub_8238AD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238AD20"))) PPC_WEAK_FUNC(sub_8238AD20);
PPC_FUNC_IMPL(__imp__sub_8238AD20) {
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
	// lwz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238AD84"))) PPC_WEAK_FUNC(sub_8238AD84);
PPC_FUNC_IMPL(__imp__sub_8238AD84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238AD88"))) PPC_WEAK_FUNC(sub_8238AD88);
PPC_FUNC_IMPL(__imp__sub_8238AD88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f13,2992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25600(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fmsubs f11,f12,f13,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// bne cr6,0x8238add4
	if (!cr6.eq) goto loc_8238ADD4;
	// li r28,0
	r28.s64 = 0;
	// b 0x8238ae0c
	goto loc_8238AE0C;
loc_8238ADD4:
	// rlwinm r10,r11,9,24,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFF;
	// addic. r10,r10,-112
	xer.ca = ctx.r10.u32 > 111;
	ctx.r10.s64 = ctx.r10.s64 + -112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x8238ade8
	if (!cr0.lt) goto loc_8238ADE8;
	// li r28,0
	r28.s64 = 0;
	// b 0x8238ae0c
	goto loc_8238AE0C;
loc_8238ADE8:
	// cmpwi cr6,r10,31
	cr6.compare<int32_t>(ctx.r10.s32, 31, xer);
	// ble cr6,0x8238adf4
	if (!cr6.gt) goto loc_8238ADF4;
	// li r10,31
	ctx.r10.s64 = 31;
loc_8238ADF4:
	// rlwinm r9,r11,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r10,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r11,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r28,r3,16
	r28.u64 = ctx.r3.u32 & 0xFFFF;
loc_8238AE0C:
	// lfs f12,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f12,f13,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238ae2c
	if (!cr6.eq) goto loc_8238AE2C;
	// li r29,0
	r29.s64 = 0;
	// b 0x8238ae64
	goto loc_8238AE64;
loc_8238AE2C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238ae40
	if (!cr0.lt) goto loc_8238AE40;
	// li r29,0
	r29.s64 = 0;
	// b 0x8238ae64
	goto loc_8238AE64;
loc_8238AE40:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238ae4c
	if (!cr6.gt) goto loc_8238AE4C;
	// li r11,31
	r11.s64 = 31;
loc_8238AE4C:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r29,r3,16
	r29.u64 = ctx.r3.u32 & 0xFFFF;
loc_8238AE64:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,3644(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3644);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f13,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238ae8c
	if (!cr6.eq) goto loc_8238AE8C;
	// li r30,0
	r30.s64 = 0;
	// b 0x8238aec4
	goto loc_8238AEC4;
loc_8238AE8C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238aea0
	if (!cr0.lt) goto loc_8238AEA0;
	// li r30,0
	r30.s64 = 0;
	// b 0x8238aec4
	goto loc_8238AEC4;
loc_8238AEA0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238aeac
	if (!cr6.gt) goto loc_8238AEAC;
	// li r11,31
	r11.s64 = 31;
loc_8238AEAC:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r30,r3,16
	r30.u64 = ctx.r3.u32 & 0xFFFF;
loc_8238AEC4:
	// lfs f12,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f13,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238aee4
	if (!cr6.eq) goto loc_8238AEE4;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8238af1c
	goto loc_8238AF1C;
loc_8238AEE4:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238aef8
	if (!cr0.lt) goto loc_8238AEF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8238af1c
	goto loc_8238AF1C;
loc_8238AEF8:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238af04
	if (!cr6.gt) goto loc_8238AF04;
	// li r11,31
	r11.s64 = 31;
loc_8238AF04:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r6,r5,16
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFF;
loc_8238AF1C:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238af38
	if (!cr6.eq) goto loc_8238AF38;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8238af70
	goto loc_8238AF70;
loc_8238AF38:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238af4c
	if (!cr0.lt) goto loc_8238AF4C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8238af70
	goto loc_8238AF70;
loc_8238AF4C:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238af58
	if (!cr6.gt) goto loc_8238AF58;
	// li r11,31
	r11.s64 = 31;
loc_8238AF58:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 | ctx.r7.u64;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
loc_8238AF70:
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238af8c
	if (!cr6.eq) goto loc_8238AF8C;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8238afc4
	goto loc_8238AFC4;
loc_8238AF8C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238afa0
	if (!cr0.lt) goto loc_8238AFA0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8238afc4
	goto loc_8238AFC4;
loc_8238AFA0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238afac
	if (!cr6.gt) goto loc_8238AFAC;
	// li r11,31
	r11.s64 = 31;
loc_8238AFAC:
	// rlwinm r11,r11,10,17,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r10,16,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r5,r11,r9
	ctx.r5.u64 = r11.u64 | ctx.r9.u64;
	// or r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 | ctx.r8.u64;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
loc_8238AFC4:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238b010
	if (cr6.eq) goto loc_8238B010;
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238afec
	if (!cr0.lt) goto loc_8238AFEC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8238b010
	goto loc_8238B010;
loc_8238AFEC:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238aff8
	if (!cr6.gt) goto loc_8238AFF8;
	// li r11,31
	r11.s64 = 31;
loc_8238AFF8:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r5,r11,10,17,21
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r3,r10,16,16,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r11,r9,r5
	r11.u64 = ctx.r9.u64 | ctx.r5.u64;
	// or r10,r11,r3
	ctx.r10.u64 = r11.u64 | ctx.r3.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
loc_8238B010:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8238b02c
	if (!cr6.eq) goto loc_8238B02C;
loc_8238B024:
	// li r11,0
	r11.s64 = 0;
	// b 0x8238b05c
	goto loc_8238B05C;
loc_8238B02C:
	// rlwinm r11,r9,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8238b024
	if (cr0.lt) goto loc_8238B024;
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238b044
	if (!cr6.gt) goto loc_8238B044;
	// li r11,31
	r11.s64 = 31;
loc_8238B044:
	// rlwinm r11,r11,10,17,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r5,r9,19,22,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x3FF;
	// rlwinm r4,r9,16,16,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x8000;
	// or r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 | r11.u64;
	// or r11,r3,r4
	r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
loc_8238B05C:
	// li r9,0
	ctx.r9.s64 = 0;
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r28.u16);
	// sth r30,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r30.u16);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r9.u32);
	// addi r31,r31,236
	r31.s64 = r31.s64 + 236;
	// sth r7,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r7.u16);
	// sth r10,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r10.u16);
	// sth r29,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, r29.u16);
	// sth r30,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, r30.u16);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// sth r10,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r10.u16);
	// sth r28,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, r28.u16);
	// sth r6,114(r1)
	PPC_STORE_U16(ctx.r1.u32 + 114, ctx.r6.u16);
	// sth r7,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r7.u16);
	// sth r11,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, r11.u16);
	// sth r29,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r29.u16);
	// sth r6,122(r1)
	PPC_STORE_U16(ctx.r1.u32 + 122, ctx.r6.u16);
	// sth r8,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r8.u16);
	// sth r11,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, r11.u16);
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,25320(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 25320);
	// bl 0x825e0188
	sub_825E0188(ctx, base);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8238B0E8"))) PPC_WEAK_FUNC(sub_8238B0E8);
PPC_FUNC_IMPL(__imp__sub_8238B0E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8238B0EC"))) PPC_WEAK_FUNC(sub_8238B0EC);
PPC_FUNC_IMPL(__imp__sub_8238B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B0F0"))) PPC_WEAK_FUNC(sub_8238B0F0);
PPC_FUNC_IMPL(__imp__sub_8238B0F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8238b118
	if (!cr6.eq) goto loc_8238B118;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8238B118:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// addi r11,r30,116
	r11.s64 = r30.s64 + 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r11.u32);
	// addi r31,r30,236
	r31.s64 = r30.s64 + 236;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82710018
	sub_82710018(ctx, base);
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

__attribute__((alias("__imp__sub_8238B1AC"))) PPC_WEAK_FUNC(sub_8238B1AC);
PPC_FUNC_IMPL(__imp__sub_8238B1AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238B1B0"))) PPC_WEAK_FUNC(sub_8238B1B0);
PPC_FUNC_IMPL(__imp__sub_8238B1B0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8238b1d8
	if (!cr6.eq) goto loc_8238B1D8;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8238B1D8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// addi r11,r30,116
	r11.s64 = r30.s64 + 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r11.u32);
	// addi r31,r30,236
	r31.s64 = r30.s64 + 236;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82710018
	sub_82710018(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8238B288"))) PPC_WEAK_FUNC(sub_8238B288);
PPC_FUNC_IMPL(__imp__sub_8238B288) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8238B28C"))) PPC_WEAK_FUNC(sub_8238B28C);
PPC_FUNC_IMPL(__imp__sub_8238B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B290"))) PPC_WEAK_FUNC(sub_8238B290);
PPC_FUNC_IMPL(__imp__sub_8238B290) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8238b2bc
	if (!cr6.eq) goto loc_8238B2BC;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
loc_8238B2BC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8238ad88
	sub_8238AD88(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8238B364"))) PPC_WEAK_FUNC(sub_8238B364);
PPC_FUNC_IMPL(__imp__sub_8238B364) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8238B368"))) PPC_WEAK_FUNC(sub_8238B368);
PPC_FUNC_IMPL(__imp__sub_8238B368) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// lfs f13,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x8238ad88
	sub_8238AD88(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8238B3E4"))) PPC_WEAK_FUNC(sub_8238B3E4);
PPC_FUNC_IMPL(__imp__sub_8238B3E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238B3E8"))) PPC_WEAK_FUNC(sub_8238B3E8);
PPC_FUNC_IMPL(__imp__sub_8238B3E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8238b3f8
	if (!cr6.eq) goto loc_8238B3F8;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_8238B3F8:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
}

__attribute__((alias("__imp__sub_8238B420"))) PPC_WEAK_FUNC(sub_8238B420);
PPC_FUNC_IMPL(__imp__sub_8238B420) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238b0f0
	sub_8238B0F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238B424"))) PPC_WEAK_FUNC(sub_8238B424);
PPC_FUNC_IMPL(__imp__sub_8238B424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B428"))) PPC_WEAK_FUNC(sub_8238B428);
PPC_FUNC_IMPL(__imp__sub_8238B428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8238b454
	if (!cr6.eq) goto loc_8238B454;
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_8238B454:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8238b0f0
	sub_8238B0F0(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// bl 0x8238b0f0
	sub_8238B0F0(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8238B4BC"))) PPC_WEAK_FUNC(sub_8238B4BC);
PPC_FUNC_IMPL(__imp__sub_8238B4BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8238B4C0"))) PPC_WEAK_FUNC(sub_8238B4C0);
PPC_FUNC_IMPL(__imp__sub_8238B4C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x8238b4cc
	if (!cr6.eq) {
		sub_8238B4CC(ctx, base);
		return;
	}
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
}

__attribute__((alias("__imp__sub_8238B4CC"))) PPC_WEAK_FUNC(sub_8238B4CC);
PPC_FUNC_IMPL(__imp__sub_8238B4CC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238b0f0
	sub_8238B0F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238B4D0"))) PPC_WEAK_FUNC(sub_8238B4D0);
PPC_FUNC_IMPL(__imp__sub_8238B4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8238b4f8
	if (!cr6.eq) goto loc_8238B4F8;
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
loc_8238B4F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8238ad88
	sub_8238AD88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8238B554"))) PPC_WEAK_FUNC(sub_8238B554);
PPC_FUNC_IMPL(__imp__sub_8238B554) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8238B558"))) PPC_WEAK_FUNC(sub_8238B558);
PPC_FUNC_IMPL(__imp__sub_8238B558) {
	PPC_FUNC_PROLOGUE();
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8238b0f0
	sub_8238B0F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8238b0f0
	sub_8238B0F0(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238B5B4"))) PPC_WEAK_FUNC(sub_8238B5B4);
PPC_FUNC_IMPL(__imp__sub_8238B5B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238B5B8"))) PPC_WEAK_FUNC(sub_8238B5B8);
PPC_FUNC_IMPL(__imp__sub_8238B5B8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8270f5f0
	sub_8270F5F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238b0f0
	sub_8238B0F0(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238B61C"))) PPC_WEAK_FUNC(sub_8238B61C);
PPC_FUNC_IMPL(__imp__sub_8238B61C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238B620"))) PPC_WEAK_FUNC(sub_8238B620);
PPC_FUNC_IMPL(__imp__sub_8238B620) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8238b648
	if (!cr6.eq) goto loc_8238B648;
	// lwz r31,16(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_8238B648:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825d7258
	sub_825D7258(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8238b6c4
	if (cr6.eq) goto loc_8238B6C4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8270f358
	sub_8270F358(ctx, base);
loc_8238B6C4:
	// addi r11,r28,116
	r11.s64 = r28.s64 + 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,236(r28)
	PPC_STORE_U32(r28.u32 + 236, r11.u32);
	// addi r31,r28,236
	r31.s64 = r28.s64 + 236;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82710018
	sub_82710018(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8238B70C"))) PPC_WEAK_FUNC(sub_8238B70C);
PPC_FUNC_IMPL(__imp__sub_8238B70C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8238B710"))) PPC_WEAK_FUNC(sub_8238B710);
PPC_FUNC_IMPL(__imp__sub_8238B710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8238b740
	if (!cr6.eq) goto loc_8238B740;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
loc_8238B740:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8238b620
	sub_8238B620(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8238B778"))) PPC_WEAK_FUNC(sub_8238B778);
PPC_FUNC_IMPL(__imp__sub_8238B778) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8238B77C"))) PPC_WEAK_FUNC(sub_8238B77C);
PPC_FUNC_IMPL(__imp__sub_8238B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B780"))) PPC_WEAK_FUNC(sub_8238B780);
PPC_FUNC_IMPL(__imp__sub_8238B780) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x8238b1b0
	sub_8238B1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238B788"))) PPC_WEAK_FUNC(sub_8238B788);
PPC_FUNC_IMPL(__imp__sub_8238B788) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
}

__attribute__((alias("__imp__sub_8238B78C"))) PPC_WEAK_FUNC(sub_8238B78C);
PPC_FUNC_IMPL(__imp__sub_8238B78C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8238b1b0
	sub_8238B1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238B790"))) PPC_WEAK_FUNC(sub_8238B790);
PPC_FUNC_IMPL(__imp__sub_8238B790) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,36(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// b 0x8238b1b0
	sub_8238B1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238B798"))) PPC_WEAK_FUNC(sub_8238B798);
PPC_FUNC_IMPL(__imp__sub_8238B798) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,40(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// b 0x8238b1b0
	sub_8238B1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238B7A0"))) PPC_WEAK_FUNC(sub_8238B7A0);
PPC_FUNC_IMPL(__imp__sub_8238B7A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x8238b1b0
	sub_8238B1B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238B7A8"))) PPC_WEAK_FUNC(sub_8238B7A8);
PPC_FUNC_IMPL(__imp__sub_8238B7A8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8238b1b0
	sub_8238B1B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238b1b0
	sub_8238B1B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238B7DC"))) PPC_WEAK_FUNC(sub_8238B7DC);
PPC_FUNC_IMPL(__imp__sub_8238B7DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238B7E0"))) PPC_WEAK_FUNC(sub_8238B7E0);
PPC_FUNC_IMPL(__imp__sub_8238B7E0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r29,52(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,48(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8238b1b0
	sub_8238B1B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238b1b0
	sub_8238B1B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238B818"))) PPC_WEAK_FUNC(sub_8238B818);
PPC_FUNC_IMPL(__imp__sub_8238B818) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238B81C"))) PPC_WEAK_FUNC(sub_8238B81C);
PPC_FUNC_IMPL(__imp__sub_8238B81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B820"))) PPC_WEAK_FUNC(sub_8238B820);
PPC_FUNC_IMPL(__imp__sub_8238B820) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r29,60(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,56(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8238b1b0
	sub_8238B1B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238b1b0
	sub_8238B1B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238B858"))) PPC_WEAK_FUNC(sub_8238B858);
PPC_FUNC_IMPL(__imp__sub_8238B858) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238B85C"))) PPC_WEAK_FUNC(sub_8238B85C);
PPC_FUNC_IMPL(__imp__sub_8238B85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B860"))) PPC_WEAK_FUNC(sub_8238B860);
PPC_FUNC_IMPL(__imp__sub_8238B860) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r29,68(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,64(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8238b1b0
	sub_8238B1B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238b1b0
	sub_8238B1B0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238B898"))) PPC_WEAK_FUNC(sub_8238B898);
PPC_FUNC_IMPL(__imp__sub_8238B898) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238B89C"))) PPC_WEAK_FUNC(sub_8238B89C);
PPC_FUNC_IMPL(__imp__sub_8238B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B8A0"))) PPC_WEAK_FUNC(sub_8238B8A0);
PPC_FUNC_IMPL(__imp__sub_8238B8A0) {
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
	// lwz r31,20(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lis r27,-31933
	r27.s64 = -2092761088;
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x8238b990
	if (!cr6.gt) goto loc_8238B990;
	// addi r28,r29,116
	r28.s64 = r29.s64 + 116;
	// addi r29,r29,236
	r29.s64 = r29.s64 + 236;
loc_8238B920:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// addi r5,r31,-1
	ctx.r5.s64 = r31.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x825de820
	sub_825DE820(ctx, base);
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82710018
	sub_82710018(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8238b920
	if (cr6.lt) goto loc_8238B920;
loc_8238B990:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,22000
	ctx.r9.s64 = r11.s64 + 22000;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,368(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 368);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x8238b9bc
	if (cr6.gt) goto loc_8238B9BC;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_8238B9BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825de820
	sub_825DE820(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8238B9D0"))) PPC_WEAK_FUNC(sub_8238B9D0);
PPC_FUNC_IMPL(__imp__sub_8238B9D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8238B9D4"))) PPC_WEAK_FUNC(sub_8238B9D4);
PPC_FUNC_IMPL(__imp__sub_8238B9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238B9D8"))) PPC_WEAK_FUNC(sub_8238B9D8);
PPC_FUNC_IMPL(__imp__sub_8238B9D8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,76(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// addi r11,r6,1
	r11.s64 = ctx.r6.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// srw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x8238ba24
	if (cr6.gt) goto loc_8238BA24;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_8238BA24:
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r8,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r11.u8 & 0x3F));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x8238ba48
	if (cr6.gt) goto loc_8238BA48;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8238BA48:
	// lwz r10,76(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 76);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r11,r10,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x8238ba6c
	if (cr6.gt) goto loc_8238BA6C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8238BA6C:
	// lwz r8,80(r25)
	ctx.r8.u64 = PPC_LOAD_U32(r25.u32 + 80);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r11,r8,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r29.u8 & 0x3F));
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x8238ba90
	if (cr6.gt) goto loc_8238BA90;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8238BA90:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bgt cr6,0x8238baac
	if (cr6.gt) goto loc_8238BAAC;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8238BAAC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x8238bae4
	if (!cr6.eq) goto loc_8238BAE4;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r8,1
	cr6.compare<uint32_t>(ctx.r8.u32, 1, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x8238bad0
	if (cr6.gt) goto loc_8238BAD0;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8238BAD0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bne cr6,0x8238bae4
	if (!cr6.eq) goto loc_8238BAE4;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// b 0x8238bb90
	goto loc_8238BB90;
loc_8238BAE4:
	// rlwinm r11,r10,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x8238bb00
	if (cr6.gt) goto loc_8238BB00;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8238BB00:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x8238bb3c
	if (!cr6.eq) goto loc_8238BB3C;
	// rlwinm r11,r8,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x8238bb28
	if (cr6.gt) goto loc_8238BB28;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8238BB28:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bne cr6,0x8238bb3c
	if (!cr6.eq) goto loc_8238BB3C;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// b 0x8238bb90
	goto loc_8238BB90;
loc_8238BB3C:
	// rlwinm r11,r10,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x8238bb58
	if (cr6.gt) goto loc_8238BB58;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8238BB58:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bne cr6,0x8238bce8
	if (!cr6.eq) goto loc_8238BCE8;
	// rlwinm r11,r8,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x8238bb80
	if (cr6.gt) goto loc_8238BB80;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8238BB80:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// bne cr6,0x8238bce8
	if (!cr6.eq) goto loc_8238BCE8;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 36);
loc_8238BB90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238ad20
	sub_8238AD20(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// lis r27,-31933
	r27.s64 = -2092761088;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x825de820
	sub_825DE820(ctx, base);
	// addi r28,r31,116
	r28.s64 = r31.s64 + 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r28.u32);
	// addi r30,r31,236
	r30.s64 = r31.s64 + 236;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82710018
	sub_82710018(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8238ad20
	sub_8238AD20(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// add r11,r26,r29
	r11.u64 = r26.u64 + r29.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8238bcac
	if (!cr6.lt) goto loc_8238BCAC;
	// addi r31,r29,-1
	r31.s64 = r29.s64 + -1;
	// addi r26,r29,1
	r26.s64 = r29.s64 + 1;
	// subf r29,r29,r11
	r29.s64 = r11.s64 - r29.s64;
loc_8238BC40:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r26,r31
	ctx.r4.u64 = r26.u64 + r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8270f7b0
	sub_8270F7B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x825de820
	sub_825DE820(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82710018
	sub_82710018(ctx, base);
	// bl 0x8270eb28
	sub_8270EB28(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x8238bc40
	if (!cr0.eq) goto loc_8238BC40;
loc_8238BCAC:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r10,13
	ctx.r10.s64 = 13;
	// addi r9,r11,22000
	ctx.r9.s64 = r11.s64 + 22000;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,368(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 368);
	// lbz r11,25(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 25);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// bgt cr6,0x8238bcd8
	if (cr6.gt) goto loc_8238BCD8;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_8238BCD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825de820
	sub_825DE820(ctx, base);
loc_8238BCE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8238BCEC"))) PPC_WEAK_FUNC(sub_8238BCEC);
PPC_FUNC_IMPL(__imp__sub_8238BCEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8238BCF0"))) PPC_WEAK_FUNC(sub_8238BCF0);
PPC_FUNC_IMPL(__imp__sub_8238BCF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x828e93e8
	// stfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// lwz r11,20548(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20548);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// lwz r8,24192(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// clrlwi r7,r11,31
	ctx.r7.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// stw r8,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r8.u32);
	// bne cr6,0x8238bd60
	if (!cr6.eq) goto loc_8238BD60;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r6,r7,20544
	ctx.r6.s64 = ctx.r7.s64 + 20544;
	// stw r11,20548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r9,3(r6)
	PPC_STORE_U8(ctx.r6.u32 + 3, ctx.r9.u8);
	// stb r11,2(r6)
	PPC_STORE_U8(ctx.r6.u32 + 2, r11.u8);
	// stb r10,1(r6)
	PPC_STORE_U8(ctx.r6.u32 + 1, ctx.r10.u8);
	// stb r8,20544(r7)
	PPC_STORE_U8(ctx.r7.u32 + 20544, ctx.r8.u8);
loc_8238BD60:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f390
	sub_8270F390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// addi r5,r24,236
	ctx.r5.s64 = r24.s64 + 236;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// lwz r4,80(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 80);
	// lwz r3,76(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 76);
	// li r17,-1
	r17.s64 = -1;
	// lis r7,6690
	ctx.r7.s64 = 438435840;
	// lwz r5,88(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 88);
	// li r31,0
	r31.s64 = 0;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// ori r7,r7,43866
	ctx.r7.u64 = ctx.r7.u64 | 43866;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r4,r4,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r3,r3,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82712790
	sub_82712790(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// addi r4,r30,16
	ctx.r4.s64 = r30.s64 + 16;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x8238be18
	if (!cr6.eq) goto loc_8238BE18;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82712790
	sub_82712790(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_8238BE18:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,25320(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// mr r25,r31
	r25.u64 = r31.u64;
	// lwz r16,88(r22)
	r16.u64 = PPC_LOAD_U32(r22.u32 + 88);
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x8238c144
	if (cr6.eq) goto loc_8238C144;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r18,1
	r18.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,6184
	ctx.r9.s64 = 405274624;
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r18.u32);
	// addi r20,r16,-1
	r20.s64 = r16.s64 + -1;
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// lfs f31,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f31.f64 = double(temp.f32);
	// li r21,-10
	r21.s64 = -10;
	// oris r26,r10,32768
	r26.u64 = ctx.r10.u64 | 2147483648;
	// ori r23,r9,390
	r23.u64 = ctx.r9.u64 | 390;
loc_8238BE68:
	// lwz r11,76(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 76);
	// srw r11,r11,r25
	r11.u64 = r25.u8 & 0x20 ? 0 : (r11.u32 >> (r25.u8 & 0x3F));
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
	// blt cr6,0x8238be84
	if (cr6.lt) goto loc_8238BE84;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
loc_8238BE84:
	// lwz r10,80(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 80);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r11,r10,r25
	r11.u64 = r25.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r25.u8 & 0x3F));
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,120
	r11.s64 = ctx.r1.s64 + 120;
	// blt cr6,0x8238bea4
	if (cr6.lt) goto loc_8238BEA4;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
loc_8238BEA4:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// lis r5,6688
	ctx.r5.s64 = 438304768;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r21,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r21.u32);
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r31.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,43861
	ctx.r5.u64 = ctx.r5.u64 | 43861;
	// rlwinm r4,r28,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r3,r27,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x825fee78
	sub_825FEE78(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// lwz r29,76(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 76);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r29,36
	ctx.r5.s64 = r29.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,10240
	ctx.r4.s64 = 671088640;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// cmplw cr6,r25,r20
	cr6.compare<uint32_t>(r25.u32, r20.u32, xer);
	// bge cr6,0x8238c138
	if (!cr6.lt) goto loc_8238C138;
	// rlwinm r11,r27,31,1,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r18.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8238bfd0
	if (cr6.lt) goto loc_8238BFD0;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
loc_8238BFD0:
	// rlwinm r11,r28,31,1,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r28,0(r10)
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r11,r1,116
	r11.s64 = ctx.r1.s64 + 116;
	// blt cr6,0x8238bff0
	if (cr6.lt) goto loc_8238BFF0;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
loc_8238BFF0:
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825fee78
	sub_825FEE78(ctx, base);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// lwz r29,20(r24)
	r29.u64 = PPC_LOAD_U32(r24.u32 + 20);
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r29,36
	ctx.r5.s64 = r29.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e07b0
	sub_825E07B0(ctx, base);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825ff108
	sub_825FF108(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x825ff3d8
	sub_825FF3D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825e2bc8
	sub_825E2BC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
loc_8238C138:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplw cr6,r25,r16
	cr6.compare<uint32_t>(r25.u32, r16.u32, xer);
	// blt cr6,0x8238be68
	if (cr6.lt) goto loc_8238BE68;
loc_8238C144:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8238ac88
	sub_8238AC88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e9f8
	sub_8270E9F8(ctx, base);
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-144(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
}

__attribute__((alias("__imp__sub_8238C168"))) PPC_WEAK_FUNC(sub_8238C168);
PPC_FUNC_IMPL(__imp__sub_8238C168) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_8238C16C"))) PPC_WEAK_FUNC(sub_8238C16C);
PPC_FUNC_IMPL(__imp__sub_8238C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C170"))) PPC_WEAK_FUNC(sub_8238C170);
PPC_FUNC_IMPL(__imp__sub_8238C170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r4,-31962
	ctx.r4.s64 = -2094661632;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// lwz r3,24192(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24192);
	// lwz r11,20548(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20548);
	// clrlwi r4,r11,31
	ctx.r4.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r3,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r3.u32);
	// bne cr6,0x8238c1dc
	if (!cr6.eq) goto loc_8238C1DC;
	// lis r31,-31934
	r31.s64 = -2092826624;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r30,r31,20544
	r30.s64 = r31.s64 + 20544;
	// stw r11,20548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20548, r11.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r3,255
	ctx.r3.s64 = 255;
	// stb r4,3(r30)
	PPC_STORE_U8(r30.u32 + 3, ctx.r4.u8);
	// stb r11,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r11.u8);
	// stb r10,1(r30)
	PPC_STORE_U8(r30.u32 + 1, ctx.r10.u8);
	// stb r3,20544(r31)
	PPC_STORE_U8(r31.u32 + 20544, ctx.r3.u8);
loc_8238C1DC:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r4,560(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 560);
	// lwz r3,1020(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1020);
	// li r31,2
	r31.s64 = 2;
	// addi r16,r11,22000
	r16.s64 = r11.s64 + 22000;
	// li r27,4
	r27.s64 = 4;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// lwz r29,508(r16)
	r29.u64 = PPC_LOAD_U32(r16.u32 + 508);
	// lwz r11,544(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 544);
	// lwz r10,1016(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 1016);
	// addi r11,r11,-88
	r11.s64 = r11.s64 + -88;
	// lwz r30,532(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 532);
	// addi r10,r10,-88
	ctx.r10.s64 = ctx.r10.s64 + -88;
	// addic r26,r11,-1
	xer.ca = r11.u32 > 0;
	r26.s64 = r11.s64 + -1;
	// subfe r11,r26,r11
	temp.u8 = (~r26.u32 + r11.u32 < ~r26.u32) | (~r26.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r26.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r26,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	r26.s64 = ctx.r4.s64 + -1;
	// subfe r4,r26,r4
	temp.u8 = (~r26.u32 + ctx.r4.u32 < ~r26.u32) | (~r26.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~r26.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r26,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r26.s64 = ctx.r10.s64 + -1;
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// subfe r10,r26,r10
	temp.u8 = (~r26.u32 + ctx.r10.u32 < ~r26.u32) | (~r26.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r26.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r4,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// and r11,r11,r6
	r11.u64 = r11.u64 & ctx.r6.u64;
	// subfe r6,r4,r3
	temp.u8 = (~ctx.r4.u32 + ctx.r3.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r4.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// addic r4,r30,-1
	xer.ca = r30.u32 > 0;
	ctx.r4.s64 = r30.s64 + -1;
	// clrlwi r23,r11,24
	r23.u64 = r11.u32 & 0xFF;
	// subfe r3,r4,r30
	temp.u8 = (~ctx.r4.u32 + r30.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + r30.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + r30.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r11,r23,0
	xer.ca = r23.u32 <= 0;
	r11.s64 = 0 - r23.s64;
	// and r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r11,r10,r6
	r11.u64 = ctx.r10.u64 & ctx.r6.u64;
	// clrlwi r30,r3,24
	r30.u64 = ctx.r3.u32 & 0xFF;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r11,r7
	ctx.r4.u64 = r11.u64 & ctx.r7.u64;
	// subfic r6,r30,0
	xer.ca = r30.u32 <= 0;
	ctx.r6.s64 = 0 - r30.s64;
	// clrlwi r26,r4,24
	r26.u64 = ctx.r4.u32 & 0xFF;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r11,r10,r31
	r11.u64 = ctx.r10.u64 & r31.u64;
	// and r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 & r27.u64;
	// addic r7,r26,-1
	xer.ca = r26.u32 > 0;
	ctx.r7.s64 = r26.s64 + -1;
	// or r6,r11,r10
	ctx.r6.u64 = r11.u64 | ctx.r10.u64;
	// subfe r5,r7,r26
	temp.u8 = (~ctx.r7.u32 + r26.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + r26.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r7.u64 + r26.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r19,r8,r26
	r19.u64 = ctx.r8.u64 & r26.u64;
	// or r22,r6,r5
	r22.u64 = ctx.r6.u64 | ctx.r5.u64;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x8238c6ec
	if (cr6.eq) goto loc_8238C6EC;
	// cmplwi cr6,r22,4
	cr6.compare<uint32_t>(r22.u32, 4, xer);
	// beq cr6,0x8238c6ec
	if (cr6.eq) goto loc_8238C6EC;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8238c2a8
	if (cr6.eq) goto loc_8238C2A8;
	// rlwinm r11,r22,2,0,29
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// b 0x8238c2b4
	goto loc_8238C2B4;
loc_8238C2A8:
	// addi r11,r22,20
	r11.s64 = r22.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r18
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r18.u32);
loc_8238C2B4:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8238ad20
	sub_8238AD20(ctx, base);
	// lis r27,-31933
	r27.s64 = -2092761088;
	// li r17,0
	r17.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r17
	r24.u64 = r17.u64;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// mr r25,r17
	r25.u64 = r17.u64;
	// bne cr6,0x8238c2e8
	if (!cr6.eq) goto loc_8238C2E8;
	// lwz r25,532(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 532);
loc_8238C2E8:
	// lwz r11,532(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 532);
	// lwz r20,524(r29)
	r20.u64 = PPC_LOAD_U32(r29.u32 + 524);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8238c2fc
	if (cr6.eq) goto loc_8238C2FC;
	// rlwinm r20,r20,1,0,30
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
loc_8238C2FC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x8238c308
	if (cr6.eq) goto loc_8238C308;
	// rlwinm r20,r20,31,1,31
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 31) & 0x7FFFFFFF;
loc_8238C308:
	// lwz r21,528(r29)
	r21.u64 = PPC_LOAD_U32(r29.u32 + 528);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8238c318
	if (!cr6.eq) goto loc_8238C318;
	// rlwinm r21,r21,1,0,30
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
loc_8238C318:
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8238c32c
	if (!cr6.eq) goto loc_8238C32C;
	// rlwinm r21,r21,31,1,31
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 31) & 0x7FFFFFFF;
	// li r30,40
	r30.s64 = 40;
	// b 0x8238c330
	goto loc_8238C330;
loc_8238C32C:
	// li r30,80
	r30.s64 = 80;
loc_8238C330:
	// extsw r11,r30
	r11.s64 = r30.s32;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// frsp f30,f13
	f30.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x8238c3c4
	if (cr6.eq) goto loc_8238C3C4;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,15
	ctx.r6.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827148d8
	sub_827148D8(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,560(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 560);
	// bl 0x82712ee0
	sub_82712EE0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3FFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r9,r10,r30
	ctx.r9.u32 = ctx.r10.u32 / r30.u32;
	// mullw r10,r9,r30
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r8,18,0,13
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFC0000) | (r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// li r24,1
	r24.s64 = 1;
loc_8238C3C4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8238c438
	if (cr6.eq) goto loc_8238C438;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827149c8
	sub_827149C8(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// lwz r3,1020(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1020);
	// bl 0x82712ee0
	sub_82712EE0(ctx, base);
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3FFF;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divwu r9,r10,r30
	ctx.r9.u32 = ctx.r10.u32 / r30.u32;
	// mullw r10,r9,r30
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r30.s32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r8,18,0,13
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFC0000) | (r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
loc_8238C438:
	// lwz r11,524(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 524);
	// extsw r10,r21
	ctx.r10.s64 = r21.s32;
	// lwz r9,528(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 528);
	// extsw r8,r20
	ctx.r8.s64 = r20.s32;
	// extsw r7,r11
	ctx.r7.s64 = r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f0
	ctx.f7.f64 = double(f0.s64);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfs f0,3792(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3792);
	f0.f64 = double(temp.f32);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r11,25320(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// fmuls f5,f30,f0
	ctx.f5.f64 = double(float(f30.f64 * f0.f64));
	// li r12,1
	r12.s64 = 1;
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// cmplwi cr6,r22,4
	cr6.compare<uint32_t>(r22.u32, 4, xer);
	// rldicr r12,r12,63,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f31,-25600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -25600);
	f31.f64 = double(temp.f32);
	// fdivs f4,f31,f30
	ctx.f4.f64 = double(float(f31.f64 / f30.f64));
	// stfs f4,6028(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r11.u32 + 6028, temp.u32);
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fdivs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f1.f64));
	// stfs f13,6020(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 6020, temp.u32);
	// fdivs f0,f3,f6
	f0.f64 = double(float(ctx.f3.f64 / ctx.f6.f64));
	// stfs f0,6016(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 6016, temp.u32);
	// fmuls f12,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * f0.f64));
	// stfs f12,6024(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 6024, temp.u32);
	// ld r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// or r10,r3,r12
	ctx.r10.u64 = ctx.r3.u64 | r12.u64;
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// ble cr6,0x8238c518
	if (!cr6.gt) goto loc_8238C518;
	// rlwinm r11,r25,1,0,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,532(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 532);
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// addi r8,r9,-1192
	ctx.r8.s64 = ctx.r9.s64 + -1192;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// lis r6,1024
	ctx.r6.s64 = 67108864;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r5,r8
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
loc_8238C518:
	// add r11,r20,r30
	r11.u64 = r20.u64 + r30.u64;
	// stfs f31,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r17.u32);
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// divwu r8,r9,r30
	ctx.r8.u32 = ctx.r9.u32 / r30.u32;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// mullw r7,r8,r30
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// lfs f0,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8238a740
	sub_8238A740(ctx, base);
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
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// lis r6,1024
	ctx.r6.s64 = 67108864;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// clrlwi r6,r19,24
	ctx.r6.u64 = r19.u32 & 0xFF;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x8238c63c
	if (cr6.eq) goto loc_8238C63C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,1016(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 1016);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827149c8
	sub_827149C8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// lwz r3,112(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 112);
	// bl 0x8238d7c8
	sub_8238D7C8(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8238a740
	sub_8238A740(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d15c0
	sub_825D15C0(ctx, base);
loc_8238C63C:
	// lwz r11,544(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 544);
	// addi r5,r29,268
	ctx.r5.s64 = r29.s64 + 268;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8238c650
	if (!cr6.eq) goto loc_8238C650;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_8238C650:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// lwz r11,548(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 548);
	// addi r5,r29,316
	ctx.r5.s64 = r29.s64 + 316;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8238c670
	if (!cr6.eq) goto loc_8238C670;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_8238C670:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// lwz r11,552(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 552);
	// addi r5,r29,364
	ctx.r5.s64 = r29.s64 + 364;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8238c690
	if (!cr6.eq) goto loc_8238C690;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_8238C690:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// lwz r11,556(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 556);
	// addi r5,r29,412
	ctx.r5.s64 = r29.s64 + 412;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8238c6b0
	if (!cr6.eq) goto loc_8238C6B0;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_8238C6B0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// lwz r11,1016(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1016);
	// addi r4,r29,468
	ctx.r4.s64 = r29.s64 + 468;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8238c6d0
	if (!cr6.eq) goto loc_8238C6D0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
loc_8238C6D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,304(r16)
	r31.u64 = PPC_LOAD_U32(r16.u32 + 304);
	// bl 0x8270f218
	sub_8270F218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270f218
	sub_8270F218(ctx, base);
loc_8238C6EC:
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
}

__attribute__((alias("__imp__sub_8238C700"))) PPC_WEAK_FUNC(sub_8238C700);
PPC_FUNC_IMPL(__imp__sub_8238C700) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9438
	return;
}

__attribute__((alias("__imp__sub_8238C704"))) PPC_WEAK_FUNC(sub_8238C704);
PPC_FUNC_IMPL(__imp__sub_8238C704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238C708"))) PPC_WEAK_FUNC(sub_8238C708);
PPC_FUNC_IMPL(__imp__sub_8238C708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,20548(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20548);
	// lwz r8,24192(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24192);
	// clrlwi r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// bne cr6,0x8238c770
	if (!cr6.eq) goto loc_8238C770;
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// addi r4,r5,20544
	ctx.r4.s64 = ctx.r5.s64 + 20544;
	// stw r11,20548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// li r10,255
	ctx.r10.s64 = 255;
	// li r8,255
	ctx.r8.s64 = 255;
	// stb r9,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r9.u8);
	// stb r11,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, r11.u8);
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// stb r8,20544(r5)
	PPC_STORE_U8(ctx.r5.u32 + 20544, ctx.r8.u8);
loc_8238C770:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// addi r22,r11,22000
	r22.s64 = r11.s64 + 22000;
	// li r9,4
	ctx.r9.s64 = 4;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lwz r29,508(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 508);
	// lwz r8,532(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 532);
	// addic r6,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// subfe r5,r6,r8
	temp.u8 = (~ctx.r6.u32 + ctx.r8.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// subfic r3,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r4.s64;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 & ctx.r9.u64;
	// ori r25,r9,2
	r25.u64 = ctx.r9.u64 | 2;
	// beq cr6,0x8238c7b8
	if (cr6.eq) goto loc_8238C7B8;
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r7
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// b 0x8238c7c4
	goto loc_8238C7C4;
loc_8238C7B8:
	// addi r11,r25,20
	r11.s64 = r25.s64 + 20;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r24
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
loc_8238C7C4:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// lis r30,-31933
	r30.s64 = -2092761088;
	// lwz r11,532(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 532);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r31,25320(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// lwz r27,524(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 524);
	// beq cr6,0x8238c820
	if (cr6.eq) goto loc_8238C820;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_8238C820:
	// lwz r28,528(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 528);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8238c830
	if (!cr6.eq) goto loc_8238C830;
	// rlwinm r28,r28,1,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_8238C830:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,15
	ctx.r6.s64 = 15;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x827148d8
	sub_827148D8(ctx, base);
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82712ee0
	sub_82712EE0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// lwz r7,80(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 80);
	// extsw r9,r27
	ctx.r9.s64 = r27.s32;
	// lwz r6,76(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 76);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// lwz r11,25320(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// frsp f4,f11
	ctx.f4.f64 = double(float(ctx.f11.f64));
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r12,1
	r12.s64 = 1;
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lfs f13,3768(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3768);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// rldicr r12,r12,63,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(r25.u32, 4, xer);
	// lfs f0,3764(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3764);
	f0.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f3,f6
	ctx.f3.f64 = double(float(ctx.f6.f64));
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// fdivs f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f4.f64));
	// fdivs f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 / ctx.f10.f64));
	// stfs f2,6016(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r11.u32 + 6016, temp.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stfs f1,6020(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 6020, temp.u32);
	// lwz r11,25320(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// stfs f13,6024(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 6024, temp.u32);
	// stfs f0,6028(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | r12.u64;
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// ble cr6,0x8238c990
	if (!cr6.gt) goto loc_8238C990;
	// lwz r11,532(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 532);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lis r6,1024
	ctx.r6.s64 = 67108864;
	// addi r9,r10,-1192
	ctx.r9.s64 = ctx.r10.s64 + -1192;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
loc_8238C990:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// li r26,0
	r26.s64 = 0;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// lfs f13,-25600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25600);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x825df518
	sub_825DF518(ctx, base);
	// addi r9,r24,116
	ctx.r9.s64 = r24.s64 + 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,236(r24)
	PPC_STORE_U32(r24.u32 + 236, ctx.r9.u32);
	// addi r30,r24,236
	r30.s64 = r24.s64 + 236;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82710018
	sub_82710018(ctx, base);
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
	// lis r6,1024
	ctx.r6.s64 = 67108864;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
	// lwz r8,544(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 544);
	// addi r5,r29,268
	ctx.r5.s64 = r29.s64 + 268;
	// cmpwi cr6,r8,88
	cr6.compare<int32_t>(ctx.r8.s32, 88, xer);
	// bne cr6,0x8238ca40
	if (!cr6.eq) goto loc_8238CA40;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8238CA40:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// lwz r11,548(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 548);
	// addi r5,r29,316
	ctx.r5.s64 = r29.s64 + 316;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8238ca60
	if (!cr6.eq) goto loc_8238CA60;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8238CA60:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// lwz r11,552(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 552);
	// addi r5,r29,364
	ctx.r5.s64 = r29.s64 + 364;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8238ca80
	if (!cr6.eq) goto loc_8238CA80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8238CA80:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// lwz r11,556(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 556);
	// addi r5,r29,412
	ctx.r5.s64 = r29.s64 + 412;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8238caa0
	if (!cr6.eq) goto loc_8238CAA0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_8238CAA0:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// lwz r11,1016(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1016);
	// addi r4,r29,468
	ctx.r4.s64 = r29.s64 + 468;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8238cac0
	if (!cr6.eq) goto loc_8238CAC0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_8238CAC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,304(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 304);
	// bl 0x8270f218
	sub_8270F218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270f218
	sub_8270F218(ctx, base);
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
}

__attribute__((alias("__imp__sub_8238CAE8"))) PPC_WEAK_FUNC(sub_8238CAE8);
PPC_FUNC_IMPL(__imp__sub_8238CAE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8238CAEC"))) PPC_WEAK_FUNC(sub_8238CAEC);
PPC_FUNC_IMPL(__imp__sub_8238CAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238CAF0"))) PPC_WEAK_FUNC(sub_8238CAF0);
PPC_FUNC_IMPL(__imp__sub_8238CAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r31,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r31.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r31.u32);
	// stw r31,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r31.u32);
	// stw r31,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r31.u32);
	// stw r31,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r31.u32);
	// stw r31,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r31.u32);
	// stw r31,36(r29)
	PPC_STORE_U32(r29.u32 + 36, r31.u32);
	// stw r31,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r31.u32);
	// stw r31,44(r29)
	PPC_STORE_U32(r29.u32 + 44, r31.u32);
	// stw r31,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r31.u32);
	// stw r31,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r31.u32);
	// stw r31,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r31.u32);
	// stw r31,60(r29)
	PPC_STORE_U32(r29.u32 + 60, r31.u32);
	// stw r31,64(r29)
	PPC_STORE_U32(r29.u32 + 64, r31.u32);
	// stw r31,68(r29)
	PPC_STORE_U32(r29.u32 + 68, r31.u32);
	// stw r31,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r31.u32);
	// stw r31,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r31.u32);
	// stw r31,112(r29)
	PPC_STORE_U32(r29.u32 + 112, r31.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// bl 0x82715718
	sub_82715718(ctx, base);
	// addi r28,r29,176
	r28.s64 = r29.s64 + 176;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82715718
	sub_82715718(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,80
	ctx.r3.s64 = r29.s64 + 80;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,236
	ctx.r3.s64 = r29.s64 + 236;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,6240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238cbbc
	if (!cr6.eq) goto loc_8238CBBC;
	// sth r31,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, r31.u16);
	// b 0x8238cbf4
	goto loc_8238CBF4;
loc_8238CBBC:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238cbd0
	if (!cr0.lt) goto loc_8238CBD0;
	// sth r31,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, r31.u16);
	// b 0x8238cbf4
	goto loc_8238CBF4;
loc_8238CBD0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cbdc
	if (!cr6.gt) goto loc_8238CBDC;
	// li r11,31
	r11.s64 = 31;
loc_8238CBDC:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r5.u16);
loc_8238CBF4:
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238cc14
	if (!cr6.eq) goto loc_8238CC14;
	// sth r31,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, r31.u16);
	// b 0x8238cc4c
	goto loc_8238CC4C;
loc_8238CC14:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238cc28
	if (!cr0.lt) goto loc_8238CC28;
	// sth r31,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, r31.u16);
	// b 0x8238cc4c
	goto loc_8238CC4C;
loc_8238CC28:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cc34
	if (!cr6.gt) goto loc_8238CC34;
	// li r11,31
	r11.s64 = 31;
loc_8238CC34:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r5.u16);
loc_8238CC4C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238cc6c
	if (!cr6.eq) goto loc_8238CC6C;
	// sth r31,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, r31.u16);
	// b 0x8238cca4
	goto loc_8238CCA4;
loc_8238CC6C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238cc80
	if (!cr0.lt) goto loc_8238CC80;
	// sth r31,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, r31.u16);
	// b 0x8238cca4
	goto loc_8238CCA4;
loc_8238CC80:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cc8c
	if (!cr6.gt) goto loc_8238CC8C;
	// li r11,31
	r11.s64 = 31;
loc_8238CC8C:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r5.u16);
loc_8238CCA4:
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238ccbc
	if (!cr6.eq) goto loc_8238CCBC;
	// sth r31,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, r31.u16);
	// b 0x8238ccf4
	goto loc_8238CCF4;
loc_8238CCBC:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238ccd0
	if (!cr0.lt) goto loc_8238CCD0;
	// sth r31,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, r31.u16);
	// b 0x8238ccf4
	goto loc_8238CCF4;
loc_8238CCD0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238ccdc
	if (!cr6.gt) goto loc_8238CCDC;
	// li r11,31
	r11.s64 = 31;
loc_8238CCDC:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r5.u16);
loc_8238CCF4:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238cd0c
	if (!cr6.eq) goto loc_8238CD0C;
	// sth r31,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, r31.u16);
	// b 0x8238cd44
	goto loc_8238CD44;
loc_8238CD0C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238cd20
	if (!cr0.lt) goto loc_8238CD20;
	// sth r31,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, r31.u16);
	// b 0x8238cd44
	goto loc_8238CD44;
loc_8238CD20:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cd2c
	if (!cr6.gt) goto loc_8238CD2C;
	// li r11,31
	r11.s64 = 31;
loc_8238CD2C:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r5.u16);
loc_8238CD44:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238cd5c
	if (!cr6.eq) goto loc_8238CD5C;
	// sth r31,138(r1)
	PPC_STORE_U16(ctx.r1.u32 + 138, r31.u16);
	// b 0x8238cd94
	goto loc_8238CD94;
loc_8238CD5C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238cd70
	if (!cr0.lt) goto loc_8238CD70;
	// sth r31,138(r1)
	PPC_STORE_U16(ctx.r1.u32 + 138, r31.u16);
	// b 0x8238cd94
	goto loc_8238CD94;
loc_8238CD70:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cd7c
	if (!cr6.gt) goto loc_8238CD7C;
	// li r11,31
	r11.s64 = 31;
loc_8238CD7C:
	// rlwinm r11,r11,10,17,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r10,16,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r7,r11,r9
	ctx.r7.u64 = r11.u64 | ctx.r9.u64;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// sth r6,138(r1)
	PPC_STORE_U16(ctx.r1.u32 + 138, ctx.r6.u16);
loc_8238CD94:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238cdac
	if (!cr6.eq) goto loc_8238CDAC;
	// sth r31,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, r31.u16);
	// b 0x8238cde4
	goto loc_8238CDE4;
loc_8238CDAC:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238cdc0
	if (!cr0.lt) goto loc_8238CDC0;
	// sth r31,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, r31.u16);
	// b 0x8238cde4
	goto loc_8238CDE4;
loc_8238CDC0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cdcc
	if (!cr6.gt) goto loc_8238CDCC;
	// li r11,31
	r11.s64 = 31;
loc_8238CDCC:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,140(r1)
	PPC_STORE_U16(ctx.r1.u32 + 140, ctx.r5.u16);
loc_8238CDE4:
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238cdfc
	if (!cr6.eq) goto loc_8238CDFC;
	// sth r31,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, r31.u16);
	// b 0x8238ce34
	goto loc_8238CE34;
loc_8238CDFC:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238ce10
	if (!cr0.lt) goto loc_8238CE10;
	// sth r31,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, r31.u16);
	// b 0x8238ce34
	goto loc_8238CE34;
loc_8238CE10:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238ce1c
	if (!cr6.gt) goto loc_8238CE1C;
	// li r11,31
	r11.s64 = 31;
loc_8238CE1C:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,142(r1)
	PPC_STORE_U16(ctx.r1.u32 + 142, ctx.r5.u16);
loc_8238CE34:
	// stfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238ce4c
	if (!cr6.eq) goto loc_8238CE4C;
	// sth r31,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r31.u16);
	// b 0x8238ce84
	goto loc_8238CE84;
loc_8238CE4C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238ce60
	if (!cr0.lt) goto loc_8238CE60;
	// sth r31,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r31.u16);
	// b 0x8238ce84
	goto loc_8238CE84;
loc_8238CE60:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238ce6c
	if (!cr6.gt) goto loc_8238CE6C;
	// li r11,31
	r11.s64 = 31;
loc_8238CE6C:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r5.u16);
loc_8238CE84:
	// stfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238ce9c
	if (!cr6.eq) goto loc_8238CE9C;
	// sth r31,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, r31.u16);
	// b 0x8238ced4
	goto loc_8238CED4;
loc_8238CE9C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238ceb0
	if (!cr0.lt) goto loc_8238CEB0;
	// sth r31,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, r31.u16);
	// b 0x8238ced4
	goto loc_8238CED4;
loc_8238CEB0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cebc
	if (!cr6.gt) goto loc_8238CEBC;
	// li r11,31
	r11.s64 = 31;
loc_8238CEBC:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, ctx.r5.u16);
loc_8238CED4:
	// stfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238ceec
	if (!cr6.eq) goto loc_8238CEEC;
	// sth r31,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, r31.u16);
	// b 0x8238cf24
	goto loc_8238CF24;
loc_8238CEEC:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238cf00
	if (!cr0.lt) goto loc_8238CF00;
	// sth r31,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, r31.u16);
	// b 0x8238cf24
	goto loc_8238CF24;
loc_8238CF00:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cf0c
	if (!cr6.gt) goto loc_8238CF0C;
	// li r11,31
	r11.s64 = 31;
loc_8238CF0C:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, ctx.r5.u16);
loc_8238CF24:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238cf3c
	if (!cr6.eq) goto loc_8238CF3C;
	// sth r31,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, r31.u16);
	// b 0x8238cf74
	goto loc_8238CF74;
loc_8238CF3C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238cf50
	if (!cr0.lt) goto loc_8238CF50;
	// sth r31,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, r31.u16);
	// b 0x8238cf74
	goto loc_8238CF74;
loc_8238CF50:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cf5c
	if (!cr6.gt) goto loc_8238CF5C;
	// li r11,31
	r11.s64 = 31;
loc_8238CF5C:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r5.u16);
loc_8238CF74:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238cf8c
	if (!cr6.eq) goto loc_8238CF8C;
	// sth r31,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, r31.u16);
	// b 0x8238cfc4
	goto loc_8238CFC4;
loc_8238CF8C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238cfa0
	if (!cr0.lt) goto loc_8238CFA0;
	// sth r31,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, r31.u16);
	// b 0x8238cfc4
	goto loc_8238CFC4;
loc_8238CFA0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cfac
	if (!cr6.gt) goto loc_8238CFAC;
	// li r11,31
	r11.s64 = 31;
loc_8238CFAC:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 152, ctx.r5.u16);
loc_8238CFC4:
	// stfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238cfdc
	if (!cr6.eq) goto loc_8238CFDC;
	// sth r31,154(r1)
	PPC_STORE_U16(ctx.r1.u32 + 154, r31.u16);
	// b 0x8238d014
	goto loc_8238D014;
loc_8238CFDC:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238cff0
	if (!cr0.lt) goto loc_8238CFF0;
	// sth r31,154(r1)
	PPC_STORE_U16(ctx.r1.u32 + 154, r31.u16);
	// b 0x8238d014
	goto loc_8238D014;
loc_8238CFF0:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238cffc
	if (!cr6.gt) goto loc_8238CFFC;
	// li r11,31
	r11.s64 = 31;
loc_8238CFFC:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,154(r1)
	PPC_STORE_U16(ctx.r1.u32 + 154, ctx.r5.u16);
loc_8238D014:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238d02c
	if (!cr6.eq) goto loc_8238D02C;
	// sth r31,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, r31.u16);
	// b 0x8238d064
	goto loc_8238D064;
loc_8238D02C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8238d040
	if (!cr0.lt) goto loc_8238D040;
	// sth r31,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, r31.u16);
	// b 0x8238d064
	goto loc_8238D064;
loc_8238D040:
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238d04c
	if (!cr6.gt) goto loc_8238D04C;
	// li r11,31
	r11.s64 = 31;
loc_8238D04C:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, ctx.r5.u16);
loc_8238D064:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238d07c
	if (!cr6.eq) goto loc_8238D07C;
loc_8238D074:
	// sth r31,158(r1)
	PPC_STORE_U16(ctx.r1.u32 + 158, r31.u16);
	// b 0x8238d0ac
	goto loc_8238D0AC;
loc_8238D07C:
	// rlwinm r11,r10,9,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFF;
	// addic. r11,r11,-112
	xer.ca = r11.u32 > 111;
	r11.s64 = r11.s64 + -112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8238d074
	if (cr0.lt) goto loc_8238D074;
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8238d094
	if (!cr6.gt) goto loc_8238D094;
	// li r11,31
	r11.s64 = 31;
loc_8238D094:
	// rlwinm r9,r10,19,22,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x3FF;
	// rlwinm r8,r11,10,17,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C00;
	// rlwinm r7,r10,16,16,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x8000;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// sth r5,158(r1)
	PPC_STORE_U16(ctx.r1.u32 + 158, ctx.r5.u16);
loc_8238D0AC:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715730
	sub_82715730(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82715730
	sub_82715730(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stb r31,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r31.u8);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// stb r31,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r31.u8);
	// addi r30,r11,3668
	r30.s64 = r11.s64 + 3668;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r3,r10,29864
	ctx.r3.s64 = ctx.r10.s64 + 29864;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// addi r6,r30,64
	ctx.r6.s64 = r30.s64 + 64;
	// stb r31,102(r1)
	PPC_STORE_U8(ctx.r1.u32 + 102, r31.u8);
	// addi r5,r1,102
	ctx.r5.s64 = ctx.r1.s64 + 102;
	// stb r31,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, r31.u8);
	// addi r3,r7,29976
	ctx.r3.s64 = ctx.r7.s64 + 29976;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// lis r4,-31934
	ctx.r4.s64 = -2092826624;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// stb r31,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, r31.u8);
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// stb r31,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, r31.u8);
	// addi r3,r4,30088
	ctx.r3.s64 = ctx.r4.s64 + 30088;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_8238D1C8"))) PPC_WEAK_FUNC(sub_8238D1C8);
PPC_FUNC_IMPL(__imp__sub_8238D1C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8238D1CC"))) PPC_WEAK_FUNC(sub_8238D1CC);
PPC_FUNC_IMPL(__imp__sub_8238D1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D1D0"))) PPC_WEAK_FUNC(sub_8238D1D0);
PPC_FUNC_IMPL(__imp__sub_8238D1D0) {
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
	// addi r30,r3,116
	r30.s64 = ctx.r3.s64 + 116;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715928
	sub_82715928(ctx, base);
	// addi r29,r31,176
	r29.s64 = r31.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82715928
	sub_82715928(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r3,r11,29864
	ctx.r3.s64 = r11.s64 + 29864;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r3,r10,29976
	ctx.r3.s64 = ctx.r10.s64 + 29976;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r3,r9,30088
	ctx.r3.s64 = ctx.r9.s64 + 30088;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82715ac8
	sub_82715AC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715ac8
	sub_82715AC8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238d264
	if (cr6.eq) goto loc_8238D264;
loc_8238D238:
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
	// bne 0x8238d238
	if (!cr0.eq) goto loc_8238D238;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8238D264:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8238D270"))) PPC_WEAK_FUNC(sub_8238D270);
PPC_FUNC_IMPL(__imp__sub_8238D270) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238D274"))) PPC_WEAK_FUNC(sub_8238D274);
PPC_FUNC_IMPL(__imp__sub_8238D274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D278"))) PPC_WEAK_FUNC(sub_8238D278);
PPC_FUNC_IMPL(__imp__sub_8238D278) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r10,-19640
	ctx.r3.s64 = ctx.r10.s64 + -19640;
	// lwz r30,29820(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 29820);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239a9c8
	sub_8239A9C8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238d2e4
	if (cr6.eq) goto loc_8238D2E4;
loc_8238D2C8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x8238d2c8
	if (!cr0.eq) goto loc_8238D2C8;
loc_8238D2E4:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238d30c
	if (cr6.eq) goto loc_8238D30C;
loc_8238D2F0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x8238d2f0
	if (!cr0.eq) goto loc_8238D2F0;
loc_8238D30C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238d334
	if (cr6.eq) goto loc_8238D334;
loc_8238D318:
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
	// bne 0x8238d318
	if (!cr0.eq) goto loc_8238D318;
loc_8238D334:
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r3,r11,4212
	ctx.r3.s64 = r11.s64 + 4212;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,4196
	ctx.r3.s64 = ctx.r10.s64 + 4196;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,4176
	ctx.r3.s64 = ctx.r9.s64 + 4176;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,4152
	ctx.r3.s64 = ctx.r8.s64 + 4152;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,4136
	ctx.r3.s64 = ctx.r7.s64 + 4136;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,4116
	ctx.r3.s64 = ctx.r6.s64 + 4116;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,4100
	ctx.r3.s64 = ctx.r5.s64 + 4100;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,4080
	ctx.r3.s64 = ctx.r4.s64 + 4080;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,4064
	ctx.r3.s64 = ctx.r3.s64 + 4064;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,4056
	ctx.r3.s64 = r11.s64 + 4056;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,4048
	ctx.r3.s64 = ctx.r10.s64 + 4048;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,4032
	ctx.r3.s64 = ctx.r9.s64 + 4032;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,4016
	ctx.r3.s64 = ctx.r8.s64 + 4016;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,4000
	ctx.r3.s64 = ctx.r7.s64 + 4000;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,3984
	ctx.r3.s64 = ctx.r6.s64 + 3984;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,3968
	ctx.r3.s64 = ctx.r5.s64 + 3968;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,3952
	ctx.r3.s64 = ctx.r4.s64 + 3952;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r3.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r3,r3,3936
	ctx.r3.s64 = ctx.r3.s64 + 3936;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r11,3920
	ctx.r3.s64 = r11.s64 + 3920;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,3900
	ctx.r3.s64 = ctx.r10.s64 + 3900;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,3884
	ctx.r3.s64 = ctx.r9.s64 + 3884;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,3864
	ctx.r3.s64 = ctx.r8.s64 + 3864;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,3840
	ctx.r3.s64 = ctx.r7.s64 + 3840;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,3816
	ctx.r3.s64 = ctx.r6.s64 + 3816;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,3792
	ctx.r3.s64 = ctx.r5.s64 + 3792;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,3772
	ctx.r3.s64 = ctx.r4.s64 + 3772;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// bl 0x82399280
	sub_82399280(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8238D700"))) PPC_WEAK_FUNC(sub_8238D700);
PPC_FUNC_IMPL(__imp__sub_8238D700) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238D704"))) PPC_WEAK_FUNC(sub_8238D704);
PPC_FUNC_IMPL(__imp__sub_8238D704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238D708"))) PPC_WEAK_FUNC(sub_8238D708);
PPC_FUNC_IMPL(__imp__sub_8238D708) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238d748
	if (cr6.eq) goto loc_8238D748;
loc_8238D72C:
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
	// bne 0x8238d72c
	if (!cr0.eq) goto loc_8238D72C;
loc_8238D748:
	// li r30,0
	r30.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
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
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
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

__attribute__((alias("__imp__sub_8238D7C4"))) PPC_WEAK_FUNC(sub_8238D7C4);
PPC_FUNC_IMPL(__imp__sub_8238D7C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238D7C8"))) PPC_WEAK_FUNC(sub_8238D7C8);
PPC_FUNC_IMPL(__imp__sub_8238D7C8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// addi r5,r31,36
	ctx.r5.s64 = r31.s64 + 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x8270eaf0
	sub_8270EAF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238D82C"))) PPC_WEAK_FUNC(sub_8238D82C);
PPC_FUNC_IMPL(__imp__sub_8238D82C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238D830"))) PPC_WEAK_FUNC(sub_8238D830);
PPC_FUNC_IMPL(__imp__sub_8238D830) {
	PPC_FUNC_PROLOGUE();
	// stb r4,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r4.u8);
}

__attribute__((alias("__imp__sub_8238D834"))) PPC_WEAK_FUNC(sub_8238D834);
PPC_FUNC_IMPL(__imp__sub_8238D834) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238D838"))) PPC_WEAK_FUNC(sub_8238D838);
PPC_FUNC_IMPL(__imp__sub_8238D838) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// oris r9,r11,32768
	ctx.r9.u64 = r11.u64 | 2147483648;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r3,-14368(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8238d87c
	if (cr6.eq) goto loc_8238D87C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238d880
	if (!cr6.eq) goto loc_8238D880;
loc_8238D87C:
	// li r11,0
	r11.s64 = 0;
loc_8238D880:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,25664(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25664);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238d8d8
	if (cr6.eq) goto loc_8238D8D8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238d8d8
	if (!cr6.eq) goto loc_8238D8D8;
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
loc_8238D8D8:
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

__attribute__((alias("__imp__sub_8238D8EC"))) PPC_WEAK_FUNC(sub_8238D8EC);
PPC_FUNC_IMPL(__imp__sub_8238D8EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238D8F0"))) PPC_WEAK_FUNC(sub_8238D8F0);
PPC_FUNC_IMPL(__imp__sub_8238D8F0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8238d920
	if (cr6.eq) goto loc_8238D920;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238d924
	if (!cr6.eq) goto loc_8238D924;
loc_8238D920:
	// li r11,0
	r11.s64 = 0;
loc_8238D924:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,25660(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25660);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238d97c
	if (cr6.eq) goto loc_8238D97C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238d97c
	if (!cr6.eq) goto loc_8238D97C;
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
loc_8238D97C:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r10,r11,1
	ctx.r10.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8238D98C"))) PPC_WEAK_FUNC(sub_8238D98C);
PPC_FUNC_IMPL(__imp__sub_8238D98C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238D990"))) PPC_WEAK_FUNC(sub_8238D990);
PPC_FUNC_IMPL(__imp__sub_8238D990) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8238da4c
	if (cr6.eq) goto loc_8238DA4C;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8238d9e4
	if (cr6.eq) goto loc_8238D9E4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238d9e8
	if (!cr6.eq) goto loc_8238D9E8;
loc_8238D9E4:
	// li r11,0
	r11.s64 = 0;
loc_8238D9E8:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,25648(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25648);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238da4c
	if (cr6.eq) goto loc_8238DA4C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238da4c
	if (!cr6.eq) goto loc_8238DA4C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8238DA4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8238DA50"))) PPC_WEAK_FUNC(sub_8238DA50);
PPC_FUNC_IMPL(__imp__sub_8238DA50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238DA54"))) PPC_WEAK_FUNC(sub_8238DA54);
PPC_FUNC_IMPL(__imp__sub_8238DA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DA58"))) PPC_WEAK_FUNC(sub_8238DA58);
PPC_FUNC_IMPL(__imp__sub_8238DA58) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x8238db1c
	if (cr6.eq) goto loc_8238DB1C;
	// rlwimi r11,r10,30,1,1
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x40000000) | (r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238db1c
	if (cr6.eq) goto loc_8238DB1C;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8238dab4
	if (cr6.eq) goto loc_8238DAB4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238dab8
	if (!cr6.eq) goto loc_8238DAB8;
loc_8238DAB4:
	// li r11,0
	r11.s64 = 0;
loc_8238DAB8:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r29,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, r29.u8);
	// lwz r11,25656(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25656);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238db1c
	if (cr6.eq) goto loc_8238DB1C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238db1c
	if (!cr6.eq) goto loc_8238DB1C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8238DB1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8238DB20"))) PPC_WEAK_FUNC(sub_8238DB20);
PPC_FUNC_IMPL(__imp__sub_8238DB20) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238DB24"))) PPC_WEAK_FUNC(sub_8238DB24);
PPC_FUNC_IMPL(__imp__sub_8238DB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DB28"))) PPC_WEAK_FUNC(sub_8238DB28);
PPC_FUNC_IMPL(__imp__sub_8238DB28) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// and r9,r11,r4
	ctx.r9.u64 = r11.u64 & ctx.r4.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// beq cr6,0x8238dc04
	if (cr6.eq) goto loc_8238DC04;
	// xor r11,r11,r4
	r11.u64 = r11.u64 ^ ctx.r4.u64;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8238dc04
	if (cr6.eq) goto loc_8238DC04;
	// rlwinm r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238dc04
	if (cr6.eq) goto loc_8238DC04;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8238dba0
	if (cr6.eq) goto loc_8238DBA0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238dba4
	if (!cr6.eq) goto loc_8238DBA4;
loc_8238DBA0:
	// li r11,0
	r11.s64 = 0;
loc_8238DBA4:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, r28.u8);
	// lwz r11,25656(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25656);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238dc04
	if (cr6.eq) goto loc_8238DC04;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238dc04
	if (!cr6.eq) goto loc_8238DC04;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8238DC04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8238DC08"))) PPC_WEAK_FUNC(sub_8238DC08);
PPC_FUNC_IMPL(__imp__sub_8238DC08) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8238DC0C"))) PPC_WEAK_FUNC(sub_8238DC0C);
PPC_FUNC_IMPL(__imp__sub_8238DC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DC10"))) PPC_WEAK_FUNC(sub_8238DC10);
PPC_FUNC_IMPL(__imp__sub_8238DC10) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x8238dd6c
	if (cr6.eq) goto loc_8238DD6C;
	// andc r31,r4,r11
	r31.u64 = ctx.r4.u64 & ~r11.u64;
	// stb r4,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r4.u8);
	// andc r26,r11,r4
	r26.u64 = r11.u64 & ~ctx.r4.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8238dd6c
	if (cr6.eq) goto loc_8238DD6C;
	// rlwinm r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238dd6c
	if (cr6.eq) goto loc_8238DD6C;
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8238dce4
	if (cr6.eq) goto loc_8238DCE4;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8238dc80
	if (cr6.eq) goto loc_8238DC80;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238dc84
	if (!cr6.eq) goto loc_8238DC84;
loc_8238DC80:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8238DC84:
	// lwz r11,25656(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 25656);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r9,108(r1)
	PPC_STORE_U8(ctx.r1.u32 + 108, ctx.r9.u8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238dce4
	if (cr6.eq) goto loc_8238DCE4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238dce4
	if (!cr6.eq) goto loc_8238DCE4;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8238DCE4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8238dd6c
	if (cr6.eq) goto loc_8238DD6C;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8238dd08
	if (cr6.eq) goto loc_8238DD08;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238dd0c
	if (!cr6.eq) goto loc_8238DD0C;
loc_8238DD08:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8238DD0C:
	// lwz r11,25656(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 25656);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,12(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r26.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r9,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r9.u8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238dd6c
	if (cr6.eq) goto loc_8238DD6C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238dd6c
	if (!cr6.eq) goto loc_8238DD6C;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8238DD6C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8238DD70"))) PPC_WEAK_FUNC(sub_8238DD70);
PPC_FUNC_IMPL(__imp__sub_8238DD70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8238DD74"))) PPC_WEAK_FUNC(sub_8238DD74);
PPC_FUNC_IMPL(__imp__sub_8238DD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DD78"))) PPC_WEAK_FUNC(sub_8238DD78);
PPC_FUNC_IMPL(__imp__sub_8238DD78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,8,28,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xF;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x8238de2c
	if (cr6.eq) goto loc_8238DE2C;
	// rlwimi r11,r4,24,4,7
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xF000000) | (r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238de2c
	if (cr6.eq) goto loc_8238DE2C;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8238ddcc
	if (cr6.eq) goto loc_8238DDCC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238ddd0
	if (!cr6.eq) goto loc_8238DDD0;
loc_8238DDCC:
	// li r11,0
	r11.s64 = 0;
loc_8238DDD0:
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,25652(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25652);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8238de2c
	if (cr6.eq) goto loc_8238DE2C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238de2c
	if (!cr6.eq) goto loc_8238DE2C;
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
loc_8238DE2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8238DE30"))) PPC_WEAK_FUNC(sub_8238DE30);
PPC_FUNC_IMPL(__imp__sub_8238DE30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8238DE34"))) PPC_WEAK_FUNC(sub_8238DE34);
PPC_FUNC_IMPL(__imp__sub_8238DE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DE38"))) PPC_WEAK_FUNC(sub_8238DE38);
PPC_FUNC_IMPL(__imp__sub_8238DE38) {
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
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8238dec4
	if (cr6.eq) goto loc_8238DEC4;
loc_8238DE68:
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x8238deac
	if (cr6.eq) goto loc_8238DEAC;
	// clrlwi r7,r30,24
	ctx.r7.u64 = r30.u32 & 0xFF;
loc_8238DE88:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stb r7,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r7.u8);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bne cr6,0x8238de88
	if (!cr6.eq) goto loc_8238DE88;
loc_8238DEAC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238e218
	sub_8238E218(ctx, base);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8238de68
	if (!cr6.eq) goto loc_8238DE68;
loc_8238DEC4:
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

__attribute__((alias("__imp__sub_8238DED8"))) PPC_WEAK_FUNC(sub_8238DED8);
PPC_FUNC_IMPL(__imp__sub_8238DED8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238DEDC"))) PPC_WEAK_FUNC(sub_8238DEDC);
PPC_FUNC_IMPL(__imp__sub_8238DEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238DEE0"))) PPC_WEAK_FUNC(sub_8238DEE0);
PPC_FUNC_IMPL(__imp__sub_8238DEE0) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bl 0x8238f328
	sub_8238F328(ctx, base);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8238DF24"))) PPC_WEAK_FUNC(sub_8238DF24);
PPC_FUNC_IMPL(__imp__sub_8238DF24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238DF28"))) PPC_WEAK_FUNC(sub_8238DF28);
PPC_FUNC_IMPL(__imp__sub_8238DF28) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,4256
	ctx.r10.s64 = r11.s64 + 4256;
	// addi r4,r3,76
	ctx.r4.s64 = ctx.r3.s64 + 76;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x8238f290
	sub_8238F290(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238DF74"))) PPC_WEAK_FUNC(sub_8238DF74);
PPC_FUNC_IMPL(__imp__sub_8238DF74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238DF78"))) PPC_WEAK_FUNC(sub_8238DF78);
PPC_FUNC_IMPL(__imp__sub_8238DF78) {
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
	// li r9,79
	ctx.r9.s64 = 79;
	// stb r5,6(r3)
	PPC_STORE_U8(ctx.r3.u32 + 6, ctx.r5.u8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stb r4,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r4.u8);
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r8,4256
	ctx.r6.s64 = ctx.r8.s64 + 4256;
	// ori r5,r7,255
	ctx.r5.u64 = ctx.r7.u64 | 255;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// bl 0x8233dce0
	sub_8233DCE0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f8,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// bl 0x8233dce0
	sub_8233DCE0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r11,r31,40
	r11.s64 = r31.s64 + 40;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f6,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f3,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f2,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f1,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,60(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f13,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lwz r11,30232(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30232);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bl 0x8238e3b0
	sub_8238E3B0(ctx, base);
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

__attribute__((alias("__imp__sub_8238E078"))) PPC_WEAK_FUNC(sub_8238E078);
PPC_FUNC_IMPL(__imp__sub_8238E078) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E07C"))) PPC_WEAK_FUNC(sub_8238E07C);
PPC_FUNC_IMPL(__imp__sub_8238E07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E080"))) PPC_WEAK_FUNC(sub_8238E080);
PPC_FUNC_IMPL(__imp__sub_8238E080) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8238e0a0
	if (!cr6.eq) goto loc_8238E0A0;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_8238E0A0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x8238e0c8
	if (!cr6.eq) goto loc_8238E0C8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_8238E0C8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x8238e0e8
	if (!cr6.eq) goto loc_8238E0E8;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_8238E0E8:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_8238E0F4"))) PPC_WEAK_FUNC(sub_8238E0F4);
PPC_FUNC_IMPL(__imp__sub_8238E0F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E0F8"))) PPC_WEAK_FUNC(sub_8238E0F8);
PPC_FUNC_IMPL(__imp__sub_8238E0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8238e118
	if (!cr6.eq) goto loc_8238E118;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_8238E118:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x8238e140
	if (!cr6.eq) goto loc_8238E140;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_8238E140:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// bne cr6,0x8238e160
	if (!cr6.eq) goto loc_8238E160;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
loc_8238E160:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
}

__attribute__((alias("__imp__sub_8238E16C"))) PPC_WEAK_FUNC(sub_8238E16C);
PPC_FUNC_IMPL(__imp__sub_8238E16C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E170"))) PPC_WEAK_FUNC(sub_8238E170);
PPC_FUNC_IMPL(__imp__sub_8238E170) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238e18c
	if (cr6.eq) goto loc_8238E18C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
loc_8238E18C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8238e1c8
	if (!cr6.eq) goto loc_8238E1C8;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8238e1c0
	if (!cr6.eq) goto loc_8238E1C0;
loc_8238E1AC:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8238e1ac
	if (cr6.eq) goto loc_8238E1AC;
loc_8238E1C0:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8238E1C8:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238e200
	if (!cr6.eq) goto loc_8238E200;
loc_8238E1D8:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8238e200
	if (!cr6.eq) goto loc_8238E200;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238e1d8
	if (cr6.eq) goto loc_8238E1D8;
loc_8238E200:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_8238E214"))) PPC_WEAK_FUNC(sub_8238E214);
PPC_FUNC_IMPL(__imp__sub_8238E214) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E218"))) PPC_WEAK_FUNC(sub_8238E218);
PPC_FUNC_IMPL(__imp__sub_8238E218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r9,45(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8238e264
	if (!cr6.eq) goto loc_8238E264;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8238e25c
	if (!cr6.eq) goto loc_8238E25C;
loc_8238E248:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8238e248
	if (cr6.eq) goto loc_8238E248;
loc_8238E25C:
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_8238E264:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8238e29c
	if (!cr6.eq) goto loc_8238E29C;
loc_8238E274:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8238e29c
	if (!cr6.eq) goto loc_8238E29C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238e274
	if (cr6.eq) goto loc_8238E274;
loc_8238E29C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_8238E2A0"))) PPC_WEAK_FUNC(sub_8238E2A0);
PPC_FUNC_IMPL(__imp__sub_8238E2A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E2A4"))) PPC_WEAK_FUNC(sub_8238E2A4);
PPC_FUNC_IMPL(__imp__sub_8238E2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E2A8"))) PPC_WEAK_FUNC(sub_8238E2A8);
PPC_FUNC_IMPL(__imp__sub_8238E2A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// li r11,16
	r11.s64 = 16;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// addi r6,r9,4776
	ctx.r6.s64 = ctx.r9.s64 + 4776;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// stb r31,44(r3)
	PPC_STORE_U8(ctx.r3.u32 + 44, r31.u8);
	// stb r31,45(r3)
	PPC_STORE_U8(ctx.r3.u32 + 45, r31.u8);
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

__attribute__((alias("__imp__sub_8238E33C"))) PPC_WEAK_FUNC(sub_8238E33C);
PPC_FUNC_IMPL(__imp__sub_8238E33C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E340"))) PPC_WEAK_FUNC(sub_8238E340);
PPC_FUNC_IMPL(__imp__sub_8238E340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8238E358:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8238e380
	if (cr6.gt) goto loc_8238E380;
	// blt cr6,0x8238e378
	if (cr6.lt) goto loc_8238E378;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8238e380
	if (cr6.lt) goto loc_8238E380;
loc_8238E378:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8238e384
	goto loc_8238E384;
loc_8238E380:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8238E384:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238e398
	if (cr6.eq) goto loc_8238E398;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8238e3a0
	goto loc_8238E3A0;
loc_8238E398:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8238E3A0:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 45);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8238e358
	if (cr6.eq) goto loc_8238E358;
}

__attribute__((alias("__imp__sub_8238E3AC"))) PPC_WEAK_FUNC(sub_8238E3AC);
PPC_FUNC_IMPL(__imp__sub_8238E3AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E3B0"))) PPC_WEAK_FUNC(sub_8238E3B0);
PPC_FUNC_IMPL(__imp__sub_8238E3B0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r6,r7,4776
	ctx.r6.s64 = ctx.r7.s64 + 4776;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// li r7,57
	ctx.r7.s64 = 57;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r5,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r5.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,44(r4)
	PPC_STORE_U8(ctx.r4.u32 + 44, r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stb r11,45(r10)
	PPC_STORE_U8(ctx.r10.u32 + 45, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238E450"))) PPC_WEAK_FUNC(sub_8238E450);
PPC_FUNC_IMPL(__imp__sub_8238E450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E454"))) PPC_WEAK_FUNC(sub_8238E454);
PPC_FUNC_IMPL(__imp__sub_8238E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E458"))) PPC_WEAK_FUNC(sub_8238E458);
PPC_FUNC_IMPL(__imp__sub_8238E458) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,4232
	ctx.r9.s64 = r11.s64 + 4232;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8238e49c
	if (!cr6.gt) goto loc_8238E49C;
loc_8238E484:
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
	// bgt cr6,0x8238e484
	if (cr6.gt) goto loc_8238E484;
loc_8238E49C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8238e4b4
	if (cr6.eq) goto loc_8238E4B4;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8238E4B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8238E4C4"))) PPC_WEAK_FUNC(sub_8238E4C4);
PPC_FUNC_IMPL(__imp__sub_8238E4C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E4C8"))) PPC_WEAK_FUNC(sub_8238E4C8);
PPC_FUNC_IMPL(__imp__sub_8238E4C8) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,4244
	ctx.r9.s64 = ctx.r10.s64 + 4244;
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

__attribute__((alias("__imp__sub_8238E520"))) PPC_WEAK_FUNC(sub_8238E520);
PPC_FUNC_IMPL(__imp__sub_8238E520) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238E524"))) PPC_WEAK_FUNC(sub_8238E524);
PPC_FUNC_IMPL(__imp__sub_8238E524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238E528"))) PPC_WEAK_FUNC(sub_8238E528);
PPC_FUNC_IMPL(__imp__sub_8238E528) {
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
	// beq cr6,0x8238e60c
	if (cr6.eq) goto loc_8238E60C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238e59c
	if (!cr6.eq) goto loc_8238E59C;
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
	// beq cr6,0x8238e60c
	if (cr6.eq) goto loc_8238E60C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x826fa838
	sub_826FA838(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// b 0x8238e60c
	goto loc_8238E60C;
loc_8238E59C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238e4c8
	sub_8238E4C8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8238e5c8
	if (!cr6.gt) goto loc_8238E5C8;
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
loc_8238E5C8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824b28c8
	sub_824B28C8(ctx, base);
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
	// bl 0x8238e630
	sub_8238E630(ctx, base);
loc_8238E60C:
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

