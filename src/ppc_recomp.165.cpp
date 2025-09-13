#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825BDDD8"))) PPC_WEAK_FUNC(sub_825BDDD8);
PPC_FUNC_IMPL(__imp__sub_825BDDD8) {
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
	// lis r30,-31970
	r30.s64 = -2095185920;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825bde64
	if (cr6.eq) goto loc_825BDE64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bde64
	if (cr6.eq) goto loc_825BDE64;
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825bde20
	if (cr6.eq) goto loc_825BDE20;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bde24
	if (!cr6.eq) goto loc_825BDE24;
loc_825BDE20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825BDE24:
	// lwz r11,92(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bde64
	if (cr6.eq) goto loc_825BDE64;
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bne cr6,0x825bde60
	if (!cr6.eq) goto loc_825BDE60;
	// bl 0x825bf510
	sub_825BF510(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_825BDE60:
	// bl 0x825bf580
	sub_825BF580(ctx, base);
loc_825BDE64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825BDE70"))) PPC_WEAK_FUNC(sub_825BDE70);
PPC_FUNC_IMPL(__imp__sub_825BDE70) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825BDE74"))) PPC_WEAK_FUNC(sub_825BDE74);
PPC_FUNC_IMPL(__imp__sub_825BDE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDE78"))) PPC_WEAK_FUNC(sub_825BDE78);
PPC_FUNC_IMPL(__imp__sub_825BDE78) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,-3764
	ctx.r10.s64 = r11.s64 + -3764;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// bl 0x826cc400
	sub_826CC400(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// or r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 | ctx.r3.u64;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r30,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r6,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// bl 0x825bdc40
	sub_825BDC40(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x826cb378
	sub_826CB378(ctx, base);
	// stw r29,1144(r31)
	PPC_STORE_U32(r31.u32 + 1144, r29.u32);
	// stb r30,1148(r31)
	PPC_STORE_U8(r31.u32 + 1148, r30.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_825BDEF0"))) PPC_WEAK_FUNC(sub_825BDEF0);
PPC_FUNC_IMPL(__imp__sub_825BDEF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825BDEF4"))) PPC_WEAK_FUNC(sub_825BDEF4);
PPC_FUNC_IMPL(__imp__sub_825BDEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDEF8"))) PPC_WEAK_FUNC(sub_825BDEF8);
PPC_FUNC_IMPL(__imp__sub_825BDEF8) {
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
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// bl 0x826cb960
	sub_826CB960(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bef80
	sub_825BEF80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BDF2C"))) PPC_WEAK_FUNC(sub_825BDF2C);
PPC_FUNC_IMPL(__imp__sub_825BDF2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BDF30"))) PPC_WEAK_FUNC(sub_825BDF30);
PPC_FUNC_IMPL(__imp__sub_825BDF30) {
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
	// lbz r11,1148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1148);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bdfe4
	if (cr6.eq) goto loc_825BDFE4;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825bdfe4
	if (!cr6.gt) goto loc_825BDFE4;
	// li r29,0
	r29.s64 = 0;
loc_825BDF64:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bdfd0
	if (cr6.eq) goto loc_825BDFD0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bdfd0
	if (cr6.eq) goto loc_825BDFD0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r30,r11,104
	r30.s64 = r11.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bdfd0
	if (cr6.eq) goto loc_825BDFD0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bdfd0
	if (!cr6.eq) goto loc_825BDFD0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825BDFD0:
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x825bdf64
	if (cr6.lt) goto loc_825BDF64;
loc_825BDFE4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825BDFE8"))) PPC_WEAK_FUNC(sub_825BDFE8);
PPC_FUNC_IMPL(__imp__sub_825BDFE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825BDFEC"))) PPC_WEAK_FUNC(sub_825BDFEC);
PPC_FUNC_IMPL(__imp__sub_825BDFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BDFF0"))) PPC_WEAK_FUNC(sub_825BDFF0);
PPC_FUNC_IMPL(__imp__sub_825BDFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x825be038
	if (!cr6.eq) goto loc_825BE038;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x825be038
	if (!cr6.eq) goto loc_825BE038;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825be038
	if (!cr6.eq) goto loc_825BE038;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
loc_825BE038:
	// lwz r11,1144(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 1144);
	// lis r25,-31934
	r25.s64 = -2092826624;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825be070
	if (cr6.lt) goto loc_825BE070;
	// addi r11,r11,52
	r11.s64 = r11.s64 + 52;
	// lwz r10,18436(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 18436);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r3,80(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be070
	if (cr6.eq) goto loc_825BE070;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x8253caa8
	sub_8253CAA8(ctx, base);
loc_825BE070:
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be0a8
	if (cr6.eq) goto loc_825BE0A8;
	// bl 0x825bc170
	sub_825BC170(ctx, base);
	// lwz r3,24(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be0a8
	if (cr6.eq) goto loc_825BE0A8;
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
	// stw r27,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r27.u32);
loc_825BE0A8:
	// lwz r31,1144(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 1144);
	// mr r23,r27
	r23.u64 = r27.u64;
	// mr r24,r27
	r24.u64 = r27.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825be160
	if (cr6.lt) goto loc_825BE160;
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x825be10c
	if (cr6.eq) goto loc_825BE10C;
	// lwz r11,18436(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 18436);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
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
	// beq cr6,0x825be108
	if (cr6.eq) goto loc_825BE108;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r9,r10,30112
	ctx.r9.s64 = ctx.r10.s64 + 30112;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825BE108:
	// li r23,1
	r23.s64 = 1;
loc_825BE10C:
	// lwz r29,12(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x825be160
	if (cr6.eq) goto loc_825BE160;
	// lwz r11,18436(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 18436);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r30,1144(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 1144);
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
	// beq cr6,0x825be15c
	if (cr6.eq) goto loc_825BE15C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r29,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,-3812
	ctx.r9.s64 = ctx.r10.s64 + -3812;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825BE15C:
	// li r24,1
	r24.s64 = 1;
loc_825BE160:
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x825be1a4
	if (cr6.eq) goto loc_825BE1A4;
	// lwz r11,18436(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 18436);
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// bl 0x825538a0
	sub_825538A0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825be1a4
	if (!cr6.eq) goto loc_825BE1A4;
	// lwz r11,18436(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 18436);
	// lwz r4,16(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x82554bd0
	sub_82554BD0(ctx, base);
loc_825BE1A4:
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825be28c
	if (cr6.eq) goto loc_825BE28C;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r8,1144(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 1144);
	// lwz r11,19020(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19020);
	// lwz r3,-14368(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14368);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x825be1f0
	if (cr6.eq) goto loc_825BE1F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825be1f4
	if (!cr6.eq) goto loc_825BE1F4;
loc_825BE1F0:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825BE1F4:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be240
	if (cr6.eq) goto loc_825BE240;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825be240
	if (!cr6.eq) goto loc_825BE240;
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
loc_825BE240:
	// lwz r11,18436(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 18436);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r30,20(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r29,1144(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 1144);
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
	// beq cr6,0x825be288
	if (cr6.eq) goto loc_825BE288;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r29.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,-3788
	ctx.r9.s64 = ctx.r10.s64 + -3788;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825BE288:
	// li r27,1
	r27.s64 = 1;
loc_825BE28C:
	// clrlwi r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825be300
	if (cr6.eq) goto loc_825BE300;
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825be2bc
	if (!cr6.eq) goto loc_825BE2BC;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825be2bc
	if (!cr6.eq) goto loc_825BE2BC;
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825be300
	if (cr6.eq) goto loc_825BE300;
loc_825BE2BC:
	// lwz r11,18436(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 18436);
	// li r5,16
	ctx.r5.s64 = 16;
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
	// beq cr6,0x825be300
	if (cr6.eq) goto loc_825BE300;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stb r23,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r23.u8);
	// stb r27,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, r27.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,-3776
	ctx.r9.s64 = ctx.r10.s64 + -3776;
	// stb r24,18(r11)
	PPC_STORE_U8(r11.u32 + 18, r24.u8);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825BE300:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
}

__attribute__((alias("__imp__sub_825BE304"))) PPC_WEAK_FUNC(sub_825BE304);
PPC_FUNC_IMPL(__imp__sub_825BE304) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_825BE308"))) PPC_WEAK_FUNC(sub_825BE308);
PPC_FUNC_IMPL(__imp__sub_825BE308) {
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
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825be450
	if (cr6.eq) goto loc_825BE450;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r28
	r11.u64 = r28.u64;
loc_825BE338:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825be354
	if (cr6.eq) goto loc_825BE354;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beq cr6,0x825be36c
	if (cr6.eq) goto loc_825BE36C;
loc_825BE354:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x825be338
	if (cr6.lt) goto loc_825BE338;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9468
	return;
loc_825BE36C:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r9
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825be450
	if (cr6.eq) goto loc_825BE450;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be3c4
	if (cr6.eq) goto loc_825BE3C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822b27c0
	sub_822B27C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825be3c4
	if (cr6.eq) goto loc_825BE3C4;
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825be3c8
	goto loc_825BE3C8;
loc_825BE3C4:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_825BE3C8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r7,r10,-3752
	ctx.r7.s64 = ctx.r10.s64 + -3752;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// li r8,299
	ctx.r8.s64 = 299;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,232
	ctx.r3.s64 = 232;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be418
	if (cr6.eq) goto loc_825BE418;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,1144(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 1144);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x825bc5d0
	sub_825BC5D0(ctx, base);
	// b 0x825be41c
	goto loc_825BE41C;
loc_825BE418:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_825BE41C:
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// bl 0x825bc308
	sub_825BC308(ctx, base);
	// lwz r11,1144(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825be450
	if (cr6.lt) goto loc_825BE450;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r9,r11,52
	ctx.r9.s64 = r11.s64 + 52;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18436(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18436);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r4,80(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// bl 0x825bc3c8
	sub_825BC3C8(ctx, base);
loc_825BE450:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825BE454"))) PPC_WEAK_FUNC(sub_825BE454);
PPC_FUNC_IMPL(__imp__sub_825BE454) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825BE458"))) PPC_WEAK_FUNC(sub_825BE458);
PPC_FUNC_IMPL(__imp__sub_825BE458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825be494
	if (cr6.eq) goto loc_825BE494;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9468
	return;
loc_825BE494:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r30,0
	r30.s64 = 0;
	// stw r29,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r29.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be4c0
	if (cr6.eq) goto loc_825BE4C0;
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
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
loc_825BE4C0:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r30.u32);
	// addi r7,r10,-3752
	ctx.r7.s64 = ctx.r10.s64 + -3752;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// li r8,403
	ctx.r8.s64 = 403;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// li r3,12
	ctx.r3.s64 = 12;
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
	// beq cr6,0x825be518
	if (cr6.eq) goto loc_825BE518;
	// lwz r11,1144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1144);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x825be51c
	goto loc_825BE51C;
loc_825BE518:
	// mr r31,r30
	r31.u64 = r30.u64;
loc_825BE51C:
	// lis r11,-32164
	r11.s64 = -2107899904;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r30.u32);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// addi r9,r11,-8744
	ctx.r9.s64 = r11.s64 + -8744;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r30.u32);
	// lis r10,-32204
	ctx.r10.s64 = -2110521344;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r30.u32);
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// addi r5,r10,-26288
	ctx.r5.s64 = ctx.r10.s64 + -26288;
	// lis r4,-32164
	ctx.r4.s64 = -2107899904;
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// subfe r11,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r10,19
	ctx.r10.s64 = 19;
	// and r9,r11,r5
	ctx.r9.u64 = r11.u64 & ctx.r5.u64;
	// addi r8,r4,-8744
	ctx.r8.s64 = ctx.r4.s64 + -8744;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// beq cr6,0x825be580
	if (cr6.eq) goto loc_825BE580;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825be584
	if (!cr6.eq) goto loc_825BE584;
loc_825BE580:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825BE584:
	// lis r5,-31934
	ctx.r5.s64 = -2092826624;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// lwz r4,18432(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18432);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cd980
	sub_826CD980(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825BE5B4"))) PPC_WEAK_FUNC(sub_825BE5B4);
PPC_FUNC_IMPL(__imp__sub_825BE5B4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825BE5B8"))) PPC_WEAK_FUNC(sub_825BE5B8);
PPC_FUNC_IMPL(__imp__sub_825BE5B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be5f4
	if (cr6.eq) goto loc_825BE5F4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825be5f8
	goto loc_825BE5F8;
loc_825BE5F4:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_825BE5F8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// addi r7,r10,-3752
	ctx.r7.s64 = ctx.r10.s64 + -3752;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r8,414
	ctx.r8.s64 = 414;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,232
	ctx.r3.s64 = 232;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r27,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r27.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be64c
	if (cr6.eq) goto loc_825BE64C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,1144(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 1144);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x825bc5d0
	sub_825BC5D0(ctx, base);
	// b 0x825be650
	goto loc_825BE650;
loc_825BE64C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_825BE650:
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r11,1144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825be67c
	if (cr6.lt) goto loc_825BE67C;
	// addi r10,r11,52
	ctx.r10.s64 = r11.s64 + 52;
	// lwz r11,18436(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18436);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwz r4,80(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// bl 0x825bc3c8
	sub_825BC3C8(ctx, base);
loc_825BE67C:
	// addi r29,r31,120
	r29.s64 = r31.s64 + 120;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825bbf18
	sub_825BBF18(ctx, base);
	// lwz r11,18436(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 18436);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,1056
	ctx.r4.s64 = 1056;
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r30,100(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825be6e0
	if (cr6.eq) goto loc_825BE6E0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r10,r11,-3800
	ctx.r10.s64 = r11.s64 + -3800;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825BE6E0:
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// beq cr6,0x825be71c
	if (cr6.eq) goto loc_825BE71C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x825be458
	sub_825BE458(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r27,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r27.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_825BE71C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825BE720"))) PPC_WEAK_FUNC(sub_825BE720);
PPC_FUNC_IMPL(__imp__sub_825BE720) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825BE724"))) PPC_WEAK_FUNC(sub_825BE724);
PPC_FUNC_IMPL(__imp__sub_825BE724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BE728"))) PPC_WEAK_FUNC(sub_825BE728);
PPC_FUNC_IMPL(__imp__sub_825BE728) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825be7f4
	if (cr6.lt) goto loc_825BE7F4;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,52
	ctx.r9.s64 = r11.s64 + 52;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18436(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18436);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r30,80(r7)
	r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8253c6f0
	sub_8253C6F0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,24(r31)
	PPC_STORE_U8(r31.u32 + 24, ctx.r3.u8);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x825be7e8
	if (!cr6.eq) goto loc_825BE7E8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// bl 0x822d7b30
	sub_822D7B30(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r4,21540(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 21540);
	// bl 0x826cf1a0
	sub_826CF1A0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822b28b8
	sub_822B28B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,1144(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 1144);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825bc5d0
	sub_825BC5D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825bc3c8
	sub_825BC3C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825bbf98
	sub_825BBF98(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x825bd318
	sub_825BD318(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
loc_825BE7E8:
	// lbz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x828e9464
	return;
loc_825BE7F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
}

__attribute__((alias("__imp__sub_825BE7FC"))) PPC_WEAK_FUNC(sub_825BE7FC);
PPC_FUNC_IMPL(__imp__sub_825BE7FC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825BE800"))) PPC_WEAK_FUNC(sub_825BE800);
PPC_FUNC_IMPL(__imp__sub_825BE800) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// lwz r3,-14368(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825be834
	if (cr6.eq) goto loc_825BE834;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825be838
	if (!cr6.eq) goto loc_825BE838;
loc_825BE834:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_825BE838:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,96(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// addi r4,r10,5264
	ctx.r4.s64 = ctx.r10.s64 + 5264;
	// bl 0x8241c590
	sub_8241C590(ctx, base);
	// lwz r11,1144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1144);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r18,r24
	r18.u64 = r24.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825be874
	if (cr6.lt) goto loc_825BE874;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,52
	ctx.r9.s64 = r11.s64 + 52;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18436(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18436);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r18,80(r7)
	r18.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
loc_825BE874:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-3616
	ctx.r5.s64 = r11.s64 + -3616;
	// bl 0x8272e088
	sub_8272E088(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r24
	r31.u64 = r24.u64;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825be8ac
	if (!cr6.eq) goto loc_825BE8AC;
loc_825BE898:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825be898
	if (cr6.eq) goto loc_825BE898;
loc_825BE8AC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x825be8d0
	if (!cr6.gt) goto loc_825BE8D0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825BE8D0:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// bl 0x8272db68
	sub_8272DB68(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825bece8
	if (!cr6.eq) goto loc_825BECE8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r20,-31934
	r20.s64 = -2092826624;
	// li r23,-1
	r23.s64 = -1;
	// li r19,21
	r19.s64 = 21;
	// addi r22,r11,5240
	r22.s64 = r11.s64 + 5240;
	// addi r21,r10,-3752
	r21.s64 = ctx.r10.s64 + -3752;
	// addi r28,r9,17380
	r28.s64 = ctx.r9.s64 + 17380;
	// addi r27,r8,-3636
	r27.s64 = ctx.r8.s64 + -3636;
	// addi r26,r7,-3652
	r26.s64 = ctx.r7.s64 + -3652;
	// addi r25,r6,-3672
	r25.s64 = ctx.r6.s64 + -3672;
	// addi r29,r5,13852
	r29.s64 = ctx.r5.s64 + 13852;
loc_825BE938:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
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
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x825be984
	if (cr6.eq) goto loc_825BE984;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8253c6f0
	sub_8253C6F0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x825be988
	if (!cr6.eq) goto loc_825BE988;
loc_825BE984:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_825BE988:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bea84
	if (cr6.eq) goto loc_825BEA84;
	// stw r23,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r23.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r24,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r24.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825bdff0
	sub_825BDFF0(ctx, base);
	// b 0x825becd8
	goto loc_825BECD8;
loc_825BEA84:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825bead8
	if (!cr6.gt) goto loc_825BEAD8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r11,r24
	r11.u64 = r24.u64;
loc_825BEAA0:
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x825beabc
	if (cr6.eq) goto loc_825BEABC;
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r6,r31
	cr6.compare<uint32_t>(ctx.r6.u32, r31.u32, xer);
	// beq cr6,0x825bead4
	if (cr6.eq) goto loc_825BEAD4;
loc_825BEABC:
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x825beaa0
	if (cr6.lt) goto loc_825BEAA0;
	// b 0x825bead8
	goto loc_825BEAD8;
loc_825BEAD4:
	// li r8,1
	ctx.r8.s64 = 1;
loc_825BEAD8:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825becd8
	if (!cr6.eq) goto loc_825BECD8;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// li r8,251
	ctx.r8.s64 = 251;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r19.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r24.u32);
	// rldicr r6,r24,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r24.u64, 32) & 0xFFFFFFFF00000000;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r24.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825beb54
	if (cr6.eq) goto loc_825BEB54;
	// stw r23,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r23,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r23.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r23.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x822b0da8
	sub_822B0DA8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r24,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r24.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// b 0x825beb58
	goto loc_825BEB58;
loc_825BEB54:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_825BEB58:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893860
	sub_82893860(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x825bec48
	if (!cr6.gt) goto loc_825BEC48;
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
loc_825BEC48:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r8.u32);
	// add. r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825bec68
	if (cr0.eq) goto loc_825BEC68;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_825BEC68:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x825bec80
	if (cr6.eq) goto loc_825BEC80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x8253caa8
	sub_8253CAA8(ctx, base);
loc_825BEC80:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r17,r1,88
	r17.s64 = ctx.r1.s64 + 88;
	// bl 0x8272de28
	sub_8272DE28(ctx, base);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82893930
	sub_82893930(ctx, base);
	// bl 0x822d7b30
	sub_822D7B30(ctx, base);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,21540(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 21540);
	// lwz r5,0(r17)
	ctx.r5.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// bl 0x826cf1a0
	sub_826CF1A0(ctx, base);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x8272df68
	sub_8272DF68(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x825be308
	sub_825BE308(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
loc_825BECD8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272db30
	sub_8272DB30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825be938
	if (cr6.eq) goto loc_825BE938;
loc_825BECE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272daf0
	sub_8272DAF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8272dc58
	sub_8272DC58(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
}

__attribute__((alias("__imp__sub_825BECFC"))) PPC_WEAK_FUNC(sub_825BECFC);
PPC_FUNC_IMPL(__imp__sub_825BECFC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e943c
	return;
}

__attribute__((alias("__imp__sub_825BED00"))) PPC_WEAK_FUNC(sub_825BED00);
PPC_FUNC_IMPL(__imp__sub_825BED00) {
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
	// lbz r11,1148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bee98
	if (cr6.eq) goto loc_825BEE98;
	// lwz r11,1144(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1144);
	// li r27,0
	r27.s64 = 0;
	// mr r28,r27
	r28.u64 = r27.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825bed48
	if (cr6.lt) goto loc_825BED48;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,52
	ctx.r9.s64 = r11.s64 + 52;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,18436(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18436);
	// lwzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwz r28,80(r7)
	r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 80);
loc_825BED48:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r29,r27
	r29.u64 = r27.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825bedb0
	if (!cr6.gt) goto loc_825BEDB0;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_825BED5C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bed9c
	if (cr6.eq) goto loc_825BED9C;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bed9c
	if (cr6.eq) goto loc_825BED9C;
	// bl 0x825bbdf0
	sub_825BBDF0(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825bed9c
	if (cr6.eq) goto loc_825BED9C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// bl 0x825bc500
	sub_825BC500(ctx, base);
loc_825BED9C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x825bed5c
	if (cr6.lt) goto loc_825BED5C;
loc_825BEDB0:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r11
	r30.u64 = r11.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x825bee84
	if (cr6.eq) goto loc_825BEE84;
loc_825BEDD0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,24(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bee68
	if (cr6.eq) goto loc_825BEE68;
	// lbz r11,5(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bee68
	if (cr6.eq) goto loc_825BEE68;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bdff0
	sub_825BDFF0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bee0c
	if (cr6.eq) goto loc_825BEE0C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
loc_825BEE0C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r9,r10,r30
	ctx.r9.s64 = r30.s64 - ctx.r10.s64;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// srawi r11,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	r11.s64 = ctx.r9.s32 >> 2;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x825bee54
	if (!cr6.lt) goto loc_825BEE54;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_825BEE2C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// blt cr6,0x825bee2c
	if (cr6.lt) goto loc_825BEE2C;
loc_825BEE54:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x825bee6c
	goto loc_825BEE6C;
loc_825BEE68:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_825BEE6C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x825bedd0
	if (!cr6.eq) goto loc_825BEDD0;
loc_825BEE84:
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bee98
	if (cr6.eq) goto loc_825BEE98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825be800
	sub_825BE800(ctx, base);
loc_825BEE98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825BEE9C"))) PPC_WEAK_FUNC(sub_825BEE9C);
PPC_FUNC_IMPL(__imp__sub_825BEE9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825BEEA0"))) PPC_WEAK_FUNC(sub_825BEEA0);
PPC_FUNC_IMPL(__imp__sub_825BEEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// stb r11,1148(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1148, r11.u8);
}

__attribute__((alias("__imp__sub_825BEEA8"))) PPC_WEAK_FUNC(sub_825BEEA8);
PPC_FUNC_IMPL(__imp__sub_825BEEA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x825be800
	sub_825BE800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BEEAC"))) PPC_WEAK_FUNC(sub_825BEEAC);
PPC_FUNC_IMPL(__imp__sub_825BEEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BEEB0"))) PPC_WEAK_FUNC(sub_825BEEB0);
PPC_FUNC_IMPL(__imp__sub_825BEEB0) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-3824
	ctx.r9.s64 = r11.s64 + -3824;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825beef4
	if (!cr6.gt) goto loc_825BEEF4;
loc_825BEEDC:
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
	// bgt cr6,0x825beedc
	if (cr6.gt) goto loc_825BEEDC;
loc_825BEEF4:
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bef0c
	if (cr6.eq) goto loc_825BEF0C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BEF0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BEF1C"))) PPC_WEAK_FUNC(sub_825BEF1C);
PPC_FUNC_IMPL(__imp__sub_825BEF1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BEF20"))) PPC_WEAK_FUNC(sub_825BEF20);
PPC_FUNC_IMPL(__imp__sub_825BEF20) {
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
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r10,-3764
	ctx.r9.s64 = ctx.r10.s64 + -3764;
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

__attribute__((alias("__imp__sub_825BEF78"))) PPC_WEAK_FUNC(sub_825BEF78);
PPC_FUNC_IMPL(__imp__sub_825BEF78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BEF7C"))) PPC_WEAK_FUNC(sub_825BEF7C);
PPC_FUNC_IMPL(__imp__sub_825BEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BEF80"))) PPC_WEAK_FUNC(sub_825BEF80);
PPC_FUNC_IMPL(__imp__sub_825BEF80) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,-3764
	ctx.r9.s64 = r11.s64 + -3764;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x825befc4
	if (!cr6.gt) goto loc_825BEFC4;
loc_825BEFAC:
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
	// bgt cr6,0x825befac
	if (cr6.gt) goto loc_825BEFAC;
loc_825BEFC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825bf068
	sub_825BF068(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r11,-3824
	ctx.r10.s64 = r11.s64 + -3824;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// ble cr6,0x825bf000
	if (!cr6.gt) goto loc_825BF000;
loc_825BEFE8:
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
	// bgt cr6,0x825befe8
	if (cr6.gt) goto loc_825BEFE8;
loc_825BF000:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BF010"))) PPC_WEAK_FUNC(sub_825BF010);
PPC_FUNC_IMPL(__imp__sub_825BF010) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF014"))) PPC_WEAK_FUNC(sub_825BF014);
PPC_FUNC_IMPL(__imp__sub_825BF014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF018"))) PPC_WEAK_FUNC(sub_825BF018);
PPC_FUNC_IMPL(__imp__sub_825BF018) {
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
	// bl 0x825bef80
	sub_825BEF80(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bf050
	if (cr6.eq) goto loc_825BF050;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BF050:
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

__attribute__((alias("__imp__sub_825BF064"))) PPC_WEAK_FUNC(sub_825BF064);
PPC_FUNC_IMPL(__imp__sub_825BF064) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF068"))) PPC_WEAK_FUNC(sub_825BF068);
PPC_FUNC_IMPL(__imp__sub_825BF068) {
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
	// beq cr6,0x825bf14c
	if (cr6.eq) goto loc_825BF14C;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x826cc408
	sub_826CC408(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bf0dc
	if (!cr6.eq) goto loc_825BF0DC;
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
	// beq cr6,0x825bf14c
	if (cr6.eq) goto loc_825BF14C;
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
	// b 0x825bf14c
	goto loc_825BF14C;
loc_825BF0DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825bef20
	sub_825BEF20(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x825bf108
	if (!cr6.gt) goto loc_825BF108;
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
loc_825BF108:
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
	// bl 0x825bef80
	sub_825BEF80(ctx, base);
loc_825BF14C:
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

__attribute__((alias("__imp__sub_825BF160"))) PPC_WEAK_FUNC(sub_825BF160);
PPC_FUNC_IMPL(__imp__sub_825BF160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF164"))) PPC_WEAK_FUNC(sub_825BF164);
PPC_FUNC_IMPL(__imp__sub_825BF164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF168"))) PPC_WEAK_FUNC(sub_825BF168);
PPC_FUNC_IMPL(__imp__sub_825BF168) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,-3512
	ctx.r9.s64 = r11.s64 + -3512;
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
	// stw r11,-19504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -19504, r11.u32);
	// beq cr6,0x825bf1a8
	if (cr6.eq) goto loc_825BF1A8;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BF1A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BF1B8"))) PPC_WEAK_FUNC(sub_825BF1B8);
PPC_FUNC_IMPL(__imp__sub_825BF1B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF1BC"))) PPC_WEAK_FUNC(sub_825BF1BC);
PPC_FUNC_IMPL(__imp__sub_825BF1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF1C0"))) PPC_WEAK_FUNC(sub_825BF1C0);
PPC_FUNC_IMPL(__imp__sub_825BF1C0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// li r26,0
	r26.s64 = 0;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822e9fb0
	sub_822E9FB0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825bf238
	if (cr6.eq) goto loc_825BF238;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x828e9460
	return;
loc_825BF238:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825BF240"))) PPC_WEAK_FUNC(sub_825BF240);
PPC_FUNC_IMPL(__imp__sub_825BF240) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825BF244"))) PPC_WEAK_FUNC(sub_825BF244);
PPC_FUNC_IMPL(__imp__sub_825BF244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF248"))) PPC_WEAK_FUNC(sub_825BF248);
PPC_FUNC_IMPL(__imp__sub_825BF248) {
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
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e9fb0
	sub_822E9FB0(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// beq cr6,0x825bf290
	if (cr6.eq) goto loc_825BF290;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e5cf0
	sub_826E5CF0(ctx, base);
loc_825BF290:
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

__attribute__((alias("__imp__sub_825BF2A4"))) PPC_WEAK_FUNC(sub_825BF2A4);
PPC_FUNC_IMPL(__imp__sub_825BF2A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF2A8"))) PPC_WEAK_FUNC(sub_825BF2A8);
PPC_FUNC_IMPL(__imp__sub_825BF2A8) {
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
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,4(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,0(r5)
	r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x82584e08
	sub_82584E08(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	xer.ca = ctx.r3.u32 > 4294967283;
	r11.s64 = ctx.r3.s64 + 12;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825bf2e4
	if (cr0.eq) goto loc_825BF2E4;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_825BF2E4:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ed5e0
	sub_826ED5E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825BF2F8"))) PPC_WEAK_FUNC(sub_825BF2F8);
PPC_FUNC_IMPL(__imp__sub_825BF2F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825BF2FC"))) PPC_WEAK_FUNC(sub_825BF2FC);
PPC_FUNC_IMPL(__imp__sub_825BF2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF300"))) PPC_WEAK_FUNC(sub_825BF300);
PPC_FUNC_IMPL(__imp__sub_825BF300) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r9,r10,-3504
	ctx.r9.s64 = ctx.r10.s64 + -3504;
	// stw r31,-19504(r11)
	PPC_STORE_U32(r11.u32 + -19504, r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241ba70
	sub_8241BA70(ctx, base);
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

__attribute__((alias("__imp__sub_825BF34C"))) PPC_WEAK_FUNC(sub_825BF34C);
PPC_FUNC_IMPL(__imp__sub_825BF34C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF350"))) PPC_WEAK_FUNC(sub_825BF350);
PPC_FUNC_IMPL(__imp__sub_825BF350) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,-3504
	ctx.r10.s64 = r11.s64 + -3504;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x826ec150
	sub_826EC150(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r7,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r6,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r6.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r5,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r5.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r8.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826e60b0
	sub_826E60B0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// lis r4,-32253
	ctx.r4.s64 = -2113732608;
	// lis r3,-31933
	ctx.r3.s64 = -2092761088;
	// addi r10,r4,-3512
	ctx.r10.s64 = ctx.r4.s64 + -3512;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,-19504(r3)
	PPC_STORE_U32(ctx.r3.u32 + -19504, r11.u32);
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

__attribute__((alias("__imp__sub_825BF3F0"))) PPC_WEAK_FUNC(sub_825BF3F0);
PPC_FUNC_IMPL(__imp__sub_825BF3F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF3F4"))) PPC_WEAK_FUNC(sub_825BF3F4);
PPC_FUNC_IMPL(__imp__sub_825BF3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF3F8"))) PPC_WEAK_FUNC(sub_825BF3F8);
PPC_FUNC_IMPL(__imp__sub_825BF3F8) {
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
	// bl 0x825bf350
	sub_825BF350(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bf430
	if (cr6.eq) goto loc_825BF430;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825BF430:
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

__attribute__((alias("__imp__sub_825BF444"))) PPC_WEAK_FUNC(sub_825BF444);
PPC_FUNC_IMPL(__imp__sub_825BF444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF448"))) PPC_WEAK_FUNC(sub_825BF448);
PPC_FUNC_IMPL(__imp__sub_825BF448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
}

__attribute__((alias("__imp__sub_825BF450"))) PPC_WEAK_FUNC(sub_825BF450);
PPC_FUNC_IMPL(__imp__sub_825BF450) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF454"))) PPC_WEAK_FUNC(sub_825BF454);
PPC_FUNC_IMPL(__imp__sub_825BF454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825BF458"))) PPC_WEAK_FUNC(sub_825BF458);
PPC_FUNC_IMPL(__imp__sub_825BF458) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x825bdcb0
	sub_825BDCB0(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,272(r31)
	PPC_STORE_U8(r31.u32 + 272, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BF494"))) PPC_WEAK_FUNC(sub_825BF494);
PPC_FUNC_IMPL(__imp__sub_825BF494) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF498"))) PPC_WEAK_FUNC(sub_825BF498);
PPC_FUNC_IMPL(__imp__sub_825BF498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825bf4b0
	if (cr6.lt) goto loc_825BF4B0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x825bdf30
	sub_825BDF30(ctx, base);
	return;
loc_825BF4B0:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x825bdf30
	sub_825BDF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BF4B8"))) PPC_WEAK_FUNC(sub_825BF4B8);
PPC_FUNC_IMPL(__imp__sub_825BF4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r5,r4,12
	ctx.r5.s64 = ctx.r4.s64 + 12;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x825be458
	sub_825BE458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BF4D0"))) PPC_WEAK_FUNC(sub_825BF4D0);
PPC_FUNC_IMPL(__imp__sub_825BF4D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825bf4e8
	if (cr6.lt) goto loc_825BF4E8;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x825bdf30
	sub_825BDF30(ctx, base);
	return;
loc_825BF4E8:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x825bdf30
	sub_825BDF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BF4F0"))) PPC_WEAK_FUNC(sub_825BF4F0);
PPC_FUNC_IMPL(__imp__sub_825BF4F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825bf508
	if (cr6.lt) goto loc_825BF508;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x825bdf30
	sub_825BDF30(ctx, base);
	return;
loc_825BF508:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x825bdf30
	sub_825BDF30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825BF510"))) PPC_WEAK_FUNC(sub_825BF510);
PPC_FUNC_IMPL(__imp__sub_825BF510) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825bf55c
	if (cr6.lt) goto loc_825BF55C;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// bl 0x825be308
	sub_825BE308(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,272(r31)
	PPC_STORE_U8(r31.u32 + 272, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825BF55C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x825be308
	sub_825BE308(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,272(r31)
	PPC_STORE_U8(r31.u32 + 272, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BF57C"))) PPC_WEAK_FUNC(sub_825BF57C);
PPC_FUNC_IMPL(__imp__sub_825BF57C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF580"))) PPC_WEAK_FUNC(sub_825BF580);
PPC_FUNC_IMPL(__imp__sub_825BF580) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x825bf5cc
	if (cr6.lt) goto loc_825BF5CC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// bl 0x825be5b8
	sub_825BE5B8(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,272(r31)
	PPC_STORE_U8(r31.u32 + 272, ctx.r10.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825BF5CC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x825be5b8
	sub_825BE5B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,272(r31)
	PPC_STORE_U8(r31.u32 + 272, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BF5EC"))) PPC_WEAK_FUNC(sub_825BF5EC);
PPC_FUNC_IMPL(__imp__sub_825BF5EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF5F0"))) PPC_WEAK_FUNC(sub_825BF5F0);
PPC_FUNC_IMPL(__imp__sub_825BF5F0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// li r31,4
	r31.s64 = 4;
loc_825BF608:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x825bed00
	sub_825BED00(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x825bf608
	if (!cr0.eq) goto loc_825BF608;
	// lwz r3,16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 16);
	// bl 0x825bed00
	sub_825BED00(ctx, base);
	// lbz r11,272(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bf740
	if (cr6.eq) goto loc_825BF740;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// mr r27,r26
	r27.u64 = r26.u64;
	// lbz r10,1148(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1148);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bf648
	if (cr6.eq) goto loc_825BF648;
	// li r27,1
	r27.s64 = 1;
loc_825BF648:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// lbz r10,1148(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1148);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bf65c
	if (cr6.eq) goto loc_825BF65C;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_825BF65C:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lbz r10,1148(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1148);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bf670
	if (cr6.eq) goto loc_825BF670;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_825BF670:
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// lbz r10,1148(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1148);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825bf684
	if (cr6.eq) goto loc_825BF684;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_825BF684:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r30,r26
	r30.u64 = r26.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// lis r29,-31934
	r29.s64 = -2092826624;
	// li r31,-1
	r31.s64 = -1;
	// addi r28,r11,-3360
	r28.s64 = r11.s64 + -3360;
loc_825BF69C:
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r11,1148(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1148);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bf72c
	if (cr6.eq) goto loc_825BF72C;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// li r11,5381
	r11.s64 = 5381;
	// li r10,83
	ctx.r10.s64 = 83;
loc_825BF6B8:
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
	// bne cr6,0x825bf6b8
	if (!cr6.eq) goto loc_825BF6B8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,19276(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 19276);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stw r6,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r6.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// bl 0x825bdf30
	sub_825BDF30(ctx, base);
loc_825BF72C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x825bf69c
	if (cr6.lt) goto loc_825BF69C;
	// stb r26,272(r24)
	PPC_STORE_U8(r24.u32 + 272, r26.u8);
loc_825BF740:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825BF744"))) PPC_WEAK_FUNC(sub_825BF744);
PPC_FUNC_IMPL(__imp__sub_825BF744) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_825BF748"))) PPC_WEAK_FUNC(sub_825BF748);
PPC_FUNC_IMPL(__imp__sub_825BF748) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,5381
	r11.s64 = 5381;
	// addi r9,r10,-3348
	ctx.r9.s64 = ctx.r10.s64 + -3348;
	// li r10,66
	ctx.r10.s64 = 66;
loc_825BF768:
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
	// bne cr6,0x825bf768
	if (!cr6.eq) goto loc_825BF768;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r4,8(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,12(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r31,0(r7)
	r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,19276(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 19276);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r7,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r7.u32);
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r31.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// blt cr6,0x825bf7fc
	if (cr6.lt) goto loc_825BF7FC;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// b 0x825bf800
	goto loc_825BF800;
loc_825BF7FC:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_825BF800:
	// bl 0x825bdf30
	sub_825BDF30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825BF814"))) PPC_WEAK_FUNC(sub_825BF814);
PPC_FUNC_IMPL(__imp__sub_825BF814) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825BF818"))) PPC_WEAK_FUNC(sub_825BF818);
PPC_FUNC_IMPL(__imp__sub_825BF818) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825bf850
	if (cr6.eq) goto loc_825BF850;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bf854
	if (!cr6.eq) goto loc_825BF854;
loc_825BF850:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825BF854:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bfa98
	if (cr6.eq) goto loc_825BFA98;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,17676
	ctx.r4.s64 = ctx.r9.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bfa98
	if (cr6.eq) goto loc_825BFA98;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,-1
	r28.s64 = -1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-14368(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825bf8dc
	if (cr6.eq) goto loc_825BF8DC;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bf8e0
	if (!cr6.eq) goto loc_825BF8E0;
loc_825BF8DC:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825BF8E0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bf938
	if (cr6.eq) goto loc_825BF938;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825ca190
	sub_825CA190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bf938
	if (cr6.eq) goto loc_825BF938;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x822bf0c0
	sub_822BF0C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bf938
	if (cr6.eq) goto loc_825BF938;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_825BF938:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,272(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 272);
	// lwz r5,16(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r4,264(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 264);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 272);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,260(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,272(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 272);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r9,5381
	ctx.r9.s64 = 5381;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// extsb r11,r7
	r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825bf9f4
	if (cr6.eq) goto loc_825BF9F4;
loc_825BF9D8:
	// rlwinm r7,r9,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825bf9d8
	if (!cr6.eq) goto loc_825BF9D8;
loc_825BF9F4:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,5381
	r11.s64 = 5381;
	// addi r8,r10,-3332
	ctx.r8.s64 = ctx.r10.s64 + -3332;
	// li r10,73
	ctx.r10.s64 = 73;
loc_825BFA04:
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r7,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825bfa04
	if (!cr6.eq) goto loc_825BFA04;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// lwz r11,19276(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19276);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r3,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// blt cr6,0x825bfa8c
	if (cr6.lt) goto loc_825BFA8C;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(r28.u32, 4, xer);
	// bgt cr6,0x825bfa8c
	if (cr6.gt) goto loc_825BFA8C;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// bl 0x825bdf30
	sub_825BDF30(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9460
	return;
loc_825BFA8C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// bl 0x825bdf30
	sub_825BDF30(ctx, base);
loc_825BFA98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825BFA9C"))) PPC_WEAK_FUNC(sub_825BFA9C);
PPC_FUNC_IMPL(__imp__sub_825BFA9C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825BFAA0"))) PPC_WEAK_FUNC(sub_825BFAA0);
PPC_FUNC_IMPL(__imp__sub_825BFAA0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31970
	r30.s64 = -2095185920;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r3,-14368(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825bfad8
	if (cr6.eq) goto loc_825BFAD8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bfadc
	if (!cr6.eq) goto loc_825BFADC;
loc_825BFAD8:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825BFADC:
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x826e53d0
	sub_826E53D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bfd20
	if (cr6.eq) goto loc_825BFD20;
	// lwz r11,100(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r4,r9,17676
	ctx.r4.s64 = ctx.r9.s64 + 17676;
	// bl 0x826e4068
	sub_826E4068(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bfd20
	if (cr6.eq) goto loc_825BFD20;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,-1
	r28.s64 = -1;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,32(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,-14368(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -14368);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x825bfb64
	if (cr6.eq) goto loc_825BFB64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bfb68
	if (!cr6.eq) goto loc_825BFB68;
loc_825BFB64:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825BFB68:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,88(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// bl 0x825cb620
	sub_825CB620(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bfbc0
	if (cr6.eq) goto loc_825BFBC0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825ca190
	sub_825CA190(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825bfbc0
	if (cr6.eq) goto loc_825BFBC0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x822bf0c0
	sub_822BF0C0(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825bfbc0
	if (cr6.eq) goto loc_825BFBC0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_825BFBC0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,272(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 272);
	// lwz r5,16(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r4,264(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 264);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 272);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,260(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 260);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,272(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 272);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,20(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r9,5381
	ctx.r9.s64 = 5381;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// extsb r11,r7
	r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825bfc7c
	if (cr6.eq) goto loc_825BFC7C;
loc_825BFC60:
	// rlwinm r7,r9,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r8
	r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825bfc60
	if (!cr6.eq) goto loc_825BFC60;
loc_825BFC7C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r11,5381
	r11.s64 = 5381;
	// addi r8,r10,-3316
	ctx.r8.s64 = ctx.r10.s64 + -3316;
	// li r10,73
	ctx.r10.s64 = 73;
loc_825BFC8C:
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r7,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// extsb r10,r7
	ctx.r10.s64 = ctx.r7.s8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825bfc8c
	if (!cr6.eq) goto loc_825BFC8C;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// lwz r11,19276(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19276);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,8(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r6,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r5,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r5.u32);
	// stw r4,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r4.u32);
	// stw r3,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r27.u32);
	// blt cr6,0x825bfd14
	if (cr6.lt) goto loc_825BFD14;
	// cmplwi cr6,r28,4
	cr6.compare<uint32_t>(r28.u32, 4, xer);
	// bgt cr6,0x825bfd14
	if (cr6.gt) goto loc_825BFD14;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzx r3,r11,r26
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// bl 0x825bdf30
	sub_825BDF30(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9460
	return;
loc_825BFD14:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// bl 0x825bdf30
	sub_825BDF30(ctx, base);
loc_825BFD20:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825BFD24"))) PPC_WEAK_FUNC(sub_825BFD24);
PPC_FUNC_IMPL(__imp__sub_825BFD24) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825BFD28"))) PPC_WEAK_FUNC(sub_825BFD28);
PPC_FUNC_IMPL(__imp__sub_825BFD28) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-31970
	r27.s64 = -2095185920;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r19,0
	r19.s64 = 0;
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825bfd5c
	if (cr6.eq) goto loc_825BFD5C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bfd60
	if (!cr6.eq) goto loc_825BFD60;
loc_825BFD5C:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825BFD60:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18196(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18196);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r18,r28,244
	r18.s64 = r28.s64 + 244;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bfdb8
	if (!cr6.eq) goto loc_825BFDB8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bfdb8
	if (!cr6.eq) goto loc_825BFDB8;
	// lwz r11,18196(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18196);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825BFDB8:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825bfdd4
	if (cr6.eq) goto loc_825BFDD4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bfdd8
	if (!cr6.eq) goto loc_825BFDD8;
loc_825BFDD4:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825BFDD8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,18204(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18204);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r20,r28,216
	r20.s64 = r28.s64 + 216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bfe30
	if (!cr6.eq) goto loc_825BFE30;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bfe30
	if (!cr6.eq) goto loc_825BFE30;
	// lwz r11,18204(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 18204);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825BFE30:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825bfe4c
	if (cr6.eq) goto loc_825BFE4C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bfe50
	if (!cr6.eq) goto loc_825BFE50;
loc_825BFE4C:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825BFE50:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r21,r28,188
	r21.s64 = r28.s64 + 188;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bfea8
	if (!cr6.eq) goto loc_825BFEA8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bfea8
	if (!cr6.eq) goto loc_825BFEA8;
	// lwz r11,19148(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19148);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825BFEA8:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825bfec4
	if (cr6.eq) goto loc_825BFEC4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bfec8
	if (!cr6.eq) goto loc_825BFEC8;
loc_825BFEC4:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825BFEC8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r22,r28,160
	r22.s64 = r28.s64 + 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bff20
	if (!cr6.eq) goto loc_825BFF20;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bff20
	if (!cr6.eq) goto loc_825BFF20;
	// lwz r11,19276(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825BFF20:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825bff3c
	if (cr6.eq) goto loc_825BFF3C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bff40
	if (!cr6.eq) goto loc_825BFF40;
loc_825BFF3C:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825BFF40:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19272(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19272);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r23,r28,132
	r23.s64 = r28.s64 + 132;
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
	// bne cr6,0x825bff98
	if (!cr6.eq) goto loc_825BFF98;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825bff98
	if (!cr6.eq) goto loc_825BFF98;
	// lwz r11,19272(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19272);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825BFF98:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825bffb4
	if (cr6.eq) goto loc_825BFFB4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825bffb8
	if (!cr6.eq) goto loc_825BFFB8;
loc_825BFFB4:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825BFFB8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19288(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19288);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r24,r28,104
	r24.s64 = r28.s64 + 104;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c0010
	if (!cr6.eq) goto loc_825C0010;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c0010
	if (!cr6.eq) goto loc_825C0010;
	// lwz r11,19288(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19288);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C0010:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c002c
	if (cr6.eq) goto loc_825C002C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c0030
	if (!cr6.eq) goto loc_825C0030;
loc_825C002C:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825C0030:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19292(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19292);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r25,r28,76
	r25.s64 = r28.s64 + 76;
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
	// bne cr6,0x825c0088
	if (!cr6.eq) goto loc_825C0088;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c0088
	if (!cr6.eq) goto loc_825C0088;
	// lwz r11,19292(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19292);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C0088:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c00a4
	if (cr6.eq) goto loc_825C00A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c00a8
	if (!cr6.eq) goto loc_825C00A8;
loc_825C00A4:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825C00A8:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19300(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19300);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r28,48
	r26.s64 = r28.s64 + 48;
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
	// bne cr6,0x825c0100
	if (!cr6.eq) goto loc_825C0100;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c0100
	if (!cr6.eq) goto loc_825C0100;
	// lwz r11,19300(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19300);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C0100:
	// lwz r3,-14368(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c011c
	if (cr6.eq) goto loc_825C011C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c0120
	if (!cr6.eq) goto loc_825C0120;
loc_825C011C:
	// mr r11,r19
	r11.u64 = r19.u64;
loc_825C0120:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,19304(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19304);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r27,r28,20
	r27.s64 = r28.s64 + 20;
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
	// bne cr6,0x825c0178
	if (!cr6.eq) goto loc_825C0178;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c0178
	if (!cr6.eq) goto loc_825C0178;
	// lwz r11,19304(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 19304);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825C0178:
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,-19460
	ctx.r4.s64 = r11.s64 + -19460;
	// lwz r3,-19504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -19504);
	// bl 0x825bf248
	sub_825BF248(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r3,-19504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -19504);
	// addi r4,r10,-19456
	ctx.r4.s64 = ctx.r10.s64 + -19456;
	// bl 0x825bf248
	sub_825BF248(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r3,-19504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -19504);
	// addi r4,r9,-19452
	ctx.r4.s64 = ctx.r9.s64 + -19452;
	// bl 0x825bf248
	sub_825BF248(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lwz r3,-19504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -19504);
	// addi r4,r8,-19448
	ctx.r4.s64 = ctx.r8.s64 + -19448;
	// bl 0x825bf248
	sub_825BF248(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lwz r3,-19504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -19504);
	// addi r4,r7,-19444
	ctx.r4.s64 = ctx.r7.s64 + -19444;
	// bl 0x825bf248
	sub_825BF248(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// lwz r3,-19504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -19504);
	// addi r4,r6,-19440
	ctx.r4.s64 = ctx.r6.s64 + -19440;
	// bl 0x825bf248
	sub_825BF248(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lwz r3,-19504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -19504);
	// addi r4,r5,-19436
	ctx.r4.s64 = ctx.r5.s64 + -19436;
	// bl 0x825bf248
	sub_825BF248(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwz r3,-19504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -19504);
	// addi r4,r4,-19432
	ctx.r4.s64 = ctx.r4.s64 + -19432;
	// bl 0x825bf248
	sub_825BF248(ctx, base);
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// bl 0x825bdcb0
	sub_825BDCB0(ctx, base);
	// lwz r30,16(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825c0224
	if (cr6.eq) goto loc_825C0224;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825bdef8
	sub_825BDEF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r19,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r19.u32);
loc_825C0224:
	// mr r30,r28
	r30.u64 = r28.u64;
	// li r28,4
	r28.s64 = 4;
loc_825C022C:
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825c024c
	if (cr6.eq) goto loc_825C024C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825bdef8
	sub_825BDEF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r19,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r19.u32);
loc_825C024C:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x825c022c
	if (!cr0.eq) goto loc_825C022C;
	// lwz r3,-19504(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -19504);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0278
	if (cr6.eq) goto loc_825C0278;
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
loc_825C0278:
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_825C02C4"))) PPC_WEAK_FUNC(sub_825C02C4);
PPC_FUNC_IMPL(__imp__sub_825C02C4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9440
	return;
}

__attribute__((alias("__imp__sub_825C02C8"))) PPC_WEAK_FUNC(sub_825C02C8);
PPC_FUNC_IMPL(__imp__sub_825C02C8) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,1
	r30.s64 = 1;
	// addi r3,r10,-3304
	ctx.r3.s64 = ctx.r10.s64 + -3304;
	// lwz r11,21644(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21644);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// lwz r28,16(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825c0354
	if (cr6.eq) goto loc_825C0354;
	// rotlwi r11,r9,0
	r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
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
	// beq cr6,0x825c0354
	if (cr6.eq) goto loc_825C0354;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// bne cr6,0x825c0358
	if (!cr6.eq) goto loc_825C0358;
loc_825C0354:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_825C0358:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r28,0(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825c037c
	if (cr6.eq) goto loc_825C037C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// bl 0x825beea0
	sub_825BEEA0(ctx, base);
loc_825C037C:
	// stb r30,272(r31)
	PPC_STORE_U8(r31.u32 + 272, r30.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C0384"))) PPC_WEAK_FUNC(sub_825C0384);
PPC_FUNC_IMPL(__imp__sub_825C0384) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C0388"))) PPC_WEAK_FUNC(sub_825C0388);
PPC_FUNC_IMPL(__imp__sub_825C0388) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r23,r3,20
	r23.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r21,r31,48
	r21.s64 = r31.s64 + 48;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r20,r31,76
	r20.s64 = r31.s64 + 76;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r19,r31,104
	r19.s64 = r31.s64 + 104;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r18,r31,132
	r18.s64 = r31.s64 + 132;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r17,r31,160
	r17.s64 = r31.s64 + 160;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r16,r31,188
	r16.s64 = r31.s64 + 188;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r15,r31,216
	r15.s64 = r31.s64 + 216;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r14,r31,244
	r14.s64 = r31.s64 + 244;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r22,0
	r22.s64 = 0;
	// addi r29,r10,-3272
	r29.s64 = ctx.r10.s64 + -3272;
	// li r27,21
	r27.s64 = 21;
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r22.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r22.u32);
	// li r8,35
	ctx.r8.s64 = 35;
	// stw r22,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r22.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r27.u32);
	// rldicr r6,r22,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r22.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c044c
	if (cr6.eq) goto loc_825C044C;
	// bl 0x825bf300
	sub_825BF300(ctx, base);
loc_825C044C:
	// lis r11,-32164
	r11.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// addi r9,r11,2832
	ctx.r9.s64 = r11.s64 + 2832;
	// addi r8,r10,3920
	ctx.r8.s64 = ctx.r10.s64 + 3920;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32164
	ctx.r5.s64 = -2107899904;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r3,r5,2832
	ctx.r3.s64 = ctx.r5.s64 + 2832;
	// and r11,r4,r8
	r11.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lis r30,-31933
	r30.s64 = -2092761088;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-19432
	ctx.r4.s64 = ctx.r10.s64 + -19432;
	// lwz r3,-19504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -19504);
	// bl 0x825bf2a8
	sub_825BF2A8(ctx, base);
	// lis r9,-32164
	ctx.r9.s64 = -2107899904;
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// lwz r3,-19504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -19504);
	// addi r7,r9,2968
	ctx.r7.s64 = ctx.r9.s64 + 2968;
	// addi r6,r8,3920
	ctx.r6.s64 = ctx.r8.s64 + 3920;
	// subfic r5,r7,0
	xer.ca = ctx.r7.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r7.s64;
	// lis r11,-32164
	r11.s64 = -2107899904;
	// subfe r10,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r4.u64 + ctx.r4.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r9,r11,2968
	ctx.r9.s64 = r11.s64 + 2968;
	// and r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 & ctx.r6.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r7,-19436
	ctx.r4.s64 = ctx.r7.s64 + -19436;
	// bl 0x825bf2a8
	sub_825BF2A8(ctx, base);
	// lis r6,-32164
	ctx.r6.s64 = -2107899904;
	// lis r5,-32164
	ctx.r5.s64 = -2107899904;
	// lwz r3,-19504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -19504);
	// addi r4,r6,3104
	ctx.r4.s64 = ctx.r6.s64 + 3104;
	// addi r11,r5,3920
	r11.s64 = ctx.r5.s64 + 3920;
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,3104
	ctx.r6.s64 = ctx.r8.s64 + 3104;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r4,-19440
	ctx.r4.s64 = ctx.r4.s64 + -19440;
	// bl 0x825bf2a8
	sub_825BF2A8(ctx, base);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lwz r3,-19504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -19504);
	// addi r9,r11,3240
	ctx.r9.s64 = r11.s64 + 3240;
	// addi r8,r10,3920
	ctx.r8.s64 = ctx.r10.s64 + 3920;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32164
	ctx.r5.s64 = -2107899904;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,3240
	r11.s64 = ctx.r5.s64 + 3240;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r9,-19444
	ctx.r4.s64 = ctx.r9.s64 + -19444;
	// bl 0x825bf2a8
	sub_825BF2A8(ctx, base);
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// lis r7,-32164
	ctx.r7.s64 = -2107899904;
	// addi r6,r8,3376
	ctx.r6.s64 = ctx.r8.s64 + 3376;
	// addi r5,r7,3920
	ctx.r5.s64 = ctx.r7.s64 + 3920;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r11,-32164
	r11.s64 = -2107899904;
	// subfe r10,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r3.u64 + ctx.r3.u64 + xer.ca;
	xer.ca = temp.u8;
	// lwz r3,-19504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -19504);
	// addi r9,r11,3376
	ctx.r9.s64 = r11.s64 + 3376;
	// and r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 & ctx.r5.u64;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r7,-19448
	ctx.r4.s64 = ctx.r7.s64 + -19448;
	// bl 0x825bf2a8
	sub_825BF2A8(ctx, base);
	// lis r6,-32164
	ctx.r6.s64 = -2107899904;
	// lwz r3,-19504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -19504);
	// lis r5,-32164
	ctx.r5.s64 = -2107899904;
	// addi r4,r6,3512
	ctx.r4.s64 = ctx.r6.s64 + 3512;
	// addi r11,r5,3920
	r11.s64 = ctx.r5.s64 + 3920;
	// subfic r10,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r4.s64;
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r6,r8,3512
	ctx.r6.s64 = ctx.r8.s64 + 3512;
	// and r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 & r11.u64;
	// stw r6,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r4,-19452
	ctx.r4.s64 = ctx.r4.s64 + -19452;
	// bl 0x825bf2a8
	sub_825BF2A8(ctx, base);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// lwz r3,-19504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -19504);
	// addi r9,r11,3648
	ctx.r9.s64 = r11.s64 + 3648;
	// addi r8,r10,3920
	ctx.r8.s64 = ctx.r10.s64 + 3920;
	// subfic r7,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// lis r5,-32164
	ctx.r5.s64 = -2107899904;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r5,3648
	r11.s64 = ctx.r5.s64 + 3648;
	// and r10,r4,r8
	ctx.r10.u64 = ctx.r4.u64 & ctx.r8.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r9,-19456
	ctx.r4.s64 = ctx.r9.s64 + -19456;
	// bl 0x825bf2a8
	sub_825BF2A8(ctx, base);
	// lis r8,-32164
	ctx.r8.s64 = -2107899904;
	// lis r7,-32164
	ctx.r7.s64 = -2107899904;
	// lwz r3,-19504(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -19504);
	// addi r6,r8,3784
	ctx.r6.s64 = ctx.r8.s64 + 3784;
	// addi r5,r7,3920
	ctx.r5.s64 = ctx.r7.s64 + 3920;
	// subfic r4,r6,0
	xer.ca = ctx.r6.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r6.s64;
	// lis r10,-32164
	ctx.r10.s64 = -2107899904;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r8,r10,3784
	ctx.r8.s64 = ctx.r10.s64 + 3784;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r6,-19460
	ctx.r4.s64 = ctx.r6.s64 + -19460;
	// bl 0x825bf2a8
	sub_825BF2A8(ctx, base);
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r22.u32);
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r27.u32);
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r22.u32);
	// mr r28,r22
	r28.u64 = r22.u64;
	// stw r22,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r22.u32);
	// addi r26,r31,-4
	r26.s64 = r31.s64 + -4;
	// ld r25,168(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r24,160(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
loc_825C0674:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,49
	ctx.r8.s64 = 49;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rldicr r6,r28,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,1152
	ctx.r3.s64 = 1152;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c06a4
	if (cr6.eq) goto loc_825C06A4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825bde78
	sub_825BDE78(ctx, base);
	// b 0x825c06a8
	goto loc_825C06A8;
loc_825C06A4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_825C06A8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x825c0674
	if (cr6.lt) goto loc_825C0674;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r22,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r22.u32);
	// li r8,51
	ctx.r8.s64 = 51;
	// stw r27,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r27.u32);
	// li r3,1152
	ctx.r3.s64 = 1152;
	// stw r22,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r22.u32);
	// rldicr r6,r22,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r22.u64, 32) & 0xFFFFFFFF00000000;
	// stw r22,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r22.u32);
	// ld r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c06f8
	if (cr6.eq) goto loc_825C06F8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x825bde78
	sub_825BDE78(ctx, base);
	// b 0x825c06fc
	goto loc_825C06FC;
loc_825C06F8:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_825C06FC:
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bl 0x825beea0
	sub_825BEEA0(ctx, base);
	// lis r29,-31970
	r29.s64 = -2095185920;
	// lis r11,-32164
	r11.s64 = -2107899904;
	// addi r28,r11,712
	r28.s64 = r11.s64 + 712;
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c072c
	if (cr6.eq) goto loc_825C072C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c0730
	if (!cr6.eq) goto loc_825C0730;
loc_825C072C:
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_825C0730:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r30,r11,-3784
	r30.s64 = r11.s64 + -3784;
	// addi r3,r10,3028
	ctx.r3.s64 = ctx.r10.s64 + 3028;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19304(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19304);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-2984
	r28.s64 = r11.s64 + -2984;
	// beq cr6,0x825c07a4
	if (cr6.eq) goto loc_825C07A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c07a8
	if (!cr6.eq) goto loc_825C07A8;
loc_825C07A4:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825C07A8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,3076
	ctx.r3.s64 = ctx.r10.s64 + 3076;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19300(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19300);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-2920
	r28.s64 = r11.s64 + -2920;
	// beq cr6,0x825c0814
	if (cr6.eq) goto loc_825C0814;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c0818
	if (!cr6.eq) goto loc_825C0818;
loc_825C0814:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825C0818:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,3168
	ctx.r3.s64 = ctx.r10.s64 + 3168;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19292(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19292);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-2888
	r28.s64 = r11.s64 + -2888;
	// beq cr6,0x825c0884
	if (cr6.eq) goto loc_825C0884;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c0888
	if (!cr6.eq) goto loc_825C0888;
loc_825C0884:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825C0888:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,3216
	ctx.r3.s64 = ctx.r10.s64 + 3216;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19288(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19288);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-2864
	r28.s64 = r11.s64 + -2864;
	// beq cr6,0x825c08f4
	if (cr6.eq) goto loc_825C08F4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c08f8
	if (!cr6.eq) goto loc_825C08F8;
loc_825C08F4:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825C08F8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,3436
	ctx.r3.s64 = ctx.r10.s64 + 3436;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19272(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19272);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-2832
	r28.s64 = r11.s64 + -2832;
	// beq cr6,0x825c0964
	if (cr6.eq) goto loc_825C0964;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c0968
	if (!cr6.eq) goto loc_825C0968;
loc_825C0964:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825C0968:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,3388
	ctx.r3.s64 = ctx.r10.s64 + 3388;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19276(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19276);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-2232
	r28.s64 = r11.s64 + -2232;
	// beq cr6,0x825c09d4
	if (cr6.eq) goto loc_825C09D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c09d8
	if (!cr6.eq) goto loc_825C09D8;
loc_825C09D4:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825C09D8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,5052
	ctx.r3.s64 = ctx.r10.s64 + 5052;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,19148(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19148);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-2024
	r28.s64 = r11.s64 + -2024;
	// beq cr6,0x825c0a44
	if (cr6.eq) goto loc_825C0A44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c0a48
	if (!cr6.eq) goto loc_825C0A48;
loc_825C0A44:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825C0A48:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8656
	ctx.r3.s64 = ctx.r10.s64 + -8656;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,18204(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18204);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14368(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -14368);
	// lis r11,-32164
	r11.s64 = -2107899904;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r28,r11,-1376
	r28.s64 = r11.s64 + -1376;
	// beq cr6,0x825c0ab4
	if (cr6.eq) goto loc_825C0AB4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c0ab8
	if (!cr6.eq) goto loc_825C0AB8;
loc_825C0AB4:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_825C0AB8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r10,-8568
	ctx.r3.s64 = ctx.r10.s64 + -8568;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,18196(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18196);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r28.u32);
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r22,272(r31)
	PPC_STORE_U8(r31.u32 + 272, r22.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
}

__attribute__((alias("__imp__sub_825C0B0C"))) PPC_WEAK_FUNC(sub_825C0B0C);
PPC_FUNC_IMPL(__imp__sub_825C0B0C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825C0B10"))) PPC_WEAK_FUNC(sub_825C0B10);
PPC_FUNC_IMPL(__imp__sub_825C0B10) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r10,-3496
	ctx.r7.s64 = ctx.r10.s64 + -3496;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// li r3,216
	ctx.r3.s64 = 216;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0b88
	if (cr6.eq) goto loc_825C0B88;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825b1238
	sub_825B1238(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_825C0B88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C0B90"))) PPC_WEAK_FUNC(sub_825C0B90);
PPC_FUNC_IMPL(__imp__sub_825C0B90) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C0B94"))) PPC_WEAK_FUNC(sub_825C0B94);
PPC_FUNC_IMPL(__imp__sub_825C0B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0B98"))) PPC_WEAK_FUNC(sub_825C0B98);
PPC_FUNC_IMPL(__imp__sub_825C0B98) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r10,-3496
	ctx.r7.s64 = ctx.r10.s64 + -3496;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// li r3,308
	ctx.r3.s64 = 308;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0c10
	if (cr6.eq) goto loc_825C0C10;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825b5ca0
	sub_825B5CA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_825C0C10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C0C18"))) PPC_WEAK_FUNC(sub_825C0C18);
PPC_FUNC_IMPL(__imp__sub_825C0C18) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C0C1C"))) PPC_WEAK_FUNC(sub_825C0C1C);
PPC_FUNC_IMPL(__imp__sub_825C0C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0C20"))) PPC_WEAK_FUNC(sub_825C0C20);
PPC_FUNC_IMPL(__imp__sub_825C0C20) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r10,-3496
	ctx.r7.s64 = ctx.r10.s64 + -3496;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// li r3,276
	ctx.r3.s64 = 276;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0c98
	if (cr6.eq) goto loc_825C0C98;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825b7e28
	sub_825B7E28(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_825C0C98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C0CA0"))) PPC_WEAK_FUNC(sub_825C0CA0);
PPC_FUNC_IMPL(__imp__sub_825C0CA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C0CA4"))) PPC_WEAK_FUNC(sub_825C0CA4);
PPC_FUNC_IMPL(__imp__sub_825C0CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0CA8"))) PPC_WEAK_FUNC(sub_825C0CA8);
PPC_FUNC_IMPL(__imp__sub_825C0CA8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r10,-3496
	ctx.r7.s64 = ctx.r10.s64 + -3496;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// li r3,340
	ctx.r3.s64 = 340;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0d20
	if (cr6.eq) goto loc_825C0D20;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825b8bb0
	sub_825B8BB0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_825C0D20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C0D28"))) PPC_WEAK_FUNC(sub_825C0D28);
PPC_FUNC_IMPL(__imp__sub_825C0D28) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C0D2C"))) PPC_WEAK_FUNC(sub_825C0D2C);
PPC_FUNC_IMPL(__imp__sub_825C0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0D30"))) PPC_WEAK_FUNC(sub_825C0D30);
PPC_FUNC_IMPL(__imp__sub_825C0D30) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r10,-3496
	ctx.r7.s64 = ctx.r10.s64 + -3496;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// li r3,264
	ctx.r3.s64 = 264;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0da8
	if (cr6.eq) goto loc_825C0DA8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825b7560
	sub_825B7560(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_825C0DA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C0DB0"))) PPC_WEAK_FUNC(sub_825C0DB0);
PPC_FUNC_IMPL(__imp__sub_825C0DB0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C0DB4"))) PPC_WEAK_FUNC(sub_825C0DB4);
PPC_FUNC_IMPL(__imp__sub_825C0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0DB8"))) PPC_WEAK_FUNC(sub_825C0DB8);
PPC_FUNC_IMPL(__imp__sub_825C0DB8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r10,-3496
	ctx.r7.s64 = ctx.r10.s64 + -3496;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// li r3,296
	ctx.r3.s64 = 296;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0e30
	if (cr6.eq) goto loc_825C0E30;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825b1ca8
	sub_825B1CA8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_825C0E30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C0E38"))) PPC_WEAK_FUNC(sub_825C0E38);
PPC_FUNC_IMPL(__imp__sub_825C0E38) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C0E3C"))) PPC_WEAK_FUNC(sub_825C0E3C);
PPC_FUNC_IMPL(__imp__sub_825C0E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0E40"))) PPC_WEAK_FUNC(sub_825C0E40);
PPC_FUNC_IMPL(__imp__sub_825C0E40) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r10,-3496
	ctx.r7.s64 = ctx.r10.s64 + -3496;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// li r3,312
	ctx.r3.s64 = 312;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0eb8
	if (cr6.eq) goto loc_825C0EB8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825bab58
	sub_825BAB58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_825C0EB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C0EC0"))) PPC_WEAK_FUNC(sub_825C0EC0);
PPC_FUNC_IMPL(__imp__sub_825C0EC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C0EC4"))) PPC_WEAK_FUNC(sub_825C0EC4);
PPC_FUNC_IMPL(__imp__sub_825C0EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0EC8"))) PPC_WEAK_FUNC(sub_825C0EC8);
PPC_FUNC_IMPL(__imp__sub_825C0EC8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,21
	ctx.r9.s64 = 21;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r10,-3496
	ctx.r7.s64 = ctx.r10.s64 + -3496;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r8,42
	ctx.r8.s64 = 42;
	// li r3,308
	ctx.r3.s64 = 308;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c0f40
	if (cr6.eq) goto loc_825C0F40;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825b4078
	sub_825B4078(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x828e9464
	return;
loc_825C0F40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_825C0F48"))) PPC_WEAK_FUNC(sub_825C0F48);
PPC_FUNC_IMPL(__imp__sub_825C0F48) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_825C0F4C"))) PPC_WEAK_FUNC(sub_825C0F4C);
PPC_FUNC_IMPL(__imp__sub_825C0F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0F50"))) PPC_WEAK_FUNC(sub_825C0F50);
PPC_FUNC_IMPL(__imp__sub_825C0F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825C0F70"))) PPC_WEAK_FUNC(sub_825C0F70);
PPC_FUNC_IMPL(__imp__sub_825C0F70) {
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
	// beq cr6,0x825c0fa0
	if (cr6.eq) goto loc_825C0FA0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c0fa4
	if (!cr6.eq) goto loc_825C0FA4;
loc_825C0FA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C0FA4:
	// addi r6,r31,24
	ctx.r6.s64 = r31.s64 + 24;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270c0b8
	sub_8270C0B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C0FC8"))) PPC_WEAK_FUNC(sub_825C0FC8);
PPC_FUNC_IMPL(__imp__sub_825C0FC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C0FCC"))) PPC_WEAK_FUNC(sub_825C0FCC);
PPC_FUNC_IMPL(__imp__sub_825C0FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C0FD0"))) PPC_WEAK_FUNC(sub_825C0FD0);
PPC_FUNC_IMPL(__imp__sub_825C0FD0) {
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
	// beq cr6,0x825c1000
	if (cr6.eq) goto loc_825C1000;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c1004
	if (!cr6.eq) goto loc_825C1004;
loc_825C1000:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C1004:
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270c158
	sub_8270C158(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1024"))) PPC_WEAK_FUNC(sub_825C1024);
PPC_FUNC_IMPL(__imp__sub_825C1024) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1028"))) PPC_WEAK_FUNC(sub_825C1028);
PPC_FUNC_IMPL(__imp__sub_825C1028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r11,-3188
	ctx.r10.s64 = r11.s64 + -3188;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C1038"))) PPC_WEAK_FUNC(sub_825C1038);
PPC_FUNC_IMPL(__imp__sub_825C1038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C103C"))) PPC_WEAK_FUNC(sub_825C103C);
PPC_FUNC_IMPL(__imp__sub_825C103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1040"))) PPC_WEAK_FUNC(sub_825C1040);
PPC_FUNC_IMPL(__imp__sub_825C1040) {
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
	// beq cr6,0x825c1070
	if (cr6.eq) goto loc_825C1070;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c1074
	if (!cr6.eq) goto loc_825C1074;
loc_825C1070:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C1074:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270b7e0
	sub_8270B7E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1090"))) PPC_WEAK_FUNC(sub_825C1090);
PPC_FUNC_IMPL(__imp__sub_825C1090) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1094"))) PPC_WEAK_FUNC(sub_825C1094);
PPC_FUNC_IMPL(__imp__sub_825C1094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1098"))) PPC_WEAK_FUNC(sub_825C1098);
PPC_FUNC_IMPL(__imp__sub_825C1098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r11,-3176
	ctx.r10.s64 = r11.s64 + -3176;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C10AC"))) PPC_WEAK_FUNC(sub_825C10AC);
PPC_FUNC_IMPL(__imp__sub_825C10AC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C10B0"))) PPC_WEAK_FUNC(sub_825C10B0);
PPC_FUNC_IMPL(__imp__sub_825C10B0) {
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
	// beq cr6,0x825c10e0
	if (cr6.eq) goto loc_825C10E0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c10e4
	if (!cr6.eq) goto loc_825C10E4;
loc_825C10E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C10E4:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270b7b8
	sub_8270B7B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1104"))) PPC_WEAK_FUNC(sub_825C1104);
PPC_FUNC_IMPL(__imp__sub_825C1104) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1108"))) PPC_WEAK_FUNC(sub_825C1108);
PPC_FUNC_IMPL(__imp__sub_825C1108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r11,-3164
	ctx.r10.s64 = r11.s64 + -3164;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f6,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,52(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f5,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,56(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f4,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,60(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// lfs f3,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,64(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// lfs f2,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,68(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// lfs f1,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
}

__attribute__((alias("__imp__sub_825C1198"))) PPC_WEAK_FUNC(sub_825C1198);
PPC_FUNC_IMPL(__imp__sub_825C1198) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C119C"))) PPC_WEAK_FUNC(sub_825C119C);
PPC_FUNC_IMPL(__imp__sub_825C119C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C11A0"))) PPC_WEAK_FUNC(sub_825C11A0);
PPC_FUNC_IMPL(__imp__sub_825C11A0) {
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
	// beq cr6,0x825c11d0
	if (cr6.eq) goto loc_825C11D0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c11d4
	if (!cr6.eq) goto loc_825C11D4;
loc_825C11D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C11D4:
	// addi r8,r31,68
	ctx.r8.s64 = r31.s64 + 68;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r7,r31,52
	ctx.r7.s64 = r31.s64 + 52;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r6,r31,36
	ctx.r6.s64 = r31.s64 + 36;
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// bl 0x8270ba10
	sub_8270BA10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1200"))) PPC_WEAK_FUNC(sub_825C1200);
PPC_FUNC_IMPL(__imp__sub_825C1200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1204"))) PPC_WEAK_FUNC(sub_825C1204);
PPC_FUNC_IMPL(__imp__sub_825C1204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1208"))) PPC_WEAK_FUNC(sub_825C1208);
PPC_FUNC_IMPL(__imp__sub_825C1208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r11,-3152
	ctx.r10.s64 = r11.s64 + -3152;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C121C"))) PPC_WEAK_FUNC(sub_825C121C);
PPC_FUNC_IMPL(__imp__sub_825C121C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1220"))) PPC_WEAK_FUNC(sub_825C1220);
PPC_FUNC_IMPL(__imp__sub_825C1220) {
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
	// beq cr6,0x825c1250
	if (cr6.eq) goto loc_825C1250;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c1254
	if (!cr6.eq) goto loc_825C1254;
loc_825C1250:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C1254:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270b830
	sub_8270B830(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1274"))) PPC_WEAK_FUNC(sub_825C1274);
PPC_FUNC_IMPL(__imp__sub_825C1274) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1278"))) PPC_WEAK_FUNC(sub_825C1278);
PPC_FUNC_IMPL(__imp__sub_825C1278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r11,-3140
	ctx.r10.s64 = r11.s64 + -3140;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C1288"))) PPC_WEAK_FUNC(sub_825C1288);
PPC_FUNC_IMPL(__imp__sub_825C1288) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C128C"))) PPC_WEAK_FUNC(sub_825C128C);
PPC_FUNC_IMPL(__imp__sub_825C128C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1290"))) PPC_WEAK_FUNC(sub_825C1290);
PPC_FUNC_IMPL(__imp__sub_825C1290) {
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
	// beq cr6,0x825c12c0
	if (cr6.eq) goto loc_825C12C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c12c4
	if (!cr6.eq) goto loc_825C12C4;
loc_825C12C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C12C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270b910
	sub_8270B910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C12E4"))) PPC_WEAK_FUNC(sub_825C12E4);
PPC_FUNC_IMPL(__imp__sub_825C12E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C12E8"))) PPC_WEAK_FUNC(sub_825C12E8);
PPC_FUNC_IMPL(__imp__sub_825C12E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r11,-3128
	ctx.r10.s64 = r11.s64 + -3128;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C12F8"))) PPC_WEAK_FUNC(sub_825C12F8);
PPC_FUNC_IMPL(__imp__sub_825C12F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C12FC"))) PPC_WEAK_FUNC(sub_825C12FC);
PPC_FUNC_IMPL(__imp__sub_825C12FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1300"))) PPC_WEAK_FUNC(sub_825C1300);
PPC_FUNC_IMPL(__imp__sub_825C1300) {
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
	// beq cr6,0x825c1330
	if (cr6.eq) goto loc_825C1330;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c1334
	if (!cr6.eq) goto loc_825C1334;
loc_825C1330:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C1334:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270b960
	sub_8270B960(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1350"))) PPC_WEAK_FUNC(sub_825C1350);
PPC_FUNC_IMPL(__imp__sub_825C1350) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1354"))) PPC_WEAK_FUNC(sub_825C1354);
PPC_FUNC_IMPL(__imp__sub_825C1354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1358"))) PPC_WEAK_FUNC(sub_825C1358);
PPC_FUNC_IMPL(__imp__sub_825C1358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r11,-3116
	ctx.r10.s64 = r11.s64 + -3116;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C1368"))) PPC_WEAK_FUNC(sub_825C1368);
PPC_FUNC_IMPL(__imp__sub_825C1368) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C136C"))) PPC_WEAK_FUNC(sub_825C136C);
PPC_FUNC_IMPL(__imp__sub_825C136C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1370"))) PPC_WEAK_FUNC(sub_825C1370);
PPC_FUNC_IMPL(__imp__sub_825C1370) {
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
	// beq cr6,0x825c13a0
	if (cr6.eq) goto loc_825C13A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c13a4
	if (!cr6.eq) goto loc_825C13A4;
loc_825C13A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C13A4:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270c1e8
	sub_8270C1E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C13C0"))) PPC_WEAK_FUNC(sub_825C13C0);
PPC_FUNC_IMPL(__imp__sub_825C13C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C13C4"))) PPC_WEAK_FUNC(sub_825C13C4);
PPC_FUNC_IMPL(__imp__sub_825C13C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C13C8"))) PPC_WEAK_FUNC(sub_825C13C8);
PPC_FUNC_IMPL(__imp__sub_825C13C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r11,-3104
	ctx.r10.s64 = r11.s64 + -3104;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stb r7,52(r3)
	PPC_STORE_U8(ctx.r3.u32 + 52, ctx.r7.u8);
}

__attribute__((alias("__imp__sub_825C141C"))) PPC_WEAK_FUNC(sub_825C141C);
PPC_FUNC_IMPL(__imp__sub_825C141C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1420"))) PPC_WEAK_FUNC(sub_825C1420);
PPC_FUNC_IMPL(__imp__sub_825C1420) {
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
	// beq cr6,0x825c1450
	if (cr6.eq) goto loc_825C1450;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c1454
	if (!cr6.eq) goto loc_825C1454;
loc_825C1450:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C1454:
	// addi r6,r31,36
	ctx.r6.s64 = r31.s64 + 36;
	// lbz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270bc00
	sub_8270BC00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C147C"))) PPC_WEAK_FUNC(sub_825C147C);
PPC_FUNC_IMPL(__imp__sub_825C147C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1480"))) PPC_WEAK_FUNC(sub_825C1480);
PPC_FUNC_IMPL(__imp__sub_825C1480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r11,-3092
	ctx.r10.s64 = r11.s64 + -3092;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,40(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f8,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
}

__attribute__((alias("__imp__sub_825C14D0"))) PPC_WEAK_FUNC(sub_825C14D0);
PPC_FUNC_IMPL(__imp__sub_825C14D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C14D4"))) PPC_WEAK_FUNC(sub_825C14D4);
PPC_FUNC_IMPL(__imp__sub_825C14D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C14D8"))) PPC_WEAK_FUNC(sub_825C14D8);
PPC_FUNC_IMPL(__imp__sub_825C14D8) {
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
	// beq cr6,0x825c1508
	if (cr6.eq) goto loc_825C1508;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c150c
	if (!cr6.eq) goto loc_825C150C;
loc_825C1508:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C150C:
	// addi r6,r31,36
	ctx.r6.s64 = r31.s64 + 36;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270bd60
	sub_8270BD60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1530"))) PPC_WEAK_FUNC(sub_825C1530);
PPC_FUNC_IMPL(__imp__sub_825C1530) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1534"))) PPC_WEAK_FUNC(sub_825C1534);
PPC_FUNC_IMPL(__imp__sub_825C1534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1538"))) PPC_WEAK_FUNC(sub_825C1538);
PPC_FUNC_IMPL(__imp__sub_825C1538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r11,-3080
	ctx.r10.s64 = r11.s64 + -3080;
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C1550"))) PPC_WEAK_FUNC(sub_825C1550);
PPC_FUNC_IMPL(__imp__sub_825C1550) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1554"))) PPC_WEAK_FUNC(sub_825C1554);
PPC_FUNC_IMPL(__imp__sub_825C1554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1558"))) PPC_WEAK_FUNC(sub_825C1558);
PPC_FUNC_IMPL(__imp__sub_825C1558) {
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
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r10,r11,-3080
	ctx.r10.s64 = r11.s64 + -3080;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825C15B4"))) PPC_WEAK_FUNC(sub_825C15B4);
PPC_FUNC_IMPL(__imp__sub_825C15B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C15B8"))) PPC_WEAK_FUNC(sub_825C15B8);
PPC_FUNC_IMPL(__imp__sub_825C15B8) {
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
	// beq cr6,0x825c15e8
	if (cr6.eq) goto loc_825C15E8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c15ec
	if (!cr6.eq) goto loc_825C15EC;
loc_825C15E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C15EC:
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270b9e8
	sub_8270B9E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1610"))) PPC_WEAK_FUNC(sub_825C1610);
PPC_FUNC_IMPL(__imp__sub_825C1610) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1614"))) PPC_WEAK_FUNC(sub_825C1614);
PPC_FUNC_IMPL(__imp__sub_825C1614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1618"))) PPC_WEAK_FUNC(sub_825C1618);
PPC_FUNC_IMPL(__imp__sub_825C1618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r11,-3068
	ctx.r10.s64 = r11.s64 + -3068;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C162C"))) PPC_WEAK_FUNC(sub_825C162C);
PPC_FUNC_IMPL(__imp__sub_825C162C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1630"))) PPC_WEAK_FUNC(sub_825C1630);
PPC_FUNC_IMPL(__imp__sub_825C1630) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r10,r11,-3068
	ctx.r10.s64 = r11.s64 + -3068;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825C1688"))) PPC_WEAK_FUNC(sub_825C1688);
PPC_FUNC_IMPL(__imp__sub_825C1688) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C168C"))) PPC_WEAK_FUNC(sub_825C168C);
PPC_FUNC_IMPL(__imp__sub_825C168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1690"))) PPC_WEAK_FUNC(sub_825C1690);
PPC_FUNC_IMPL(__imp__sub_825C1690) {
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
	// beq cr6,0x825c16c0
	if (cr6.eq) goto loc_825C16C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c16c4
	if (!cr6.eq) goto loc_825C16C4;
loc_825C16C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C16C4:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270b9f8
	sub_8270B9F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C16E4"))) PPC_WEAK_FUNC(sub_825C16E4);
PPC_FUNC_IMPL(__imp__sub_825C16E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C16E8"))) PPC_WEAK_FUNC(sub_825C16E8);
PPC_FUNC_IMPL(__imp__sub_825C16E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r9,r11,-3056
	ctx.r9.s64 = r11.s64 + -3056;
	// stb r10,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r10.u8);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_825C1704"))) PPC_WEAK_FUNC(sub_825C1704);
PPC_FUNC_IMPL(__imp__sub_825C1704) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1708"))) PPC_WEAK_FUNC(sub_825C1708);
PPC_FUNC_IMPL(__imp__sub_825C1708) {
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
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r10,r11,-3056
	ctx.r10.s64 = r11.s64 + -3056;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// stb r30,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r30.u8);
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

__attribute__((alias("__imp__sub_825C175C"))) PPC_WEAK_FUNC(sub_825C175C);
PPC_FUNC_IMPL(__imp__sub_825C175C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1760"))) PPC_WEAK_FUNC(sub_825C1760);
PPC_FUNC_IMPL(__imp__sub_825C1760) {
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
	// beq cr6,0x825c1790
	if (cr6.eq) goto loc_825C1790;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c1794
	if (!cr6.eq) goto loc_825C1794;
loc_825C1790:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C1794:
	// lbz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270c2e0
	sub_8270C2E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C17B8"))) PPC_WEAK_FUNC(sub_825C17B8);
PPC_FUNC_IMPL(__imp__sub_825C17B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C17BC"))) PPC_WEAK_FUNC(sub_825C17BC);
PPC_FUNC_IMPL(__imp__sub_825C17BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C17C0"))) PPC_WEAK_FUNC(sub_825C17C0);
PPC_FUNC_IMPL(__imp__sub_825C17C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r11,-3044
	ctx.r10.s64 = r11.s64 + -3044;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C17D4"))) PPC_WEAK_FUNC(sub_825C17D4);
PPC_FUNC_IMPL(__imp__sub_825C17D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C17D8"))) PPC_WEAK_FUNC(sub_825C17D8);
PPC_FUNC_IMPL(__imp__sub_825C17D8) {
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
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r10,r11,-3044
	ctx.r10.s64 = r11.s64 + -3044;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825C181C"))) PPC_WEAK_FUNC(sub_825C181C);
PPC_FUNC_IMPL(__imp__sub_825C181C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1820"))) PPC_WEAK_FUNC(sub_825C1820);
PPC_FUNC_IMPL(__imp__sub_825C1820) {
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
	// beq cr6,0x825c1850
	if (cr6.eq) goto loc_825C1850;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c1854
	if (!cr6.eq) goto loc_825C1854;
loc_825C1850:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C1854:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270b988
	sub_8270B988(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1874"))) PPC_WEAK_FUNC(sub_825C1874);
PPC_FUNC_IMPL(__imp__sub_825C1874) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1878"))) PPC_WEAK_FUNC(sub_825C1878);
PPC_FUNC_IMPL(__imp__sub_825C1878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r10,r11,-3032
	ctx.r10.s64 = r11.s64 + -3032;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C188C"))) PPC_WEAK_FUNC(sub_825C188C);
PPC_FUNC_IMPL(__imp__sub_825C188C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1890"))) PPC_WEAK_FUNC(sub_825C1890);
PPC_FUNC_IMPL(__imp__sub_825C1890) {
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
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r10,r11,-3032
	ctx.r10.s64 = r11.s64 + -3032;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825C18D4"))) PPC_WEAK_FUNC(sub_825C18D4);
PPC_FUNC_IMPL(__imp__sub_825C18D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C18D8"))) PPC_WEAK_FUNC(sub_825C18D8);
PPC_FUNC_IMPL(__imp__sub_825C18D8) {
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
	// beq cr6,0x825c1908
	if (cr6.eq) goto loc_825C1908;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c190c
	if (!cr6.eq) goto loc_825C190C;
loc_825C1908:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C190C:
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270b980
	sub_8270B980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C192C"))) PPC_WEAK_FUNC(sub_825C192C);
PPC_FUNC_IMPL(__imp__sub_825C192C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1930"))) PPC_WEAK_FUNC(sub_825C1930);
PPC_FUNC_IMPL(__imp__sub_825C1930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r11,-3020
	ctx.r10.s64 = r11.s64 + -3020;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
}

__attribute__((alias("__imp__sub_825C1948"))) PPC_WEAK_FUNC(sub_825C1948);
PPC_FUNC_IMPL(__imp__sub_825C1948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C194C"))) PPC_WEAK_FUNC(sub_825C194C);
PPC_FUNC_IMPL(__imp__sub_825C194C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1950"))) PPC_WEAK_FUNC(sub_825C1950);
PPC_FUNC_IMPL(__imp__sub_825C1950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r10,r11,-3020
	ctx.r10.s64 = r11.s64 + -3020;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8270b7b0
	sub_8270B7B0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C19A4"))) PPC_WEAK_FUNC(sub_825C19A4);
PPC_FUNC_IMPL(__imp__sub_825C19A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C19A8"))) PPC_WEAK_FUNC(sub_825C19A8);
PPC_FUNC_IMPL(__imp__sub_825C19A8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c19d8
	if (cr6.eq) goto loc_825C19D8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c19dc
	if (!cr6.eq) goto loc_825C19DC;
loc_825C19D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C19DC:
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270b968
	sub_8270B968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1A00"))) PPC_WEAK_FUNC(sub_825C1A00);
PPC_FUNC_IMPL(__imp__sub_825C1A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1A04"))) PPC_WEAK_FUNC(sub_825C1A04);
PPC_FUNC_IMPL(__imp__sub_825C1A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1A08"))) PPC_WEAK_FUNC(sub_825C1A08);
PPC_FUNC_IMPL(__imp__sub_825C1A08) {
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
	// beq cr6,0x825c1a44
	if (cr6.eq) goto loc_825C1A44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// bne cr6,0x825c1a48
	if (!cr6.eq) goto loc_825C1A48;
loc_825C1A44:
	// li r11,0
	r11.s64 = 0;
loc_825C1A48:
	// lwz r31,32(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825c1a64
	if (cr6.eq) goto loc_825C1A64;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c1a68
	if (!cr6.eq) goto loc_825C1A68;
loc_825C1A64:
	// li r11,0
	r11.s64 = 0;
loc_825C1A68:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lbz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// bl 0x825c5840
	sub_825C5840(ctx, base);
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

__attribute__((alias("__imp__sub_825C1A94"))) PPC_WEAK_FUNC(sub_825C1A94);
PPC_FUNC_IMPL(__imp__sub_825C1A94) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1A98"))) PPC_WEAK_FUNC(sub_825C1A98);
PPC_FUNC_IMPL(__imp__sub_825C1A98) {
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
	// beq cr6,0x825c1ac8
	if (cr6.eq) goto loc_825C1AC8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c1acc
	if (!cr6.eq) goto loc_825C1ACC;
loc_825C1AC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825C1ACC:
	// addi r5,r31,20
	ctx.r5.s64 = r31.s64 + 20;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8270bf10
	sub_8270BF10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1AEC"))) PPC_WEAK_FUNC(sub_825C1AEC);
PPC_FUNC_IMPL(__imp__sub_825C1AEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1AF0"))) PPC_WEAK_FUNC(sub_825C1AF0);
PPC_FUNC_IMPL(__imp__sub_825C1AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// addi r9,r11,-3008
	ctx.r9.s64 = r11.s64 + -3008;
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r7,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_825C1B24"))) PPC_WEAK_FUNC(sub_825C1B24);
PPC_FUNC_IMPL(__imp__sub_825C1B24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1B28"))) PPC_WEAK_FUNC(sub_825C1B28);
PPC_FUNC_IMPL(__imp__sub_825C1B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-2996
	ctx.r9.s64 = r11.s64 + -2996;
	// addi r11,r3,20
	r11.s64 = ctx.r3.s64 + 20;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
}

__attribute__((alias("__imp__sub_825C1B58"))) PPC_WEAK_FUNC(sub_825C1B58);
PPC_FUNC_IMPL(__imp__sub_825C1B58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1B5C"))) PPC_WEAK_FUNC(sub_825C1B5C);
PPC_FUNC_IMPL(__imp__sub_825C1B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1B60"))) PPC_WEAK_FUNC(sub_825C1B60);
PPC_FUNC_IMPL(__imp__sub_825C1B60) {
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,-2980
	ctx.r9.s64 = r11.s64 + -2980;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x825c1b94
	if (cr6.eq) goto loc_825C1B94;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825C1B94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1BA4"))) PPC_WEAK_FUNC(sub_825C1BA4);
PPC_FUNC_IMPL(__imp__sub_825C1BA4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1BA8"))) PPC_WEAK_FUNC(sub_825C1BA8);
PPC_FUNC_IMPL(__imp__sub_825C1BA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c1be4
	if (cr6.eq) goto loc_825C1BE4;
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
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
loc_825C1BE4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826d7d78
	sub_826D7D78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825C1BFC"))) PPC_WEAK_FUNC(sub_825C1BFC);
PPC_FUNC_IMPL(__imp__sub_825C1BFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1C00"))) PPC_WEAK_FUNC(sub_825C1C00);
PPC_FUNC_IMPL(__imp__sub_825C1C00) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-2976
	ctx.r7.s64 = ctx.r10.s64 + -2976;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,23
	ctx.r8.s64 = 23;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,12
	ctx.r3.s64 = 12;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c1c70
	if (cr6.eq) goto loc_825C1C70;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r9,r11,25316
	ctx.r9.s64 = r11.s64 + 25316;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_825C1C70:
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826d7d90
	sub_826D7D90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825C1C80"))) PPC_WEAK_FUNC(sub_825C1C80);
PPC_FUNC_IMPL(__imp__sub_825C1C80) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825C1C84"))) PPC_WEAK_FUNC(sub_825C1C84);
PPC_FUNC_IMPL(__imp__sub_825C1C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1C88"))) PPC_WEAK_FUNC(sub_825C1C88);
PPC_FUNC_IMPL(__imp__sub_825C1C88) {
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
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// addi r7,r10,-2976
	ctx.r7.s64 = ctx.r10.s64 + -2976;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r8,45
	ctx.r8.s64 = 45;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c1cf0
	if (cr6.eq) goto loc_825C1CF0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-2980
	ctx.r10.s64 = r11.s64 + -2980;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_825C1CF0:
	// stw r31,84(r29)
	PPC_STORE_U32(r29.u32 + 84, r31.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826d7d60
	sub_826D7D60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825C1D00"))) PPC_WEAK_FUNC(sub_825C1D00);
PPC_FUNC_IMPL(__imp__sub_825C1D00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C1D04"))) PPC_WEAK_FUNC(sub_825C1D04);
PPC_FUNC_IMPL(__imp__sub_825C1D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1D08"))) PPC_WEAK_FUNC(sub_825C1D08);
PPC_FUNC_IMPL(__imp__sub_825C1D08) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32146
	ctx.r10.s64 = -2106720256;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r8,r10,-29624
	ctx.r8.s64 = ctx.r10.s64 + -29624;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lis r3,-31934
	ctx.r3.s64 = -2092826624;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r3,22232(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22232);
	// bl 0x826d95c8
	sub_826D95C8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825C1D74"))) PPC_WEAK_FUNC(sub_825C1D74);
PPC_FUNC_IMPL(__imp__sub_825C1D74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1D78"))) PPC_WEAK_FUNC(sub_825C1D78);
PPC_FUNC_IMPL(__imp__sub_825C1D78) {
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
	// lis r11,-32164
	r11.s64 = -2107899904;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,7304
	ctx.r8.s64 = r11.s64 + 7304;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19428);
	// lwz r30,8(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r29,4(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c1ddc
	if (cr6.eq) goto loc_825C1DDC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825c1af0
	sub_825C1AF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C1DDC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825C1DE0"))) PPC_WEAK_FUNC(sub_825C1DE0);
PPC_FUNC_IMPL(__imp__sub_825C1DE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825C1DE4"))) PPC_WEAK_FUNC(sub_825C1DE4);
PPC_FUNC_IMPL(__imp__sub_825C1DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1DE8"))) PPC_WEAK_FUNC(sub_825C1DE8);
PPC_FUNC_IMPL(__imp__sub_825C1DE8) {
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
	// lis r11,-32164
	r11.s64 = -2107899904;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r9,84(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r8,r11,7080
	ctx.r8.s64 = r11.s64 + 7080;
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,-19428(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19428);
	// lwz r30,4(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r31,108(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c1e4c
	if (cr6.eq) goto loc_825C1E4C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825c1b28
	sub_825C1B28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825C1E4C:
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

__attribute__((alias("__imp__sub_825C1E60"))) PPC_WEAK_FUNC(sub_825C1E60);
PPC_FUNC_IMPL(__imp__sub_825C1E60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1E64"))) PPC_WEAK_FUNC(sub_825C1E64);
PPC_FUNC_IMPL(__imp__sub_825C1E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1E68"))) PPC_WEAK_FUNC(sub_825C1E68);
PPC_FUNC_IMPL(__imp__sub_825C1E68) {
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
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// lbz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// addi r6,r8,-2912
	ctx.r6.s64 = ctx.r8.s64 + -2912;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// rlwimi r9,r7,6,25,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 6) & 0x40) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFBF);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r4,r9,25
	ctx.r4.u64 = ctx.r9.u32 & 0x7F;
	// stb r4,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r4.u8);
	// bl 0x8270bb98
	sub_8270BB98(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_825C1EC8"))) PPC_WEAK_FUNC(sub_825C1EC8);
PPC_FUNC_IMPL(__imp__sub_825C1EC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1ECC"))) PPC_WEAK_FUNC(sub_825C1ECC);
PPC_FUNC_IMPL(__imp__sub_825C1ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1ED0"))) PPC_WEAK_FUNC(sub_825C1ED0);
PPC_FUNC_IMPL(__imp__sub_825C1ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,-2912
	ctx.r10.s64 = r11.s64 + -2912;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1EE0"))) PPC_WEAK_FUNC(sub_825C1EE0);
PPC_FUNC_IMPL(__imp__sub_825C1EE0) {
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
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825c1f94
	if (!cr6.eq) goto loc_825C1F94;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// rlwimi r11,r9,7,0,24
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFF80) | (r11.u64 & 0xFFFFFFFF0000007F);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,20068(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20068);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x825c1f44
	if (cr6.eq) goto loc_825C1F44;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c1f48
	if (!cr6.eq) goto loc_825C1F48;
loc_825C1F44:
	// li r11,0
	r11.s64 = 0;
loc_825C1F48:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c1f94
	if (cr6.eq) goto loc_825C1F94;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c1f94
	if (!cr6.eq) goto loc_825C1F94;
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
loc_825C1F94:
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

__attribute__((alias("__imp__sub_825C1FA8"))) PPC_WEAK_FUNC(sub_825C1FA8);
PPC_FUNC_IMPL(__imp__sub_825C1FA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C1FAC"))) PPC_WEAK_FUNC(sub_825C1FAC);
PPC_FUNC_IMPL(__imp__sub_825C1FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C1FB0"))) PPC_WEAK_FUNC(sub_825C1FB0);
PPC_FUNC_IMPL(__imp__sub_825C1FB0) {
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
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825c2060
	if (cr6.eq) goto loc_825C2060;
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r8,r11,25
	ctx.r8.u64 = r11.u32 & 0x7F;
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// stb r8,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r8.u8);
	// lwz r11,20064(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20064);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lwz r3,-14756(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x825c2010
	if (cr6.eq) goto loc_825C2010;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c2014
	if (!cr6.eq) goto loc_825C2014;
loc_825C2010:
	// li r11,0
	r11.s64 = 0;
loc_825C2014:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c2060
	if (cr6.eq) goto loc_825C2060;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c2060
	if (!cr6.eq) goto loc_825C2060;
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
loc_825C2060:
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

__attribute__((alias("__imp__sub_825C2074"))) PPC_WEAK_FUNC(sub_825C2074);
PPC_FUNC_IMPL(__imp__sub_825C2074) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2078"))) PPC_WEAK_FUNC(sub_825C2078);
PPC_FUNC_IMPL(__imp__sub_825C2078) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r11,20060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20060);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x825c20c0
	if (cr6.eq) goto loc_825C20C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c20c4
	if (!cr6.eq) goto loc_825C20C4;
loc_825C20C0:
	// li r11,0
	r11.s64 = 0;
loc_825C20C4:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c2110
	if (cr6.eq) goto loc_825C2110;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c2110
	if (!cr6.eq) goto loc_825C2110;
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
loc_825C2110:
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

__attribute__((alias("__imp__sub_825C2124"))) PPC_WEAK_FUNC(sub_825C2124);
PPC_FUNC_IMPL(__imp__sub_825C2124) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2128"))) PPC_WEAK_FUNC(sub_825C2128);
PPC_FUNC_IMPL(__imp__sub_825C2128) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,24192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,20056(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// beq cr6,0x825c21c4
	if (cr6.eq) goto loc_825C21C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c21c8
	if (!cr6.eq) goto loc_825C21C8;
loc_825C21C4:
	// li r11,0
	r11.s64 = 0;
loc_825C21C8:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c2214
	if (cr6.eq) goto loc_825C2214;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c2214
	if (!cr6.eq) goto loc_825C2214;
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
loc_825C2214:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
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

__attribute__((alias("__imp__sub_825C2230"))) PPC_WEAK_FUNC(sub_825C2230);
PPC_FUNC_IMPL(__imp__sub_825C2230) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2234"))) PPC_WEAK_FUNC(sub_825C2234);
PPC_FUNC_IMPL(__imp__sub_825C2234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2238"))) PPC_WEAK_FUNC(sub_825C2238);
PPC_FUNC_IMPL(__imp__sub_825C2238) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r6,24192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,20056(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20056);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// beq cr6,0x825c22d4
	if (cr6.eq) goto loc_825C22D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c22d8
	if (!cr6.eq) goto loc_825C22D8;
loc_825C22D4:
	// li r11,0
	r11.s64 = 0;
loc_825C22D8:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c2324
	if (cr6.eq) goto loc_825C2324;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c2324
	if (!cr6.eq) goto loc_825C2324;
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
loc_825C2324:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
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

__attribute__((alias("__imp__sub_825C2340"))) PPC_WEAK_FUNC(sub_825C2340);
PPC_FUNC_IMPL(__imp__sub_825C2340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2344"))) PPC_WEAK_FUNC(sub_825C2344);
PPC_FUNC_IMPL(__imp__sub_825C2344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2348"))) PPC_WEAK_FUNC(sub_825C2348);
PPC_FUNC_IMPL(__imp__sub_825C2348) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	f0.f64 = double(temp.f32);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,24192(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,20052(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20052);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f9,124(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f7,132(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// beq cr6,0x825c23dc
	if (cr6.eq) goto loc_825C23DC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c23e0
	if (!cr6.eq) goto loc_825C23E0;
loc_825C23DC:
	// li r11,0
	r11.s64 = 0;
loc_825C23E0:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c242c
	if (cr6.eq) goto loc_825C242C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c242c
	if (!cr6.eq) goto loc_825C242C;
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
loc_825C242C:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
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

__attribute__((alias("__imp__sub_825C2448"))) PPC_WEAK_FUNC(sub_825C2448);
PPC_FUNC_IMPL(__imp__sub_825C2448) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C244C"))) PPC_WEAK_FUNC(sub_825C244C);
PPC_FUNC_IMPL(__imp__sub_825C244C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825C2450"))) PPC_WEAK_FUNC(sub_825C2450);
PPC_FUNC_IMPL(__imp__sub_825C2450) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// lwz r11,20076(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20076);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// beq cr6,0x825c249c
	if (cr6.eq) goto loc_825C249C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825c24a0
	if (!cr6.eq) goto loc_825C24A0;
loc_825C249C:
	// li r11,0
	r11.s64 = 0;
loc_825C24A0:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825c24ec
	if (cr6.eq) goto loc_825C24EC;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825c24ec
	if (!cr6.eq) goto loc_825C24EC;
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
loc_825C24EC:
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

__attribute__((alias("__imp__sub_825C2500"))) PPC_WEAK_FUNC(sub_825C2500);
PPC_FUNC_IMPL(__imp__sub_825C2500) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825C2504"))) PPC_WEAK_FUNC(sub_825C2504);
PPC_FUNC_IMPL(__imp__sub_825C2504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

