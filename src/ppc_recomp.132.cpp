#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825182E8"))) PPC_WEAK_FUNC(sub_825182E8);
PPC_FUNC_IMPL(__imp__sub_825182E8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251831c
	if (cr6.eq) goto loc_8251831C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518320
	if (!cr6.eq) goto loc_82518320;
loc_8251831C:
	// li r11,0
	r11.s64 = 0;
loc_82518320:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82539088
	sub_82539088(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,84(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// stb r10,257(r31)
	PPC_STORE_U8(r31.u32 + 257, ctx.r10.u8);
	// stb r8,258(r31)
	PPC_STORE_U8(r31.u32 + 258, ctx.r8.u8);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82518358"))) PPC_WEAK_FUNC(sub_82518358);
PPC_FUNC_IMPL(__imp__sub_82518358) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251835C"))) PPC_WEAK_FUNC(sub_8251835C);
PPC_FUNC_IMPL(__imp__sub_8251835C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82518360"))) PPC_WEAK_FUNC(sub_82518360);
PPC_FUNC_IMPL(__imp__sub_82518360) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82518394
	if (cr6.eq) goto loc_82518394;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518398
	if (!cr6.eq) goto loc_82518398;
loc_82518394:
	// li r11,0
	r11.s64 = 0;
loc_82518398:
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82539088
	sub_82539088(ctx, base);
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-26112
	ctx.r9.s64 = r11.s64 + -26112;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,116(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// stb r10,257(r31)
	PPC_STORE_U8(r31.u32 + 257, ctx.r10.u8);
	// stb r8,258(r31)
	PPC_STORE_U8(r31.u32 + 258, ctx.r8.u8);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825183D0"))) PPC_WEAK_FUNC(sub_825183D0);
PPC_FUNC_IMPL(__imp__sub_825183D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825183D4"))) PPC_WEAK_FUNC(sub_825183D4);
PPC_FUNC_IMPL(__imp__sub_825183D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825183D8"))) PPC_WEAK_FUNC(sub_825183D8);
PPC_FUNC_IMPL(__imp__sub_825183D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f4
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82518414
	if (cr6.eq) goto loc_82518414;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// bne cr6,0x82518418
	if (!cr6.eq) goto loc_82518418;
loc_82518414:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82518418:
	// lwz r21,80(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82518434
	if (cr6.eq) goto loc_82518434;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518438
	if (!cr6.eq) goto loc_82518438;
loc_82518434:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82518438:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,19288
	ctx.r5.s64 = ctx.r9.s64 + 19288;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lwz r3,21888(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82518478
	if (cr6.eq) goto loc_82518478;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_82518478:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// beq cr6,0x82518730
	if (cr6.eq) goto loc_82518730;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82518730
	if (!cr6.eq) goto loc_82518730;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r31.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r20,r31
	r20.u64 = r31.u64;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825186fc
	if (!cr6.eq) goto loc_825186FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r24,3
	r24.s64 = 3;
	// li r25,4
	r25.s64 = 4;
	// addi r28,r11,20016
	r28.s64 = r11.s64 + 20016;
	// addi r27,r10,20256
	r27.s64 = ctx.r10.s64 + 20256;
	// addi r23,r9,14076
	r23.s64 = ctx.r9.s64 + 14076;
	// addi r22,r8,13852
	r22.s64 = ctx.r8.s64 + 13852;
loc_8251850C:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825185bc
	if (cr6.eq) goto loc_825185BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_825185BC:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, r11.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lfd f0,192(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8250c5f8
	sub_8250C5F8(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r25,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r25.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82518668
	if (cr6.eq) goto loc_82518668;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
loc_82518668:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82756a40
	sub_82756A40(ctx, base);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825186a4
	if (cr6.eq) goto loc_825186A4;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
loc_825186A4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825186c8
	if (cr6.eq) goto loc_825186C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_825186C8:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825186ec
	if (cr6.eq) goto loc_825186EC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_825186EC:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8251850c
	if (cr6.eq) goto loc_8251850C;
loc_825186FC:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82518730:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251875c
	if (cr6.eq) goto loc_8251875C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_8251875C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x8251876c
	if (cr6.eq) goto loc_8251876C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8251876C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
}

__attribute__((alias("__imp__sub_82518778"))) PPC_WEAK_FUNC(sub_82518778);
PPC_FUNC_IMPL(__imp__sub_82518778) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8251877C"))) PPC_WEAK_FUNC(sub_8251877C);
PPC_FUNC_IMPL(__imp__sub_8251877C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82518780"))) PPC_WEAK_FUNC(sub_82518780);
PPC_FUNC_IMPL(__imp__sub_82518780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825187bc
	if (cr6.eq) goto loc_825187BC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825187c0
	if (!cr6.eq) goto loc_825187C0;
loc_825187BC:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_825187C0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,19328
	ctx.r5.s64 = ctx.r9.s64 + 19328;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// lwz r3,21888(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82518804
	if (cr6.eq) goto loc_82518804;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_82518804:
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// beq cr6,0x82518bb4
	if (cr6.eq) goto loc_82518BB4;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x82518bb4
	if (!cr6.eq) goto loc_82518BB4;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r31.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r15,r31
	r15.u64 = r31.u64;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82518b80
	if (!cr6.eq) goto loc_82518B80;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r17,3
	r17.s64 = 3;
	// li r27,4
	r27.s64 = 4;
	// li r16,2
	r16.s64 = 2;
	// lis r19,-31933
	r19.s64 = -2092761088;
	// addi r18,r11,20292
	r18.s64 = r11.s64 + 20292;
	// addi r20,r10,20344
	r20.s64 = ctx.r10.s64 + 20344;
	// addi r26,r9,20244
	r26.s64 = ctx.r9.s64 + 20244;
	// addi r25,r8,21396
	r25.s64 = ctx.r8.s64 + 21396;
	// addi r24,r7,20192
	r24.s64 = ctx.r7.s64 + 20192;
	// addi r23,r6,20176
	r23.s64 = ctx.r6.s64 + 20176;
	// addi r22,r5,20108
	r22.s64 = ctx.r5.s64 + 20108;
loc_825188B8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r31.u32);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82518990
	if (cr6.eq) goto loc_82518990;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
loc_82518990:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// std r11,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, r11.u64);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lfd f0,224(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r29.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r8,r9,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x82518a30
	if (cr6.eq) goto loc_82518A30;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
loc_82518A30:
	// lbz r11,-23644(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + -23644);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// stw r16,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r16.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, r11.u8);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r9,r10,-8
	ctx.r9.s64 = ctx.r10.s64 + -8;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r7,164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r6,r7,26,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82518a90
	if (cr6.eq) goto loc_82518A90;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r31.u32);
loc_82518A90:
	// stw r28,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r28.u32);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stw r27,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r27.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// lwz r8,180(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82518aec
	if (cr6.eq) goto loc_82518AEC;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
loc_82518AEC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82756a40
	sub_82756A40(ctx, base);
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82518b28
	if (cr6.eq) goto loc_82518B28;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r31.u32);
loc_82518B28:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82518b4c
	if (cr6.eq) goto loc_82518B4C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
loc_82518B4C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82518b70
	if (cr6.eq) goto loc_82518B70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_82518B70:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825188b8
	if (cr6.eq) goto loc_825188B8;
loc_82518B80:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e3498
	sub_822E3498(ctx, base);
loc_82518BB4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82518be0
	if (cr6.eq) goto loc_82518BE0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
loc_82518BE0:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x82518bf0
	if (cr6.eq) goto loc_82518BF0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_82518BF0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
}

__attribute__((alias("__imp__sub_82518BFC"))) PPC_WEAK_FUNC(sub_82518BFC);
PPC_FUNC_IMPL(__imp__sub_82518BFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82518C00"))) PPC_WEAK_FUNC(sub_82518C00);
PPC_FUNC_IMPL(__imp__sub_82518C00) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// beq cr6,0x82518c38
	if (cr6.eq) goto loc_82518C38;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518c3c
	if (!cr6.eq) goto loc_82518C3C;
loc_82518C38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82518C3C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,19428
	ctx.r5.s64 = ctx.r10.s64 + 19428;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82518cc0
	if (!cr6.eq) goto loc_82518CC0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,13852
	r31.s64 = r11.s64 + 13852;
loc_82518C84:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x828937f8
	sub_828937F8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82518c84
	if (cr6.eq) goto loc_82518C84;
loc_82518CC0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
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

__attribute__((alias("__imp__sub_82518CF8"))) PPC_WEAK_FUNC(sub_82518CF8);
PPC_FUNC_IMPL(__imp__sub_82518CF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82518CFC"))) PPC_WEAK_FUNC(sub_82518CFC);
PPC_FUNC_IMPL(__imp__sub_82518CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82518D00"))) PPC_WEAK_FUNC(sub_82518D00);
PPC_FUNC_IMPL(__imp__sub_82518D00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// beq cr6,0x82518d3c
	if (cr6.eq) goto loc_82518D3C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518d40
	if (!cr6.eq) goto loc_82518D40;
loc_82518D3C:
	// li r11,0
	r11.s64 = 0;
loc_82518D40:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,19456
	ctx.r5.s64 = ctx.r9.s64 + 19456;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82518ea4
	if (!cr6.eq) goto loc_82518EA4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,13856
	ctx.r5.s64 = r11.s64 + 13856;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,21820
	ctx.r5.s64 = ctx.r10.s64 + 21820;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82518dfc
	if (cr6.eq) goto loc_82518DFC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// bne cr6,0x82518e00
	if (!cr6.eq) goto loc_82518E00;
loc_82518DFC:
	// li r11,0
	r11.s64 = 0;
loc_82518E00:
	// lwz r31,104(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82518e1c
	if (cr6.eq) goto loc_82518E1C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518e20
	if (!cr6.eq) goto loc_82518E20;
loc_82518E1C:
	// li r11,0
	r11.s64 = 0;
loc_82518E20:
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// bl 0x82568bd0
	sub_82568BD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82549af0
	sub_82549AF0(ctx, base);
	// lbz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 148);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82518e58
	if (!cr6.eq) goto loc_82518E58;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82518e5c
	if (!cr6.eq) goto loc_82518E5C;
loc_82518E58:
	// li r31,1
	r31.s64 = 1;
loc_82518E5C:
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r10,20256
	ctx.r4.s64 = ctx.r10.s64 + 20256;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r9,20016
	ctx.r4.s64 = ctx.r9.s64 + 20016;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// clrlwi r5,r31,24
	ctx.r5.u64 = r31.u32 & 0xFF;
	// addi r4,r8,20344
	ctx.r4.s64 = ctx.r8.s64 + 20344;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82880f10
	sub_82880F10(ctx, base);
loc_82518EA4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,256(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_82518ED8"))) PPC_WEAK_FUNC(sub_82518ED8);
PPC_FUNC_IMPL(__imp__sub_82518ED8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82518EDC"))) PPC_WEAK_FUNC(sub_82518EDC);
PPC_FUNC_IMPL(__imp__sub_82518EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82518EE0"))) PPC_WEAK_FUNC(sub_82518EE0);
PPC_FUNC_IMPL(__imp__sub_82518EE0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82518f14
	if (cr6.eq) goto loc_82518F14;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518f18
	if (!cr6.eq) goto loc_82518F18;
loc_82518F14:
	// li r11,0
	r11.s64 = 0;
loc_82518F18:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// addi r5,r9,15272
	ctx.r5.s64 = ctx.r9.s64 + 15272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82518f80
	if (!cr6.eq) goto loc_82518F80;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,15256
	ctx.r5.s64 = r11.s64 + 15256;
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
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82518F80:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82518FA4"))) PPC_WEAK_FUNC(sub_82518FA4);
PPC_FUNC_IMPL(__imp__sub_82518FA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82518FA8"))) PPC_WEAK_FUNC(sub_82518FA8);
PPC_FUNC_IMPL(__imp__sub_82518FA8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82518fdc
	if (cr6.eq) goto loc_82518FDC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82518fe0
	if (!cr6.eq) goto loc_82518FE0;
loc_82518FDC:
	// li r11,0
	r11.s64 = 0;
loc_82518FE0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,19528
	ctx.r5.s64 = ctx.r9.s64 + 19528;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82519048
	if (!cr6.eq) goto loc_82519048;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,19512
	ctx.r5.s64 = r11.s64 + 19512;
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
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82519048:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251906C"))) PPC_WEAK_FUNC(sub_8251906C);
PPC_FUNC_IMPL(__imp__sub_8251906C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82519070"))) PPC_WEAK_FUNC(sub_82519070);
PPC_FUNC_IMPL(__imp__sub_82519070) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825190a4
	if (cr6.eq) goto loc_825190A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825190a8
	if (!cr6.eq) goto loc_825190A8;
loc_825190A4:
	// li r11,0
	r11.s64 = 0;
loc_825190A8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// addi r5,r9,19600
	ctx.r5.s64 = ctx.r9.s64 + 19600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82519110
	if (!cr6.eq) goto loc_82519110;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,19580
	ctx.r5.s64 = r11.s64 + 19580;
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
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82519110:
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82519134"))) PPC_WEAK_FUNC(sub_82519134);
PPC_FUNC_IMPL(__imp__sub_82519134) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82519138"))) PPC_WEAK_FUNC(sub_82519138);
PPC_FUNC_IMPL(__imp__sub_82519138) {
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
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bgt cr6,0x82519258
	if (cr6.gt) goto loc_82519258;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82519198
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82519198;
	// bdzf 4*cr6+eq,0x825191c8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825191C8;
	// bdzf 4*cr6+eq,0x825191f8
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_825191F8;
	// bne cr6,0x82519228
	if (!cr6.eq) goto loc_82519228;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,19700
	ctx.r9.s64 = ctx.r10.s64 + 19700;
	// li r10,80
	ctx.r10.s64 = 80;
loc_82519178:
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
	// bne cr6,0x82519178
	if (!cr6.eq) goto loc_82519178;
	// b 0x82519254
	goto loc_82519254;
loc_82519198:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,19692
	ctx.r9.s64 = ctx.r10.s64 + 19692;
	// li r10,80
	ctx.r10.s64 = 80;
loc_825191A8:
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
	// bne cr6,0x825191a8
	if (!cr6.eq) goto loc_825191A8;
	// b 0x82519254
	goto loc_82519254;
loc_825191C8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,19680
	ctx.r9.s64 = ctx.r10.s64 + 19680;
	// li r10,80
	ctx.r10.s64 = 80;
loc_825191D8:
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
	// bne cr6,0x825191d8
	if (!cr6.eq) goto loc_825191D8;
	// b 0x82519254
	goto loc_82519254;
loc_825191F8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,19668
	ctx.r9.s64 = ctx.r10.s64 + 19668;
	// li r10,80
	ctx.r10.s64 = 80;
loc_82519208:
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
	// bne cr6,0x82519208
	if (!cr6.eq) goto loc_82519208;
	// b 0x82519254
	goto loc_82519254;
loc_82519228:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,19656
	ctx.r9.s64 = ctx.r10.s64 + 19656;
	// li r10,80
	ctx.r10.s64 = 80;
loc_82519238:
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
	// bne cr6,0x82519238
	if (!cr6.eq) goto loc_82519238;
loc_82519254:
	// stw r11,284(r29)
	PPC_STORE_U32(r29.u32 + 284, r11.u32);
loc_82519258:
	// lis r11,-31965
	r11.s64 = -2094858240;
	// li r31,-1
	r31.s64 = -1;
	// addi r30,r11,-26112
	r30.s64 = r11.s64 + -26112;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
loc_8251926C:
	// addi r9,r30,260
	ctx.r9.s64 = r30.s64 + 260;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bge cr6,0x8251929c
	if (!cr6.lt) goto loc_8251929C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,272(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 272);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x8251928c
	if (!cr6.eq) goto loc_8251928C;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
loc_8251928C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8251926c
	if (cr6.lt) goto loc_8251926C;
loc_8251929C:
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r4,288(r29)
	PPC_STORE_U32(r29.u32 + 288, ctx.r4.u32);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825192c0
	if (cr6.eq) goto loc_825192C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825192c4
	if (!cr6.eq) goto loc_825192C4;
loc_825192C0:
	// li r11,0
	r11.s64 = 0;
loc_825192C4:
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,288(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 288);
	// addi r9,r30,8
	ctx.r9.s64 = r30.s64 + 8;
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82521240
	sub_82521240(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825192E0"))) PPC_WEAK_FUNC(sub_825192E0);
PPC_FUNC_IMPL(__imp__sub_825192E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825192E4"))) PPC_WEAK_FUNC(sub_825192E4);
PPC_FUNC_IMPL(__imp__sub_825192E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825192E8"))) PPC_WEAK_FUNC(sub_825192E8);
PPC_FUNC_IMPL(__imp__sub_825192E8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// beq cr6,0x82519320
	if (cr6.eq) goto loc_82519320;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519324
	if (!cr6.eq) goto loc_82519324;
loc_82519320:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82519324:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,19712
	ctx.r5.s64 = ctx.r10.s64 + 19712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825193bc
	if (!cr6.eq) goto loc_825193BC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,13852
	r31.s64 = r11.s64 + 13852;
loc_8251936C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8251936c
	if (cr6.eq) goto loc_8251936C;
loc_825193BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
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

__attribute__((alias("__imp__sub_825193F4"))) PPC_WEAK_FUNC(sub_825193F4);
PPC_FUNC_IMPL(__imp__sub_825193F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825193F8"))) PPC_WEAK_FUNC(sub_825193F8);
PPC_FUNC_IMPL(__imp__sub_825193F8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82519430
	if (cr6.eq) goto loc_82519430;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519434
	if (!cr6.eq) goto loc_82519434;
loc_82519430:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82519434:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,19840
	ctx.r5.s64 = ctx.r10.s64 + 19840;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82519590
	if (cr6.eq) goto loc_82519590;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14076
	ctx.r5.s64 = r11.s64 + 14076;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,20016
	ctx.r4.s64 = ctx.r10.s64 + 20016;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,20004
	ctx.r5.s64 = ctx.r9.s64 + 20004;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r8,19824
	ctx.r4.s64 = ctx.r8.s64 + 19824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,19804
	ctx.r5.s64 = ctx.r7.s64 + 19804;
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
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r5,19796
	ctx.r4.s64 = ctx.r5.s64 + 19796;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r3,19780
	ctx.r5.s64 = ctx.r3.s64 + 19780;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,19764
	ctx.r4.s64 = r11.s64 + 19764;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,19744
	ctx.r4.s64 = ctx.r10.s64 + 19744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82880f10
	sub_82880F10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_82519590:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
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

__attribute__((alias("__imp__sub_825195AC"))) PPC_WEAK_FUNC(sub_825195AC);
PPC_FUNC_IMPL(__imp__sub_825195AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825195B0"))) PPC_WEAK_FUNC(sub_825195B0);
PPC_FUNC_IMPL(__imp__sub_825195B0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825195e8
	if (cr6.eq) goto loc_825195E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825195ec
	if (!cr6.eq) goto loc_825195EC;
loc_825195E8:
	// li r11,0
	r11.s64 = 0;
loc_825195EC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r6,260(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,19936
	ctx.r5.s64 = ctx.r9.s64 + 19936;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82519658
	if (!cr6.eq) goto loc_82519658;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,15156
	ctx.r5.s64 = r11.s64 + 15156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// b 0x825196b0
	goto loc_825196B0;
loc_82519658:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r11,19712
	ctx.r5.s64 = r11.s64 + 19712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,13852
	ctx.r5.s64 = ctx.r10.s64 + 13852;
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
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
loc_825196B0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_825196D8"))) PPC_WEAK_FUNC(sub_825196D8);
PPC_FUNC_IMPL(__imp__sub_825196D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825196DC"))) PPC_WEAK_FUNC(sub_825196DC);
PPC_FUNC_IMPL(__imp__sub_825196DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825196E0"))) PPC_WEAK_FUNC(sub_825196E0);
PPC_FUNC_IMPL(__imp__sub_825196E0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// beq cr6,0x82519720
	if (cr6.eq) goto loc_82519720;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519724
	if (!cr6.eq) goto loc_82519724;
loc_82519720:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82519724:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,20000
	ctx.r5.s64 = ctx.r10.s64 + 20000;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825197c0
	if (!cr6.eq) goto loc_825197C0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r11,19992
	r31.s64 = r11.s64 + 19992;
loc_82519770:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82519770
	if (cr6.eq) goto loc_82519770;
loc_825197C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_825197FC"))) PPC_WEAK_FUNC(sub_825197FC);
PPC_FUNC_IMPL(__imp__sub_825197FC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82519800"))) PPC_WEAK_FUNC(sub_82519800);
PPC_FUNC_IMPL(__imp__sub_82519800) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// beq cr6,0x82519840
	if (cr6.eq) goto loc_82519840;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519844
	if (!cr6.eq) goto loc_82519844;
loc_82519840:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82519844:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,23128
	ctx.r5.s64 = ctx.r10.s64 + 23128;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825198e0
	if (!cr6.eq) goto loc_825198E0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,14064
	r31.s64 = r11.s64 + 14064;
loc_82519890:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82519890
	if (cr6.eq) goto loc_82519890;
loc_825198E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_8251991C"))) PPC_WEAK_FUNC(sub_8251991C);
PPC_FUNC_IMPL(__imp__sub_8251991C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82519920"))) PPC_WEAK_FUNC(sub_82519920);
PPC_FUNC_IMPL(__imp__sub_82519920) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82519954
	if (cr6.eq) goto loc_82519954;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519958
	if (!cr6.eq) goto loc_82519958;
loc_82519954:
	// li r11,0
	r11.s64 = 0;
loc_82519958:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,20096
	ctx.r5.s64 = ctx.r9.s64 + 20096;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251999c
	if (cr6.eq) goto loc_8251999C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825199a0
	if (!cr6.eq) goto loc_825199A0;
loc_8251999C:
	// li r11,0
	r11.s64 = 0;
loc_825199A0:
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82519a18
	if (!cr6.eq) goto loc_82519A18;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,20232
	r31.s64 = r11.s64 + 20232;
loc_825199C0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82551f18
	sub_82551F18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82519a14
	if (!cr6.eq) goto loc_82519A14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825199c0
	if (cr6.eq) goto loc_825199C0;
	// b 0x82519a18
	goto loc_82519A18;
loc_82519A14:
	// li r29,1
	r29.s64 = 1;
loc_82519A18:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82519A30"))) PPC_WEAK_FUNC(sub_82519A30);
PPC_FUNC_IMPL(__imp__sub_82519A30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82519A34"))) PPC_WEAK_FUNC(sub_82519A34);
PPC_FUNC_IMPL(__imp__sub_82519A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82519A38"))) PPC_WEAK_FUNC(sub_82519A38);
PPC_FUNC_IMPL(__imp__sub_82519A38) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31965
	r11.s64 = -2094858240;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-26112
	r11.s64 = r11.s64 + -26112;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r24,0
	r24.s64 = 0;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// addi r25,r11,20232
	r25.s64 = r11.s64 + 20232;
	// addi r27,r10,20096
	r27.s64 = ctx.r10.s64 + 20096;
	// addi r26,r9,14000
	r26.s64 = ctx.r9.s64 + 14000;
loc_82519A70:
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// li r29,0
	r29.s64 = 0;
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82519a94
	if (cr6.eq) goto loc_82519A94;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519a98
	if (!cr6.eq) goto loc_82519A98;
loc_82519A94:
	// li r11,0
	r11.s64 = 0;
loc_82519A98:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82519ad4
	if (cr6.eq) goto loc_82519AD4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519ad8
	if (!cr6.eq) goto loc_82519AD8;
loc_82519AD4:
	// li r11,0
	r11.s64 = 0;
loc_82519AD8:
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82519b48
	if (!cr6.eq) goto loc_82519B48;
loc_82519AF0:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82551f18
	sub_82551F18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82519b44
	if (!cr6.eq) goto loc_82519B44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82519af0
	if (cr6.eq) goto loc_82519AF0;
	// b 0x82519b48
	goto loc_82519B48;
loc_82519B44:
	// li r29,1
	r29.s64 = 1;
loc_82519B48:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82519b74
	if (!cr6.eq) goto loc_82519B74;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplwi cr6,r24,256
	cr6.compare<uint32_t>(r24.u32, 256, xer);
	// blt cr6,0x82519a70
	if (cr6.lt) goto loc_82519A70;
loc_82519B74:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_82519B7C"))) PPC_WEAK_FUNC(sub_82519B7C);
PPC_FUNC_IMPL(__imp__sub_82519B7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_82519B80"))) PPC_WEAK_FUNC(sub_82519B80);
PPC_FUNC_IMPL(__imp__sub_82519B80) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82519BA0"))) PPC_WEAK_FUNC(sub_82519BA0);
PPC_FUNC_IMPL(__imp__sub_82519BA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82519BA4"))) PPC_WEAK_FUNC(sub_82519BA4);
PPC_FUNC_IMPL(__imp__sub_82519BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82519BA8"))) PPC_WEAK_FUNC(sub_82519BA8);
PPC_FUNC_IMPL(__imp__sub_82519BA8) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// beq cr6,0x82519be4
	if (cr6.eq) goto loc_82519BE4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519be8
	if (!cr6.eq) goto loc_82519BE8;
loc_82519BE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82519BE8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,20288
	ctx.r5.s64 = ctx.r10.s64 + 20288;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82519c84
	if (!cr6.eq) goto loc_82519C84;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r31,r11,19992
	r31.s64 = r11.s64 + 19992;
loc_82519C34:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82881ad0
	sub_82881AD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82519c34
	if (cr6.eq) goto loc_82519C34;
loc_82519C84:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
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

__attribute__((alias("__imp__sub_82519CBC"))) PPC_WEAK_FUNC(sub_82519CBC);
PPC_FUNC_IMPL(__imp__sub_82519CBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82519CC0"))) PPC_WEAK_FUNC(sub_82519CC0);
PPC_FUNC_IMPL(__imp__sub_82519CC0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82519cfc
	if (cr6.eq) goto loc_82519CFC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519d00
	if (!cr6.eq) goto loc_82519D00;
loc_82519CFC:
	// li r11,0
	r11.s64 = 0;
loc_82519D00:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,20484
	ctx.r5.s64 = ctx.r9.s64 + 20484;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82519d68
	if (!cr6.eq) goto loc_82519D68;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,20472
	ctx.r5.s64 = r11.s64 + 20472;
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
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82519D68:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,20452
	ctx.r9.s64 = ctx.r10.s64 + 20452;
	// li r10,84
	ctx.r10.s64 = 84;
loc_82519D80:
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
	// bne cr6,0x82519d80
	if (!cr6.eq) goto loc_82519D80;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82519da8
	if (!cr6.eq) goto loc_82519DA8;
	// li r30,1
	r30.s64 = 1;
loc_82519DA8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_82519DC8"))) PPC_WEAK_FUNC(sub_82519DC8);
PPC_FUNC_IMPL(__imp__sub_82519DC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82519DCC"))) PPC_WEAK_FUNC(sub_82519DCC);
PPC_FUNC_IMPL(__imp__sub_82519DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82519DD0"))) PPC_WEAK_FUNC(sub_82519DD0);
PPC_FUNC_IMPL(__imp__sub_82519DD0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// beq cr6,0x82519e0c
	if (cr6.eq) goto loc_82519E0C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519e10
	if (!cr6.eq) goto loc_82519E10;
loc_82519E0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82519E10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,20536
	ctx.r5.s64 = ctx.r10.s64 + 20536;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x82519e9c
	if (!cr6.eq) goto loc_82519E9C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,15176
	r31.s64 = r11.s64 + 15176;
loc_82519E5C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881b30
	sub_82881B30(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82519e5c
	if (cr6.eq) goto loc_82519E5C;
loc_82519E9C:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254da90
	sub_8254DA90(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
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

__attribute__((alias("__imp__sub_82519ED4"))) PPC_WEAK_FUNC(sub_82519ED4);
PPC_FUNC_IMPL(__imp__sub_82519ED4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82519ED8"))) PPC_WEAK_FUNC(sub_82519ED8);
PPC_FUNC_IMPL(__imp__sub_82519ED8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82519f0c
	if (cr6.eq) goto loc_82519F0C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82519f10
	if (!cr6.eq) goto loc_82519F10;
loc_82519F0C:
	// li r11,0
	r11.s64 = 0;
loc_82519F10:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r9,15184
	ctx.r5.s64 = ctx.r9.s64 + 15184;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// stw r29,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r29.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,15176
	ctx.r5.s64 = ctx.r8.s64 + 15176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,15156
	ctx.r5.s64 = ctx.r7.s64 + 15156;
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
	// stw r3,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,272(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// bne cr6,0x82519ff0
	if (!cr6.eq) goto loc_82519FF0;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-31432
	ctx.r5.s64 = r11.s64 + -31432;
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
	// stw r3,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_82519FF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,260(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r5,r11,15344
	ctx.r5.s64 = r11.s64 + 15344;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc08
	sub_8272DC08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,15324
	ctx.r5.s64 = ctx.r10.s64 + 15324;
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
	// stw r3,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8251A070"))) PPC_WEAK_FUNC(sub_8251A070);
PPC_FUNC_IMPL(__imp__sub_8251A070) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8251A074"))) PPC_WEAK_FUNC(sub_8251A074);
PPC_FUNC_IMPL(__imp__sub_8251A074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251A078"))) PPC_WEAK_FUNC(sub_8251A078);
PPC_FUNC_IMPL(__imp__sub_8251A078) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// beq cr6,0x8251a0b0
	if (cr6.eq) goto loc_8251A0B0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251a0b4
	if (!cr6.eq) goto loc_8251A0B4;
loc_8251A0B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251A0B4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,20580
	ctx.r5.s64 = ctx.r10.s64 + 20580;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251a12c
	if (!cr6.eq) goto loc_8251A12C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14064
	ctx.r5.s64 = r11.s64 + 14064;
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
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251A12C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251A160"))) PPC_WEAK_FUNC(sub_8251A160);
PPC_FUNC_IMPL(__imp__sub_8251A160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A164"))) PPC_WEAK_FUNC(sub_8251A164);
PPC_FUNC_IMPL(__imp__sub_8251A164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251A168"))) PPC_WEAK_FUNC(sub_8251A168);
PPC_FUNC_IMPL(__imp__sub_8251A168) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// beq cr6,0x8251a1a0
	if (cr6.eq) goto loc_8251A1A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251a1a4
	if (!cr6.eq) goto loc_8251A1A4;
loc_8251A1A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251A1A4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r10,20620
	ctx.r5.s64 = ctx.r10.s64 + 20620;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881c18
	sub_82881C18(ctx, base);
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251a21c
	if (!cr6.eq) goto loc_8251A21C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14064
	ctx.r5.s64 = r11.s64 + 14064;
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
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251A21C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881cc8
	sub_82881CC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251A250"))) PPC_WEAK_FUNC(sub_8251A250);
PPC_FUNC_IMPL(__imp__sub_8251A250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A254"))) PPC_WEAK_FUNC(sub_8251A254);
PPC_FUNC_IMPL(__imp__sub_8251A254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251A258"))) PPC_WEAK_FUNC(sub_8251A258);
PPC_FUNC_IMPL(__imp__sub_8251A258) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251a29c
	if (cr6.eq) goto loc_8251A29C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251a2a0
	if (!cr6.eq) goto loc_8251A2A0;
loc_8251A29C:
	// li r11,0
	r11.s64 = 0;
loc_8251A2A0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,20680
	ctx.r5.s64 = ctx.r9.s64 + 20680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r30,r11,20656
	r30.s64 = r11.s64 + 20656;
	// addi r29,r10,20004
	r29.s64 = ctx.r10.s64 + 20004;
	// bne cr6,0x8251a330
	if (!cr6.eq) goto loc_8251A330;
loc_8251A2E8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8251a2e8
	if (cr6.eq) goto loc_8251A2E8;
loc_8251A330:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db68
	sub_8272DB68(ctx, base);
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// ble cr6,0x8251a364
	if (!cr6.gt) goto loc_8251A364;
	// bl 0x826cc0d0
	sub_826CC0D0(ctx, base);
	// divw r11,r3,r31
	r11.s32 = ctx.r3.s32 / r31.s32;
	// mullw r10,r11,r31
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// subf. r31,r10,r3
	r31.s64 = ctx.r3.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// ble 0x8251a364
	if (!cr0.gt) goto loc_8251A364;
loc_8251A354:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8251a354
	if (!cr0.eq) goto loc_8251A354;
loc_8251A364:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251a3a8
	if (!cr6.eq) goto loc_8251A3A8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251A3A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8251A3DC"))) PPC_WEAK_FUNC(sub_8251A3DC);
PPC_FUNC_IMPL(__imp__sub_8251A3DC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8251A3E0"))) PPC_WEAK_FUNC(sub_8251A3E0);
PPC_FUNC_IMPL(__imp__sub_8251A3E0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251a414
	if (cr6.eq) goto loc_8251A414;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251a418
	if (!cr6.eq) goto loc_8251A418;
loc_8251A414:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251A418:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,268(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// addi r5,r10,20748
	ctx.r5.s64 = ctx.r10.s64 + 20748;
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
	// bne cr6,0x8251a490
	if (!cr6.eq) goto loc_8251A490;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r11,22888
	r31.s64 = r11.s64 + 22888;
loc_8251A458:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// stw r3,604(r30)
	PPC_STORE_U32(r30.u32 + 604, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8251a458
	if (cr6.eq) goto loc_8251A458;
loc_8251A490:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
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

__attribute__((alias("__imp__sub_8251A4B4"))) PPC_WEAK_FUNC(sub_8251A4B4);
PPC_FUNC_IMPL(__imp__sub_8251A4B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A4B8"))) PPC_WEAK_FUNC(sub_8251A4B8);
PPC_FUNC_IMPL(__imp__sub_8251A4B8) {
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
	// li r11,1
	r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,257(r3)
	PPC_STORE_U8(ctx.r3.u32 + 257, r11.u8);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r10,258(r3)
	PPC_STORE_U8(ctx.r3.u32 + 258, ctx.r10.u8);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8251a4fc
	if (cr6.eq) goto loc_8251A4FC;
	// stw r11,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r11.u32);
loc_8251A4FC:
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8251a518
	if (cr6.eq) goto loc_8251A518;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82519ed8
	sub_82519ED8(ctx, base);
loc_8251A518:
	// bl 0x822b00b0
	sub_822B00B0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8251a558
	if (!cr6.eq) goto loc_8251A558;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-28460
	ctx.r9.s64 = ctx.r10.s64 + -28460;
	// li r10,68
	ctx.r10.s64 = 68;
loc_8251A53C:
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
	// bne cr6,0x8251a53c
	if (!cr6.eq) goto loc_8251A53C;
loc_8251A558:
	// stw r11,276(r30)
	PPC_STORE_U32(r30.u32 + 276, r11.u32);
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

__attribute__((alias("__imp__sub_8251A570"))) PPC_WEAK_FUNC(sub_8251A570);
PPC_FUNC_IMPL(__imp__sub_8251A570) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A574"))) PPC_WEAK_FUNC(sub_8251A574);
PPC_FUNC_IMPL(__imp__sub_8251A574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251A578"))) PPC_WEAK_FUNC(sub_8251A578);
PPC_FUNC_IMPL(__imp__sub_8251A578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,258(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 258);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// beq cr6,0x8251a74c
	if (cr6.eq) goto loc_8251A74C;
	// lwz r11,612(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8251a74c
	if (cr6.gt) goto loc_8251A74C;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251a5cc
	if (cr6.eq) goto loc_8251A5CC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251a5d0
	if (!cr6.eq) goto loc_8251A5D0;
loc_8251A5CC:
	// li r11,0
	r11.s64 = 0;
loc_8251A5D0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lwz r11,-14756(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x8251a604
	if (cr6.eq) goto loc_8251A604;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251a608
	if (!cr6.eq) goto loc_8251A608;
loc_8251A604:
	// li r11,0
	r11.s64 = 0;
loc_8251A608:
	// lwz r21,108(r11)
	r21.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// li r27,0
	r27.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// lwz r19,280(r21)
	r19.u64 = PPC_LOAD_U32(r21.u32 + 280);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// ble cr6,0x8251a74c
	if (!cr6.gt) goto loc_8251A74C;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r22,-31933
	r22.s64 = -2092761088;
	// addi r29,r11,-23640
	r29.s64 = r11.s64 + -23640;
	// addi r24,r10,20832
	r24.s64 = ctx.r10.s64 + 20832;
	// addi r23,r9,20812
	r23.s64 = ctx.r9.s64 + 20812;
loc_8251A63C:
	// lwz r11,-23624(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + -23624);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82538b68
	sub_82538B68(ctx, base);
	// lwz r11,3052(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3052);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r26,112(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ble cr6,0x8251a740
	if (!cr6.gt) goto loc_8251A740;
	// li r30,0
	r30.s64 = 0;
loc_8251A68C:
	// lwz r11,3044(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3044);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r10,r26
	cr6.compare<uint32_t>(ctx.r10.u32, r26.u32, xer);
	// bne cr6,0x8251a72c
	if (!cr6.eq) goto loc_8251A72C;
	// cmpwi cr6,r27,3
	cr6.compare<int32_t>(r27.s32, 3, xer);
	// bgt cr6,0x8251a72c
	if (cr6.gt) goto loc_8251A72C;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r7,276(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,280(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251a71c
	if (!cr6.eq) goto loc_8251A71C;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// lwz r11,3044(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3044);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251A71C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
loc_8251A72C:
	// lwz r11,3052(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 3052);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8251a68c
	if (cr6.lt) goto loc_8251A68C;
loc_8251A740:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmpw cr6,r25,r19
	cr6.compare<int32_t>(r25.s32, r19.s32, xer);
	// blt cr6,0x8251a63c
	if (cr6.lt) goto loc_8251A63C;
loc_8251A74C:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_8251A758"))) PPC_WEAK_FUNC(sub_8251A758);
PPC_FUNC_IMPL(__imp__sub_8251A758) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9444
	return;
}

__attribute__((alias("__imp__sub_8251A75C"))) PPC_WEAK_FUNC(sub_8251A75C);
PPC_FUNC_IMPL(__imp__sub_8251A75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251A760"))) PPC_WEAK_FUNC(sub_8251A760);
PPC_FUNC_IMPL(__imp__sub_8251A760) {
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
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// bl 0x822df9c0
	sub_822DF9C0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,2080(r31)
	PPC_STORE_U8(r31.u32 + 2080, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251A794"))) PPC_WEAK_FUNC(sub_8251A794);
PPC_FUNC_IMPL(__imp__sub_8251A794) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A798"))) PPC_WEAK_FUNC(sub_8251A798);
PPC_FUNC_IMPL(__imp__sub_8251A798) {
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
	// bl 0x82519138
	sub_82519138(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251a7c4
	if (cr6.eq) goto loc_8251A7C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251a7c8
	if (!cr6.eq) goto loc_8251A7C8;
loc_8251A7C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251A7C8:
	// lwz r3,152(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// bl 0x82521438
	sub_82521438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8251A7DC"))) PPC_WEAK_FUNC(sub_8251A7DC);
PPC_FUNC_IMPL(__imp__sub_8251A7DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A7E0"))) PPC_WEAK_FUNC(sub_8251A7E0);
PPC_FUNC_IMPL(__imp__sub_8251A7E0) {
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
	// lbz r11,258(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 258);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251a820
	if (!cr6.eq) goto loc_8251A820;
	// addi r3,r3,256
	ctx.r3.s64 = ctx.r3.s64 + 256;
	// bl 0x822df9c0
	sub_822DF9C0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,2080(r31)
	PPC_STORE_U8(r31.u32 + 2080, r11.u8);
	// bl 0x82518080
	sub_82518080(ctx, base);
loc_8251A820:
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
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

__attribute__((alias("__imp__sub_8251A838"))) PPC_WEAK_FUNC(sub_8251A838);
PPC_FUNC_IMPL(__imp__sub_8251A838) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A83C"))) PPC_WEAK_FUNC(sub_8251A83C);
PPC_FUNC_IMPL(__imp__sub_8251A83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251A840"))) PPC_WEAK_FUNC(sub_8251A840);
PPC_FUNC_IMPL(__imp__sub_8251A840) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,272(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
}

__attribute__((alias("__imp__sub_8251A844"))) PPC_WEAK_FUNC(sub_8251A844);
PPC_FUNC_IMPL(__imp__sub_8251A844) {
	PPC_FUNC_PROLOGUE();
	// b 0x82518fa8
	sub_82518FA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251A848"))) PPC_WEAK_FUNC(sub_8251A848);
PPC_FUNC_IMPL(__imp__sub_8251A848) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825193f8
	sub_825193F8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
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

__attribute__((alias("__imp__sub_8251A8C0"))) PPC_WEAK_FUNC(sub_8251A8C0);
PPC_FUNC_IMPL(__imp__sub_8251A8C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251A8C4"))) PPC_WEAK_FUNC(sub_8251A8C4);
PPC_FUNC_IMPL(__imp__sub_8251A8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251A8C8"))) PPC_WEAK_FUNC(sub_8251A8C8);
PPC_FUNC_IMPL(__imp__sub_8251A8C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r4,r10,22980
	ctx.r4.s64 = ctx.r10.s64 + 22980;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// blt cr6,0x8251a918
	if (cr6.lt) goto loc_8251A918;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251A918:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,20016
	ctx.r4.s64 = ctx.r10.s64 + 20016;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8251a940
	if (cr6.lt) goto loc_8251A940;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251A940:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,22968
	ctx.r4.s64 = ctx.r10.s64 + 22968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r9,80(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// addi r11,r30,60
	r11.s64 = r30.s64 + 60;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8251a968
	if (cr6.lt) goto loc_8251A968;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251A968:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,20968
	ctx.r4.s64 = ctx.r10.s64 + 20968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// addi r4,r9,20428
	ctx.r4.s64 = ctx.r9.s64 + 20428;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// addi r11,r30,92
	r11.s64 = r30.s64 + 92;
	// cmplwi cr6,r6,16
	cr6.compare<uint32_t>(ctx.r6.u32, 16, xer);
	// blt cr6,0x8251a9b4
	if (cr6.lt) goto loc_8251A9B4;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251A9B4:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,19824
	ctx.r4.s64 = ctx.r10.s64 + 19824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r8,120(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// addi r4,r9,19796
	ctx.r4.s64 = ctx.r9.s64 + 19796;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lbz r11,252(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 252);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r6,20952
	ctx.r4.s64 = ctx.r6.s64 + 20952;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r8,124(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,20940
	ctx.r4.s64 = ctx.r9.s64 + 20940;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r7,148(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// addi r11,r30,128
	r11.s64 = r30.s64 + 128;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// blt cr6,0x8251aa40
	if (cr6.lt) goto loc_8251AA40;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251AA40:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,20932
	ctx.r4.s64 = ctx.r10.s64 + 20932;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// addi r11,r30,156
	r11.s64 = r30.s64 + 156;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8251aa68
	if (cr6.lt) goto loc_8251AA68;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251AA68:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,20916
	ctx.r4.s64 = ctx.r10.s64 + 20916;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r8,184(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// addi r4,r9,22992
	ctx.r4.s64 = ctx.r9.s64 + 22992;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r5,188(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 188);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// addi r4,r6,20908
	ctx.r4.s64 = ctx.r6.s64 + 20908;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// addi r11,r30,192
	r11.s64 = r30.s64 + 192;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8251aad8
	if (cr6.lt) goto loc_8251AAD8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251AAD8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,20244
	ctx.r4.s64 = ctx.r10.s64 + 20244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r9,240(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// addi r11,r30,220
	r11.s64 = r30.s64 + 220;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8251ab00
	if (cr6.lt) goto loc_8251AB00;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251AB00:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,20292
	ctx.r4.s64 = ctx.r10.s64 + 20292;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r7,248(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r9,23776
	ctx.r4.s64 = ctx.r9.s64 + 23776;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(f0.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsw r11,r5
	r11.s64 = ctx.r5.s32;
	// addi r4,r6,24096
	ctx.r4.s64 = ctx.r6.s64 + 24096;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// bl 0x82880fa8
	sub_82880FA8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lbz r5,21(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 21);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,19744
	ctx.r4.s64 = ctx.r10.s64 + 19744;
	// bl 0x82880f10
	sub_82880F10(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// addi r4,r9,20260
	ctx.r4.s64 = ctx.r9.s64 + 20260;
	// bl 0x82880f10
	sub_82880F10(ctx, base);
	// lbz r8,20(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 20);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8251ab9c
	if (!cr6.eq) goto loc_8251AB9C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8251aba0
	if (!cr6.eq) goto loc_8251ABA0;
loc_8251AB9C:
	// li r11,1
	r11.s64 = 1;
loc_8251ABA0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r5,r11,24
	ctx.r5.u64 = r11.u32 & 0xFF;
	// addi r4,r10,20344
	ctx.r4.s64 = ctx.r10.s64 + 20344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82880f10
	sub_82880F10(ctx, base);
	// clrlwi r9,r28,24
	ctx.r9.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8251abc8
	if (cr6.eq) goto loc_8251ABC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
loc_8251ABC8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251ABCC"))) PPC_WEAK_FUNC(sub_8251ABCC);
PPC_FUNC_IMPL(__imp__sub_8251ABCC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251ABD0"))) PPC_WEAK_FUNC(sub_8251ABD0);
PPC_FUNC_IMPL(__imp__sub_8251ABD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251a168
	sub_8251A168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251ABD0"))) PPC_WEAK_FUNC(sub_8251ABD0);
PPC_FUNC_IMPL(__imp__sub_8251ABD0) {
	PPC_FUNC_PROLOGUE();
}

__attribute__((alias("__imp__sub_8251ABD4"))) PPC_WEAK_FUNC(sub_8251ABD4);
PPC_FUNC_IMPL(__imp__sub_8251ABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251ABD8"))) PPC_WEAK_FUNC(sub_8251ABD8);
PPC_FUNC_IMPL(__imp__sub_8251ABD8) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251ac24
	if (cr6.eq) goto loc_8251AC24;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,19256
	ctx.r9.s64 = ctx.r10.s64 + 19256;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8251AC24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251AC34"))) PPC_WEAK_FUNC(sub_8251AC34);
PPC_FUNC_IMPL(__imp__sub_8251AC34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251AC38"))) PPC_WEAK_FUNC(sub_8251AC38);
PPC_FUNC_IMPL(__imp__sub_8251AC38) {
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
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r28,260(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,18436(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18436);
	// lwz r30,100(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251ac8c
	if (cr6.eq) goto loc_8251AC8C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r9,r10,19268
	ctx.r9.s64 = ctx.r10.s64 + 19268;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8251AC8C:
	// lwz r11,18436(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18436);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r30,272(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r31,100(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251accc
	if (cr6.eq) goto loc_8251ACCC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,19280
	ctx.r9.s64 = ctx.r10.s64 + 19280;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8251ACCC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251ACD0"))) PPC_WEAK_FUNC(sub_8251ACD0);
PPC_FUNC_IMPL(__imp__sub_8251ACD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251ACD4"))) PPC_WEAK_FUNC(sub_8251ACD4);
PPC_FUNC_IMPL(__imp__sub_8251ACD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251ACD8"))) PPC_WEAK_FUNC(sub_8251ACD8);
PPC_FUNC_IMPL(__imp__sub_8251ACD8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,258(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 258);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251add4
	if (cr6.eq) goto loc_8251ADD4;
	// lwz r11,612(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8251add4
	if (cr6.gt) goto loc_8251ADD4;
	// li r29,0
	r29.s64 = 0;
	// lwz r4,3828(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3828);
	// li r25,-1
	r25.s64 = -1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r3,r3,1912
	ctx.r3.s64 = ctx.r3.s64 + 1912;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// bl 0x822bdc38
	sub_822BDC38(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251ad44
	if (cr6.eq) goto loc_8251AD44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251ad48
	if (!cr6.eq) goto loc_8251AD48;
loc_8251AD44:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8251AD48:
	// lwz r10,3828(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 3828);
	// mr r30,r29
	r30.u64 = r29.u64;
	// lwz r28,108(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x8251add4
	if (!cr6.gt) goto loc_8251ADD4;
	// mr r27,r29
	r27.u64 = r29.u64;
	// lis r24,-31934
	r24.s64 = -2092826624;
loc_8251AD64:
	// lwz r11,1916(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 1916);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// stwx r25,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, r25.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// bl 0x82538a68
	sub_82538A68(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82538db8
	sub_82538DB8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8251adc0
	if (cr6.lt) goto loc_8251ADC0;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bge cr6,0x8251adc0
	if (!cr6.lt) goto loc_8251ADC0;
	// addi r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 + 52;
	// lwz r11,18436(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 18436);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r3,68(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 68);
	// bl 0x8253d1e8
	sub_8253D1E8(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_8251ADC0:
	// lwz r11,3828(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 3828);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r27,r27,12
	r27.s64 = r27.s64 + 12;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x8251ad64
	if (cr6.lt) goto loc_8251AD64;
loc_8251ADD4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8251ADD8"))) PPC_WEAK_FUNC(sub_8251ADD8);
PPC_FUNC_IMPL(__imp__sub_8251ADD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8251ADDC"))) PPC_WEAK_FUNC(sub_8251ADDC);
PPC_FUNC_IMPL(__imp__sub_8251ADDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251ADE0"))) PPC_WEAK_FUNC(sub_8251ADE0);
PPC_FUNC_IMPL(__imp__sub_8251ADE0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r11,-23608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -23608);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8251ae20
	if (cr6.eq) goto loc_8251AE20;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251ae24
	if (!cr6.eq) goto loc_8251AE24;
loc_8251AE20:
	// li r11,0
	r11.s64 = 0;
loc_8251AE24:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251ae70
	if (cr6.eq) goto loc_8251AE70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251ae70
	if (!cr6.eq) goto loc_8251AE70;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8251AE70:
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

__attribute__((alias("__imp__sub_8251AE84"))) PPC_WEAK_FUNC(sub_8251AE84);
PPC_FUNC_IMPL(__imp__sub_8251AE84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251AE88"))) PPC_WEAK_FUNC(sub_8251AE88);
PPC_FUNC_IMPL(__imp__sub_8251AE88) {
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
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251aebc
	if (cr6.eq) goto loc_8251AEBC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251aec0
	if (!cr6.eq) goto loc_8251AEC0;
loc_8251AEBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251AEC0:
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r3,640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 640);
	// bl 0x8256a1b0
	sub_8256A1B0(ctx, base);
	// lbz r10,57(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251af08
	if (!cr6.eq) goto loc_8251AF08;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251aef4
	if (cr6.eq) goto loc_8251AEF4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251aef8
	if (!cr6.eq) goto loc_8251AEF8;
loc_8251AEF4:
	// li r11,0
	r11.s64 = 0;
loc_8251AEF8:
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// addi r4,r30,256
	ctx.r4.s64 = r30.s64 + 256;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x82572b50
	sub_82572B50(ctx, base);
loc_8251AF08:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,26352(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 26352);
	// lwz r10,20992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x8251e360
	sub_8251E360(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251af40
	if (cr6.eq) goto loc_8251AF40;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251af44
	if (!cr6.eq) goto loc_8251AF44;
loc_8251AF40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251AF44:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250f708
	sub_8250F708(ctx, base);
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

__attribute__((alias("__imp__sub_8251AF60"))) PPC_WEAK_FUNC(sub_8251AF60);
PPC_FUNC_IMPL(__imp__sub_8251AF60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251AF64"))) PPC_WEAK_FUNC(sub_8251AF64);
PPC_FUNC_IMPL(__imp__sub_8251AF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251AF68"))) PPC_WEAK_FUNC(sub_8251AF68);
PPC_FUNC_IMPL(__imp__sub_8251AF68) {
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
	// lis r28,-31970
	r28.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251af98
	if (cr6.eq) goto loc_8251AF98;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251af9c
	if (!cr6.eq) goto loc_8251AF9C;
loc_8251AF98:
	// li r11,0
	r11.s64 = 0;
loc_8251AF9C:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x825217e0
	sub_825217E0(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r30,272(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// lwz r29,260(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// beq cr6,0x8251afc8
	if (cr6.eq) goto loc_8251AFC8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251afcc
	if (!cr6.eq) goto loc_8251AFCC;
loc_8251AFC8:
	// li r11,0
	r11.s64 = 0;
loc_8251AFCC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,2084(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 2084);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825565f0
	sub_825565F0(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251affc
	if (cr6.eq) goto loc_8251AFFC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251b000
	if (!cr6.eq) goto loc_8251B000;
loc_8251AFFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251B000:
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r3,640(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 640);
	// bl 0x8256a1b0
	sub_8256A1B0(ctx, base);
	// lbz r10,57(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8251b060
	if (!cr6.eq) goto loc_8251B060;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251b034
	if (cr6.eq) goto loc_8251B034;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251b038
	if (!cr6.eq) goto loc_8251B038;
loc_8251B034:
	// li r11,0
	r11.s64 = 0;
loc_8251B038:
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82574448
	sub_82574448(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,-23612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -23612);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,18436(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18436);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// bl 0x8251e3d8
	sub_8251E3D8(ctx, base);
loc_8251B060:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251B064"))) PPC_WEAK_FUNC(sub_8251B064);
PPC_FUNC_IMPL(__imp__sub_8251B064) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251B068"))) PPC_WEAK_FUNC(sub_8251B068);
PPC_FUNC_IMPL(__imp__sub_8251B068) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93f8
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r21,-31970
	r21.s64 = -2095185920;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r10.u32);
	// beq cr6,0x8251b0a4
	if (cr6.eq) goto loc_8251B0A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251b0a8
	if (!cr6.eq) goto loc_8251B0A8;
loc_8251B0A4:
	// li r11,0
	r11.s64 = 0;
loc_8251B0A8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r7,276(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 276);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,280(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 280);
	// addi r5,r9,21264
	ctx.r5.s64 = ctx.r9.s64 + 21264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// lwz r8,2216(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 2216);
	// addi r31,r20,2204
	r31.s64 = r20.s64 + 2204;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// ble cr6,0x8251b100
	if (!cr6.gt) goto loc_8251B100;
loc_8251B0E8:
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
	// bgt cr6,0x8251b0e8
	if (cr6.gt) goto loc_8251B0E8;
loc_8251B100:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db70
	sub_8272DB70(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251b310
	if (cr6.eq) goto loc_8251B310;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251b308
	if (!cr6.eq) goto loc_8251B308;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r23,-1
	r23.s64 = -1;
	// addi r30,r11,15156
	r30.s64 = r11.s64 + 15156;
	// addi r29,r10,15176
	r29.s64 = ctx.r10.s64 + 15176;
	// addi r28,r9,15184
	r28.s64 = ctx.r9.s64 + 15184;
	// addi r27,r8,-31432
	r27.s64 = ctx.r8.s64 + -31432;
	// addi r26,r7,14064
	r26.s64 = ctx.r7.s64 + 14064;
	// addi r25,r6,21184
	r25.s64 = ctx.r6.s64 + 21184;
	// addi r24,r5,15324
	r24.s64 = ctx.r5.s64 + 15324;
loc_8251B160:
	// lwz r11,608(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 608);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x8251b2f8
	if (!cr6.lt) goto loc_8251B2F8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r6,204(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r3.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
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
	// stw r3,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8251b2b4
	if (!cr6.gt) goto loc_8251B2B4;
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
loc_8251B2B4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r10,r11,272
	ctx.r10.s64 = r11.s64 * 272;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add. r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// beq 0x8251b2dc
	if (cr0.eq) goto loc_8251B2DC;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,272
	ctx.r5.s64 = 272;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8251B2DC:
	// lwz r11,608(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 608);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,608(r20)
	PPC_STORE_U32(r20.u32 + 608, r11.u32);
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
loc_8251B2F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8251b160
	if (cr6.eq) goto loc_8251B160;
loc_8251B308:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_8251B310:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r6,272(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 272);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r5,r11,19528
	ctx.r5.s64 = r11.s64 + 19528;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc08
	sub_8272DC08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,3828(r20)
	PPC_STORE_U32(r20.u32 + 3828, ctx.r10.u32);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251b380
	if (!cr6.eq) goto loc_8251B380;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,19512
	ctx.r5.s64 = r11.s64 + 19512;
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
	// stw r3,3828(r20)
	PPC_STORE_U32(r20.u32 + 3828, ctx.r3.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251B380:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lwz r3,-14756(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251b3a4
	if (cr6.eq) goto loc_8251B3A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251b3a8
	if (!cr6.eq) goto loc_8251B3A8;
loc_8251B3A4:
	// li r11,0
	r11.s64 = 0;
loc_8251B3A8:
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// addi r30,r20,3040
	r30.s64 = r20.s64 + 3040;
	// lwz r10,3828(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 3828);
	// lwz r9,280(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,3832(r20)
	PPC_STORE_U32(r20.u32 + 3832, ctx.r8.u32);
	// lwz r7,3052(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 3052);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// ble cr6,0x8251b3e4
	if (!cr6.gt) goto loc_8251B3E4;
loc_8251B3CC:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bgt cr6,0x8251b3cc
	if (cr6.gt) goto loc_8251B3CC;
loc_8251B3E4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r7,276(r20)
	ctx.r7.u64 = PPC_LOAD_U32(r20.u32 + 276);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r6,280(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 280);
	// addi r5,r11,21096
	ctx.r5.s64 = r11.s64 + 21096;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc08
	sub_8272DC08(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// lis r23,-31933
	r23.s64 = -2092761088;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251b594
	if (!cr6.eq) goto loc_8251B594;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r24,r11,21088
	r24.s64 = r11.s64 + 21088;
	// addi r27,r10,21048
	r27.s64 = ctx.r10.s64 + 21048;
	// addi r26,r9,21036
	r26.s64 = ctx.r9.s64 + 21036;
	// addi r25,r8,21028
	r25.s64 = ctx.r8.s64 + 21028;
loc_8251B448:
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r31,-23620(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + -23620);
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251b51c
	if (!cr6.eq) goto loc_8251B51C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r10,5381
	ctx.r10.s64 = 5381;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8251b510
	if (cr6.eq) goto loc_8251B510;
loc_8251B4F4:
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8251b4f4
	if (!cr6.eq) goto loc_8251B4F4;
loc_8251B510:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251B51C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8251b554
	if (!cr6.gt) goto loc_8251B554;
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
loc_8251B554:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8251b584
	if (cr0.eq) goto loc_8251B584;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
loc_8251B584:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8251b448
	if (cr6.eq) goto loc_8251B448;
loc_8251B594:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lwz r11,3832(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 3832);
	// lwz r10,3052(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 3052);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x8251b6d8
	if (!cr6.lt) goto loc_8251B6D8;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r3,3044(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 3044);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8251b5d8
	if (cr6.eq) goto loc_8251B5D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8251dd88
	sub_8251DD88(ctx, base);
loc_8251B5D8:
	// lwz r11,3052(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 3052);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,3832(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 3832);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8251b6d8
	if (!cr6.gt) goto loc_8251B6D8;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// li r6,12
	ctx.r6.s64 = 12;
loc_8251B5F4:
	// lwz r10,3052(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 3052);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8251b6bc
	if (!cr6.gt) goto loc_8251B6BC;
	// clrlwi r9,r4,24
	ctx.r9.u64 = ctx.r4.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8251B60C:
	// lwz r8,3044(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 3044);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// beq cr6,0x8251b628
	if (cr6.eq) goto loc_8251B628;
	// lwz r7,-23616(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + -23616);
	// b 0x8251b62c
	goto loc_8251B62C;
loc_8251B628:
	// lwz r7,-23620(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + -23620);
loc_8251B62C:
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// beq cr6,0x8251b64c
	if (cr6.eq) goto loc_8251B64C;
	// lwz r8,3052(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 3052);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x8251b60c
	if (cr6.lt) goto loc_8251B60C;
	// b 0x8251b6bc
	goto loc_8251B6BC;
loc_8251B64C:
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// divw r11,r11,r6
	r11.s32 = r11.s32 / ctx.r6.s32;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x8251b6b0
	if (!cr6.lt) goto loc_8251B6B0;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r8,r11,r8
	ctx.r8.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,-12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
loc_8251B6B0:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
loc_8251B6BC:
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// lwz r10,3052(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 3052);
	// lwz r9,3832(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 3832);
	// cntlzw r8,r11
	ctx.r8.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// rlwinm r4,r8,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bgt cr6,0x8251b5f4
	if (cr6.gt) goto loc_8251B5F4;
loc_8251B6D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,464(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 464);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
}

__attribute__((alias("__imp__sub_8251B6EC"))) PPC_WEAK_FUNC(sub_8251B6EC);
PPC_FUNC_IMPL(__imp__sub_8251B6EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9448
	return;
}

__attribute__((alias("__imp__sub_8251B6F0"))) PPC_WEAK_FUNC(sub_8251B6F0);
PPC_FUNC_IMPL(__imp__sub_8251B6F0) {
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
	// lbz r11,258(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 258);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251b7a0
	if (cr6.eq) goto loc_8251B7A0;
	// lwz r11,612(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8251b720
	if (!cr6.eq) goto loc_8251B720;
	// bl 0x8251b068
	sub_8251B068(ctx, base);
	// b 0x8251b75c
	goto loc_8251B75C;
loc_8251B720:
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8251b75c
	if (!cr6.gt) goto loc_8251B75C;
	// addi r30,r31,696
	r30.s64 = r31.s64 + 696;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_8251B734:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt cr6,0x8251b750
	if (cr6.lt) goto loc_8251B750;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// bge cr6,0x8251b750
	if (!cr6.lt) goto loc_8251B750;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82517fe0
	sub_82517FE0(ctx, base);
loc_8251B750:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,88
	r30.s64 = r30.s64 + 88;
	// bne 0x8251b734
	if (!cr0.eq) goto loc_8251B734;
loc_8251B75C:
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r10,2208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2208);
	// li r4,260
	ctx.r4.s64 = 260;
	// mulli r11,r11,272
	r11.s64 = r11.s64 * 272;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r31,296
	ctx.r3.s64 = r31.s64 + 296;
	// addi r5,r11,16
	ctx.r5.s64 = r11.s64 + 16;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r8,264(r31)
	PPC_STORE_U32(r31.u32 + 264, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r7,272(r31)
	PPC_STORE_U32(r31.u32 + 272, ctx.r7.u32);
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
loc_8251B7A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8251B7A4"))) PPC_WEAK_FUNC(sub_8251B7A4);
PPC_FUNC_IMPL(__imp__sub_8251B7A4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8251B7A8"))) PPC_WEAK_FUNC(sub_8251B7A8);
PPC_FUNC_IMPL(__imp__sub_8251B7A8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r4,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r4.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251b7e4
	if (cr6.eq) goto loc_8251B7E4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251b7e8
	if (!cr6.eq) goto loc_8251B7E8;
loc_8251B7E4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8251B7E8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// addi r31,r29,3836
	r31.s64 = r29.s64 + 3836;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,3840(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 3840);
	// addi r26,r11,14076
	r26.s64 = r11.s64 + 14076;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x8251b830
	if (cr6.eq) goto loc_8251B830;
	// lwz r30,16(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x8251b964
	goto loc_8251B964;
loc_8251B830:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// addi r7,r10,22136
	ctx.r7.s64 = ctx.r10.s64 + 22136;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// li r8,780
	ctx.r8.s64 = 780;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r3,220
	ctx.r3.s64 = 220;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251b878
	if (cr6.eq) goto loc_8251B878;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8251e848
	sub_8251E848(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8251B878:
	// addi r4,r1,220
	ctx.r4.s64 = ctx.r1.s64 + 220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,22084
	ctx.r5.s64 = r11.s64 + 22084;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251b954
	if (!cr6.eq) goto loc_8251B954;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251B8D4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251b8d4
	if (!cr6.eq) goto loc_8251B8D4;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r10,13856
	ctx.r5.s64 = ctx.r10.s64 + 13856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251B928:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251b928
	if (!cr6.eq) goto loc_8251B928;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251B954:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
loc_8251B964:
	// lbz r11,257(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 257);
	// stb r11,60(r30)
	PPC_STORE_U8(r30.u32 + 60, r11.u8);
	// lbz r10,258(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 258);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,61(r30)
	PPC_STORE_U8(r30.u32 + 61, ctx.r10.u8);
	// beq cr6,0x8251bbb8
	if (cr6.eq) goto loc_8251BBB8;
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251d908
	sub_8251D908(ctx, base);
	// lwz r10,280(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 280);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,21368
	ctx.r5.s64 = r11.s64 + 21368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r10.u32);
	// rotlwi r6,r10,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r7,276(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 276);
	// stw r7,68(r30)
	PPC_STORE_U32(r30.u32 + 68, ctx.r7.u32);
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251bba8
	if (!cr6.eq) goto loc_8251BBA8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251B9E4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251b9e4
	if (!cr6.eq) goto loc_8251B9E4;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,21352
	ctx.r5.s64 = ctx.r10.s64 + 21352;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r7,184(r30)
	PPC_STORE_U8(r30.u32 + 184, ctx.r7.u8);
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r6,21336
	ctx.r5.s64 = ctx.r6.s64 + 21336;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,188(r30)
	PPC_STORE_U32(r30.u32 + 188, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r5,20128
	ctx.r5.s64 = ctx.r5.s64 + 20128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251BA9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251ba9c
	if (!cr6.eq) goto loc_8251BA9C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r30,192
	ctx.r3.s64 = r30.s64 + 192;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,17280
	ctx.r5.s64 = ctx.r10.s64 + 17280;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251BAF0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251baf0
	if (!cr6.eq) goto loc_8251BAF0;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,20160
	ctx.r5.s64 = ctx.r10.s64 + 20160;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251BB44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251bb44
	if (!cr6.eq) goto loc_8251BB44;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,20216
	ctx.r5.s64 = ctx.r10.s64 + 20216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addic r8,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r7,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stb r7,92(r31)
	PPC_STORE_U8(r31.u32 + 92, ctx.r7.u8);
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251BBA8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
loc_8251BBB8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8251BBC0"))) PPC_WEAK_FUNC(sub_8251BBC0);
PPC_FUNC_IMPL(__imp__sub_8251BBC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8251BBC4"))) PPC_WEAK_FUNC(sub_8251BBC4);
PPC_FUNC_IMPL(__imp__sub_8251BBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251BBC8"))) PPC_WEAK_FUNC(sub_8251BBC8);
PPC_FUNC_IMPL(__imp__sub_8251BBC8) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r4,272(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// bl 0x8251b7a8
	sub_8251B7A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8251bc10
	if (cr6.lt) goto loc_8251BC10;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251BC10:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,20016
	ctx.r4.s64 = ctx.r10.s64 + 20016;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8251bc38
	if (cr6.lt) goto loc_8251BC38;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251BC38:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r10,22336
	ctx.r4.s64 = ctx.r10.s64 + 22336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
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

__attribute__((alias("__imp__sub_8251BC7C"))) PPC_WEAK_FUNC(sub_8251BC7C);
PPC_FUNC_IMPL(__imp__sub_8251BC7C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251BC80"))) PPC_WEAK_FUNC(sub_8251BC80);
PPC_FUNC_IMPL(__imp__sub_8251BC80) {
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
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// addi r30,r3,3852
	r30.s64 = ctx.r3.s64 + 3852;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e8d68
	sub_826E8D68(ctx, base);
	// lwz r10,3856(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 3856);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8251bcc8
	if (cr6.eq) goto loc_8251BCC8;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9468
	return;
loc_8251BCC8:
	// li r28,0
	r28.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// addi r7,r10,22136
	ctx.r7.s64 = ctx.r10.s64 + 22136;
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// li r8,1355
	ctx.r8.s64 = 1355;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// li r3,256
	ctx.r3.s64 = 256;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251bd18
	if (cr6.eq) goto loc_8251BD18;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8251e0d8
	sub_8251E0D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8251bd1c
	goto loc_8251BD1C;
loc_8251BD18:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_8251BD1C:
	// addi r4,r1,188
	ctx.r4.s64 = ctx.r1.s64 + 188;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826fb1a0
	sub_826FB1A0(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251bd4c
	if (cr6.eq) goto loc_8251BD4C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251bd50
	if (!cr6.eq) goto loc_8251BD50;
loc_8251BD4C:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_8251BD50:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r9,22280
	ctx.r5.s64 = ctx.r9.s64 + 22280;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
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
	// bne cr6,0x8251c0fc
	if (!cr6.eq) goto loc_8251C0FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,14076
	ctx.r5.s64 = r11.s64 + 14076;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251BDB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251bdb0
	if (!cr6.eq) goto loc_8251BDB0;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,19652
	ctx.r5.s64 = ctx.r10.s64 + 19652;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251BE04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251be04
	if (!cr6.eq) goto loc_8251BE04;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,22268
	ctx.r5.s64 = ctx.r10.s64 + 22268;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251BE58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251be58
	if (!cr6.eq) goto loc_8251BE58;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,20096
	ctx.r5.s64 = ctx.r10.s64 + 20096;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,20004
	ctx.r5.s64 = ctx.r9.s64 + 20004;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251BED8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251bed8
	if (!cr6.eq) goto loc_8251BED8;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,19804
	ctx.r5.s64 = ctx.r10.s64 + 19804;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// stb r28,252(r31)
	PPC_STORE_U8(r31.u32 + 252, r28.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,15156
	ctx.r5.s64 = ctx.r9.s64 + 15156;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r5,29
	ctx.r5.s64 = 29;
	// addi r4,r8,22236
	ctx.r4.s64 = ctx.r8.s64 + 22236;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r7,22220
	ctx.r5.s64 = ctx.r7.s64 + 22220;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251BF9C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251bf9c
	if (!cr6.eq) goto loc_8251BF9C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,156
	ctx.r3.s64 = r31.s64 + 156;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,22888
	ctx.r5.s64 = ctx.r10.s64 + 22888;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,184(r31)
	PPC_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,22212
	ctx.r5.s64 = ctx.r9.s64 + 22212;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r8,4920
	ctx.r5.s64 = ctx.r8.s64 + 4920;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251C048:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251c048
	if (!cr6.eq) goto loc_8251C048;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,22200
	ctx.r5.s64 = ctx.r10.s64 + 22200;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251C09C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251c09c
	if (!cr6.eq) goto loc_8251C09C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,20232
	ctx.r5.s64 = ctx.r10.s64 + 20232;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,248(r31)
	PPC_STORE_U32(r31.u32 + 248, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_8251C0FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8251C10C"))) PPC_WEAK_FUNC(sub_8251C10C);
PPC_FUNC_IMPL(__imp__sub_8251C10C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251C110"))) PPC_WEAK_FUNC(sub_8251C110);
PPC_FUNC_IMPL(__imp__sub_8251C110) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// beq cr6,0x8251c150
	if (cr6.eq) goto loc_8251C150;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c154
	if (!cr6.eq) goto loc_8251C154;
loc_8251C150:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8251C154:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,260(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// addi r5,r9,22668
	ctx.r5.s64 = ctx.r9.s64 + 22668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r29,15
	r29.s64 = 15;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8251c1b4
	if (cr6.eq) goto loc_8251C1B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// b 0x8251c208
	goto loc_8251C208;
loc_8251C1B4:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,22656
	ctx.r5.s64 = r11.s64 + 22656;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251C1DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251c1dc
	if (!cr6.eq) goto loc_8251C1DC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251C208:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8251c21c
	if (!cr6.lt) goto loc_8251C21C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_8251C21C:
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x828ecd48
	sub_828ECD48(ctx, base);
	// stb r31,255(r30)
	PPC_STORE_U8(r30.u32 + 255, r31.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251c248
	if (cr6.lt) goto loc_8251C248;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251C248:
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8251C26C"))) PPC_WEAK_FUNC(sub_8251C26C);
PPC_FUNC_IMPL(__imp__sub_8251C26C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8251C270"))) PPC_WEAK_FUNC(sub_8251C270);
PPC_FUNC_IMPL(__imp__sub_8251C270) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-1008(r1)
	ea = -1008 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r23,-31970
	r23.s64 = -2095185920;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r10,916(r1)
	PPC_STORE_U32(ctx.r1.u32 + 916, ctx.r10.u32);
	// beq cr6,0x8251c2b0
	if (cr6.eq) goto loc_8251C2B0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14756);
	// bne cr6,0x8251c2b4
	if (!cr6.eq) goto loc_8251C2B4;
loc_8251C2B0:
	// li r11,0
	r11.s64 = 0;
loc_8251C2B4:
	// lwz r27,108(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251c2d0
	if (cr6.eq) goto loc_8251C2D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c2d4
	if (!cr6.eq) goto loc_8251C2D4;
loc_8251C2D0:
	// li r11,0
	r11.s64 = 0;
loc_8251C2D4:
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// addi r24,r26,256
	r24.s64 = r26.s64 + 256;
	// bl 0x8250dd08
	sub_8250DD08(ctx, base);
	// stb r3,256(r26)
	PPC_STORE_U8(r26.u32 + 256, ctx.r3.u8);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8251b6f0
	sub_8251B6F0(ctx, base);
	// lbz r11,257(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 257);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lbz r25,258(r26)
	r25.u64 = PPC_LOAD_U8(r26.u32 + 258);
	// bne cr6,0x8251c464
	if (!cr6.eq) goto loc_8251C464;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lbz r10,-26032(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -26032);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251c320
	if (cr6.eq) goto loc_8251C320;
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251c320
	if (!cr6.eq) goto loc_8251C320;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82517f30
	sub_82517F30(ctx, base);
loc_8251C320:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8253a860
	sub_8253A860(ctx, base);
	// lwz r3,-14756(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251c344
	if (cr6.eq) goto loc_8251C344;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c348
	if (!cr6.eq) goto loc_8251C348;
loc_8251C344:
	// li r11,0
	r11.s64 = 0;
loc_8251C348:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,272(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 272);
	// addi r5,r9,15272
	ctx.r5.s64 = ctx.r9.s64 + 15272;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251c3b8
	if (!cr6.eq) goto loc_8251C3B8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,15256
	ctx.r5.s64 = r11.s64 + 15256;
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
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8251C3B8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251c3e4
	if (cr6.eq) goto loc_8251C3E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,3832(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 3832);
	// addi r4,r26,3040
	ctx.r4.s64 = r26.s64 + 3040;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8253b0e0
	sub_8253B0E0(ctx, base);
	// b 0x8251c45c
	goto loc_8251C45C;
loc_8251C3E4:
	// lwz r11,596(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 596);
	// lwz r10,396(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 396);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x8251c404
	if (cr6.lt) goto loc_8251C404;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
loc_8251C404:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// addi r8,r10,20996
	ctx.r8.s64 = ctx.r10.s64 + 20996;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r6,64
	ctx.r6.s64 = 64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r6,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r6.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82538e98
	sub_82538E98(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8253b0e0
	sub_8253B0E0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8251dc80
	sub_8251DC80(ctx, base);
loc_8251C45C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
loc_8251C464:
	// lwz r28,396(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 396);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// ble cr6,0x8251c4b0
	if (!cr6.gt) goto loc_8251C4B0;
	// addi r29,r26,1672
	r29.s64 = r26.s64 + 1672;
	// addi r30,r26,616
	r30.s64 = r26.s64 + 616;
loc_8251C47C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82538a98
	sub_82538A98(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82538b68
	sub_82538B68(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,88
	r30.s64 = r30.s64 + 88;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// blt cr6,0x8251c47c
	if (cr6.lt) goto loc_8251C47C;
loc_8251C4B0:
	// stw r28,600(r26)
	PPC_STORE_U32(r26.u32 + 600, r28.u32);
	// stw r28,596(r26)
	PPC_STORE_U32(r26.u32 + 596, r28.u32);
	// lwz r3,-14756(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251c4d4
	if (cr6.eq) goto loc_8251C4D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c4d8
	if (!cr6.eq) goto loc_8251C4D8;
loc_8251C4D4:
	// li r11,0
	r11.s64 = 0;
loc_8251C4D8:
	// lwz r4,260(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 260);
	// lwz r3,180(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// bl 0x82570518
	sub_82570518(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8251ac38
	sub_8251AC38(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8251acd8
	sub_8251ACD8(ctx, base);
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251c50c
	if (cr6.eq) goto loc_8251C50C;
	// lwz r11,612(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 612);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,612(r26)
	PPC_STORE_U32(r26.u32 + 612, r11.u32);
loc_8251C50C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8251a3e0
	sub_8251A3E0(ctx, base);
	// lwz r3,-14756(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251c530
	if (cr6.eq) goto loc_8251C530;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c534
	if (!cr6.eq) goto loc_8251C534;
loc_8251C530:
	// li r11,0
	r11.s64 = 0;
loc_8251C534:
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x82573068
	sub_82573068(ctx, base);
	// lwz r3,-14756(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251c560
	if (cr6.eq) goto loc_8251C560;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c564
	if (!cr6.eq) goto loc_8251C564;
loc_8251C560:
	// li r11,0
	r11.s64 = 0;
loc_8251C564:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// bl 0x824224b8
	sub_824224B8(ctx, base);
	// lwz r11,596(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 596);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8251c5d8
	if (!cr6.gt) goto loc_8251C5D8;
	// addi r30,r26,696
	r30.s64 = r26.s64 + 696;
loc_8251C584:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x8251c5c4
	if (cr6.lt) goto loc_8251C5C4;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// bge cr6,0x8251c5c4
	if (!cr6.lt) goto loc_8251C5C4;
	// lwz r3,-14756(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251c5b4
	if (cr6.eq) goto loc_8251C5B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c5b8
	if (!cr6.eq) goto loc_8251C5B8;
loc_8251C5B4:
	// li r11,0
	r11.s64 = 0;
loc_8251C5B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// bl 0x82422090
	sub_82422090(ctx, base);
loc_8251C5C4:
	// lwz r11,596(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 596);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,88
	r30.s64 = r30.s64 + 88;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8251c584
	if (cr6.lt) goto loc_8251C584;
loc_8251C5D8:
	// lwz r3,916(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1008
	ctx.r1.s64 = ctx.r1.s64 + 1008;
}

__attribute__((alias("__imp__sub_8251C5E4"))) PPC_WEAK_FUNC(sub_8251C5E4);
PPC_FUNC_IMPL(__imp__sub_8251C5E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8251C5E8"))) PPC_WEAK_FUNC(sub_8251C5E8);
PPC_FUNC_IMPL(__imp__sub_8251C5E8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9404
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251c61c
	if (cr6.eq) goto loc_8251C61C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c620
	if (!cr6.eq) goto loc_8251C620;
loc_8251C61C:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8251C620:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19368(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19368);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r23,r28,2148
	r23.s64 = r28.s64 + 2148;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251c678
	if (!cr6.eq) goto loc_8251C678;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251c678
	if (!cr6.eq) goto loc_8251C678;
	// lwz r11,19368(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19368);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8251C678:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251c694
	if (cr6.eq) goto loc_8251C694;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c698
	if (!cr6.eq) goto loc_8251C698;
loc_8251C694:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8251C698:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-23860(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23860);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r25,r28,2092
	r25.s64 = r28.s64 + 2092;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251c6f0
	if (!cr6.eq) goto loc_8251C6F0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251c6f0
	if (!cr6.eq) goto loc_8251C6F0;
	// lwz r11,-23860(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23860);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8251C6F0:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251c70c
	if (cr6.eq) goto loc_8251C70C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c710
	if (!cr6.eq) goto loc_8251C710;
loc_8251C70C:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8251C710:
	// lis r29,-31933
	r29.s64 = -2092761088;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-23608(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23608);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r28,2120
	r26.s64 = r28.s64 + 2120;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251c768
	if (!cr6.eq) goto loc_8251C768;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251c768
	if (!cr6.eq) goto loc_8251C768;
	// lwz r11,-23608(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23608);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8251C768:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251c784
	if (cr6.eq) goto loc_8251C784;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251c788
	if (!cr6.eq) goto loc_8251C788;
loc_8251C784:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8251C788:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20240);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r27,r28,2176
	r27.s64 = r28.s64 + 2176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251c7e0
	if (!cr6.eq) goto loc_8251C7E0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251c7e0
	if (!cr6.eq) goto loc_8251C7E0;
	// lwz r11,20240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20240);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_8251C7E0:
	// lwz r11,3844(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 3844);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8251c860
	if (!cr6.gt) goto loc_8251C860;
	// lwz r10,3840(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 3840);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8251c834
	if (cr6.eq) goto loc_8251C834;
loc_8251C800:
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8251c81c
	if (cr6.eq) goto loc_8251C81C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251e180
	sub_8251E180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8251C81C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r10,3840(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 3840);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8251c800
	if (!cr6.eq) goto loc_8251C800;
loc_8251C834:
	// lwz r11,3840(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 3840);
	// addi r3,r28,3836
	ctx.r3.s64 = r28.s64 + 3836;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r10,3840(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 3840);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,3840(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 3840);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,3840(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 3840);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r24,3844(r28)
	PPC_STORE_U32(r28.u32 + 3844, r24.u32);
loc_8251C860:
	// lwz r11,3860(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 3860);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8251c8e0
	if (!cr6.gt) goto loc_8251C8E0;
	// lwz r10,3856(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 3856);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8251c8b4
	if (cr6.eq) goto loc_8251C8B4;
loc_8251C880:
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8251c89c
	if (cr6.eq) goto loc_8251C89C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251e220
	sub_8251E220(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8251C89C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826efff0
	sub_826EFFF0(ctx, base);
	// lwz r10,3856(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 3856);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8251c880
	if (!cr6.eq) goto loc_8251C880;
loc_8251C8B4:
	// lwz r11,3856(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 3856);
	// addi r3,r28,3852
	ctx.r3.s64 = r28.s64 + 3852;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x826f79d8
	sub_826F79D8(ctx, base);
	// lwz r10,3856(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 3856);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,3856(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 3856);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// lwz r8,3856(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 3856);
	// stw r8,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r8.u32);
	// stw r24,3860(r28)
	PPC_STORE_U32(r28.u32 + 3860, r24.u32);
loc_8251C8E0:
	// lwz r6,3856(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 3856);
	// addi r4,r28,3852
	ctx.r4.s64 = r28.s64 + 3852;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,3856(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 3856);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lwz r6,3840(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 3840);
	// addi r4,r28,3836
	ctx.r4.s64 = r28.s64 + 3836;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82727fa0
	sub_82727FA0(ctx, base);
	// lwz r3,3840(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 3840);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r8,3052(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 3052);
	// addi r11,r28,3040
	r11.s64 = r28.s64 + 3040;
	// addi r9,r10,20996
	ctx.r9.s64 = ctx.r10.s64 + 20996;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,3040(r28)
	PPC_STORE_U32(r28.u32 + 3040, ctx.r9.u32);
	// ble cr6,0x8251c94c
	if (!cr6.gt) goto loc_8251C94C;
loc_8251C934:
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
	// bgt cr6,0x8251c934
	if (cr6.gt) goto loc_8251C934;
loc_8251C94C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r8,r10,19244
	ctx.r8.s64 = ctx.r10.s64 + 19244;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// ble cr6,0x8251c97c
	if (!cr6.gt) goto loc_8251C97C;
loc_8251C964:
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
	// bgt cr6,0x8251c964
	if (cr6.gt) goto loc_8251C964;
loc_8251C97C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,2216(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 2216);
	// addi r11,r28,2204
	r11.s64 = r28.s64 + 2204;
	// addi r8,r10,20984
	ctx.r8.s64 = ctx.r10.s64 + 20984;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,2204(r28)
	PPC_STORE_U32(r28.u32 + 2204, ctx.r8.u32);
	// ble cr6,0x8251c9b0
	if (!cr6.gt) goto loc_8251C9B0;
loc_8251C998:
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
	// bgt cr6,0x8251c998
	if (cr6.gt) goto loc_8251C998;
loc_8251C9B0:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r8,r10,19232
	ctx.r8.s64 = ctx.r10.s64 + 19232;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// ble cr6,0x8251c9e0
	if (!cr6.gt) goto loc_8251C9E0;
loc_8251C9C8:
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
	// bgt cr6,0x8251c9c8
	if (cr6.gt) goto loc_8251C9C8;
loc_8251C9E0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r8,1924(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 1924);
	// addi r11,r28,1912
	r11.s64 = r28.s64 + 1912;
	// addi r9,r10,13756
	ctx.r9.s64 = ctx.r10.s64 + 13756;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r9,1912(r28)
	PPC_STORE_U32(r28.u32 + 1912, ctx.r9.u32);
	// ble cr6,0x8251ca34
	if (!cr6.gt) goto loc_8251CA34;
loc_8251CA1C:
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
	// bgt cr6,0x8251ca1c
	if (cr6.gt) goto loc_8251CA1C;
loc_8251CA34:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r8,r10,13132
	ctx.r8.s64 = ctx.r10.s64 + 13132;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// ble cr6,0x8251ca64
	if (!cr6.gt) goto loc_8251CA64;
loc_8251CA4C:
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
	// bgt cr6,0x8251ca4c
	if (cr6.gt) goto loc_8251CA4C;
loc_8251CA64:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8251CA68"))) PPC_WEAK_FUNC(sub_8251CA68);
PPC_FUNC_IMPL(__imp__sub_8251CA68) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8251CA6C"))) PPC_WEAK_FUNC(sub_8251CA6C);
PPC_FUNC_IMPL(__imp__sub_8251CA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251CA70"))) PPC_WEAK_FUNC(sub_8251CA70);
PPC_FUNC_IMPL(__imp__sub_8251CA70) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// beq cr6,0x8251cab8
	if (cr6.eq) goto loc_8251CAB8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251cabc
	if (!cr6.eq) goto loc_8251CABC;
loc_8251CAB8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8251CABC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,276(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// addi r5,r9,19604
	ctx.r5.s64 = ctx.r9.s64 + 19604;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// li r31,15
	r31.s64 = 15;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x8251cb58
	if (!cr6.eq) goto loc_8251CB58;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,13856
	ctx.r5.s64 = r11.s64 + 13856;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251CB2C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251cb2c
	if (!cr6.eq) goto loc_8251CB2C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251CB58:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8251cb78
	if (!cr6.lt) goto loc_8251CB78;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8251CB78:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,20016
	ctx.r4.s64 = r11.s64 + 20016;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8251cbbc
	if (cr6.lt) goto loc_8251CBBC;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251CBBC:
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r30.u32);
	// stb r30,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r30.u8);
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251CBEC"))) PPC_WEAK_FUNC(sub_8251CBEC);
PPC_FUNC_IMPL(__imp__sub_8251CBEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251CBF0"))) PPC_WEAK_FUNC(sub_8251CBF0);
PPC_FUNC_IMPL(__imp__sub_8251CBF0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// lwz r8,24192(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r31.u32);
	// stb r31,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r31.u8);
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// beq cr6,0x8251cc48
	if (cr6.eq) goto loc_8251CC48;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251cc4c
	if (!cr6.eq) goto loc_8251CC4C;
loc_8251CC48:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8251CC4C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,272(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// addi r5,r9,22748
	ctx.r5.s64 = ctx.r9.s64 + 22748;
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
	// bne cr6,0x8251ccd8
	if (!cr6.eq) goto loc_8251CCD8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,22728
	ctx.r5.s64 = r11.s64 + 22728;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251CCAC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251ccac
	if (!cr6.eq) goto loc_8251CCAC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
loc_8251CCD8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x8251ccf8
	if (!cr6.lt) goto loc_8251CCF8;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8251CCF8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,22716
	ctx.r4.s64 = r11.s64 + 22716;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8251cd44
	if (cr6.lt) goto loc_8251CD44;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251CD44:
	// lwz r3,240(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251CD60"))) PPC_WEAK_FUNC(sub_8251CD60);
PPC_FUNC_IMPL(__imp__sub_8251CD60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251CD64"))) PPC_WEAK_FUNC(sub_8251CD64);
PPC_FUNC_IMPL(__imp__sub_8251CD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251CD68"))) PPC_WEAK_FUNC(sub_8251CD68);
PPC_FUNC_IMPL(__imp__sub_8251CD68) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x8251bc80
	sub_8251BC80(ctx, base);
	// lis r31,-31970
	r31.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251cdb4
	if (cr6.eq) goto loc_8251CDB4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// bne cr6,0x8251cdb8
	if (!cr6.eq) goto loc_8251CDB8;
loc_8251CDB4:
	// li r11,0
	r11.s64 = 0;
loc_8251CDB8:
	// lwz r31,104(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251cdd4
	if (cr6.eq) goto loc_8251CDD4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251cdd8
	if (!cr6.eq) goto loc_8251CDD8;
loc_8251CDD4:
	// li r11,0
	r11.s64 = 0;
loc_8251CDD8:
	// lwz r3,188(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// lwz r27,248(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 248);
	// bl 0x82568bd0
	sub_82568BD0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x82549af0
	sub_82549AF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251a8c8
	sub_8251A8C8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8251CE3C"))) PPC_WEAK_FUNC(sub_8251CE3C);
PPC_FUNC_IMPL(__imp__sub_8251CE3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8251CE40"))) PPC_WEAK_FUNC(sub_8251CE40);
PPC_FUNC_IMPL(__imp__sub_8251CE40) {
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
	// stwu r1,-1248(r1)
	ea = -1248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lbz r10,258(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 258);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r9,1208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1208, ctx.r9.u32);
	// beq cr6,0x8251cf1c
	if (cr6.eq) goto loc_8251CF1C;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822bf460
	sub_822BF460(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82543418
	sub_82543418(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8251cee0
	if (!cr6.gt) goto loc_8251CEE0;
loc_8251CE8C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82543728
	sub_82543728(ctx, base);
	// lwz r8,1916(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 1916);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
loc_8251CEA8:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// add r9,r11,r8
	ctx.r9.u64 = r11.u64 + ctx.r8.u64;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// beq cr6,0x8251cecc
	if (cr6.eq) goto loc_8251CECC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// blt cr6,0x8251cea8
	if (cr6.lt) goto loc_8251CEA8;
	// b 0x8251ced4
	goto loc_8251CED4;
loc_8251CECC:
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
loc_8251CED4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x8251ce8c
	if (cr6.lt) goto loc_8251CE8C;
loc_8251CEE0:
	// lwz r11,1924(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1924);
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// lwz r9,1916(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 1916);
	// li r7,12
	ctx.r7.s64 = 12;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// addi r6,r8,32248
	ctx.r6.s64 = ctx.r8.s64 + 32248;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r9
	ctx.r4.u64 = r11.u64 + ctx.r9.u64;
	// subf r11,r9,r4
	r11.s64 = ctx.r4.s64 - ctx.r9.s64;
	// divw r5,r11,r7
	ctx.r5.s32 = r11.s32 / ctx.r7.s32;
	// bl 0x8251e908
	sub_8251E908(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825438b0
	sub_825438B0(ctx, base);
loc_8251CF1C:
	// lwz r3,1208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,1248
	ctx.r1.s64 = ctx.r1.s64 + 1248;
}

__attribute__((alias("__imp__sub_8251CF28"))) PPC_WEAK_FUNC(sub_8251CF28);
PPC_FUNC_IMPL(__imp__sub_8251CF28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8251CF2C"))) PPC_WEAK_FUNC(sub_8251CF2C);
PPC_FUNC_IMPL(__imp__sub_8251CF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251CF30"))) PPC_WEAK_FUNC(sub_8251CF30);
PPC_FUNC_IMPL(__imp__sub_8251CF30) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,256
	r30.s64 = ctx.r3.s64 + 256;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dfd88
	sub_822DFD88(ctx, base);
	// addi r29,r31,2092
	r29.s64 = r31.s64 + 2092;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r26,r31,2120
	r26.s64 = r31.s64 + 2120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r25,r31,2148
	r25.s64 = r31.s64 + 2148;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r23,r31,2176
	r23.s64 = r31.s64 + 2176;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r11,r31,2204
	r11.s64 = r31.s64 + 2204;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r10,r31,3040
	ctx.r10.s64 = r31.s64 + 3040;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// addi r3,r10,20
	ctx.r3.s64 = ctx.r10.s64 + 20;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r6,r11,20
	ctx.r6.s64 = r11.s64 + 20;
	// addi r5,r8,20984
	ctx.r5.s64 = ctx.r8.s64 + 20984;
	// stw r9,2220(r31)
	PPC_STORE_U32(r31.u32 + 2220, ctx.r9.u32);
	// li r24,0
	r24.s64 = 0;
	// stw r6,2208(r31)
	PPC_STORE_U32(r31.u32 + 2208, ctx.r6.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r5,2204(r31)
	PPC_STORE_U32(r31.u32 + 2204, ctx.r5.u32);
	// addi r11,r7,20996
	r11.s64 = ctx.r7.s64 + 20996;
	// stw r24,2216(r31)
	PPC_STORE_U32(r31.u32 + 2216, r24.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r4,2212(r31)
	PPC_STORE_U32(r31.u32 + 2212, ctx.r4.u32);
	// stw r3,3044(r31)
	PPC_STORE_U32(r31.u32 + 3044, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r24,3052(r31)
	PPC_STORE_U32(r31.u32 + 3052, r24.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,3040(r31)
	PPC_STORE_U32(r31.u32 + 3040, r11.u32);
	// addi r3,r31,3836
	ctx.r3.s64 = r31.s64 + 3836;
	// stw r10,3048(r31)
	PPC_STORE_U32(r31.u32 + 3048, ctx.r10.u32);
	// stw r9,3056(r31)
	PPC_STORE_U32(r31.u32 + 3056, ctx.r9.u32);
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,3852
	ctx.r3.s64 = r31.s64 + 3852;
	// bl 0x826f0080
	sub_826F0080(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822df9c0
	sub_822DF9C0(ctx, base);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r24,2080(r31)
	PPC_STORE_U8(r31.u32 + 2080, r24.u8);
	// lis r11,-32174
	r11.s64 = -2108555264;
	// stw r10,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, ctx.r10.u32);
	// stw r10,2088(r31)
	PPC_STORE_U32(r31.u32 + 2088, ctx.r10.u32);
	// addi r27,r11,-15760
	r27.s64 = r11.s64 + -15760;
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251d034
	if (cr6.eq) goto loc_8251D034;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251d038
	if (!cr6.eq) goto loc_8251D038;
loc_8251D034:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_8251D038:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r22,12(r10)
	r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// addi r28,r11,-3784
	r28.s64 = r11.s64 + -3784;
	// addi r3,r10,-26892
	ctx.r3.s64 = ctx.r10.s64 + -26892;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// lwz r11,-23860(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23860);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32174
	r11.s64 = -2108555264;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,-21544
	r29.s64 = r11.s64 + -21544;
	// beq cr6,0x8251d0ac
	if (cr6.eq) goto loc_8251D0AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251d0b0
	if (!cr6.eq) goto loc_8251D0B0;
loc_8251D0AC:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8251D0B0:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,-25704
	ctx.r3.s64 = ctx.r10.s64 + -25704;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,-23608(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23608);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32174
	r11.s64 = -2108555264;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,-23368
	r29.s64 = r11.s64 + -23368;
	// beq cr6,0x8251d11c
	if (cr6.eq) goto loc_8251D11C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251d120
	if (!cr6.eq) goto loc_8251D120;
loc_8251D11C:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8251D120:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,2188
	ctx.r3.s64 = ctx.r10.s64 + 2188;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19368(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19368);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// lis r11,-32174
	r11.s64 = -2108555264;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r29,r11,-12736
	r29.s64 = r11.s64 + -12736;
	// beq cr6,0x8251d18c
	if (cr6.eq) goto loc_8251D18C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251d190
	if (!cr6.eq) goto loc_8251D190;
loc_8251D18C:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8251D190:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r10,11036
	ctx.r3.s64 = ctx.r10.s64 + 11036;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20240(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20240);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8251D1E0"))) PPC_WEAK_FUNC(sub_8251D1E0);
PPC_FUNC_IMPL(__imp__sub_8251D1E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_8251D1E4"))) PPC_WEAK_FUNC(sub_8251D1E4);
PPC_FUNC_IMPL(__imp__sub_8251D1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251D1E8"))) PPC_WEAK_FUNC(sub_8251D1E8);
PPC_FUNC_IMPL(__imp__sub_8251D1E8) {
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
	// li r30,0
	r30.s64 = 0;
	// li r11,15
	r11.s64 = 15;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r30.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,13435
	ctx.r4.s64 = ctx.r10.s64 + 13435;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251d240
	if (cr6.eq) goto loc_8251D240;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251d244
	if (!cr6.eq) goto loc_8251D244;
loc_8251D240:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8251D244:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// addi r4,r10,14000
	ctx.r4.s64 = ctx.r10.s64 + 14000;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,272(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 272);
	// addi r5,r9,22816
	ctx.r5.s64 = ctx.r9.s64 + 22816;
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
	// bne cr6,0x8251d2d8
	if (!cr6.eq) goto loc_8251D2D8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,22800
	ctx.r5.s64 = r11.s64 + 22800;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8251D2A4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251d2a4
	if (!cr6.eq) goto loc_8251D2A4;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
loc_8251D2D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8251D2E8"))) PPC_WEAK_FUNC(sub_8251D2E8);
PPC_FUNC_IMPL(__imp__sub_8251D2E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8251D2EC"))) PPC_WEAK_FUNC(sub_8251D2EC);
PPC_FUNC_IMPL(__imp__sub_8251D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251D2F0"))) PPC_WEAK_FUNC(sub_8251D2F0);
PPC_FUNC_IMPL(__imp__sub_8251D2F0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// bl 0x8251d1e8
	sub_8251D1E8(ctx, base);
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x8251d364
	if (cr6.gt) goto loc_8251D364;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8251d34c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8251D34C;
	// bdzf 4*cr6+eq,0x8251d358
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8251D358;
	// bdzf 4*cr6+eq,0x8251d358
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8251D358;
	// bne cr6,0x8251d358
	if (!cr6.eq) goto loc_8251D358;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,-1944
	ctx.r4.s64 = r11.s64 + -1944;
	// b 0x8251d36c
	goto loc_8251D36C;
loc_8251D34C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,19220
	ctx.r4.s64 = r11.s64 + 19220;
	// b 0x8251d36c
	goto loc_8251D36C;
loc_8251D358:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,19212
	ctx.r4.s64 = r11.s64 + 19212;
	// b 0x8251d36c
	goto loc_8251D36C;
loc_8251D364:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,19204
	ctx.r4.s64 = r11.s64 + 19204;
loc_8251D36C:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8251D370:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251d370
	if (!cr6.eq) goto loc_8251D370;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r10,22868
	ctx.r4.s64 = ctx.r10.s64 + 22868;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880e70
	sub_82880E70(ctx, base);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8251d3c8
	if (!cr6.lt) goto loc_8251D3C8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_8251D3C8:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,22716
	ctx.r4.s64 = r11.s64 + 22716;
	// bl 0x82881060
	sub_82881060(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880f00
	sub_82880F00(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8254daa0
	sub_8254DAA0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82880e20
	sub_82880E20(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8251d404
	if (cr6.lt) goto loc_8251D404;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251D404:
	// lwz r3,208(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251D41C"))) PPC_WEAK_FUNC(sub_8251D41C);
PPC_FUNC_IMPL(__imp__sub_8251D41C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D420"))) PPC_WEAK_FUNC(sub_8251D420);
PPC_FUNC_IMPL(__imp__sub_8251D420) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	cr6.compare<int32_t>(r31.s32, ctx.r5.s32, xer);
	// bge cr6,0x8251d4d0
	if (!cr6.lt) goto loc_8251D4D0;
loc_8251D454:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r27
	ctr.u64 = r27.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// addi r4,r3,-12
	ctx.r4.s64 = ctx.r3.s64 + -12;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251d480
	if (cr6.eq) goto loc_8251D480;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8251D480:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// add r9,r29,r11
	ctx.r9.u64 = r29.u64 + r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// add r7,r11,r30
	ctx.r7.u64 = r11.u64 + r30.u64;
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// mr r29,r31
	r29.u64 = r31.u64;
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// stwx r5,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r5.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// blt cr6,0x8251d454
	if (cr6.lt) goto loc_8251D454;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
loc_8251D4D0:
	// bne cr6,0x8251d510
	if (!cr6.eq) goto loc_8251D510;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// add r9,r29,r11
	ctx.r9.u64 = r29.u64 + r11.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + r30.u64;
	// addi r29,r28,-1
	r29.s64 = r28.s64 + -1;
	// lwz r7,-12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// stwx r7,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r7.u32);
	// lwz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
loc_8251D510:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// mr r28,r29
	r28.u64 = r29.u64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(r25.s32, r29.s32, xer);
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// bge cr6,0x8251d594
	if (!cr6.lt) goto loc_8251D594;
loc_8251D528:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r27
	ctr.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r30
	r29.u64 = r11.u64 + r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251d594
	if (cr6.eq) goto loc_8251D594;
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r9,r31,-1
	ctx.r9.s64 = r31.s64 + -1;
	// add r8,r28,r11
	ctx.r8.u64 = r28.u64 + r11.u64;
	// srawi r7,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r31
	r28.u64 = r31.u64;
	// add r6,r11,r30
	ctx.r6.u64 = r11.u64 + r30.u64;
	// cmpw cr6,r25,r31
	cr6.compare<int32_t>(r25.s32, r31.s32, xer);
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r7.u32;
	r31.s64 = temp.s64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r4,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r4.u32);
	// blt cr6,0x8251d528
	if (cr6.lt) goto loc_8251D528;
loc_8251D594:
	// rlwinm r11,r28,1,0,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + r11.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8251D5C0"))) PPC_WEAK_FUNC(sub_8251D5C0);
PPC_FUNC_IMPL(__imp__sub_8251D5C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8251D5C4"))) PPC_WEAK_FUNC(sub_8251D5C4);
PPC_FUNC_IMPL(__imp__sub_8251D5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251D5C8"))) PPC_WEAK_FUNC(sub_8251D5C8);
PPC_FUNC_IMPL(__imp__sub_8251D5C8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,19232
	ctx.r9.s64 = r11.s64 + 19232;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8251d60c
	if (!cr6.gt) goto loc_8251D60C;
loc_8251D5F4:
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
	// bgt cr6,0x8251d5f4
	if (cr6.gt) goto loc_8251D5F4;
loc_8251D60C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251d624
	if (cr6.eq) goto loc_8251D624;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8251D624:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251D634"))) PPC_WEAK_FUNC(sub_8251D634);
PPC_FUNC_IMPL(__imp__sub_8251D634) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D638"))) PPC_WEAK_FUNC(sub_8251D638);
PPC_FUNC_IMPL(__imp__sub_8251D638) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,19244
	ctx.r9.s64 = r11.s64 + 19244;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8251d67c
	if (!cr6.gt) goto loc_8251D67C;
loc_8251D664:
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
	// bgt cr6,0x8251d664
	if (cr6.gt) goto loc_8251D664;
loc_8251D67C:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251d694
	if (cr6.eq) goto loc_8251D694;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8251D694:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251D6A4"))) PPC_WEAK_FUNC(sub_8251D6A4);
PPC_FUNC_IMPL(__imp__sub_8251D6A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D6A8"))) PPC_WEAK_FUNC(sub_8251D6A8);
PPC_FUNC_IMPL(__imp__sub_8251D6A8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	r28.s32 = r11.s32 / ctx.r10.s32;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r9.s64 = r28.s32 >> 1;
	// addze. r27,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	r27.s64 = temp.s64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// ble 0x8251d7f8
	if (!cr0.gt) goto loc_8251D7F8;
	// rlwinm r11,r27,1,0,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,1
	ctx.r10.s64 = r27.s64 + 1;
	// add r9,r27,r11
	ctx.r9.u64 = r27.u64 + r11.u64;
	// rlwinm r26,r10,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r11,r3
	r25.u64 = r11.u64 + ctx.r3.u64;
loc_8251D6EC:
	// lwzu r11,-12(r25)
	ea = -12 + r25.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r25.u32 = ea;
	// addi r26,r26,-2
	r26.s64 = r26.s64 + -2;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(r26.s32, r28.s32, xer);
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bge cr6,0x8251d794
	if (!cr6.lt) goto loc_8251D794;
loc_8251D71C:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r24
	ctr.u64 = r24.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// addi r4,r3,-12
	ctx.r4.s64 = ctx.r3.s64 + -12;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251d748
	if (cr6.eq) goto loc_8251D748;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8251D748:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r31,r10
	ctx.r10.u64 = r31.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + r29.u64;
	// add r7,r11,r29
	ctx.r7.u64 = r11.u64 + r29.u64;
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// lwzx r5,r10,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// stwx r5,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r5.u32);
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r3,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r3.u32);
	// blt cr6,0x8251d71c
	if (cr6.lt) goto loc_8251D71C;
loc_8251D794:
	// cmpw cr6,r31,r28
	cr6.compare<int32_t>(r31.s32, r28.s32, xer);
	// bne cr6,0x8251d7d8
	if (!cr6.eq) goto loc_8251D7D8;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// add r9,r30,r11
	ctx.r9.u64 = r30.u64 + r11.u64;
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// add r8,r10,r29
	ctx.r8.u64 = ctx.r10.u64 + r29.u64;
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// lwz r7,-12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -12);
	// stwx r7,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r7.u32);
	// lwz r6,-8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// stw r6,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r5,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r5.u32);
loc_8251D7D8:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8237ce20
	sub_8237CE20(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bgt cr6,0x8251d6ec
	if (cr6.gt) goto loc_8251D6EC;
loc_8251D7F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8251D7FC"))) PPC_WEAK_FUNC(sub_8251D7FC);
PPC_FUNC_IMPL(__imp__sub_8251D7FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8251D800"))) PPC_WEAK_FUNC(sub_8251D800);
PPC_FUNC_IMPL(__imp__sub_8251D800) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctr.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251d868
	if (cr6.eq) goto loc_8251D868;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
loc_8251D868:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251d8b4
	if (cr6.eq) goto loc_8251D8B4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r7,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r6,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r6.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
loc_8251D8B4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251d900
	if (cr6.eq) goto loc_8251D900;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
loc_8251D900:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251D904"))) PPC_WEAK_FUNC(sub_8251D904);
PPC_FUNC_IMPL(__imp__sub_8251D904) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251D908"))) PPC_WEAK_FUNC(sub_8251D908);
PPC_FUNC_IMPL(__imp__sub_8251D908) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r8,16
	cr6.compare<uint32_t>(ctx.r8.u32, 16, xer);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// blt cr6,0x8251d954
	if (cr6.lt) goto loc_8251D954;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251d958
	goto loc_8251D958;
loc_8251D954:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_8251D958:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// blt cr6,0x8251d978
	if (cr6.lt) goto loc_8251D978;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251d97c
	goto loc_8251D97C;
loc_8251D978:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_8251D97C:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r11,r31,64
	r11.s64 = r31.s64 + 64;
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// blt cr6,0x8251d998
	if (cr6.lt) goto loc_8251D998;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251D998:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// stb r10,92(r31)
	PPC_STORE_U8(r31.u32 + 92, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251D9B0"))) PPC_WEAK_FUNC(sub_8251D9B0);
PPC_FUNC_IMPL(__imp__sub_8251D9B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251D9B4"))) PPC_WEAK_FUNC(sub_8251D9B4);
PPC_FUNC_IMPL(__imp__sub_8251D9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251D9B8"))) PPC_WEAK_FUNC(sub_8251D9B8);
PPC_FUNC_IMPL(__imp__sub_8251D9B8) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// blt cr6,0x8251d9fc
	if (cr6.lt) goto loc_8251D9FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251da00
	goto loc_8251DA00;
loc_8251D9FC:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8251DA00:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// addi r11,r31,32
	r11.s64 = r31.s64 + 32;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// blt cr6,0x8251da20
	if (cr6.lt) goto loc_8251DA20;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251da24
	goto loc_8251DA24;
loc_8251DA20:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8251DA24:
	// stb r30,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r30.u8);
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// stb r30,60(r31)
	PPC_STORE_U8(r31.u32 + 60, r30.u8);
	// stb r30,61(r31)
	PPC_STORE_U8(r31.u32 + 61, r30.u8);
	// lwz r10,172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8251da58
	if (!cr6.gt) goto loc_8251DA58;
loc_8251DA40:
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
	// bgt cr6,0x8251da40
	if (cr6.gt) goto loc_8251DA40;
loc_8251DA58:
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// stw r10,188(r31)
	PPC_STORE_U32(r31.u32 + 188, ctx.r10.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r30.u32);
	// lwz r9,212(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x8251da7c
	if (cr6.lt) goto loc_8251DA7C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251DA7C:
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// stb r30,184(r31)
	PPC_STORE_U8(r31.u32 + 184, r30.u8);
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

__attribute__((alias("__imp__sub_8251DA98"))) PPC_WEAK_FUNC(sub_8251DA98);
PPC_FUNC_IMPL(__imp__sub_8251DA98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251DA9C"))) PPC_WEAK_FUNC(sub_8251DA9C);
PPC_FUNC_IMPL(__imp__sub_8251DA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251DAA0"))) PPC_WEAK_FUNC(sub_8251DAA0);
PPC_FUNC_IMPL(__imp__sub_8251DAA0) {
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
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r31,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r31.u32);
	// blt cr6,0x8251dae4
	if (cr6.lt) goto loc_8251DAE4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251dae8
	goto loc_8251DAE8;
loc_8251DAE4:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8251DAE8:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r31,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r31.u32);
	// blt cr6,0x8251db08
	if (cr6.lt) goto loc_8251DB08;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251db0c
	goto loc_8251DB0C;
loc_8251DB08:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8251DB0C:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r11,r30,60
	r11.s64 = r30.s64 + 60;
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r31,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r31.u32);
	// blt cr6,0x8251db2c
	if (cr6.lt) goto loc_8251DB2C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251db30
	goto loc_8251DB30;
loc_8251DB2C:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8251DB30:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r11,r30,92
	r11.s64 = r30.s64 + 92;
	// stw r31,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r31.u32);
	// stw r31,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r31.u32);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8251db54
	if (cr6.lt) goto loc_8251DB54;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251db58
	goto loc_8251DB58;
loc_8251DB54:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8251DB58:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r11,r30,128
	r11.s64 = r30.s64 + 128;
	// stw r31,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r31.u32);
	// stw r31,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r31.u32);
	// lwz r10,148(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r31,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r31.u32);
	// blt cr6,0x8251db80
	if (cr6.lt) goto loc_8251DB80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251db84
	goto loc_8251DB84;
loc_8251DB80:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8251DB84:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r11,r30,156
	r11.s64 = r30.s64 + 156;
	// stw r31,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r31.u32);
	// lwz r10,176(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8251dba0
	if (cr6.lt) goto loc_8251DBA0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251DBA0:
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// addi r11,r30,192
	r11.s64 = r30.s64 + 192;
	// stw r31,188(r30)
	PPC_STORE_U32(r30.u32 + 188, r31.u32);
	// stw r31,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r31.u32);
	// stw r31,208(r30)
	PPC_STORE_U32(r30.u32 + 208, r31.u32);
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8251dbc8
	if (cr6.lt) goto loc_8251DBC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251dbcc
	goto loc_8251DBCC;
loc_8251DBC8:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8251DBCC:
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r31.u8);
	// addi r11,r30,220
	r11.s64 = r30.s64 + 220;
	// stw r31,236(r30)
	PPC_STORE_U32(r30.u32 + 236, r31.u32);
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8251dbe8
	if (cr6.lt) goto loc_8251DBE8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251DBE8:
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r31,252(r30)
	PPC_STORE_U8(r30.u32 + 252, r31.u8);
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
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

__attribute__((alias("__imp__sub_8251DC10"))) PPC_WEAK_FUNC(sub_8251DC10);
PPC_FUNC_IMPL(__imp__sub_8251DC10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251DC14"))) PPC_WEAK_FUNC(sub_8251DC14);
PPC_FUNC_IMPL(__imp__sub_8251DC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251DC18"))) PPC_WEAK_FUNC(sub_8251DC18);
PPC_FUNC_IMPL(__imp__sub_8251DC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,20984
	ctx.r9.s64 = r11.s64 + 20984;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8251dc48
	if (!cr6.gt) goto loc_8251DC48;
loc_8251DC30:
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
	// bgt cr6,0x8251dc30
	if (cr6.gt) goto loc_8251DC30;
loc_8251DC48:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,19232
	ctx.r9.s64 = r11.s64 + 19232;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8251DC60:
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
	// bgt cr6,0x8251dc60
	if (cr6.gt) goto loc_8251DC60;
}

__attribute__((alias("__imp__sub_8251DC78"))) PPC_WEAK_FUNC(sub_8251DC78);
PPC_FUNC_IMPL(__imp__sub_8251DC78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251DC7C"))) PPC_WEAK_FUNC(sub_8251DC7C);
PPC_FUNC_IMPL(__imp__sub_8251DC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251DC80"))) PPC_WEAK_FUNC(sub_8251DC80);
PPC_FUNC_IMPL(__imp__sub_8251DC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,20996
	ctx.r9.s64 = r11.s64 + 20996;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x8251dcb0
	if (!cr6.gt) goto loc_8251DCB0;
loc_8251DC98:
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
	// bgt cr6,0x8251dc98
	if (cr6.gt) goto loc_8251DC98;
loc_8251DCB0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,19244
	ctx.r9.s64 = r11.s64 + 19244;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_8251DCC8:
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
	// bgt cr6,0x8251dcc8
	if (cr6.gt) goto loc_8251DCC8;
}

__attribute__((alias("__imp__sub_8251DCE0"))) PPC_WEAK_FUNC(sub_8251DCE0);
PPC_FUNC_IMPL(__imp__sub_8251DCE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251DCE4"))) PPC_WEAK_FUNC(sub_8251DCE4);
PPC_FUNC_IMPL(__imp__sub_8251DCE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251DCE8"))) PPC_WEAK_FUNC(sub_8251DCE8);
PPC_FUNC_IMPL(__imp__sub_8251DCE8) {
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
	// bl 0x8251dc18
	sub_8251DC18(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251dd20
	if (cr6.eq) goto loc_8251DD20;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8251DD20:
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

__attribute__((alias("__imp__sub_8251DD34"))) PPC_WEAK_FUNC(sub_8251DD34);
PPC_FUNC_IMPL(__imp__sub_8251DD34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251DD38"))) PPC_WEAK_FUNC(sub_8251DD38);
PPC_FUNC_IMPL(__imp__sub_8251DD38) {
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
	// bl 0x8251dc80
	sub_8251DC80(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251dd70
	if (cr6.eq) goto loc_8251DD70;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8251DD70:
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

__attribute__((alias("__imp__sub_8251DD84"))) PPC_WEAK_FUNC(sub_8251DD84);
PPC_FUNC_IMPL(__imp__sub_8251DD84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251DD88"))) PPC_WEAK_FUNC(sub_8251DD88);
PPC_FUNC_IMPL(__imp__sub_8251DD88) {
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
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r30,2
	r30.s64 = 2;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, xer);
	// beq cr6,0x8251de40
	if (cr6.eq) goto loc_8251DE40;
loc_8251DDAC:
	// li r28,32767
	r28.s64 = 32767;
	// bl 0x828ed0a8
	sub_828ED0A8(ctx, base);
	// clrlwi r29,r3,17
	r29.u64 = ctx.r3.u32 & 0x7FFF;
	// cmplwi cr6,r30,32767
	cr6.compare<uint32_t>(r30.u32, 32767, xer);
	// ble cr6,0x8251dde4
	if (!cr6.gt) goto loc_8251DDE4;
loc_8251DDC0:
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// beq cr6,0x8251dde4
	if (cr6.eq) goto loc_8251DDE4;
	// bl 0x828ed0a8
	sub_828ED0A8(ctx, base);
	// rlwinm r11,r28,15,0,16
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 15) & 0xFFFF8000;
	// rlwimi r3,r29,15,0,16
	ctx.r3.u64 = (__builtin_rotateleft32(r29.u32, 15) & 0xFFFF8000) | (ctx.r3.u64 & 0xFFFFFFFF00007FFF);
	// ori r28,r11,32767
	r28.u64 = r11.u64 | 32767;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// blt cr6,0x8251ddc0
	if (cr6.lt) goto loc_8251DDC0;
loc_8251DDE4:
	// divwu r11,r29,r30
	r11.u32 = r29.u32 / r30.u32;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mullw r7,r11,r30
	ctx.r7.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r7,r29
	r11.s64 = r29.s64 - ctx.r7.s64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r4,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// bne cr6,0x8251ddac
	if (!cr6.eq) goto loc_8251DDAC;
loc_8251DE40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8251DE44"))) PPC_WEAK_FUNC(sub_8251DE44);
PPC_FUNC_IMPL(__imp__sub_8251DE44) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8251DE48"))) PPC_WEAK_FUNC(sub_8251DE48);
PPC_FUNC_IMPL(__imp__sub_8251DE48) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9410
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// ble cr6,0x8251def0
	if (!cr6.gt) goto loc_8251DEF0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r10,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r10.s64 = r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r31,r8,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r7,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r31,r3
	r27.u64 = r31.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8251d800
	sub_8251D800(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// add r5,r31,r30
	ctx.r5.u64 = r31.u64 + r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// subf r3,r31,r30
	ctx.r3.s64 = r30.s64 - r31.s64;
	// bl 0x8251d800
	sub_8251D800(ctx, base);
	// subf r31,r31,r28
	r31.s64 = r28.s64 - r31.s64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = r28.s64 - r26.s64;
	// bl 0x8251d800
	sub_8251D800(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8251d800
	sub_8251D800(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_8251DEF0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8251d800
	sub_8251D800(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8251DF00"))) PPC_WEAK_FUNC(sub_8251DF00);
PPC_FUNC_IMPL(__imp__sub_8251DF00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8251DF04"))) PPC_WEAK_FUNC(sub_8251DF04);
PPC_FUNC_IMPL(__imp__sub_8251DF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251DF08"))) PPC_WEAK_FUNC(sub_8251DF08);
PPC_FUNC_IMPL(__imp__sub_8251DF08) {
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
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8251e040
	if (cr6.eq) goto loc_8251E040;
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// cmplw cr6,r29,r4
	cr6.compare<uint32_t>(r29.u32, ctx.r4.u32, xer);
	// beq cr6,0x8251e040
	if (cr6.eq) goto loc_8251E040;
	// addi r26,r29,-12
	r26.s64 = r29.s64 + -12;
loc_8251DF38:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r30,r29
	r30.u64 = r29.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8251dfbc
	if (cr6.eq) goto loc_8251DFBC;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x8251dfa0
	if (cr6.eq) goto loc_8251DFA0;
loc_8251DF7C:
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// bne cr6,0x8251df7c
	if (!cr6.eq) goto loc_8251DF7C;
loc_8251DFA0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// stw r9,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r9.u32);
	// b 0x8251e030
	goto loc_8251E030;
loc_8251DFBC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mtctr r27
	ctr.u64 = r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	r31.u64 = r26.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8251e018
	if (cr6.eq) goto loc_8251E018;
loc_8251DFDC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctr.u64 = r27.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8251dfdc
	if (!cr6.eq) goto loc_8251DFDC;
loc_8251E018:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r9,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r9.u32);
loc_8251E030:
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r26,r26,12
	r26.s64 = r26.s64 + 12;
	// cmplw cr6,r29,r25
	cr6.compare<uint32_t>(r29.u32, r25.u32, xer);
	// bne cr6,0x8251df38
	if (!cr6.eq) goto loc_8251DF38;
loc_8251E040:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8251E044"))) PPC_WEAK_FUNC(sub_8251E044);
PPC_FUNC_IMPL(__imp__sub_8251E044) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8251E048"))) PPC_WEAK_FUNC(sub_8251E048);
PPC_FUNC_IMPL(__imp__sub_8251E048) {
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
	// lwz r11,84(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r3,64
	r29.s64 = ctx.r3.s64 + 64;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e070
	if (cr6.lt) goto loc_8251E070;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E070:
	// li r30,0
	r30.s64 = 0;
	// li r27,15
	r27.s64 = 15;
	// stw r30,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r30.u32);
	// addi r31,r28,36
	r31.s64 = r28.s64 + 36;
	// stw r27,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r27.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
	// lwz r11,56(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e09c
	if (cr6.lt) goto loc_8251E09C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E09C:
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e0c0
	if (cr6.lt) goto loc_8251E0C0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E0C0:
	// stw r27,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r27.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251E0D0"))) PPC_WEAK_FUNC(sub_8251E0D0);
PPC_FUNC_IMPL(__imp__sub_8251E0D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8251E0D4"))) PPC_WEAK_FUNC(sub_8251E0D4);
PPC_FUNC_IMPL(__imp__sub_8251E0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251E0D8"))) PPC_WEAK_FUNC(sub_8251E0D8);
PPC_FUNC_IMPL(__imp__sub_8251E0D8) {
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
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r11.u8);
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stb r11,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, r11.u8);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stb r11,60(r3)
	PPC_STORE_U8(ctx.r3.u32 + 60, r11.u8);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, r11.u8);
	// stw r10,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stb r11,128(r3)
	PPC_STORE_U8(ctx.r3.u32 + 128, r11.u8);
	// stw r10,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r10.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r11.u32);
	// stb r11,156(r3)
	PPC_STORE_U8(ctx.r3.u32 + 156, r11.u8);
	// stw r10,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, r11.u32);
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, r11.u8);
	// stw r10,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, r11.u32);
	// stb r11,220(r3)
	PPC_STORE_U8(ctx.r3.u32 + 220, r11.u8);
	// bl 0x8251daa0
	sub_8251DAA0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
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

__attribute__((alias("__imp__sub_8251E17C"))) PPC_WEAK_FUNC(sub_8251E17C);
PPC_FUNC_IMPL(__imp__sub_8251E17C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251E180"))) PPC_WEAK_FUNC(sub_8251E180);
PPC_FUNC_IMPL(__imp__sub_8251E180) {
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
	// lwz r11,212(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r3,192
	r31.s64 = ctx.r3.s64 + 192;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e1a8
	if (cr6.lt) goto loc_8251E1A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E1A8:
	// li r30,0
	r30.s64 = 0;
	// li r28,15
	r28.s64 = 15;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// addi r3,r29,160
	ctx.r3.s64 = r29.s64 + 160;
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// bl 0x822fdff8
	sub_822FDFF8(ctx, base);
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// bl 0x8251e048
	sub_8251E048(ctx, base);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// addi r31,r29,32
	r31.s64 = r29.s64 + 32;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e1e4
	if (cr6.lt) goto loc_8251E1E4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E1E4:
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r28,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r28.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e208
	if (cr6.lt) goto loc_8251E208;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E208:
	// stw r28,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r28.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r30.u32);
	// stb r30,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251E218"))) PPC_WEAK_FUNC(sub_8251E218);
PPC_FUNC_IMPL(__imp__sub_8251E218) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251E21C"))) PPC_WEAK_FUNC(sub_8251E21C);
PPC_FUNC_IMPL(__imp__sub_8251E21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251E220"))) PPC_WEAK_FUNC(sub_8251E220);
PPC_FUNC_IMPL(__imp__sub_8251E220) {
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
	// lwz r11,240(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r3,220
	r28.s64 = ctx.r3.s64 + 220;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e248
	if (cr6.lt) goto loc_8251E248;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E248:
	// li r31,0
	r31.s64 = 0;
	// li r29,15
	r29.s64 = 15;
	// stw r31,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r31.u32);
	// addi r27,r30,192
	r27.s64 = r30.s64 + 192;
	// stw r29,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r29.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r31.u8);
	// lwz r11,212(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e274
	if (cr6.lt) goto loc_8251E274;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E274:
	// stw r29,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r29.u32);
	// addi r28,r30,156
	r28.s64 = r30.s64 + 156;
	// stw r31,16(r27)
	PPC_STORE_U32(r27.u32 + 16, r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r31.u8);
	// lwz r11,176(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e298
	if (cr6.lt) goto loc_8251E298;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E298:
	// stw r29,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r29.u32);
	// addi r27,r30,128
	r27.s64 = r30.s64 + 128;
	// stw r31,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r31.u8);
	// lwz r11,148(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e2bc
	if (cr6.lt) goto loc_8251E2BC;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E2BC:
	// stw r29,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r29.u32);
	// addi r28,r30,92
	r28.s64 = r30.s64 + 92;
	// stw r31,16(r27)
	PPC_STORE_U32(r27.u32 + 16, r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r31.u8);
	// lwz r11,112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e2e0
	if (cr6.lt) goto loc_8251E2E0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E2E0:
	// stw r29,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r29.u32);
	// addi r27,r30,60
	r27.s64 = r30.s64 + 60;
	// stw r31,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r31.u8);
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e304
	if (cr6.lt) goto loc_8251E304;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E304:
	// stw r29,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r29.u32);
	// addi r28,r30,32
	r28.s64 = r30.s64 + 32;
	// stw r31,16(r27)
	PPC_STORE_U32(r27.u32 + 16, r31.u32);
	// stb r31,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r31.u8);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e328
	if (cr6.lt) goto loc_8251E328;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E328:
	// stw r29,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r29.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r31,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r31.u32);
	// stb r31,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r31.u8);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251e34c
	if (cr6.lt) goto loc_8251E34C;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251E34C:
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
	// stw r31,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r31.u32);
	// stb r31,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r31.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251E35C"))) PPC_WEAK_FUNC(sub_8251E35C);
PPC_FUNC_IMPL(__imp__sub_8251E35C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8251E360"))) PPC_WEAK_FUNC(sub_8251E360);
PPC_FUNC_IMPL(__imp__sub_8251E360) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251e3bc
	if (cr6.eq) goto loc_8251E3BC;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,21008
	ctx.r8.s64 = ctx.r9.s64 + 21008;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8251E3BC:
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

__attribute__((alias("__imp__sub_8251E3D0"))) PPC_WEAK_FUNC(sub_8251E3D0);
PPC_FUNC_IMPL(__imp__sub_8251E3D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251E3D4"))) PPC_WEAK_FUNC(sub_8251E3D4);
PPC_FUNC_IMPL(__imp__sub_8251E3D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251E3D8"))) PPC_WEAK_FUNC(sub_8251E3D8);
PPC_FUNC_IMPL(__imp__sub_8251E3D8) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251e434
	if (cr6.eq) goto loc_8251E434;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,21020
	ctx.r8.s64 = ctx.r9.s64 + 21020;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_8251E434:
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

__attribute__((alias("__imp__sub_8251E448"))) PPC_WEAK_FUNC(sub_8251E448);
PPC_FUNC_IMPL(__imp__sub_8251E448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251E44C"))) PPC_WEAK_FUNC(sub_8251E44C);
PPC_FUNC_IMPL(__imp__sub_8251E44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251E450"))) PPC_WEAK_FUNC(sub_8251E450);
PPC_FUNC_IMPL(__imp__sub_8251E450) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = r11.s32 / ctx.r10.s32;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r8.u32;
	r11.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r5,-12
	ctx.r5.s64 = ctx.r5.s64 + -12;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r4
	r31.u64 = r11.u64 + ctx.r4.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8251de48
	sub_8251DE48(ctx, base);
	// addi r28,r31,12
	r28.s64 = r31.s64 + 12;
	// cmplw cr6,r25,r31
	cr6.compare<uint32_t>(r25.u32, r31.u32, xer);
	// bge cr6,0x8251e4f4
	if (!cr6.lt) goto loc_8251E4F4;
loc_8251E4AC:
	// addi r30,r31,-12
	r30.s64 = r31.s64 + -12;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251e4f4
	if (!cr6.eq) goto loc_8251E4F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251e4f4
	if (!cr6.eq) goto loc_8251E4F4;
	// mr r31,r30
	r31.u64 = r30.u64;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(r25.u32, r30.u32, xer);
	// blt cr6,0x8251e4ac
	if (cr6.lt) goto loc_8251E4AC;
loc_8251E4F4:
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(r28.u32, r24.u32, xer);
	// bge cr6,0x8251e540
	if (!cr6.lt) goto loc_8251E540;
loc_8251E4FC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251e540
	if (!cr6.eq) goto loc_8251E540;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251e540
	if (!cr6.eq) goto loc_8251E540;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmplw cr6,r28,r24
	cr6.compare<uint32_t>(r28.u32, r24.u32, xer);
	// blt cr6,0x8251e4fc
	if (cr6.lt) goto loc_8251E4FC;
loc_8251E540:
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r27,r31
	r27.u64 = r31.u64;
loc_8251E548:
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// bge cr6,0x8251e5cc
	if (!cr6.lt) goto loc_8251E5CC;
loc_8251E550:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251e5c0
	if (!cr6.eq) goto loc_8251E5C0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251e5cc
	if (!cr6.eq) goto loc_8251E5CC;
	// mr r11,r28
	r11.u64 = r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r8,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r8.u32);
	// stw r7,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r7.u32);
loc_8251E5C0:
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// blt cr6,0x8251e550
	if (cr6.lt) goto loc_8251E550;
loc_8251E5CC:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// ble cr6,0x8251e658
	if (!cr6.gt) goto loc_8251E658;
	// addi r30,r27,-12
	r30.s64 = r27.s64 + -12;
loc_8251E5D8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251e640
	if (!cr6.eq) goto loc_8251E640;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r26
	ctr.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251e654
	if (!cr6.eq) goto loc_8251E654;
	// lwzu r11,-12(r31)
	ea = -12 + r31.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r31.u32 = ea;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r8.u32);
loc_8251E640:
	// addi r11,r27,-12
	r11.s64 = r27.s64 + -12;
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// mr r27,r11
	r27.u64 = r11.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x8251e5d8
	if (cr6.lt) goto loc_8251E5D8;
loc_8251E654:
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
loc_8251E658:
	// bne cr6,0x8251e6e4
	if (!cr6.eq) goto loc_8251E6E4;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// beq cr6,0x8251e79c
	if (cr6.eq) goto loc_8251E79C;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x8251e69c
	if (cr6.eq) goto loc_8251E69C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
loc_8251E69C:
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// b 0x8251e548
	goto loc_8251E548;
loc_8251E6E4:
	// addi r11,r27,-12
	r11.s64 = r27.s64 + -12;
	// cmplw cr6,r29,r24
	cr6.compare<uint32_t>(r29.u32, r24.u32, xer);
	// mr r27,r11
	r27.u64 = r11.u64;
	// bne cr6,0x8251e764
	if (!cr6.eq) goto loc_8251E764;
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x8251e730
	if (cr6.eq) goto loc_8251E730;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r7,4(r27)
	PPC_STORE_U32(r27.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r6,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r6.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
loc_8251E730:
	// lwzu r11,-12(r28)
	ea = -12 + r28.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	r28.u32 = ea;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r7,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r7.u32);
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// b 0x8251e548
	goto loc_8251E548;
loc_8251E764:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r7,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r6,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r5,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r5.u32);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// b 0x8251e548
	goto loc_8251E548;
loc_8251E79C:
	// stw r31,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r31.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r28,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8251E7AC"))) PPC_WEAK_FUNC(sub_8251E7AC);
PPC_FUNC_IMPL(__imp__sub_8251E7AC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9454
	return;
}

__attribute__((alias("__imp__sub_8251E7B0"))) PPC_WEAK_FUNC(sub_8251E7B0);
PPC_FUNC_IMPL(__imp__sub_8251E7B0) {
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
	// li r29,12
	r29.s64 = 12;
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// divw r10,r11,r29
	ctx.r10.s32 = r11.s32 / r29.s32;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// ble cr6,0x8251e840
	if (!cr6.gt) goto loc_8251E840;
	// addi r31,r4,-12
	r31.s64 = ctx.r4.s64 + -12;
loc_8251E7DC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r11,-12
	ctx.r9.s64 = r11.s64 + -12;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// divw r5,r9,r29
	ctx.r5.s32 = ctx.r9.s32 / r29.s32;
	// lwz r27,8(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// bl 0x8251d420
	sub_8251D420(ctx, base);
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// divw r8,r11,r29
	ctx.r8.s32 = r11.s32 / r29.s32;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bgt cr6,0x8251e7dc
	if (cr6.gt) goto loc_8251E7DC;
loc_8251E840:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8251E844"))) PPC_WEAK_FUNC(sub_8251E844);
PPC_FUNC_IMPL(__imp__sub_8251E844) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8251E848"))) PPC_WEAK_FUNC(sub_8251E848);
PPC_FUNC_IMPL(__imp__sub_8251E848) {
	PPC_FUNC_PROLOGUE();
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
	// li r30,0
	r30.s64 = 0;
	// li r29,15
	r29.s64 = 15;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stb r30,32(r31)
	PPC_STORE_U8(r31.u32 + 32, r30.u8);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stb r30,72(r31)
	PPC_STORE_U8(r31.u32 + 72, r30.u8);
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// stb r30,100(r31)
	PPC_STORE_U8(r31.u32 + 100, r30.u8);
	// stw r29,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r29.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stb r30,128(r31)
	PPC_STORE_U8(r31.u32 + 128, r30.u8);
	// bl 0x8251d908
	sub_8251D908(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// addi r9,r10,23372
	ctx.r9.s64 = ctx.r10.s64 + 23372;
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r9,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// or r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 | ctx.r3.u64;
	// addi r5,r7,23492
	ctx.r5.s64 = ctx.r7.s64 + 23492;
	// stw r6,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r5.u32);
	// stw r29,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r29.u32);
	// stw r30,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r30.u32);
	// stb r30,192(r31)
	PPC_STORE_U8(r31.u32 + 192, r30.u8);
	// bl 0x8251d9b8
	sub_8251D9B8(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251E904"))) PPC_WEAK_FUNC(sub_8251E904);
PPC_FUNC_IMPL(__imp__sub_8251E904) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251E908"))) PPC_WEAK_FUNC(sub_8251E908);
PPC_FUNC_IMPL(__imp__sub_8251E908) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e940c
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,12
	r25.s64 = 12;
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x8251e9c4
	if (!cr6.gt) goto loc_8251E9C4;
loc_8251E938:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x8251e9e8
	if (!cr6.gt) goto loc_8251E9E8;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8251e450
	sub_8251E450(ctx, base);
	// srawi r11,r29,1
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r11.s64 = r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r27,84(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = r31.s64 - r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = r26.s64 - r30.s64;
	// divw r7,r9,r25
	ctx.r7.s32 = ctx.r9.s32 / r25.s32;
	// divw r6,r8,r25
	ctx.r6.s32 = ctx.r8.s32 / r25.s32;
	// cmpw cr6,r6,r7
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, xer);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bge cr6,0x8251e9a4
	if (!cr6.lt) goto loc_8251E9A4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251e908
	sub_8251E908(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
	// b 0x8251e9b4
	goto loc_8251E9B4;
loc_8251E9A4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8251e908
	sub_8251E908(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_8251E9B4:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// divw r11,r11,r25
	r11.s32 = r11.s32 / r25.s32;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bgt cr6,0x8251e938
	if (cr6.gt) goto loc_8251E938;
loc_8251E9C4:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8251e9e0
	if (!cr6.gt) goto loc_8251E9E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251df08
	sub_8251DF08(ctx, base);
loc_8251E9E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e945c
	return;
loc_8251E9E8:
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// ble cr6,0x8251e9c4
	if (!cr6.gt) goto loc_8251E9C4;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8251ea10
	if (!cr6.gt) goto loc_8251EA10;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251d6a8
	sub_8251D6A8(ctx, base);
loc_8251EA10:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251e7b0
	sub_8251E7B0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8251EA24"))) PPC_WEAK_FUNC(sub_8251EA24);
PPC_FUNC_IMPL(__imp__sub_8251EA24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8251EA28"))) PPC_WEAK_FUNC(sub_8251EA28);
PPC_FUNC_IMPL(__imp__sub_8251EA28) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8251eab4
	if (cr6.eq) goto loc_8251EAB4;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251ea5c
	if (cr6.lt) goto loc_8251EA5C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251EA5C:
	// li r11,15
	r11.s64 = 15;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stb r29,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r29.u8);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x8251ea90
	if (!cr6.lt) goto loc_8251EA90;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x828eab60
	sub_828EAB60(ctx, base);
	// b 0x8251ea9c
	goto loc_8251EA9C;
loc_8251EA90:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_8251EA9C:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r29.u32);
loc_8251EAB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8251EABC"))) PPC_WEAK_FUNC(sub_8251EABC);
PPC_FUNC_IMPL(__imp__sub_8251EABC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8251EAC0"))) PPC_WEAK_FUNC(sub_8251EAC0);
PPC_FUNC_IMPL(__imp__sub_8251EAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,15972
	ctx.r4.s64 = ctx.r10.s64 + 15972;
	// addi r3,r9,23104
	ctx.r3.s64 = ctx.r9.s64 + 23104;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8251EADC"))) PPC_WEAK_FUNC(sub_8251EADC);
PPC_FUNC_IMPL(__imp__sub_8251EADC) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251EAE0"))) PPC_WEAK_FUNC(sub_8251EAE0);
PPC_FUNC_IMPL(__imp__sub_8251EAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,24348
	ctx.r4.s64 = r11.s64 + 24348;
	// addi r3,r10,23132
	ctx.r3.s64 = ctx.r10.s64 + 23132;
}

__attribute__((alias("__imp__sub_8251EAF4"))) PPC_WEAK_FUNC(sub_8251EAF4);
PPC_FUNC_IMPL(__imp__sub_8251EAF4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251EAF8"))) PPC_WEAK_FUNC(sub_8251EAF8);
PPC_FUNC_IMPL(__imp__sub_8251EAF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r9,r9,0,28,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8251eb48
	if (cr6.eq) goto loc_8251EB48;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stb r10,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r10.u8);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lbz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 128);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8251EB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8251EB58"))) PPC_WEAK_FUNC(sub_8251EB58);
PPC_FUNC_IMPL(__imp__sub_8251EB58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251EB5C"))) PPC_WEAK_FUNC(sub_8251EB5C);
PPC_FUNC_IMPL(__imp__sub_8251EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251EB60"))) PPC_WEAK_FUNC(sub_8251EB60);
PPC_FUNC_IMPL(__imp__sub_8251EB60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r11,-23600
	r30.s64 = r11.s64 + -23600;
	// li r5,260
	ctx.r5.s64 = 260;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r10,23172
	ctx.r5.s64 = ctx.r10.s64 + 23172;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// bl 0x828eb318
	sub_828EB318(ctx, base);
	// subfic r9,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r3.s64;
	// rlwinm r8,r3,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addme r7,r8
	temp.u64 = ctx.r8.u64 + xer.ca - 1;
	xer.ca = (ctx.r8.u64 > temp.u64) || (ctx.r8.u64 == temp.u64 && xer.ca);
	ctx.r7.u64 = temp.u64;
	// and r3,r7,r30
	ctx.r3.u64 = ctx.r7.u64 & r30.u64;
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

__attribute__((alias("__imp__sub_8251EBCC"))) PPC_WEAK_FUNC(sub_8251EBCC);
PPC_FUNC_IMPL(__imp__sub_8251EBCC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251EBD0"))) PPC_WEAK_FUNC(sub_8251EBD0);
PPC_FUNC_IMPL(__imp__sub_8251EBD0) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251ec48
	if (cr6.eq) goto loc_8251EC48;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251eb60
	sub_8251EB60(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9464
	return;
loc_8251EC48:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251EC50"))) PPC_WEAK_FUNC(sub_8251EC50);
PPC_FUNC_IMPL(__imp__sub_8251EC50) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8251EC54"))) PPC_WEAK_FUNC(sub_8251EC54);
PPC_FUNC_IMPL(__imp__sub_8251EC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251EC58"))) PPC_WEAK_FUNC(sub_8251EC58);
PPC_FUNC_IMPL(__imp__sub_8251EC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-23336
	ctx.r4.s64 = r11.s64 + -23336;
}

__attribute__((alias("__imp__sub_8251EC64"))) PPC_WEAK_FUNC(sub_8251EC64);
PPC_FUNC_IMPL(__imp__sub_8251EC64) {
	PPC_FUNC_PROLOGUE();
	// b 0x825201c0
	sub_825201C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251EC68"))) PPC_WEAK_FUNC(sub_8251EC68);
PPC_FUNC_IMPL(__imp__sub_8251EC68) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r10,r10,0,28,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8251ece8
	if (cr6.eq) goto loc_8251ECE8;
	// bl 0x8251eaf8
	sub_8251EAF8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8251ece0
	if (cr6.eq) goto loc_8251ECE0;
	// li r11,0
	r11.s64 = 0;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// li r10,64
	ctx.r10.s64 = 64;
	// stb r30,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r10,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r10.u8);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
loc_8251ECE0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8251ecec
	goto loc_8251ECEC;
loc_8251ECE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8251ECEC:
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

__attribute__((alias("__imp__sub_8251ED00"))) PPC_WEAK_FUNC(sub_8251ED00);
PPC_FUNC_IMPL(__imp__sub_8251ED00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251ED04"))) PPC_WEAK_FUNC(sub_8251ED04);
PPC_FUNC_IMPL(__imp__sub_8251ED04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251ED08"))) PPC_WEAK_FUNC(sub_8251ED08);
PPC_FUNC_IMPL(__imp__sub_8251ED08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// lfd f0,23208(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23208);
	// fsub f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 - f0.f64;
	// lfd f13,23200(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 23200);
	// lfd f29,18264(r8)
	f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + 18264);
	// fmul f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f13,f10,f0,f31
	ctx.f13.f64 = ctx.f10.f64 * f0.f64 + f31.f64;
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bne cr6,0x8251ed8c
	if (!cr6.eq) goto loc_8251ED8C;
	// fadd f12,f0,f29
	ctx.f12.f64 = f0.f64 + f29.f64;
	// fadd f0,f12,f30
	f0.f64 = ctx.f12.f64 + f30.f64;
	// b 0x8251ed90
	goto loc_8251ED90;
loc_8251ED8C:
	// fadd f0,f0,f30
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 + f30.f64;
loc_8251ED90:
	// lbz r10,129(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lis r28,-32254
	r28.s64 = -2113798144;
	// stfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r9,r10,24
	ctx.r9.u64 = ctx.r10.u64 | 24;
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfd f0,23192(r28)
	f0.u64 = PPC_LOAD_U64(r28.u32 + 23192);
	// ori r7,r8,3
	ctx.r7.u64 = ctx.r8.u64 | 3;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// stb r7,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r7.u8);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// lfd f0,23184(r6)
	f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + 23184);
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + f0.f64;
	// fadd f12,f12,f31
	ctx.f12.f64 = ctx.f12.f64 + f31.f64;
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bne cr6,0x8251ee08
	if (!cr6.eq) goto loc_8251EE08;
	// fadd f13,f0,f29
	ctx.f13.f64 = f0.f64 + f29.f64;
	// fadd f13,f13,f30
	ctx.f13.f64 = ctx.f13.f64 + f30.f64;
	// b 0x8251ee0c
	goto loc_8251EE0C;
loc_8251EE08:
	// fadd f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f0.f64 + f30.f64;
loc_8251EE0C:
	// lbz r10,129(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lfd f0,23192(r28)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r28.u32 + 23192);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r9,r10,24
	ctx.r9.u64 = ctx.r10.u64 | 24;
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r7,r8,3
	ctx.r7.u64 = ctx.r8.u64 | 3;
	// stb r7,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r7.u8);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8251EE54"))) PPC_WEAK_FUNC(sub_8251EE54);
PPC_FUNC_IMPL(__imp__sub_8251EE54) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251EE58"))) PPC_WEAK_FUNC(sub_8251EE58);
PPC_FUNC_IMPL(__imp__sub_8251EE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// std r10,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r10.u64);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lbz r8,129(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ori r7,r8,24
	ctx.r7.u64 = ctx.r8.u64 | 24;
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,224(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r6,r7,24
	ctx.r6.u64 = ctx.r7.u32 & 0xFF;
	// lfd f12,248(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// fadd f9,f11,f13
	ctx.f9.f64 = ctx.f11.f64 + ctx.f13.f64;
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// ori r11,r6,3
	r11.u64 = ctx.r6.u64 | 3;
	// lfd f0,23192(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 23192);
	// fadd f8,f10,f12
	ctx.f8.f64 = ctx.f10.f64 + ctx.f12.f64;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lfd f5,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r9,129(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lfd f7,232(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// lis r31,-32254
	r31.s64 = -2113798144;
	// fadd f4,f5,f7
	ctx.f4.f64 = ctx.f5.f64 + ctx.f7.f64;
	// ori r8,r9,24
	ctx.r8.u64 = ctx.r9.u64 | 24;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfd f3,88(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lfd f6,256(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// fadd f2,f3,f6
	ctx.f2.f64 = ctx.f3.f64 + ctx.f6.f64;
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lfd f13,23208(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 23208);
	// ori r6,r7,3
	ctx.r6.u64 = ctx.r7.u64 | 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lfd f0,16952(r28)
	f0.u64 = PPC_LOAD_U64(r28.u32 + 16952);
	// stb r6,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// fadd f1,f4,f13
	ctx.f1.f64 = ctx.f4.f64 + ctx.f13.f64;
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f11,240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lfd f0,16952(r28)
	f0.u64 = PPC_LOAD_U64(r28.u32 + 16952);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lfd f13,23208(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 23208);
	// lbz r9,129(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lfd f10,264(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfd f12,23216(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 23216);
	// fadd f8,f9,f11
	ctx.f8.f64 = ctx.f9.f64 + ctx.f11.f64;
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// fadd f6,f7,f10
	ctx.f6.f64 = ctx.f7.f64 + ctx.f10.f64;
	// ori r8,r9,24
	ctx.r8.u64 = ctx.r9.u64 | 24;
	// fadd f5,f8,f13
	ctx.f5.f64 = ctx.f8.f64 + ctx.f13.f64;
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// ori r6,r7,3
	ctx.r6.u64 = ctx.r7.u64 | 3;
	// stb r6,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
	// fadd f4,f6,f12
	ctx.f4.f64 = ctx.f6.f64 + ctx.f12.f64;
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
}

__attribute__((alias("__imp__sub_8251EFD4"))) PPC_WEAK_FUNC(sub_8251EFD4);
PPC_FUNC_IMPL(__imp__sub_8251EFD4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251EFD8"))) PPC_WEAK_FUNC(sub_8251EFD8);
PPC_FUNC_IMPL(__imp__sub_8251EFD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// std r8,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r8.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// std r9,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r9.u64);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// std r10,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r10.u64);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lbz r9,129(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lis r27,-32256
	r27.s64 = -2113929216;
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ori r8,r9,24
	ctx.r8.u64 = ctx.r9.u64 | 24;
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,256(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// lfd f12,288(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fadd f9,f11,f13
	ctx.f9.f64 = ctx.f11.f64 + ctx.f13.f64;
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// ori r6,r7,3
	ctx.r6.u64 = ctx.r7.u64 | 3;
	// lfd f0,16952(r27)
	f0.u64 = PPC_LOAD_U64(r27.u32 + 16952);
	// fadd f8,f10,f12
	ctx.f8.f64 = ctx.f10.f64 + ctx.f12.f64;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// stb r6,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
	// stfd f8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lfd f5,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r10,129(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lfd f7,264(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// lis r31,-32254
	r31.s64 = -2113798144;
	// fadd f4,f5,f7
	ctx.f4.f64 = ctx.f5.f64 + ctx.f7.f64;
	// ori r9,r10,24
	ctx.r9.u64 = ctx.r10.u64 | 24;
	// lfd f0,16952(r27)
	f0.u64 = PPC_LOAD_U64(r27.u32 + 16952);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lfd f3,88(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ori r7,r8,3
	ctx.r7.u64 = ctx.r8.u64 | 3;
	// lfd f6,296(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfd f0,23208(r31)
	f0.u64 = PPC_LOAD_U64(r31.u32 + 23208);
	// fadd f2,f3,f6
	ctx.f2.f64 = ctx.f3.f64 + ctx.f6.f64;
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// stb r7,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r7.u8);
	// fadd f1,f4,f0
	ctx.f1.f64 = ctx.f4.f64 + f0.f64;
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lis r30,-32254
	r30.s64 = -2113798144;
	// lfd f9,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f12,272(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lfd f0,16952(r27)
	f0.u64 = PPC_LOAD_U64(r27.u32 + 16952);
	// fadd f8,f9,f12
	ctx.f8.f64 = ctx.f9.f64 + ctx.f12.f64;
	// lfd f13,304(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lbz r11,129(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// fadd f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 + ctx.f13.f64;
	// lfd f0,23216(r30)
	f0.u64 = PPC_LOAD_U64(r30.u32 + 23216);
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// ori r10,r11,24
	ctx.r10.u64 = r11.u64 | 24;
	// fadd f7,f10,f0
	ctx.f7.f64 = ctx.f10.f64 + f0.f64;
	// stfd f7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// ori r8,r9,3
	ctx.r8.u64 = ctx.r9.u64 | 3;
	// stb r8,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r8.u8);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lfd f4,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r6,129(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lfd f6,280(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfd f3,88(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fadd f2,f4,f6
	ctx.f2.f64 = ctx.f4.f64 + ctx.f6.f64;
	// lfd f5,312(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// ori r11,r6,24
	r11.u64 = ctx.r6.u64 | 24;
	// fadd f1,f3,f5
	ctx.f1.f64 = ctx.f3.f64 + ctx.f5.f64;
	// lfd f0,16952(r27)
	f0.u64 = PPC_LOAD_U64(r27.u32 + 16952);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// lfd f13,23208(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 23208);
	// lfd f12,23216(r30)
	ctx.f12.u64 = PPC_LOAD_U64(r30.u32 + 23216);
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stb r9,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r9.u8);
	// fadd f0,f2,f13
	f0.f64 = ctx.f2.f64 + ctx.f13.f64;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// fadd f13,f1,f12
	ctx.f13.f64 = ctx.f1.f64 + ctx.f12.f64;
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8251F1B8"))) PPC_WEAK_FUNC(sub_8251F1B8);
PPC_FUNC_IMPL(__imp__sub_8251F1B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8251F1BC"))) PPC_WEAK_FUNC(sub_8251F1BC);
PPC_FUNC_IMPL(__imp__sub_8251F1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251F1C0"))) PPC_WEAK_FUNC(sub_8251F1C0);
PPC_FUNC_IMPL(__imp__sub_8251F1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lbz r9,129(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 129);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r8,r9,24
	ctx.r8.u64 = ctx.r9.u64 | 24;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fadd f12,f0,f31
	ctx.f12.f64 = f0.f64 + f31.f64;
	// stfd f29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f29.u64);
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// fadd f11,f13,f30
	ctx.f11.f64 = ctx.f13.f64 + f30.f64;
	// stfd f29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f29.u64);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// ori r6,r7,3
	ctx.r6.u64 = ctx.r7.u64 | 3;
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stb r6,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, ctx.r6.u8);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251F264"))) PPC_WEAK_FUNC(sub_8251F264);
PPC_FUNC_IMPL(__imp__sub_8251F264) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F268"))) PPC_WEAK_FUNC(sub_8251F268);
PPC_FUNC_IMPL(__imp__sub_8251F268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251f29c
	if (cr6.eq) goto loc_8251F29C;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
loc_8251F29C:
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// lwz r31,124(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// li r28,0
	r28.s64 = 0;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x8251f364
	if (cr6.eq) goto loc_8251F364;
loc_8251F2D0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251f2e4
	if (cr6.lt) goto loc_8251F2E4;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8251f2e8
	goto loc_8251F2E8;
loc_8251F2E4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8251F2E8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8251f340
	if (cr6.eq) goto loc_8251F340;
	// stb r28,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, r28.u8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82756da8
	sub_82756DA8(ctx, base);
	// lbz r10,145(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 145);
	// stfd f31,136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 136, f31.u64);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r9,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r9.u8);
	// bl 0x82756f30
	sub_82756F30(ctx, base);
loc_8251F340:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bne cr6,0x8251f2d0
	if (!cr6.eq) goto loc_8251F2D0;
loc_8251F364:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251f388
	if (cr6.eq) goto loc_8251F388;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_8251F388:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8251f398
	if (cr6.eq) goto loc_8251F398;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
loc_8251F398:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8251F3A0"))) PPC_WEAK_FUNC(sub_8251F3A0);
PPC_FUNC_IMPL(__imp__sub_8251F3A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251F3A4"))) PPC_WEAK_FUNC(sub_8251F3A4);
PPC_FUNC_IMPL(__imp__sub_8251F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251F3A8"))) PPC_WEAK_FUNC(sub_8251F3A8);
PPC_FUNC_IMPL(__imp__sub_8251F3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfd f2,16944(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + 16944);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
}

__attribute__((alias("__imp__sub_8251F3B8"))) PPC_WEAK_FUNC(sub_8251F3B8);
PPC_FUNC_IMPL(__imp__sub_8251F3B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251ed08
	sub_8251ED08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251F3BC"))) PPC_WEAK_FUNC(sub_8251F3BC);
PPC_FUNC_IMPL(__imp__sub_8251F3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251F3C0"))) PPC_WEAK_FUNC(sub_8251F3C0);
PPC_FUNC_IMPL(__imp__sub_8251F3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfd f0,16944(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, f0.u64);
	// li r5,16
	ctx.r5.s64 = 16;
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, f0.u64);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, f0.u64);
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f0.u64);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, f0.u64);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f0.u64);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ld r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x8251ee58
	sub_8251EE58(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_8251F448"))) PPC_WEAK_FUNC(sub_8251F448);
PPC_FUNC_IMPL(__imp__sub_8251F448) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251F44C"))) PPC_WEAK_FUNC(sub_8251F44C);
PPC_FUNC_IMPL(__imp__sub_8251F44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251F450"))) PPC_WEAK_FUNC(sub_8251F450);
PPC_FUNC_IMPL(__imp__sub_8251F450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9414
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfd f0,16944(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16944);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, f0.u64);
	// li r5,40
	ctx.r5.s64 = 40;
	// stfd f0,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, f0.u64);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, f0.u64);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, f0.u64);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// stfd f0,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, f0.u64);
	// stfd f0,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, f0.u64);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, f0.u64);
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, f0.u64);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ld r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251efd8
	sub_8251EFD8(ctx, base);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8251F4E4"))) PPC_WEAK_FUNC(sub_8251F4E4);
PPC_FUNC_IMPL(__imp__sub_8251F4E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8251F4E8"))) PPC_WEAK_FUNC(sub_8251F4E8);
PPC_FUNC_IMPL(__imp__sub_8251F4E8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r5,r10,17012
	ctx.r5.s64 = ctx.r10.s64 + 17012;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r30
	r31.u64 = r30.u64;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r8,4(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251f638
	if (cr6.eq) goto loc_8251F638;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r24,4
	r24.s64 = 4;
	// addi r28,r11,18280
	r28.s64 = r11.s64 + 18280;
	// addi r27,r10,23224
	r27.s64 = ctx.r10.s64 + 23224;
loc_8251F580:
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(r31.s32, 10, xer);
	// bge cr6,0x8251f638
	if (!cr6.lt) goto loc_8251F638;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r25.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827568b8
	sub_827568B8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8251f600
	if (cr6.eq) goto loc_8251F600;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_8251F600:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x8251f580
	if (!cr6.eq) goto loc_8251F580;
loc_8251F638:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251f658
	if (cr6.eq) goto loc_8251F658;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_8251F658:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_8251F664"))) PPC_WEAK_FUNC(sub_8251F664);
PPC_FUNC_IMPL(__imp__sub_8251F664) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8251F668"))) PPC_WEAK_FUNC(sub_8251F668);
PPC_FUNC_IMPL(__imp__sub_8251F668) {
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
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// addi r5,r10,23240
	ctx.r5.s64 = ctx.r10.s64 + 23240;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r5,r7,23232
	ctx.r5.s64 = ctx.r7.s64 + 23232;
	// rlwinm r11,r11,0,28,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x827586c0
	sub_827586C0(ctx, base);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r8,26,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8251f710
	if (cr6.eq) goto loc_8251F710;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x8251f714
	goto loc_8251F714;
loc_8251F710:
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_8251F714:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8251f4e8
	sub_8251F4E8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251f748
	if (cr6.eq) goto loc_8251F748;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8251F748:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8251f768
	if (cr6.eq) goto loc_8251F768;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82757960
	sub_82757960(ctx, base);
loc_8251F768:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8251F76C"))) PPC_WEAK_FUNC(sub_8251F76C);
PPC_FUNC_IMPL(__imp__sub_8251F76C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8251F770"))) PPC_WEAK_FUNC(sub_8251F770);
PPC_FUNC_IMPL(__imp__sub_8251F770) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,23248
	ctx.r5.s64 = ctx.r10.s64 + 23248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// bl 0x8250ce68
	sub_8250CE68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251f668
	sub_8251F668(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251F7E8"))) PPC_WEAK_FUNC(sub_8251F7E8);
PPC_FUNC_IMPL(__imp__sub_8251F7E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F7EC"))) PPC_WEAK_FUNC(sub_8251F7EC);
PPC_FUNC_IMPL(__imp__sub_8251F7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251F7F0"))) PPC_WEAK_FUNC(sub_8251F7F0);
PPC_FUNC_IMPL(__imp__sub_8251F7F0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881480
	sub_82881480(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251f8cc
	if (cr6.eq) goto loc_8251F8CC;
	// bl 0x8274ee38
	sub_8274EE38(ctx, base);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// li r29,0
	r29.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8251f8b8
	if (!cr6.gt) goto loc_8251F8B8;
	// mr r31,r29
	r31.u64 = r29.u64;
loc_8251F838:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x8251f858
	if (cr6.lt) goto loc_8251F858;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8251F858:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r9,64(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r6,r27,24
	ctx.r6.u64 = r27.u32 & 0xFF;
	// rlwinm r5,r8,26,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 26) & 0x1;
	// and r27,r7,r6
	r27.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8251f8a4
	if (cr6.eq) goto loc_8251F8A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82757960
	sub_82757960(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_8251F8A4:
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8251f838
	if (cr6.lt) goto loc_8251F838;
loc_8251F8B8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8274ee60
	sub_8274EE60(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9460
	return;
loc_8251F8CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8251F8D4"))) PPC_WEAK_FUNC(sub_8251F8D4);
PPC_FUNC_IMPL(__imp__sub_8251F8D4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8251F8D8"))) PPC_WEAK_FUNC(sub_8251F8D8);
PPC_FUNC_IMPL(__imp__sub_8251F8D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r10,13432
	ctx.r5.s64 = ctx.r10.s64 + 13432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// bl 0x8250ce68
	sub_8250CE68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251f668
	sub_8251F668(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251F950"))) PPC_WEAK_FUNC(sub_8251F950);
PPC_FUNC_IMPL(__imp__sub_8251F950) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F954"))) PPC_WEAK_FUNC(sub_8251F954);
PPC_FUNC_IMPL(__imp__sub_8251F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8251F958"))) PPC_WEAK_FUNC(sub_8251F958);
PPC_FUNC_IMPL(__imp__sub_8251F958) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// addi r5,r10,-30376
	ctx.r5.s64 = ctx.r10.s64 + -30376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// bl 0x8250ce68
	sub_8250CE68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251f668
	sub_8251F668(ctx, base);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251F9D4"))) PPC_WEAK_FUNC(sub_8251F9D4);
PPC_FUNC_IMPL(__imp__sub_8251F9D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251F9D8"))) PPC_WEAK_FUNC(sub_8251F9D8);
PPC_FUNC_IMPL(__imp__sub_8251F9D8) {
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
	// lwz r11,132(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8251fa20
	if (!cr6.gt) goto loc_8251FA20;
	// li r31,0
	r31.s64 = 0;
loc_8251F9FC:
	// lwz r11,124(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 124);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
	// bl 0x82520960
	sub_82520960(ctx, base);
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8251f9fc
	if (cr6.lt) goto loc_8251F9FC;
loc_8251FA20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8251FA24"))) PPC_WEAK_FUNC(sub_8251FA24);
PPC_FUNC_IMPL(__imp__sub_8251FA24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8251FA28"))) PPC_WEAK_FUNC(sub_8251FA28);
PPC_FUNC_IMPL(__imp__sub_8251FA28) {
	PPC_FUNC_PROLOGUE();
	// b 0x8251f9d8
	sub_8251F9D8(ctx, base);
	return;
}

