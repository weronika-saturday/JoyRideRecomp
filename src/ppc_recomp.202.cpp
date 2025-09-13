#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82689010"))) PPC_WEAK_FUNC(sub_82689010);
PPC_FUNC_IMPL(__imp__sub_82689010) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-24772
	r11.s64 = r11.s64 + -24772;
	// addi r10,r10,-24780
	ctx.r10.s64 = ctx.r10.s64 + -24780;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82688c20
	sub_82688C20(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82689058
	if (cr0.eq) goto loc_82689058;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82686da0
	sub_82686DA0(ctx, base);
loc_82689058:
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

__attribute__((alias("__imp__sub_82689070"))) PPC_WEAK_FUNC(sub_82689070);
PPC_FUNC_IMPL(__imp__sub_82689070) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82689074"))) PPC_WEAK_FUNC(sub_82689074);
PPC_FUNC_IMPL(__imp__sub_82689074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82689078"))) PPC_WEAK_FUNC(sub_82689078);
PPC_FUNC_IMPL(__imp__sub_82689078) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x826890a0
	if (!cr6.eq) goto loc_826890A0;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// b 0x82689188
	goto loc_82689188;
loc_826890A0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826890cc
	if (cr0.eq) goto loc_826890CC;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,28
	ctx.r3.u64 = ctx.r3.u64 | 28;
	// b 0x82689188
	goto loc_82689188;
loc_826890CC:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82686d90
	sub_82686D90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82689104
	if (cr0.eq) goto loc_82689104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82688f18
	sub_82688F18(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-24768
	r11.s64 = r11.s64 + -24768;
	// addi r10,r10,-24780
	ctx.r10.s64 = ctx.r10.s64 + -24780;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// b 0x82689108
	goto loc_82689108;
loc_82689104:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82689108:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82686e70
	sub_82686E70(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82689128
	if (!cr6.eq) goto loc_82689128;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x82689188
	goto loc_82689188;
loc_82689128:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828efc78
	sub_828EFC78(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82688b80
	sub_82688B80(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r10,-24828
	ctx.r10.s64 = ctx.r10.s64 + -24828;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x82689184
	if (cr6.eq) goto loc_82689184;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82689184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82689188:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
}

__attribute__((alias("__imp__sub_8268918C"))) PPC_WEAK_FUNC(sub_8268918C);
PPC_FUNC_IMPL(__imp__sub_8268918C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82689190"))) PPC_WEAK_FUNC(sub_82689190);
PPC_FUNC_IMPL(__imp__sub_82689190) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x826891b8
	if (!cr6.eq) goto loc_826891B8;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// b 0x82689254
	goto loc_82689254;
loc_826891B8:
	// li r30,0
	r30.s64 = 0;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_826891C0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826891c0
	if (!cr6.eq) goto loc_826891C0;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi. r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82689250
	if (cr0.eq) goto loc_82689250;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,59
	cr6.compare<int32_t>(r11.s32, 59, xer);
	// beq cr6,0x82689250
	if (cr6.eq) goto loc_82689250;
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// bne cr6,0x8268925c
	if (!cr6.eq) goto loc_8268925C;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// li r4,93
	ctx.r4.s64 = 93;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828eb800
	sub_828EB800(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82689250
	if (cr0.eq) goto loc_82689250;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x82689250
	if (cr6.eq) goto loc_82689250;
	// stb r30,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r30.u8);
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x828efc78
	sub_828EFC78(ctx, base);
	// addi r30,r29,24
	r30.s64 = r29.s64 + 24;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82689078
	sub_82689078(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82689250:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82689254:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8268925C:
	// li r4,61
	ctx.r4.s64 = 61;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828eb800
	sub_828EB800(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82689250
	if (cr0.eq) goto loc_82689250;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x82689250
	if (cr6.eq) goto loc_82689250;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8268927C:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8268927c
	if (!cr6.eq) goto loc_8268927C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi. r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82689250
	if (cr0.eq) goto loc_82689250;
	// stb r30,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r30.u8);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r4,r31,r30
	ctx.r4.s64 = r30.s64 - r31.s64;
	// bl 0x828efc78
	sub_828EFC78(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r29,24
	ctx.r4.s64 = r29.s64 + 24;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
}

__attribute__((alias("__imp__sub_826892D0"))) PPC_WEAK_FUNC(sub_826892D0);
PPC_FUNC_IMPL(__imp__sub_826892D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268924c
	// ERROR 8268924C
	return;
}

__attribute__((alias("__imp__sub_826892D4"))) PPC_WEAK_FUNC(sub_826892D4);
PPC_FUNC_IMPL(__imp__sub_826892D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826892D8"))) PPC_WEAK_FUNC(sub_826892D8);
PPC_FUNC_IMPL(__imp__sub_826892D8) {
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
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826893d8
	if (cr6.eq) goto loc_826893D8;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826893d8
	if (cr6.eq) goto loc_826893D8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826893d8
	if (cr6.eq) goto loc_826893D8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82689338
	if (!cr0.eq) goto loc_82689338;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82689078
	sub_82689078(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x826893e0
	if (cr0.lt) goto loc_826893E0;
loc_82689338:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828efc78
	sub_828EFC78(ctx, base);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// b 0x8268936c
	goto loc_8268936C;
loc_8268935C:
	// bl 0x828eb8c0
	sub_828EB8C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82689374
	if (cr0.eq) goto loc_82689374;
	// lbzu r11,1(r30)
	ea = 1 + r30.u32;
	r11.u64 = PPC_LOAD_U8(ea);
	r30.u32 = ea;
loc_8268936C:
	// extsb. r3,r11
	ctx.r3.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268935c
	if (!cr0.eq) goto loc_8268935C;
loc_82689374:
	// addi r31,r1,192
	r31.s64 = ctx.r1.s64 + 192;
	// addi r29,r1,192
	r29.s64 = ctx.r1.s64 + 192;
loc_8268937C:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb. r3,r11
	ctx.r3.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x826893b0
	if (cr0.eq) goto loc_826893B0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x828eb8c0
	sub_828EB8C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x826893a0
	if (!cr0.eq) goto loc_826893A0;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_826893A0:
	// addi r11,r1,704
	r11.s64 = ctx.r1.s64 + 704;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8268937c
	if (cr6.lt) goto loc_8268937C;
loc_826893B0:
	// li r11,0
	r11.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82687bb0
	sub_82687BB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x82688ac8
	sub_82688AC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826893e0
	goto loc_826893E0;
loc_826893D8:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
loc_826893E0:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
}

__attribute__((alias("__imp__sub_826893E4"))) PPC_WEAK_FUNC(sub_826893E4);
PPC_FUNC_IMPL(__imp__sub_826893E4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_826893E8"))) PPC_WEAK_FUNC(sub_826893E8);
PPC_FUNC_IMPL(__imp__sub_826893E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lis r11,-32687
	r11.s64 = -2142175232;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bgt cr6,0x8268999c
	if (cr6.gt) {
		sub_8268999C(ctx, base);
		return;
	}
	// beq cr6,0x82689990
	if (cr6.eq) {
		sub_82689990(ctx, base);
		return;
	}
	// addis r11,r6,32688
	r11.s64 = ctx.r6.s64 + 2142240768;
	// cmplwi cr6,r11,126
	cr6.compare<uint32_t>(r11.u32, 126, xer);
	// bgt cr6,0x82689d00
	if (cr6.gt) {
		// ERROR 82689D00
		return;
	}
	// lis r12,-32249
	r12.s64 = -2113470464;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-24728
	r12.s64 = r12.s64 + -24728;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32151
	r12.s64 = -2107047936;
	// addi r12,r12,-27592
	r12.s64 = r12.s64 + -27592;
	// nop 
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
}

__attribute__((alias("__imp__sub_82689434"))) PPC_WEAK_FUNC(sub_82689434);
PPC_FUNC_IMPL(__imp__sub_82689434) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82689438"))) PPC_WEAK_FUNC(sub_82689438);
PPC_FUNC_IMPL(__imp__sub_82689438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20140
	ctx.r5.s64 = r11.s64 + -20140;
}

__attribute__((alias("__imp__sub_82689440"))) PPC_WEAK_FUNC(sub_82689440);
PPC_FUNC_IMPL(__imp__sub_82689440) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689444"))) PPC_WEAK_FUNC(sub_82689444);
PPC_FUNC_IMPL(__imp__sub_82689444) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20156
	ctx.r5.s64 = r11.s64 + -20156;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689450"))) PPC_WEAK_FUNC(sub_82689450);
PPC_FUNC_IMPL(__imp__sub_82689450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20172
	ctx.r5.s64 = r11.s64 + -20172;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268945C"))) PPC_WEAK_FUNC(sub_8268945C);
PPC_FUNC_IMPL(__imp__sub_8268945C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20192
	ctx.r5.s64 = r11.s64 + -20192;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689468"))) PPC_WEAK_FUNC(sub_82689468);
PPC_FUNC_IMPL(__imp__sub_82689468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20216
	ctx.r5.s64 = r11.s64 + -20216;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689474"))) PPC_WEAK_FUNC(sub_82689474);
PPC_FUNC_IMPL(__imp__sub_82689474) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20240
	ctx.r5.s64 = r11.s64 + -20240;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689480"))) PPC_WEAK_FUNC(sub_82689480);
PPC_FUNC_IMPL(__imp__sub_82689480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20264
	ctx.r5.s64 = r11.s64 + -20264;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268948C"))) PPC_WEAK_FUNC(sub_8268948C);
PPC_FUNC_IMPL(__imp__sub_8268948C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20300
	ctx.r5.s64 = r11.s64 + -20300;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689498"))) PPC_WEAK_FUNC(sub_82689498);
PPC_FUNC_IMPL(__imp__sub_82689498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20316
	ctx.r5.s64 = r11.s64 + -20316;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826894A4"))) PPC_WEAK_FUNC(sub_826894A4);
PPC_FUNC_IMPL(__imp__sub_826894A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20336
	ctx.r5.s64 = r11.s64 + -20336;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826894B0"))) PPC_WEAK_FUNC(sub_826894B0);
PPC_FUNC_IMPL(__imp__sub_826894B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20360
	ctx.r5.s64 = r11.s64 + -20360;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826894BC"))) PPC_WEAK_FUNC(sub_826894BC);
PPC_FUNC_IMPL(__imp__sub_826894BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20380
	ctx.r5.s64 = r11.s64 + -20380;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826894C8"))) PPC_WEAK_FUNC(sub_826894C8);
PPC_FUNC_IMPL(__imp__sub_826894C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20396
	ctx.r5.s64 = r11.s64 + -20396;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826894D4"))) PPC_WEAK_FUNC(sub_826894D4);
PPC_FUNC_IMPL(__imp__sub_826894D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20416
	ctx.r5.s64 = r11.s64 + -20416;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826894E0"))) PPC_WEAK_FUNC(sub_826894E0);
PPC_FUNC_IMPL(__imp__sub_826894E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20448
	ctx.r5.s64 = r11.s64 + -20448;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826894EC"))) PPC_WEAK_FUNC(sub_826894EC);
PPC_FUNC_IMPL(__imp__sub_826894EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20480
	ctx.r5.s64 = r11.s64 + -20480;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826894F8"))) PPC_WEAK_FUNC(sub_826894F8);
PPC_FUNC_IMPL(__imp__sub_826894F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20508
	ctx.r5.s64 = r11.s64 + -20508;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689504"))) PPC_WEAK_FUNC(sub_82689504);
PPC_FUNC_IMPL(__imp__sub_82689504) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20532
	ctx.r5.s64 = r11.s64 + -20532;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689510"))) PPC_WEAK_FUNC(sub_82689510);
PPC_FUNC_IMPL(__imp__sub_82689510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20552
	ctx.r5.s64 = r11.s64 + -20552;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268951C"))) PPC_WEAK_FUNC(sub_8268951C);
PPC_FUNC_IMPL(__imp__sub_8268951C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20576
	ctx.r5.s64 = r11.s64 + -20576;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689528"))) PPC_WEAK_FUNC(sub_82689528);
PPC_FUNC_IMPL(__imp__sub_82689528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20604
	ctx.r5.s64 = r11.s64 + -20604;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689534"))) PPC_WEAK_FUNC(sub_82689534);
PPC_FUNC_IMPL(__imp__sub_82689534) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20628
	ctx.r5.s64 = r11.s64 + -20628;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689540"))) PPC_WEAK_FUNC(sub_82689540);
PPC_FUNC_IMPL(__imp__sub_82689540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20656
	ctx.r5.s64 = r11.s64 + -20656;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268954C"))) PPC_WEAK_FUNC(sub_8268954C);
PPC_FUNC_IMPL(__imp__sub_8268954C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20688
	ctx.r5.s64 = r11.s64 + -20688;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689558"))) PPC_WEAK_FUNC(sub_82689558);
PPC_FUNC_IMPL(__imp__sub_82689558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20712
	ctx.r5.s64 = r11.s64 + -20712;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689564"))) PPC_WEAK_FUNC(sub_82689564);
PPC_FUNC_IMPL(__imp__sub_82689564) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20736
	ctx.r5.s64 = r11.s64 + -20736;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689570"))) PPC_WEAK_FUNC(sub_82689570);
PPC_FUNC_IMPL(__imp__sub_82689570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20760
	ctx.r5.s64 = r11.s64 + -20760;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268957C"))) PPC_WEAK_FUNC(sub_8268957C);
PPC_FUNC_IMPL(__imp__sub_8268957C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20788
	ctx.r5.s64 = r11.s64 + -20788;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689588"))) PPC_WEAK_FUNC(sub_82689588);
PPC_FUNC_IMPL(__imp__sub_82689588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20808
	ctx.r5.s64 = r11.s64 + -20808;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689594"))) PPC_WEAK_FUNC(sub_82689594);
PPC_FUNC_IMPL(__imp__sub_82689594) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20832
	ctx.r5.s64 = r11.s64 + -20832;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826895A0"))) PPC_WEAK_FUNC(sub_826895A0);
PPC_FUNC_IMPL(__imp__sub_826895A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20868
	ctx.r5.s64 = r11.s64 + -20868;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826895AC"))) PPC_WEAK_FUNC(sub_826895AC);
PPC_FUNC_IMPL(__imp__sub_826895AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20900
	ctx.r5.s64 = r11.s64 + -20900;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826895B8"))) PPC_WEAK_FUNC(sub_826895B8);
PPC_FUNC_IMPL(__imp__sub_826895B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20928
	ctx.r5.s64 = r11.s64 + -20928;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826895C4"))) PPC_WEAK_FUNC(sub_826895C4);
PPC_FUNC_IMPL(__imp__sub_826895C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20960
	ctx.r5.s64 = r11.s64 + -20960;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826895D0"))) PPC_WEAK_FUNC(sub_826895D0);
PPC_FUNC_IMPL(__imp__sub_826895D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-20988
	ctx.r5.s64 = r11.s64 + -20988;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826895DC"))) PPC_WEAK_FUNC(sub_826895DC);
PPC_FUNC_IMPL(__imp__sub_826895DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21012
	ctx.r5.s64 = r11.s64 + -21012;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826895E8"))) PPC_WEAK_FUNC(sub_826895E8);
PPC_FUNC_IMPL(__imp__sub_826895E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21036
	ctx.r5.s64 = r11.s64 + -21036;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826895F4"))) PPC_WEAK_FUNC(sub_826895F4);
PPC_FUNC_IMPL(__imp__sub_826895F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21064
	ctx.r5.s64 = r11.s64 + -21064;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689600"))) PPC_WEAK_FUNC(sub_82689600);
PPC_FUNC_IMPL(__imp__sub_82689600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21092
	ctx.r5.s64 = r11.s64 + -21092;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268960C"))) PPC_WEAK_FUNC(sub_8268960C);
PPC_FUNC_IMPL(__imp__sub_8268960C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21116
	ctx.r5.s64 = r11.s64 + -21116;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689618"))) PPC_WEAK_FUNC(sub_82689618);
PPC_FUNC_IMPL(__imp__sub_82689618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21144
	ctx.r5.s64 = r11.s64 + -21144;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689624"))) PPC_WEAK_FUNC(sub_82689624);
PPC_FUNC_IMPL(__imp__sub_82689624) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21176
	ctx.r5.s64 = r11.s64 + -21176;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689630"))) PPC_WEAK_FUNC(sub_82689630);
PPC_FUNC_IMPL(__imp__sub_82689630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21208
	ctx.r5.s64 = r11.s64 + -21208;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268963C"))) PPC_WEAK_FUNC(sub_8268963C);
PPC_FUNC_IMPL(__imp__sub_8268963C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21236
	ctx.r5.s64 = r11.s64 + -21236;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689648"))) PPC_WEAK_FUNC(sub_82689648);
PPC_FUNC_IMPL(__imp__sub_82689648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21260
	ctx.r5.s64 = r11.s64 + -21260;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689654"))) PPC_WEAK_FUNC(sub_82689654);
PPC_FUNC_IMPL(__imp__sub_82689654) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21284
	ctx.r5.s64 = r11.s64 + -21284;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689660"))) PPC_WEAK_FUNC(sub_82689660);
PPC_FUNC_IMPL(__imp__sub_82689660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21316
	ctx.r5.s64 = r11.s64 + -21316;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268966C"))) PPC_WEAK_FUNC(sub_8268966C);
PPC_FUNC_IMPL(__imp__sub_8268966C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21352
	ctx.r5.s64 = r11.s64 + -21352;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689678"))) PPC_WEAK_FUNC(sub_82689678);
PPC_FUNC_IMPL(__imp__sub_82689678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21376
	ctx.r5.s64 = r11.s64 + -21376;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689684"))) PPC_WEAK_FUNC(sub_82689684);
PPC_FUNC_IMPL(__imp__sub_82689684) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21400
	ctx.r5.s64 = r11.s64 + -21400;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689690"))) PPC_WEAK_FUNC(sub_82689690);
PPC_FUNC_IMPL(__imp__sub_82689690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21424
	ctx.r5.s64 = r11.s64 + -21424;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268969C"))) PPC_WEAK_FUNC(sub_8268969C);
PPC_FUNC_IMPL(__imp__sub_8268969C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21444
	ctx.r5.s64 = r11.s64 + -21444;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826896A8"))) PPC_WEAK_FUNC(sub_826896A8);
PPC_FUNC_IMPL(__imp__sub_826896A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21468
	ctx.r5.s64 = r11.s64 + -21468;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826896B4"))) PPC_WEAK_FUNC(sub_826896B4);
PPC_FUNC_IMPL(__imp__sub_826896B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21488
	ctx.r5.s64 = r11.s64 + -21488;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826896C0"))) PPC_WEAK_FUNC(sub_826896C0);
PPC_FUNC_IMPL(__imp__sub_826896C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21508
	ctx.r5.s64 = r11.s64 + -21508;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826896CC"))) PPC_WEAK_FUNC(sub_826896CC);
PPC_FUNC_IMPL(__imp__sub_826896CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21536
	ctx.r5.s64 = r11.s64 + -21536;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826896D8"))) PPC_WEAK_FUNC(sub_826896D8);
PPC_FUNC_IMPL(__imp__sub_826896D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21564
	ctx.r5.s64 = r11.s64 + -21564;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826896E4"))) PPC_WEAK_FUNC(sub_826896E4);
PPC_FUNC_IMPL(__imp__sub_826896E4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21588
	ctx.r5.s64 = r11.s64 + -21588;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826896F0"))) PPC_WEAK_FUNC(sub_826896F0);
PPC_FUNC_IMPL(__imp__sub_826896F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21616
	ctx.r5.s64 = r11.s64 + -21616;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826896FC"))) PPC_WEAK_FUNC(sub_826896FC);
PPC_FUNC_IMPL(__imp__sub_826896FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21644
	ctx.r5.s64 = r11.s64 + -21644;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689708"))) PPC_WEAK_FUNC(sub_82689708);
PPC_FUNC_IMPL(__imp__sub_82689708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21672
	ctx.r5.s64 = r11.s64 + -21672;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689714"))) PPC_WEAK_FUNC(sub_82689714);
PPC_FUNC_IMPL(__imp__sub_82689714) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21712
	ctx.r5.s64 = r11.s64 + -21712;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689720"))) PPC_WEAK_FUNC(sub_82689720);
PPC_FUNC_IMPL(__imp__sub_82689720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21748
	ctx.r5.s64 = r11.s64 + -21748;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268972C"))) PPC_WEAK_FUNC(sub_8268972C);
PPC_FUNC_IMPL(__imp__sub_8268972C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21784
	ctx.r5.s64 = r11.s64 + -21784;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689738"))) PPC_WEAK_FUNC(sub_82689738);
PPC_FUNC_IMPL(__imp__sub_82689738) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21808
	ctx.r5.s64 = r11.s64 + -21808;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689744"))) PPC_WEAK_FUNC(sub_82689744);
PPC_FUNC_IMPL(__imp__sub_82689744) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21840
	ctx.r5.s64 = r11.s64 + -21840;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689750"))) PPC_WEAK_FUNC(sub_82689750);
PPC_FUNC_IMPL(__imp__sub_82689750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21864
	ctx.r5.s64 = r11.s64 + -21864;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268975C"))) PPC_WEAK_FUNC(sub_8268975C);
PPC_FUNC_IMPL(__imp__sub_8268975C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21896
	ctx.r5.s64 = r11.s64 + -21896;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689768"))) PPC_WEAK_FUNC(sub_82689768);
PPC_FUNC_IMPL(__imp__sub_82689768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21928
	ctx.r5.s64 = r11.s64 + -21928;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689774"))) PPC_WEAK_FUNC(sub_82689774);
PPC_FUNC_IMPL(__imp__sub_82689774) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21960
	ctx.r5.s64 = r11.s64 + -21960;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689780"))) PPC_WEAK_FUNC(sub_82689780);
PPC_FUNC_IMPL(__imp__sub_82689780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-21984
	ctx.r5.s64 = r11.s64 + -21984;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268978C"))) PPC_WEAK_FUNC(sub_8268978C);
PPC_FUNC_IMPL(__imp__sub_8268978C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22016
	ctx.r5.s64 = r11.s64 + -22016;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689798"))) PPC_WEAK_FUNC(sub_82689798);
PPC_FUNC_IMPL(__imp__sub_82689798) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22036
	ctx.r5.s64 = r11.s64 + -22036;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826897A4"))) PPC_WEAK_FUNC(sub_826897A4);
PPC_FUNC_IMPL(__imp__sub_826897A4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22072
	ctx.r5.s64 = r11.s64 + -22072;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826897B0"))) PPC_WEAK_FUNC(sub_826897B0);
PPC_FUNC_IMPL(__imp__sub_826897B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22104
	ctx.r5.s64 = r11.s64 + -22104;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826897BC"))) PPC_WEAK_FUNC(sub_826897BC);
PPC_FUNC_IMPL(__imp__sub_826897BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22136
	ctx.r5.s64 = r11.s64 + -22136;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826897C8"))) PPC_WEAK_FUNC(sub_826897C8);
PPC_FUNC_IMPL(__imp__sub_826897C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22168
	ctx.r5.s64 = r11.s64 + -22168;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826897D4"))) PPC_WEAK_FUNC(sub_826897D4);
PPC_FUNC_IMPL(__imp__sub_826897D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22196
	ctx.r5.s64 = r11.s64 + -22196;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826897E0"))) PPC_WEAK_FUNC(sub_826897E0);
PPC_FUNC_IMPL(__imp__sub_826897E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22224
	ctx.r5.s64 = r11.s64 + -22224;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826897EC"))) PPC_WEAK_FUNC(sub_826897EC);
PPC_FUNC_IMPL(__imp__sub_826897EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22252
	ctx.r5.s64 = r11.s64 + -22252;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826897F8"))) PPC_WEAK_FUNC(sub_826897F8);
PPC_FUNC_IMPL(__imp__sub_826897F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22284
	ctx.r5.s64 = r11.s64 + -22284;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689804"))) PPC_WEAK_FUNC(sub_82689804);
PPC_FUNC_IMPL(__imp__sub_82689804) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22308
	ctx.r5.s64 = r11.s64 + -22308;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689810"))) PPC_WEAK_FUNC(sub_82689810);
PPC_FUNC_IMPL(__imp__sub_82689810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22332
	ctx.r5.s64 = r11.s64 + -22332;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268981C"))) PPC_WEAK_FUNC(sub_8268981C);
PPC_FUNC_IMPL(__imp__sub_8268981C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22360
	ctx.r5.s64 = r11.s64 + -22360;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689828"))) PPC_WEAK_FUNC(sub_82689828);
PPC_FUNC_IMPL(__imp__sub_82689828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22388
	ctx.r5.s64 = r11.s64 + -22388;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689834"))) PPC_WEAK_FUNC(sub_82689834);
PPC_FUNC_IMPL(__imp__sub_82689834) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22412
	ctx.r5.s64 = r11.s64 + -22412;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689840"))) PPC_WEAK_FUNC(sub_82689840);
PPC_FUNC_IMPL(__imp__sub_82689840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22436
	ctx.r5.s64 = r11.s64 + -22436;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268984C"))) PPC_WEAK_FUNC(sub_8268984C);
PPC_FUNC_IMPL(__imp__sub_8268984C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22464
	ctx.r5.s64 = r11.s64 + -22464;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689858"))) PPC_WEAK_FUNC(sub_82689858);
PPC_FUNC_IMPL(__imp__sub_82689858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22488
	ctx.r5.s64 = r11.s64 + -22488;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689864"))) PPC_WEAK_FUNC(sub_82689864);
PPC_FUNC_IMPL(__imp__sub_82689864) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22512
	ctx.r5.s64 = r11.s64 + -22512;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689870"))) PPC_WEAK_FUNC(sub_82689870);
PPC_FUNC_IMPL(__imp__sub_82689870) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22532
	ctx.r5.s64 = r11.s64 + -22532;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268987C"))) PPC_WEAK_FUNC(sub_8268987C);
PPC_FUNC_IMPL(__imp__sub_8268987C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22564
	ctx.r5.s64 = r11.s64 + -22564;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689888"))) PPC_WEAK_FUNC(sub_82689888);
PPC_FUNC_IMPL(__imp__sub_82689888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22592
	ctx.r5.s64 = r11.s64 + -22592;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689894"))) PPC_WEAK_FUNC(sub_82689894);
PPC_FUNC_IMPL(__imp__sub_82689894) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22620
	ctx.r5.s64 = r11.s64 + -22620;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826898A0"))) PPC_WEAK_FUNC(sub_826898A0);
PPC_FUNC_IMPL(__imp__sub_826898A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22636
	ctx.r5.s64 = r11.s64 + -22636;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826898AC"))) PPC_WEAK_FUNC(sub_826898AC);
PPC_FUNC_IMPL(__imp__sub_826898AC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22660
	ctx.r5.s64 = r11.s64 + -22660;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826898B8"))) PPC_WEAK_FUNC(sub_826898B8);
PPC_FUNC_IMPL(__imp__sub_826898B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22688
	ctx.r5.s64 = r11.s64 + -22688;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826898C4"))) PPC_WEAK_FUNC(sub_826898C4);
PPC_FUNC_IMPL(__imp__sub_826898C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22712
	ctx.r5.s64 = r11.s64 + -22712;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826898D0"))) PPC_WEAK_FUNC(sub_826898D0);
PPC_FUNC_IMPL(__imp__sub_826898D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22744
	ctx.r5.s64 = r11.s64 + -22744;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826898DC"))) PPC_WEAK_FUNC(sub_826898DC);
PPC_FUNC_IMPL(__imp__sub_826898DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22768
	ctx.r5.s64 = r11.s64 + -22768;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826898E8"))) PPC_WEAK_FUNC(sub_826898E8);
PPC_FUNC_IMPL(__imp__sub_826898E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22788
	ctx.r5.s64 = r11.s64 + -22788;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826898F4"))) PPC_WEAK_FUNC(sub_826898F4);
PPC_FUNC_IMPL(__imp__sub_826898F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22812
	ctx.r5.s64 = r11.s64 + -22812;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689900"))) PPC_WEAK_FUNC(sub_82689900);
PPC_FUNC_IMPL(__imp__sub_82689900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22832
	ctx.r5.s64 = r11.s64 + -22832;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268990C"))) PPC_WEAK_FUNC(sub_8268990C);
PPC_FUNC_IMPL(__imp__sub_8268990C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22856
	ctx.r5.s64 = r11.s64 + -22856;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689918"))) PPC_WEAK_FUNC(sub_82689918);
PPC_FUNC_IMPL(__imp__sub_82689918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22896
	ctx.r5.s64 = r11.s64 + -22896;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689924"))) PPC_WEAK_FUNC(sub_82689924);
PPC_FUNC_IMPL(__imp__sub_82689924) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22928
	ctx.r5.s64 = r11.s64 + -22928;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689930"))) PPC_WEAK_FUNC(sub_82689930);
PPC_FUNC_IMPL(__imp__sub_82689930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22948
	ctx.r5.s64 = r11.s64 + -22948;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268993C"))) PPC_WEAK_FUNC(sub_8268993C);
PPC_FUNC_IMPL(__imp__sub_8268993C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-22976
	ctx.r5.s64 = r11.s64 + -22976;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689948"))) PPC_WEAK_FUNC(sub_82689948);
PPC_FUNC_IMPL(__imp__sub_82689948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23000
	ctx.r5.s64 = r11.s64 + -23000;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689954"))) PPC_WEAK_FUNC(sub_82689954);
PPC_FUNC_IMPL(__imp__sub_82689954) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23028
	ctx.r5.s64 = r11.s64 + -23028;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689960"))) PPC_WEAK_FUNC(sub_82689960);
PPC_FUNC_IMPL(__imp__sub_82689960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23052
	ctx.r5.s64 = r11.s64 + -23052;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268996C"))) PPC_WEAK_FUNC(sub_8268996C);
PPC_FUNC_IMPL(__imp__sub_8268996C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23072
	ctx.r5.s64 = r11.s64 + -23072;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689978"))) PPC_WEAK_FUNC(sub_82689978);
PPC_FUNC_IMPL(__imp__sub_82689978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23100
	ctx.r5.s64 = r11.s64 + -23100;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689984"))) PPC_WEAK_FUNC(sub_82689984);
PPC_FUNC_IMPL(__imp__sub_82689984) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23132
	ctx.r5.s64 = r11.s64 + -23132;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689990"))) PPC_WEAK_FUNC(sub_82689990);
PPC_FUNC_IMPL(__imp__sub_82689990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23160
	ctx.r5.s64 = r11.s64 + -23160;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268999C"))) PPC_WEAK_FUNC(sub_8268999C);
PPC_FUNC_IMPL(__imp__sub_8268999C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lis r11,-32687
	r11.s64 = -2142175232;
	// ori r11,r11,200
	r11.u64 = r11.u64 | 200;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bgt cr6,0x82689a84
	if (cr6.gt) {
		sub_82689A84(ctx, base);
		return;
	}
	// beq cr6,0x82689a78
	if (cr6.eq) {
		sub_82689A78(ctx, base);
		return;
	}
	// addis r11,r6,32687
	r11.s64 = ctx.r6.s64 + 2142175232;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bgt cr6,0x82689d00
	if (cr6.gt) {
		// ERROR 82689D00
		return;
	}
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-24744
	r12.s64 = r12.s64 + -24744;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32151
	r12.s64 = -2107047936;
	// nop 
	// addi r12,r12,-26136
	r12.s64 = r12.s64 + -26136;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826899E8"))) PPC_WEAK_FUNC(sub_826899E8);
PPC_FUNC_IMPL(__imp__sub_826899E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23176
	ctx.r5.s64 = r11.s64 + -23176;
}

__attribute__((alias("__imp__sub_826899F0"))) PPC_WEAK_FUNC(sub_826899F0);
PPC_FUNC_IMPL(__imp__sub_826899F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826899F4"))) PPC_WEAK_FUNC(sub_826899F4);
PPC_FUNC_IMPL(__imp__sub_826899F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23192
	ctx.r5.s64 = r11.s64 + -23192;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A00"))) PPC_WEAK_FUNC(sub_82689A00);
PPC_FUNC_IMPL(__imp__sub_82689A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23212
	ctx.r5.s64 = r11.s64 + -23212;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A0C"))) PPC_WEAK_FUNC(sub_82689A0C);
PPC_FUNC_IMPL(__imp__sub_82689A0C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23240
	ctx.r5.s64 = r11.s64 + -23240;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A18"))) PPC_WEAK_FUNC(sub_82689A18);
PPC_FUNC_IMPL(__imp__sub_82689A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23264
	ctx.r5.s64 = r11.s64 + -23264;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A24"))) PPC_WEAK_FUNC(sub_82689A24);
PPC_FUNC_IMPL(__imp__sub_82689A24) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23280
	ctx.r5.s64 = r11.s64 + -23280;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A30"))) PPC_WEAK_FUNC(sub_82689A30);
PPC_FUNC_IMPL(__imp__sub_82689A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23300
	ctx.r5.s64 = r11.s64 + -23300;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A3C"))) PPC_WEAK_FUNC(sub_82689A3C);
PPC_FUNC_IMPL(__imp__sub_82689A3C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23324
	ctx.r5.s64 = r11.s64 + -23324;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A48"))) PPC_WEAK_FUNC(sub_82689A48);
PPC_FUNC_IMPL(__imp__sub_82689A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23344
	ctx.r5.s64 = r11.s64 + -23344;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A54"))) PPC_WEAK_FUNC(sub_82689A54);
PPC_FUNC_IMPL(__imp__sub_82689A54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23368
	ctx.r5.s64 = r11.s64 + -23368;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A60"))) PPC_WEAK_FUNC(sub_82689A60);
PPC_FUNC_IMPL(__imp__sub_82689A60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23396
	ctx.r5.s64 = r11.s64 + -23396;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A6C"))) PPC_WEAK_FUNC(sub_82689A6C);
PPC_FUNC_IMPL(__imp__sub_82689A6C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23424
	ctx.r5.s64 = r11.s64 + -23424;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A78"))) PPC_WEAK_FUNC(sub_82689A78);
PPC_FUNC_IMPL(__imp__sub_82689A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23448
	ctx.r5.s64 = r11.s64 + -23448;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689A84"))) PPC_WEAK_FUNC(sub_82689A84);
PPC_FUNC_IMPL(__imp__sub_82689A84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lis r11,-32682
	r11.s64 = -2141847552;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bgt cr6,0x82689c14
	if (cr6.gt) goto loc_82689C14;
	// beq cr6,0x82689c08
	if (cr6.eq) goto loc_82689C08;
	// lis r11,-32684
	r11.s64 = -2141978624;
	// ori r11,r11,27
	r11.u64 = r11.u64 | 27;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bgt cr6,0x82689b70
	if (cr6.gt) goto loc_82689B70;
	// beq cr6,0x82689b64
	if (cr6.eq) goto loc_82689B64;
	// lis r11,-32687
	r11.s64 = -2142175232;
	// ori r11,r11,1540
	r11.u64 = r11.u64 | 1540;
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bgt cr6,0x82689b24
	if (cr6.gt) goto loc_82689B24;
	// beq cr6,0x82689b18
	if (cr6.eq) goto loc_82689B18;
	// lis r11,-32687
	r11.s64 = -2142175232;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// subf. r11,r11,r6
	r11.s64 = ctx.r6.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82689b0c
	if (cr0.eq) goto loc_82689B0C;
	// cmplwi cr6,r11,1281
	cr6.compare<uint32_t>(r11.u32, 1281, xer);
	// beq cr6,0x82689b00
	if (cr6.eq) goto loc_82689B00;
	// cmplwi cr6,r11,1282
	cr6.compare<uint32_t>(r11.u32, 1282, xer);
	// beq cr6,0x82689af4
	if (cr6.eq) goto loc_82689AF4;
	// cmplwi cr6,r11,1283
	cr6.compare<uint32_t>(r11.u32, 1283, xer);
	// bne cr6,0x82689d00
	if (!cr6.eq) {
		// ERROR 82689D00
		return;
	}
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23484
	ctx.r5.s64 = r11.s64 + -23484;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689AF4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23516
	ctx.r5.s64 = r11.s64 + -23516;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689B00:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23548
	ctx.r5.s64 = r11.s64 + -23548;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689B0C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23576
	ctx.r5.s64 = r11.s64 + -23576;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689B18:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23604
	ctx.r5.s64 = r11.s64 + -23604;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689B24:
	// lis r11,-32684
	r11.s64 = -2141978624;
	// subf. r11,r11,r6
	r11.s64 = ctx.r6.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82689b58
	if (cr0.eq) goto loc_82689B58;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82689b4c
	if (cr6.eq) goto loc_82689B4C;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bne cr6,0x82689d00
	if (!cr6.eq) {
		// ERROR 82689D00
		return;
	}
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23636
	ctx.r5.s64 = r11.s64 + -23636;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689B4C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23652
	ctx.r5.s64 = r11.s64 + -23652;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689B58:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23676
	ctx.r5.s64 = r11.s64 + -23676;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689B64:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23704
	ctx.r5.s64 = r11.s64 + -23704;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689B70:
	// lis r11,-32684
	r11.s64 = -2141978624;
	// ori r11,r11,31
	r11.u64 = r11.u64 | 31;
	// subf. r11,r11,r6
	r11.s64 = ctx.r6.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82689bfc
	if (cr0.eq) goto loc_82689BFC;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// beq cr6,0x82689bf0
	if (cr6.eq) goto loc_82689BF0;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x82689be4
	if (cr6.eq) goto loc_82689BE4;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// beq cr6,0x82689bd8
	if (cr6.eq) goto loc_82689BD8;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// beq cr6,0x82689bcc
	if (cr6.eq) goto loc_82689BCC;
	// addis r11,r11,-2
	r11.s64 = r11.s64 + -131072;
	// addic. r11,r11,31
	xer.ca = r11.u32 > 4294967264;
	r11.s64 = r11.s64 + 31;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82689bc0
	if (cr0.eq) goto loc_82689BC0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82689d00
	if (!cr6.eq) {
		// ERROR 82689D00
		return;
	}
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23728
	ctx.r5.s64 = r11.s64 + -23728;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689BC0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23752
	ctx.r5.s64 = r11.s64 + -23752;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689BCC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23788
	ctx.r5.s64 = r11.s64 + -23788;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689BD8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23812
	ctx.r5.s64 = r11.s64 + -23812;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689BE4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23844
	ctx.r5.s64 = r11.s64 + -23844;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689BF0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23876
	ctx.r5.s64 = r11.s64 + -23876;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689BFC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23908
	ctx.r5.s64 = r11.s64 + -23908;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689C08:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23928
	ctx.r5.s64 = r11.s64 + -23928;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689C14:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bgt cr6,0x82689ce8
	if (cr6.gt) {
		sub_82689CE8(ctx, base);
		return;
	}
	// beq cr6,0x82689cdc
	if (cr6.eq) {
		sub_82689CDC(ctx, base);
		return;
	}
	// addis r11,r6,32682
	r11.s64 = ctx.r6.s64 + 2141847552;
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bgt cr6,0x82689d00
	if (cr6.gt) {
		// ERROR 82689D00
		return;
	}
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-24760
	r12.s64 = r12.s64 + -24760;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32151
	r12.s64 = -2107047936;
	// nop 
	// addi r12,r12,-25512
	r12.s64 = r12.s64 + -25512;
	// nop 
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82689C58"))) PPC_WEAK_FUNC(sub_82689C58);
PPC_FUNC_IMPL(__imp__sub_82689C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23948
	ctx.r5.s64 = r11.s64 + -23948;
}

__attribute__((alias("__imp__sub_82689C60"))) PPC_WEAK_FUNC(sub_82689C60);
PPC_FUNC_IMPL(__imp__sub_82689C60) {
	PPC_FUNC_PROLOGUE();
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689C64"))) PPC_WEAK_FUNC(sub_82689C64);
PPC_FUNC_IMPL(__imp__sub_82689C64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23968
	ctx.r5.s64 = r11.s64 + -23968;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689C70"))) PPC_WEAK_FUNC(sub_82689C70);
PPC_FUNC_IMPL(__imp__sub_82689C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-23992
	ctx.r5.s64 = r11.s64 + -23992;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689C7C"))) PPC_WEAK_FUNC(sub_82689C7C);
PPC_FUNC_IMPL(__imp__sub_82689C7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24020
	ctx.r5.s64 = r11.s64 + -24020;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689C88"))) PPC_WEAK_FUNC(sub_82689C88);
PPC_FUNC_IMPL(__imp__sub_82689C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24044
	ctx.r5.s64 = r11.s64 + -24044;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689C94"))) PPC_WEAK_FUNC(sub_82689C94);
PPC_FUNC_IMPL(__imp__sub_82689C94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24068
	ctx.r5.s64 = r11.s64 + -24068;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689CA0"))) PPC_WEAK_FUNC(sub_82689CA0);
PPC_FUNC_IMPL(__imp__sub_82689CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24092
	ctx.r5.s64 = r11.s64 + -24092;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689CAC"))) PPC_WEAK_FUNC(sub_82689CAC);
PPC_FUNC_IMPL(__imp__sub_82689CAC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24116
	ctx.r5.s64 = r11.s64 + -24116;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689CB8"))) PPC_WEAK_FUNC(sub_82689CB8);
PPC_FUNC_IMPL(__imp__sub_82689CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24140
	ctx.r5.s64 = r11.s64 + -24140;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689CC4"))) PPC_WEAK_FUNC(sub_82689CC4);
PPC_FUNC_IMPL(__imp__sub_82689CC4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24160
	ctx.r5.s64 = r11.s64 + -24160;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689CD0"))) PPC_WEAK_FUNC(sub_82689CD0);
PPC_FUNC_IMPL(__imp__sub_82689CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24184
	ctx.r5.s64 = r11.s64 + -24184;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689CDC"))) PPC_WEAK_FUNC(sub_82689CDC);
PPC_FUNC_IMPL(__imp__sub_82689CDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24192
	ctx.r5.s64 = r11.s64 + -24192;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689CE8"))) PPC_WEAK_FUNC(sub_82689CE8);
PPC_FUNC_IMPL(__imp__sub_82689CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// beq cr6,0x82689d24
	if (cr6.eq) goto loc_82689D24;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// beq cr6,0x82689d18
	if (cr6.eq) goto loc_82689D18;
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// beq cr6,0x82689d0c
	if (cr6.eq) goto loc_82689D0C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24200
	ctx.r5.s64 = r11.s64 + -24200;
	// b 0x828eb318
	sub_828EB318(ctx, base);
	return;
loc_82689D0C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24216
	ctx.r5.s64 = r11.s64 + -24216;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689D18:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24232
	ctx.r5.s64 = r11.s64 + -24232;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
loc_82689D24:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-24248
	ctx.r5.s64 = r11.s64 + -24248;
	// b 0x828eb368
	sub_828EB368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82689D30"))) PPC_WEAK_FUNC(sub_82689D30);
PPC_FUNC_IMPL(__imp__sub_82689D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// cmplwi cr6,r3,10092
	cr6.compare<uint32_t>(ctx.r3.u32, 10092, xer);
	// bgt cr6,0x82689f8c
	if (cr6.gt) goto loc_82689F8C;
	// beq cr6,0x82689f80
	if (cr6.eq) goto loc_82689F80;
	// addi r11,r3,-10004
	r11.s64 = ctx.r3.s64 + -10004;
	// cmplwi cr6,r11,87
	cr6.compare<uint32_t>(r11.u32, 87, xer);
	// bgt cr6,0x8268a270
	if (cr6.gt) goto loc_8268A270;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-24424
	r12.s64 = r12.s64 + -24424;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32151
	r12.s64 = -2107047936;
	// addi r12,r12,-25232
	r12.s64 = r12.s64 + -25232;
	// nop 
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18272
	ctx.r3.s64 = r11.s64 + -18272;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18284
	ctx.r3.s64 = r11.s64 + -18284;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18300
	ctx.r3.s64 = r11.s64 + -18300;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18316
	ctx.r3.s64 = r11.s64 + -18316;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18332
	ctx.r3.s64 = r11.s64 + -18332;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18348
	ctx.r3.s64 = r11.s64 + -18348;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18368
	ctx.r3.s64 = r11.s64 + -18368;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18388
	ctx.r3.s64 = r11.s64 + -18388;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18404
	ctx.r3.s64 = r11.s64 + -18404;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18420
	ctx.r3.s64 = r11.s64 + -18420;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18440
	ctx.r3.s64 = r11.s64 + -18440;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18456
	ctx.r3.s64 = r11.s64 + -18456;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18476
	ctx.r3.s64 = r11.s64 + -18476;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18496
	ctx.r3.s64 = r11.s64 + -18496;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18520
	ctx.r3.s64 = r11.s64 + -18520;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18544
	ctx.r3.s64 = r11.s64 + -18544;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18564
	ctx.r3.s64 = r11.s64 + -18564;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18584
	ctx.r3.s64 = r11.s64 + -18584;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18604
	ctx.r3.s64 = r11.s64 + -18604;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18624
	ctx.r3.s64 = r11.s64 + -18624;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18644
	ctx.r3.s64 = r11.s64 + -18644;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18660
	ctx.r3.s64 = r11.s64 + -18660;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18680
	ctx.r3.s64 = r11.s64 + -18680;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18696
	ctx.r3.s64 = r11.s64 + -18696;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18716
	ctx.r3.s64 = r11.s64 + -18716;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18736
	ctx.r3.s64 = r11.s64 + -18736;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18752
	ctx.r3.s64 = r11.s64 + -18752;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18768
	ctx.r3.s64 = r11.s64 + -18768;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18784
	ctx.r3.s64 = r11.s64 + -18784;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18800
	ctx.r3.s64 = r11.s64 + -18800;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18820
	ctx.r3.s64 = r11.s64 + -18820;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18836
	ctx.r3.s64 = r11.s64 + -18836;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18856
	ctx.r3.s64 = r11.s64 + -18856;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18868
	ctx.r3.s64 = r11.s64 + -18868;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18888
	ctx.r3.s64 = r11.s64 + -18888;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18904
	ctx.r3.s64 = r11.s64 + -18904;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18924
	ctx.r3.s64 = r11.s64 + -18924;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18940
	ctx.r3.s64 = r11.s64 + -18940;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18956
	ctx.r3.s64 = r11.s64 + -18956;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18972
	ctx.r3.s64 = r11.s64 + -18972;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18988
	ctx.r3.s64 = r11.s64 + -18988;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19004
	ctx.r3.s64 = r11.s64 + -19004;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19020
	ctx.r3.s64 = r11.s64 + -19020;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19040
	ctx.r3.s64 = r11.s64 + -19040;
	// blr 
	return;
loc_82689F80:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19064
	ctx.r3.s64 = r11.s64 + -19064;
	// blr 
	return;
loc_82689F8C:
	// cmplwi cr6,r3,11010
	cr6.compare<uint32_t>(ctx.r3.u32, 11010, xer);
	// bgt cr6,0x8268a140
	if (cr6.gt) goto loc_8268A140;
	// beq cr6,0x8268a134
	if (cr6.eq) goto loc_8268A134;
	// cmplwi cr6,r3,10111
	cr6.compare<uint32_t>(ctx.r3.u32, 10111, xer);
	// bgt cr6,0x8268a068
	if (cr6.gt) goto loc_8268A068;
	// beq cr6,0x8268a05c
	if (cr6.eq) goto loc_8268A05C;
	// addi r11,r3,-10093
	r11.s64 = ctx.r3.s64 + -10093;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bgt cr6,0x8268a270
	if (cr6.gt) goto loc_8268A270;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-24448
	r12.s64 = r12.s64 + -24448;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32151
	r12.s64 = -2107047936;
	// nop 
	// addi r12,r12,-24616
	r12.s64 = r12.s64 + -24616;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19088
	ctx.r3.s64 = r11.s64 + -19088;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19104
	ctx.r3.s64 = r11.s64 + -19104;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19120
	ctx.r3.s64 = r11.s64 + -19120;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19140
	ctx.r3.s64 = r11.s64 + -19140;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19164
	ctx.r3.s64 = r11.s64 + -19164;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19188
	ctx.r3.s64 = r11.s64 + -19188;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19216
	ctx.r3.s64 = r11.s64 + -19216;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19240
	ctx.r3.s64 = r11.s64 + -19240;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19264
	ctx.r3.s64 = r11.s64 + -19264;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19288
	ctx.r3.s64 = r11.s64 + -19288;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19308
	ctx.r3.s64 = r11.s64 + -19308;
	// blr 
	return;
loc_8268A05C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19328
	ctx.r3.s64 = r11.s64 + -19328;
	// blr 
	return;
loc_8268A068:
	// cmplwi cr6,r3,11005
	cr6.compare<uint32_t>(ctx.r3.u32, 11005, xer);
	// bgt cr6,0x8268a0e4
	if (cr6.gt) goto loc_8268A0E4;
	// beq cr6,0x8268a0d8
	if (cr6.eq) goto loc_8268A0D8;
	// cmplwi cr6,r3,10112
	cr6.compare<uint32_t>(ctx.r3.u32, 10112, xer);
	// beq cr6,0x8268a0cc
	if (cr6.eq) goto loc_8268A0CC;
	// cmplwi cr6,r3,11001
	cr6.compare<uint32_t>(ctx.r3.u32, 11001, xer);
	// beq cr6,0x8268a0c0
	if (cr6.eq) goto loc_8268A0C0;
	// cmplwi cr6,r3,11002
	cr6.compare<uint32_t>(ctx.r3.u32, 11002, xer);
	// beq cr6,0x8268a0b4
	if (cr6.eq) goto loc_8268A0B4;
	// cmplwi cr6,r3,11003
	cr6.compare<uint32_t>(ctx.r3.u32, 11003, xer);
	// beq cr6,0x8268a0a8
	if (cr6.eq) goto loc_8268A0A8;
	// cmplwi cr6,r3,11004
	cr6.compare<uint32_t>(ctx.r3.u32, 11004, xer);
	// bne cr6,0x8268a270
	if (!cr6.eq) goto loc_8268A270;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19344
	ctx.r3.s64 = r11.s64 + -19344;
	// blr 
	return;
loc_8268A0A8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19364
	ctx.r3.s64 = r11.s64 + -19364;
	// blr 
	return;
loc_8268A0B4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19380
	ctx.r3.s64 = r11.s64 + -19380;
	// blr 
	return;
loc_8268A0C0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19404
	ctx.r3.s64 = r11.s64 + -19404;
	// blr 
	return;
loc_8268A0CC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19420
	ctx.r3.s64 = r11.s64 + -19420;
	// blr 
	return;
loc_8268A0D8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19444
	ctx.r3.s64 = r11.s64 + -19444;
	// blr 
	return;
loc_8268A0E4:
	// cmplwi cr6,r3,11006
	cr6.compare<uint32_t>(ctx.r3.u32, 11006, xer);
	// beq cr6,0x8268a128
	if (cr6.eq) goto loc_8268A128;
	// cmplwi cr6,r3,11007
	cr6.compare<uint32_t>(ctx.r3.u32, 11007, xer);
	// beq cr6,0x8268a11c
	if (cr6.eq) goto loc_8268A11C;
	// cmplwi cr6,r3,11008
	cr6.compare<uint32_t>(ctx.r3.u32, 11008, xer);
	// beq cr6,0x8268a110
	if (cr6.eq) goto loc_8268A110;
	// cmplwi cr6,r3,11009
	cr6.compare<uint32_t>(ctx.r3.u32, 11009, xer);
	// bne cr6,0x8268a270
	if (!cr6.eq) goto loc_8268A270;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19476
	ctx.r3.s64 = r11.s64 + -19476;
	// blr 
	return;
loc_8268A110:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19500
	ctx.r3.s64 = r11.s64 + -19500;
	// blr 
	return;
loc_8268A11C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19524
	ctx.r3.s64 = r11.s64 + -19524;
	// blr 
	return;
loc_8268A128:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19544
	ctx.r3.s64 = r11.s64 + -19544;
	// blr 
	return;
loc_8268A134:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19576
	ctx.r3.s64 = r11.s64 + -19576;
	// blr 
	return;
loc_8268A140:
	// addi r11,r3,-11011
	r11.s64 = ctx.r3.s64 + -11011;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// bgt cr6,0x8268a270
	if (cr6.gt) goto loc_8268A270;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-24472
	r12.s64 = r12.s64 + -24472;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32151
	r12.s64 = -2107047936;
	// nop 
	// addi r12,r12,-24204
	r12.s64 = r12.s64 + -24204;
	// nop 
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19604
	ctx.r3.s64 = r11.s64 + -19604;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19628
	ctx.r3.s64 = r11.s64 + -19628;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19652
	ctx.r3.s64 = r11.s64 + -19652;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19684
	ctx.r3.s64 = r11.s64 + -19684;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19712
	ctx.r3.s64 = r11.s64 + -19712;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19736
	ctx.r3.s64 = r11.s64 + -19736;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19760
	ctx.r3.s64 = r11.s64 + -19760;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19784
	ctx.r3.s64 = r11.s64 + -19784;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19808
	ctx.r3.s64 = r11.s64 + -19808;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19832
	ctx.r3.s64 = r11.s64 + -19832;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19856
	ctx.r3.s64 = r11.s64 + -19856;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19880
	ctx.r3.s64 = r11.s64 + -19880;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19904
	ctx.r3.s64 = r11.s64 + -19904;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19932
	ctx.r3.s64 = r11.s64 + -19932;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19956
	ctx.r3.s64 = r11.s64 + -19956;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19980
	ctx.r3.s64 = r11.s64 + -19980;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-20004
	ctx.r3.s64 = r11.s64 + -20004;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-20032
	ctx.r3.s64 = r11.s64 + -20032;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-20056
	ctx.r3.s64 = r11.s64 + -20056;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-20084
	ctx.r3.s64 = r11.s64 + -20084;
	// blr 
	return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-20112
	ctx.r3.s64 = r11.s64 + -20112;
	// blr 
	return;
loc_8268A270:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,13435
	ctx.r3.s64 = r11.s64 + 13435;
}

__attribute__((alias("__imp__sub_8268A278"))) PPC_WEAK_FUNC(sub_8268A278);
PPC_FUNC_IMPL(__imp__sub_8268A278) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A27C"))) PPC_WEAK_FUNC(sub_8268A27C);
PPC_FUNC_IMPL(__imp__sub_8268A27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A280"))) PPC_WEAK_FUNC(sub_8268A280);
PPC_FUNC_IMPL(__imp__sub_8268A280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r11,r11,5
	r11.u64 = r11.u64 | 5;
	// subf. r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268a2b4
	if (cr0.eq) goto loc_8268A2B4;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// beq cr6,0x8268a2b4
	if (cr6.eq) goto loc_8268A2B4;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// beq cr6,0x8268a2b4
	if (cr6.eq) goto loc_8268A2B4;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(r11.u32, 54, xer);
	// beq cr6,0x8268a2b4
	if (cr6.eq) goto loc_8268A2B4;
	// cmplwi cr6,r11,58
	cr6.compare<uint32_t>(r11.u32, 58, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!cr6.eq) return;
loc_8268A2B4:
	// li r3,1
	ctx.r3.s64 = 1;
}

__attribute__((alias("__imp__sub_8268A2B8"))) PPC_WEAK_FUNC(sub_8268A2B8);
PPC_FUNC_IMPL(__imp__sub_8268A2B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A2BC"))) PPC_WEAK_FUNC(sub_8268A2BC);
PPC_FUNC_IMPL(__imp__sub_8268A2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A2C0"))) PPC_WEAK_FUNC(sub_8268A2C0);
PPC_FUNC_IMPL(__imp__sub_8268A2C0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8268a2e4
	if (!cr0.eq) goto loc_8268A2E4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// b 0x8268a2f4
	goto loc_8268A2F4;
loc_8268A2E4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268A2F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268A300"))) PPC_WEAK_FUNC(sub_8268A300);
PPC_FUNC_IMPL(__imp__sub_8268A300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A304"))) PPC_WEAK_FUNC(sub_8268A304);
PPC_FUNC_IMPL(__imp__sub_8268A304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A308"))) PPC_WEAK_FUNC(sub_8268A308);
PPC_FUNC_IMPL(__imp__sub_8268A308) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8268a330
	if (!cr0.eq) goto loc_8268A330;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// b 0x8268a36c
	goto loc_8268A36C;
loc_8268A330:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,-18240
	ctx.r4.s64 = ctx.r10.s64 + -18240;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-18260
	ctx.r4.s64 = r11.s64 + -18260;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268A36C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268A37C"))) PPC_WEAK_FUNC(sub_8268A37C);
PPC_FUNC_IMPL(__imp__sub_8268A37C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A380"))) PPC_WEAK_FUNC(sub_8268A380);
PPC_FUNC_IMPL(__imp__sub_8268A380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268a394
	if (!cr6.eq) goto loc_8268A394;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// blr 
	return;
loc_8268A394:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8268A3A0"))) PPC_WEAK_FUNC(sub_8268A3A0);
PPC_FUNC_IMPL(__imp__sub_8268A3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8268A3A4"))) PPC_WEAK_FUNC(sub_8268A3A4);
PPC_FUNC_IMPL(__imp__sub_8268A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A3A8"))) PPC_WEAK_FUNC(sub_8268A3A8);
PPC_FUNC_IMPL(__imp__sub_8268A3A8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268a3c8
	if (!cr6.eq) goto loc_8268A3C8;
loc_8268A3BC:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// b 0x8268a3ec
	goto loc_8268A3EC;
loc_8268A3C8:
	// bl 0x82e42ec8
	sub_82E42EC8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268a3bc
	if (cr0.eq) goto loc_8268A3BC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// srawi r11,r3,31
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = r11.u64 & ctx.r3.u64;
loc_8268A3EC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268A3F8"))) PPC_WEAK_FUNC(sub_8268A3F8);
PPC_FUNC_IMPL(__imp__sub_8268A3F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A3FC"))) PPC_WEAK_FUNC(sub_8268A3FC);
PPC_FUNC_IMPL(__imp__sub_8268A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A400"))) PPC_WEAK_FUNC(sub_8268A400);
PPC_FUNC_IMPL(__imp__sub_8268A400) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18208
	r11.s64 = r11.s64 + -18208;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82688e48
	sub_82688E48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268a43c
	if (cr0.eq) goto loc_8268A43C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268A43C:
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

__attribute__((alias("__imp__sub_8268A454"))) PPC_WEAK_FUNC(sub_8268A454);
PPC_FUNC_IMPL(__imp__sub_8268A454) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A458"))) PPC_WEAK_FUNC(sub_8268A458);
PPC_FUNC_IMPL(__imp__sub_8268A458) {
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
	// add r11,r5,r6
	r11.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// li r27,0
	r27.s64 = 0;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stb r27,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, r27.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82bb9798
	sub_82BB9798(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268a4b4
	if (!cr0.eq) goto loc_8268A4B4;
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8268a5e4
	if (!cr0.gt) goto loc_8268A5E4;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = r11.u64 | 2147942400;
	// b 0x8268a5e4
	goto loc_8268A5E4;
loc_8268A4B4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8268a4cc
	if (!cr6.eq) goto loc_8268A4CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,38
	ctx.r3.u64 = ctx.r3.u64 | 38;
	// b 0x8268a5e4
	goto loc_8268A5E4;
loc_8268A4CC:
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8268A4D8:
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268a558
	if (!cr6.lt) goto loc_8268A558;
	// lbzx r11,r31,r30
	r11.u64 = PPC_LOAD_U8(r31.u32 + r30.u32);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// cmpwi cr6,r3,10
	cr6.compare<int32_t>(ctx.r3.s32, 10, xer);
	// beq cr6,0x8268a51c
	if (cr6.eq) goto loc_8268A51C;
	// cmpwi cr6,r3,13
	cr6.compare<int32_t>(ctx.r3.s32, 13, xer);
	// beq cr6,0x8268a51c
	if (cr6.eq) goto loc_8268A51C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8268a510
	if (!cr6.eq) goto loc_8268A510;
	// bl 0x828eb8c0
	sub_828EB8C0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268a54c
	if (!cr0.eq) goto loc_8268A54C;
loc_8268A510:
	// lbzx r11,r31,r30
	r11.u64 = PPC_LOAD_U8(r31.u32 + r30.u32);
	// stbx r11,r29,r30
	PPC_STORE_U8(r29.u32 + r30.u32, r11.u8);
	// b 0x8268a548
	goto loc_8268A548;
loc_8268A51C:
	// li r28,1
	r28.s64 = 1;
loc_8268A520:
	// lbzx r11,r31,r30
	r11.u64 = PPC_LOAD_U8(r31.u32 + r30.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// beq cr6,0x8268a538
	if (cr6.eq) goto loc_8268A538;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x8268a544
	if (!cr6.eq) goto loc_8268A544;
loc_8268A538:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x8268a520
	if (cr6.lt) goto loc_8268A520;
loc_8268A544:
	// stbx r27,r29,r30
	PPC_STORE_U8(r29.u32 + r30.u32, r27.u8);
loc_8268A548:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8268A54C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// beq 0x8268a4d8
	if (cr0.eq) goto loc_8268A4D8;
loc_8268A558:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8268a5b8
	if (!cr0.eq) goto loc_8268A5B8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82607240
	sub_82607240(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82bb9730
	sub_82BB9730(ctx, base);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// bne cr6,0x8268a594
	if (!cr6.eq) goto loc_8268A594;
	// stbx r27,r29,r30
	PPC_STORE_U8(r29.u32 + r30.u32, r27.u8);
	// b 0x8268a5e0
	goto loc_8268A5E0;
loc_8268A594:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// neg r4,r11
	ctx.r4.s64 = -r11.s64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82607240
	sub_82607240(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,111
	ctx.r3.u64 = ctx.r3.u64 | 111;
	// b 0x8268a5e4
	goto loc_8268A5E4;
loc_8268A5B8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8268a5e0
	if (cr6.eq) goto loc_8268A5E0;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x8268a5e0
	if (!cr6.lt) goto loc_8268A5E0;
	// subf r11,r10,r31
	r11.s64 = r31.s64 - ctx.r10.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82607240
	sub_82607240(ctx, base);
loc_8268A5E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8268A5E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8268A5E8"))) PPC_WEAK_FUNC(sub_8268A5E8);
PPC_FUNC_IMPL(__imp__sub_8268A5E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8268A5EC"))) PPC_WEAK_FUNC(sub_8268A5EC);
PPC_FUNC_IMPL(__imp__sub_8268A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A5F0"))) PPC_WEAK_FUNC(sub_8268A5F0);
PPC_FUNC_IMPL(__imp__sub_8268A5F0) {
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
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8268a618
	if (!cr6.eq) goto loc_8268A618;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16387
	ctx.r3.u64 = ctx.r3.u64 | 16387;
	// b 0x8268a6bc
	goto loc_8268A6BC;
loc_8268A618:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bb9918
	sub_82BB9918(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x8268a640
	if (!cr6.eq) goto loc_8268A640;
loc_8268A628:
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8268a6bc
	if (!cr0.gt) goto loc_8268A6BC;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = r11.u64 | 2147942400;
	// b 0x8268a6bc
	goto loc_8268A6BC;
loc_8268A640:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82607590
	sub_82607590(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8268a628
	if (cr6.eq) goto loc_8268A628;
loc_8268A66C:
	// li r6,512
	ctx.r6.s64 = 512;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268a458
	sub_8268A458(ctx, base);
	// lis r11,-32761
	r11.s64 = -2147024896;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,38
	r11.u64 = r11.u64 | 38;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x8268a6c4
	if (cr6.eq) goto loc_8268A6C4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8268a6b0
	if (cr6.lt) goto loc_8268A6B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82689190
	sub_82689190(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8268a66c
	if (!cr0.lt) goto loc_8268A66C;
loc_8268A6B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82605300
	sub_82605300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8268A6BC:
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x828e946c
	return;
loc_8268A6C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82605300
	sub_82605300(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8268A6D0"))) PPC_WEAK_FUNC(sub_8268A6D0);
PPC_FUNC_IMPL(__imp__sub_8268A6D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268a6bc
	// ERROR 8268A6BC
	return;
}

__attribute__((alias("__imp__sub_8268A6D4"))) PPC_WEAK_FUNC(sub_8268A6D4);
PPC_FUNC_IMPL(__imp__sub_8268A6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A6D8"))) PPC_WEAK_FUNC(sub_8268A6D8);
PPC_FUNC_IMPL(__imp__sub_8268A6D8) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-18208
	r11.s64 = r11.s64 + -18208;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x82688e48
	sub_82688E48(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268a714
	if (cr0.eq) goto loc_8268A714;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82686da0
	sub_82686DA0(ctx, base);
loc_8268A714:
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

__attribute__((alias("__imp__sub_8268A72C"))) PPC_WEAK_FUNC(sub_8268A72C);
PPC_FUNC_IMPL(__imp__sub_8268A72C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A730"))) PPC_WEAK_FUNC(sub_8268A730);
PPC_FUNC_IMPL(__imp__sub_8268A730) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268a830
	if (cr6.eq) goto loc_8268A830;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8268a830
	if (cr6.eq) goto loc_8268A830;
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82686d90
	sub_82686D90(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8268a788
	if (cr0.eq) goto loc_8268A788;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82688f68
	sub_82688F68(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-18180
	r11.s64 = r11.s64 + -18180;
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8268a78c
	goto loc_8268A78C;
loc_8268A788:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8268A78C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826825e8
	sub_826825E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268a7ac
	if (!cr6.eq) goto loc_8268A7AC;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x8268a838
	goto loc_8268A838;
loc_8268A7AC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8268a5f0
	sub_8268A5F0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x8268a7f0
	if (!cr0.lt) goto loc_8268A7F0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-26024
	r11.s64 = r11.s64 + -26024;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8268a7e8
	if (cr6.eq) goto loc_8268A7E8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268A7E8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8268a838
	goto loc_8268A838;
loc_8268A7F0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826957e0
	sub_826957E0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-26024
	r11.s64 = r11.s64 + -26024;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x8268a828
	if (cr6.eq) goto loc_8268A828;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268A828:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268a838
	goto loc_8268A838;
loc_8268A830:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
loc_8268A838:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8268A83C"))) PPC_WEAK_FUNC(sub_8268A83C);
PPC_FUNC_IMPL(__imp__sub_8268A83C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268A840"))) PPC_WEAK_FUNC(sub_8268A840);
PPC_FUNC_IMPL(__imp__sub_8268A840) {
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
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82698c20
	sub_82698C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
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

__attribute__((alias("__imp__sub_8268A890"))) PPC_WEAK_FUNC(sub_8268A890);
PPC_FUNC_IMPL(__imp__sub_8268A890) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A894"))) PPC_WEAK_FUNC(sub_8268A894);
PPC_FUNC_IMPL(__imp__sub_8268A894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A898"))) PPC_WEAK_FUNC(sub_8268A898);
PPC_FUNC_IMPL(__imp__sub_8268A898) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// bl 0x82698c20
	sub_82698C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82698c20
	sub_82698C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8268A920"))) PPC_WEAK_FUNC(sub_8268A920);
PPC_FUNC_IMPL(__imp__sub_8268A920) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268A924"))) PPC_WEAK_FUNC(sub_8268A924);
PPC_FUNC_IMPL(__imp__sub_8268A924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A928"))) PPC_WEAK_FUNC(sub_8268A928);
PPC_FUNC_IMPL(__imp__sub_8268A928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// li r10,600
	ctx.r10.s64 = 600;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stw r10,4332(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4332, ctx.r10.u32);
	// stb r9,4328(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4328, ctx.r9.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268a95c
	if (!cr6.gt) goto loc_8268A95C;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268A95C:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8268A968"))) PPC_WEAK_FUNC(sub_8268A968);
PPC_FUNC_IMPL(__imp__sub_8268A968) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268A96C"))) PPC_WEAK_FUNC(sub_8268A96C);
PPC_FUNC_IMPL(__imp__sub_8268A96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268A970"))) PPC_WEAK_FUNC(sub_8268A970);
PPC_FUNC_IMPL(__imp__sub_8268A970) {
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
	// lbz r11,4328(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4328);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8268aa2c
	if (!cr0.eq) goto loc_8268AA2C;
	// lwz r11,4332(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8268a9a4
	if (cr6.eq) goto loc_8268A9A4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4332, r11.u32);
	// b 0x8268aa2c
	goto loc_8268AA2C;
loc_8268A9A4:
	// li r30,0
	r30.s64 = 0;
	// stw r31,2232(r31)
	PPC_STORE_U32(r31.u32 + 2232, r31.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r30,4320(r31)
	PPC_STORE_U32(r31.u32 + 4320, r30.u32);
	// addi r29,r31,2184
	r29.s64 = r31.s64 + 2184;
	// stb r11,4328(r31)
	PPC_STORE_U8(r31.u32 + 4328, r11.u8);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,4324(r31)
	PPC_STORE_U32(r31.u32 + 4324, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,2184(r31)
	PPC_STORE_U64(r31.u32 + 2184, r30.u64);
	// addi r3,r29,20
	ctx.r3.s64 = r29.s64 + 20;
	// std r30,2192(r31)
	PPC_STORE_U64(r31.u32 + 2192, r30.u64);
	// stw r30,2200(r31)
	PPC_STORE_U32(r31.u32 + 2200, r30.u32);
	// stw r29,2200(r31)
	PPC_STORE_U32(r31.u32 + 2200, r29.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r10,-32151
	ctx.r10.s64 = -2107047936;
	// stw r29,2224(r31)
	PPC_STORE_U32(r31.u32 + 2224, r29.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r10,-22232
	ctx.r10.s64 = ctx.r10.s64 + -22232;
	// addi r29,r11,-18116
	r29.s64 = r11.s64 + -18116;
	// stw r10,2220(r31)
	PPC_STORE_U32(r31.u32 + 2220, ctx.r10.u32);
	// addi r4,r31,2204
	ctx.r4.s64 = r31.s64 + 2204;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82605108
	sub_82605108(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8268aa2c
	if (cr6.eq) goto loc_8268AA2C;
	// li r11,600
	r11.s64 = 600;
	// stb r30,4328(r31)
	PPC_STORE_U8(r31.u32 + 4328, r30.u8);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,4332(r31)
	PPC_STORE_U32(r31.u32 + 4332, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r10,-18152
	ctx.r4.s64 = ctx.r10.s64 + -18152;
	// bl 0x8267dd88
	sub_8267DD88(ctx, base);
loc_8268AA2C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8268AA30"))) PPC_WEAK_FUNC(sub_8268AA30);
PPC_FUNC_IMPL(__imp__sub_8268AA30) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268AA34"))) PPC_WEAK_FUNC(sub_8268AA34);
PPC_FUNC_IMPL(__imp__sub_8268AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AA38"))) PPC_WEAK_FUNC(sub_8268AA38);
PPC_FUNC_IMPL(__imp__sub_8268AA38) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8268aaa0
	if (cr6.eq) goto loc_8268AAA0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8268AA58:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8268aa58
	if (!cr6.eq) goto loc_8268AA58;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828eed60
	sub_828EED60(ctx, base);
	// stw r3,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8268aaa0
	if (cr0.eq) goto loc_8268AAA0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r29)
	PPC_STORE_U8(r29.u32 + 8, r11.u8);
loc_8268AAA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8268AAA4"))) PPC_WEAK_FUNC(sub_8268AAA4);
PPC_FUNC_IMPL(__imp__sub_8268AAA4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268AAA8"))) PPC_WEAK_FUNC(sub_8268AAA8);
PPC_FUNC_IMPL(__imp__sub_8268AAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-18100
	ctx.r3.s64 = r11.s64 + -18100;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AAC0"))) PPC_WEAK_FUNC(sub_8268AAC0);
PPC_FUNC_IMPL(__imp__sub_8268AAC0) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// lbz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4516
	r11.s64 = r11.s64 + 4516;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq 0x8268aaf4
	if (cr0.eq) goto loc_8268AAF4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x828eed00
	sub_828EED00(ctx, base);
loc_8268AAF4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268AB10"))) PPC_WEAK_FUNC(sub_8268AB10);
PPC_FUNC_IMPL(__imp__sub_8268AB10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AB14"))) PPC_WEAK_FUNC(sub_8268AB14);
PPC_FUNC_IMPL(__imp__sub_8268AB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AB18"))) PPC_WEAK_FUNC(sub_8268AB18);
PPC_FUNC_IMPL(__imp__sub_8268AB18) {
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
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r10,4516
	ctx.r10.s64 = ctx.r10.s64 + 4516;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// bl 0x8268aa38
	sub_8268AA38(ctx, base);
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,4560
	r11.s64 = r11.s64 + 4560;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268AB68"))) PPC_WEAK_FUNC(sub_8268AB68);
PPC_FUNC_IMPL(__imp__sub_8268AB68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AB6C"))) PPC_WEAK_FUNC(sub_8268AB6C);
PPC_FUNC_IMPL(__imp__sub_8268AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268AB70"))) PPC_WEAK_FUNC(sub_8268AB70);
PPC_FUNC_IMPL(__imp__sub_8268AB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32247
	r11.s64 = -2113339392;
	// addi r11,r11,4560
	r11.s64 = r11.s64 + 4560;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
}

__attribute__((alias("__imp__sub_8268AB7C"))) PPC_WEAK_FUNC(sub_8268AB7C);
PPC_FUNC_IMPL(__imp__sub_8268AB7C) {
	PPC_FUNC_PROLOGUE();
	// b 0x8268aac0
	sub_8268AAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8268AB80"))) PPC_WEAK_FUNC(sub_8268AB80);
PPC_FUNC_IMPL(__imp__sub_8268AB80) {
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
	// lis r11,-32247
	r11.s64 = -2113339392;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,4560
	r11.s64 = r11.s64 + 4560;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8268aac0
	sub_8268AAC0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268abbc
	if (cr0.eq) goto loc_8268ABBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_8268ABBC:
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

__attribute__((alias("__imp__sub_8268ABD4"))) PPC_WEAK_FUNC(sub_8268ABD4);
PPC_FUNC_IMPL(__imp__sub_8268ABD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268ABD8"))) PPC_WEAK_FUNC(sub_8268ABD8);
PPC_FUNC_IMPL(__imp__sub_8268ABD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-18072(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18072);
	// mflr r12
	// bl 0x828e940c
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq cr6,0x8268ac38
	if (cr6.eq) goto loc_8268AC38;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r28,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r28.u8);
	// stb r28,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r28.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268ae10
	if (cr6.eq) goto loc_8268AE10;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268ac2c
	if (!cr6.gt) goto loc_8268AC2C;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268AC2C:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8268ae0c
	goto loc_8268AE0C;
loc_8268AC38:
	// lwz r30,16(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r26,48(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8268ac68
	if (cr6.lt) goto loc_8268AC68;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r28,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r28.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
loc_8268AC68:
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8268ade0
	if (!cr6.lt) goto loc_8268ADE0;
	// lwz r11,2060(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 2060);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r27,r30,88
	r27.s64 = r30.s64 + 88;
	// rlwinm r11,r9,6,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,11
	r11.s64 = 11;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// addi r9,r27,-4
	ctx.r9.s64 = r27.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8268ACB8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8268acb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8268ACB8;
	// std r28,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r28.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r28,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r28.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268ad64
	if (!cr6.eq) goto loc_8268AD64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r28,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r28.u8);
	// stb r28,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r28.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268ad60
	if (cr6.eq) goto loc_8268AD60;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268AD60:
	// b 0x8268add4
	goto loc_8268ADD4;
loc_8268AD64:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r11,-21536
	ctx.r7.s64 = r11.s64 + -21536;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bb99e8
	sub_82BB99E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268add4
	if (!cr0.eq) goto loc_8268ADD4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r28,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r28.u8);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268add0
	if (cr6.eq) goto loc_8268ADD0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268adc4
	if (!cr6.gt) goto loc_8268ADC4;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268ADC4:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268ADD0:
	// b 0x8268add4
	goto loc_8268ADD4;
loc_8268ADD4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// b 0x8268ae10
	goto loc_8268AE10;
loc_8268ADE0:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// stb r28,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r28.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268ae10
	if (cr6.eq) goto loc_8268AE10;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8268AE0C:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268AE10:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8268ABE0"))) PPC_WEAK_FUNC(sub_8268ABE0);
PPC_FUNC_IMPL(__imp__sub_8268ABE0) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r28,0
	r28.s64 = 0;
	// beq cr6,0x8268ac38
	if (cr6.eq) goto loc_8268AC38;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r28,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r28.u8);
	// stb r28,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r28.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268ae10
	if (cr6.eq) goto loc_8268AE10;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268ac2c
	if (!cr6.gt) goto loc_8268AC2C;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268AC2C:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x8268ae0c
	goto loc_8268AE0C;
loc_8268AC38:
	// lwz r30,16(r25)
	r30.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r26,48(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8268ac68
	if (cr6.lt) goto loc_8268AC68;
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r28,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r28.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
loc_8268AC68:
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,28(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8268ade0
	if (!cr6.lt) goto loc_8268ADE0;
	// lwz r11,2060(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 2060);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r27,r30,88
	r27.s64 = r30.s64 + 88;
	// rlwinm r11,r9,6,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r11,11
	r11.s64 = 11;
	// addi r10,r29,-4
	ctx.r10.s64 = r29.s64 + -4;
	// addi r9,r27,-4
	ctx.r9.s64 = r27.s64 + -4;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8268ACB8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8268acb8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8268ACB8;
	// std r28,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r28.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r28,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r28.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268ad64
	if (!cr6.eq) goto loc_8268AD64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r28,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r28.u8);
	// stb r28,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r28.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268ad60
	if (cr6.eq) goto loc_8268AD60;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268AD60:
	// b 0x8268add4
	goto loc_8268ADD4;
loc_8268AD64:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r11,-21536
	ctx.r7.s64 = r11.s64 + -21536;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82bb99e8
	sub_82BB99E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268add4
	if (!cr0.eq) goto loc_8268ADD4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r28,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r28.u8);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268add0
	if (cr6.eq) goto loc_8268ADD0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268adc4
	if (!cr6.gt) goto loc_8268ADC4;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268ADC4:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268ADD0:
	// b 0x8268add4
	goto loc_8268ADD4;
loc_8268ADD4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// b 0x8268ae10
	goto loc_8268AE10;
loc_8268ADE0:
	// lwz r11,16(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// stb r28,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r28.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268ae10
	if (cr6.eq) goto loc_8268AE10;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8268AE0C:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268AE10:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
}

__attribute__((alias("__imp__sub_8268AE18"))) PPC_WEAK_FUNC(sub_8268AE18);
PPC_FUNC_IMPL(__imp__sub_8268AE18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-160
	r31.s64 = r12.s64 + -160;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268AE3C"))) PPC_WEAK_FUNC(sub_8268AE3C);
PPC_FUNC_IMPL(__imp__sub_8268AE3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268AE40"))) PPC_WEAK_FUNC(sub_8268AE40);
PPC_FUNC_IMPL(__imp__sub_8268AE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-18000(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -18000);
	// mflr r12
	// bl 0x828e9410
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268aea4
	if (cr6.eq) goto loc_8268AEA4;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b0f4
	if (cr6.eq) goto loc_8268B0F4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268ae94
	if (!cr6.gt) goto loc_8268AE94;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268AE94:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268b0f4
	goto loc_8268B0F4;
loc_8268AEA4:
	// lwz r30,16(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r28,48(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8268af40
	if (cr6.lt) goto loc_8268AF40;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// li r11,11
	r11.s64 = 11;
	// lwz r10,2060(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 2060);
	// mulli r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 * 24;
	// mtctr r11
	ctr.u64 = r11.u64;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r30,84
	ctx.r10.s64 = r30.s64 + 84;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r29,r11,r8
	r29.u64 = r11.u64 + ctx.r8.u64;
	// addi r11,r29,-4
	r11.s64 = r29.s64 + -4;
loc_8268AEE4:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8268aee4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8268AEE4;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82698c20
	sub_82698C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82698df0
	sub_82698DF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268af2c
	if (cr0.eq) goto loc_8268AF2C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268a898
	sub_8268A898(ctx, base);
loc_8268AF2C:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r10,2056(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 2056);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8268af40
	if (!cr6.lt) goto loc_8268AF40;
	// stw r11,2056(r28)
	PPC_STORE_U32(r28.u32 + 2056, r11.u32);
loc_8268AF40:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mulli r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 * 24;
	// stw r10,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r10.u32);
	// lwz r11,2060(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2060);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8268af88
	if (cr6.lt) goto loc_8268AF88;
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
loc_8268AF88:
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8268afc0
	if (cr6.lt) goto loc_8268AFC0;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// stb r29,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b0f4
	if (cr6.eq) goto loc_8268B0F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268ae94
	goto loc_8268AE94;
loc_8268AFC0:
	// lwz r11,2060(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2060);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// std r29,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r29.u64);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268b07c
	if (!cr6.eq) goto loc_8268B07C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b078
	if (cr6.eq) goto loc_8268B078;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B078:
	// b 0x8268b0ec
	goto loc_8268B0EC;
loc_8268B07C:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r11,-20920
	ctx.r7.s64 = r11.s64 + -20920;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r30,88
	ctx.r4.s64 = r30.s64 + 88;
	// bl 0x82bb9a68
	sub_82BB9A68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268b0ec
	if (!cr0.eq) goto loc_8268B0EC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// stb r29,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b0e8
	if (cr6.eq) goto loc_8268B0E8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b0dc
	if (!cr6.gt) goto loc_8268B0DC;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B0DC:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B0E8:
	// b 0x8268b0ec
	goto loc_8268B0EC;
loc_8268B0EC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8268B0F4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8268AE48"))) PPC_WEAK_FUNC(sub_8268AE48);
PPC_FUNC_IMPL(__imp__sub_8268AE48) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268aea4
	if (cr6.eq) goto loc_8268AEA4;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b0f4
	if (cr6.eq) goto loc_8268B0F4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268ae94
	if (!cr6.gt) goto loc_8268AE94;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268AE94:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268b0f4
	goto loc_8268B0F4;
loc_8268AEA4:
	// lwz r30,16(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r28,48(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8268af40
	if (cr6.lt) goto loc_8268AF40;
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// li r11,11
	r11.s64 = 11;
	// lwz r10,2060(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 2060);
	// mulli r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 * 24;
	// mtctr r11
	ctr.u64 = r11.u64;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r30,84
	ctx.r10.s64 = r30.s64 + 84;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r29,r11,r8
	r29.u64 = r11.u64 + ctx.r8.u64;
	// addi r11,r29,-4
	r11.s64 = r29.s64 + -4;
loc_8268AEE4:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// bdnz 0x8268aee4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8268AEE4;
	// addi r5,r29,16
	ctx.r5.s64 = r29.s64 + 16;
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82698c20
	sub_82698C20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82698df0
	sub_82698DF0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268af2c
	if (cr0.eq) goto loc_8268AF2C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8268a898
	sub_8268A898(ctx, base);
loc_8268AF2C:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// lwz r10,2056(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 2056);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8268af40
	if (!cr6.lt) goto loc_8268AF40;
	// stw r11,2056(r28)
	PPC_STORE_U32(r28.u32 + 2056, r11.u32);
loc_8268AF40:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// li r29,0
	r29.s64 = 0;
	// lwz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// mulli r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 * 24;
	// stw r10,72(r30)
	PPC_STORE_U32(r30.u32 + 72, ctx.r10.u32);
	// lwz r11,2060(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2060);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8268af88
	if (cr6.lt) goto loc_8268AF88;
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
loc_8268AF88:
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x8268afc0
	if (cr6.lt) goto loc_8268AFC0;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// stb r29,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b0f4
	if (cr6.eq) goto loc_8268B0F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268ae94
	goto loc_8268AE94;
loc_8268AFC0:
	// lwz r11,2060(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2060);
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// std r29,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r29.u64);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268b07c
	if (!cr6.eq) goto loc_8268B07C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7113(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7113, r29.u8);
	// stb r29,7112(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b078
	if (cr6.eq) goto loc_8268B078;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B078:
	// b 0x8268b0ec
	goto loc_8268B0EC;
loc_8268B07C:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r11,-20920
	ctx.r7.s64 = r11.s64 + -20920;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r30,88
	ctx.r4.s64 = r30.s64 + 88;
	// bl 0x82bb9a68
	sub_82BB9A68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268b0ec
	if (!cr0.eq) goto loc_8268B0EC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7113(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7113, ctx.r10.u8);
	// stb r29,7112(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7112, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b0e8
	if (cr6.eq) goto loc_8268B0E8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b0dc
	if (!cr6.gt) goto loc_8268B0DC;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B0DC:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B0E8:
	// b 0x8268b0ec
	goto loc_8268B0EC;
loc_8268B0EC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8268B0F4:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
}

__attribute__((alias("__imp__sub_8268B0FC"))) PPC_WEAK_FUNC(sub_8268B0FC);
PPC_FUNC_IMPL(__imp__sub_8268B0FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268B120"))) PPC_WEAK_FUNC(sub_8268B120);
PPC_FUNC_IMPL(__imp__sub_8268B120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B124"))) PPC_WEAK_FUNC(sub_8268B124);
PPC_FUNC_IMPL(__imp__sub_8268B124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B128"))) PPC_WEAK_FUNC(sub_8268B128);
PPC_FUNC_IMPL(__imp__sub_8268B128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17944(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17944);
	// mflr r12
	// bl 0x828e9414
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268b18c
	if (cr6.eq) goto loc_8268B18C;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7110, r29.u8);
	// stb r29,7109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7109, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b2fc
	if (cr6.eq) goto loc_8268B2FC;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b17c
	if (!cr6.gt) goto loc_8268B17C;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B17C:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268b2fc
	goto loc_8268B2FC;
loc_8268B18C:
	// lwz r30,16(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// ld r11,80(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 80);
	// lwz r28,48(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// std r11,80(r30)
	PPC_STORE_U64(r30.u32 + 80, r11.u64);
	// ld r10,7120(r28)
	ctx.r10.u64 = PPC_LOAD_U64(r28.u32 + 7120);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x8268b1dc
	if (cr6.lt) goto loc_8268B1DC;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r9,7109(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7109, ctx.r9.u8);
	// stb r10,7110(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7110, ctx.r10.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b2fc
	if (cr6.eq) goto loc_8268B2FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268b17c
	goto loc_8268B17C;
loc_8268B1DC:
	// li r29,0
	r29.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r29.u64);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268b280
	if (!cr6.eq) goto loc_8268B280;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7110, r29.u8);
	// stb r29,7109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7109, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b27c
	if (cr6.eq) goto loc_8268B27C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B27C:
	// b 0x8268b2f4
	goto loc_8268B2F4;
loc_8268B280:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r11,-20176
	ctx.r7.s64 = r11.s64 + -20176;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r28,7132
	ctx.r4.s64 = r28.s64 + 7132;
	// bl 0x82bb99e8
	sub_82BB99E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268b2f4
	if (!cr0.eq) goto loc_8268B2F4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7110(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7110, ctx.r10.u8);
	// stb r29,7109(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7109, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b2f0
	if (cr6.eq) goto loc_8268B2F0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b2e4
	if (!cr6.gt) goto loc_8268B2E4;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B2E4:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B2F0:
	// b 0x8268b2f4
	goto loc_8268B2F4;
loc_8268B2F4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8268B2FC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8268B130"))) PPC_WEAK_FUNC(sub_8268B130);
PPC_FUNC_IMPL(__imp__sub_8268B130) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268b18c
	if (cr6.eq) goto loc_8268B18C;
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7110, r29.u8);
	// stb r29,7109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7109, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b2fc
	if (cr6.eq) goto loc_8268B2FC;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b17c
	if (!cr6.gt) goto loc_8268B17C;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B17C:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268b2fc
	goto loc_8268B2FC;
loc_8268B18C:
	// lwz r30,16(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// clrldi r10,r4,32
	ctx.r10.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// ld r11,80(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 80);
	// lwz r28,48(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// std r11,80(r30)
	PPC_STORE_U64(r30.u32 + 80, r11.u64);
	// ld r10,7120(r28)
	ctx.r10.u64 = PPC_LOAD_U64(r28.u32 + 7120);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x8268b1dc
	if (cr6.lt) goto loc_8268B1DC;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r9,7109(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7109, ctx.r9.u8);
	// stb r10,7110(r8)
	PPC_STORE_U8(ctx.r8.u32 + 7110, ctx.r10.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b2fc
	if (cr6.eq) goto loc_8268B2FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8268b17c
	goto loc_8268B17C;
loc_8268B1DC:
	// li r29,0
	r29.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r29.u64);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// lwz r10,80(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8268b280
	if (!cr6.eq) goto loc_8268B280;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7110, r29.u8);
	// stb r29,7109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7109, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b27c
	if (cr6.eq) goto loc_8268B27C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B27C:
	// b 0x8268b2f4
	goto loc_8268B2F4;
loc_8268B280:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r7,r11,-20176
	ctx.r7.s64 = r11.s64 + -20176;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r4,r28,7132
	ctx.r4.s64 = r28.s64 + 7132;
	// bl 0x82bb99e8
	sub_82BB99E8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8268b2f4
	if (!cr0.eq) goto loc_8268B2F4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7110(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7110, ctx.r10.u8);
	// stb r29,7109(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7109, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b2f0
	if (cr6.eq) goto loc_8268B2F0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b2e4
	if (!cr6.gt) goto loc_8268B2E4;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B2E4:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B2F0:
	// b 0x8268b2f4
	goto loc_8268B2F4;
loc_8268B2F4:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8268B2FC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
}

__attribute__((alias("__imp__sub_8268B304"))) PPC_WEAK_FUNC(sub_8268B304);
PPC_FUNC_IMPL(__imp__sub_8268B304) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268B328"))) PPC_WEAK_FUNC(sub_8268B328);
PPC_FUNC_IMPL(__imp__sub_8268B328) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B32C"))) PPC_WEAK_FUNC(sub_8268B32C);
PPC_FUNC_IMPL(__imp__sub_8268B32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B330"))) PPC_WEAK_FUNC(sub_8268B330);
PPC_FUNC_IMPL(__imp__sub_8268B330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17856(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17856);
	// mflr r12
	// bl 0x828e9418
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// lwz r28,48(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// beq cr6,0x8268b398
	if (cr6.eq) goto loc_8268B398;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7110, r29.u8);
	// stb r29,7109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7109, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b508
	if (cr6.eq) goto loc_8268B508;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b388
	if (!cr6.gt) goto loc_8268B388;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B388:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268b508
	goto loc_8268B508;
loc_8268B398:
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r29,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268b430
	if (cr6.eq) goto loc_8268B430;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7109, r29.u8);
	// stb r29,7110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7110, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b424
	if (cr6.eq) goto loc_8268B424;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,1158
	ctx.r3.u64 = ctx.r3.u64 | 1158;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B424:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// b 0x8268b508
	goto loc_8268B508;
loc_8268B430:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,-17896
	ctx.r3.s64 = r11.s64 + -17896;
	// lis r8,20480
	ctx.r8.s64 = 1342177280;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// bl 0x82607590
	sub_82607590(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8268b4b0
	if (!cr0.eq) goto loc_8268B4B0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7110(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7110, ctx.r10.u8);
	// stb r29,7109(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7109, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b4ac
	if (cr6.eq) goto loc_8268B4AC;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b4a0
	if (!cr6.gt) goto loc_8268B4A0;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B4A0:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B4AC:
	// b 0x8268b424
	goto loc_8268B424;
loc_8268B4B0:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82bb9af8
	sub_82BB9AF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8268b4d8
	if (cr0.eq) goto loc_8268B4D8;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// rlwinm r11,r11,0,0,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// b 0x8268b4dc
	goto loc_8268B4DC;
loc_8268B4D8:
	// std r29,80(r30)
	PPC_STORE_U64(r30.u32 + 80, r29.u64);
loc_8268B4DC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r28,7132
	ctx.r3.s64 = r28.s64 + 7132;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268b130
	sub_8268B130(ctx, base);
loc_8268B508:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8268B338"))) PPC_WEAK_FUNC(sub_8268B338);
PPC_FUNC_IMPL(__imp__sub_8268B338) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// lwz r28,48(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// beq cr6,0x8268b398
	if (cr6.eq) goto loc_8268B398;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7110, r29.u8);
	// stb r29,7109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7109, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b508
	if (cr6.eq) goto loc_8268B508;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b388
	if (!cr6.gt) goto loc_8268B388;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B388:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8268b508
	goto loc_8268B508;
loc_8268B398:
	// std r29,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r29.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r29,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r29.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// addi r11,r11,2112
	r11.s64 = r11.s64 + 2112;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268b430
	if (cr6.eq) goto loc_8268B430;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7109, r29.u8);
	// stb r29,7110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7110, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b424
	if (cr6.eq) goto loc_8268B424;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// ori r3,r3,1158
	ctx.r3.u64 = ctx.r3.u64 | 1158;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B424:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// b 0x8268b508
	goto loc_8268B508;
loc_8268B430:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,-17896
	ctx.r3.s64 = r11.s64 + -17896;
	// lis r8,20480
	ctx.r8.s64 = 1342177280;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// bl 0x82607590
	sub_82607590(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8268b4b0
	if (!cr0.eq) goto loc_8268B4B0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// bl 0x8260de10
	sub_8260DE10(ctx, base);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7110(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7110, ctx.r10.u8);
	// stb r29,7109(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7109, r29.u8);
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b4ac
	if (cr6.eq) goto loc_8268B4AC;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b4a0
	if (!cr6.gt) goto loc_8268B4A0;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B4A0:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B4AC:
	// b 0x8268b424
	goto loc_8268B424;
loc_8268B4B0:
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// bl 0x82bb9af8
	sub_82BB9AF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8268b4d8
	if (cr0.eq) goto loc_8268B4D8;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// rlwinm r11,r11,0,0,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// b 0x8268b4dc
	goto loc_8268B4DC;
loc_8268B4D8:
	// std r29,80(r30)
	PPC_STORE_U64(r30.u32 + 80, r29.u64);
loc_8268B4DC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r28,7132
	ctx.r3.s64 = r28.s64 + 7132;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268b130
	sub_8268B130(ctx, base);
loc_8268B508:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
}

__attribute__((alias("__imp__sub_8268B510"))) PPC_WEAK_FUNC(sub_8268B510);
PPC_FUNC_IMPL(__imp__sub_8268B510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268B534"))) PPC_WEAK_FUNC(sub_8268B534);
PPC_FUNC_IMPL(__imp__sub_8268B534) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268B538"))) PPC_WEAK_FUNC(sub_8268B538);
PPC_FUNC_IMPL(__imp__sub_8268B538) {
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
	// lwz r29,20(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// li r11,1
	r11.s64 = 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r31,48(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// stb r11,7108(r31)
	PPC_STORE_U8(r31.u32 + 7108, r11.u8);
	// stb r11,7109(r31)
	PPC_STORE_U8(r31.u32 + 7109, r11.u8);
	// beq cr6,0x8268b57c
	if (cr6.eq) goto loc_8268B57C;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r28,7110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7110, r28.u8);
	// stb r28,7109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7109, r28.u8);
	// b 0x8268b604
	goto loc_8268B604;
loc_8268B57C:
	// stw r11,6804(r31)
	PPC_STORE_U32(r31.u32 + 6804, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r11,-17772
	ctx.r5.s64 = r11.s64 + -17772;
	// addi r3,r31,6808
	ctx.r3.s64 = r31.s64 + 6808;
	// bl 0x828ef870
	sub_828EF870(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r4,42
	ctx.r4.s64 = 42;
	// addi r5,r11,-17792
	ctx.r5.s64 = r11.s64 + -17792;
	// addi r3,r31,7064
	ctx.r3.s64 = r31.s64 + 7064;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r11,-32151
	r11.s64 = -2107047936;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,-19656
	r11.s64 = r11.s64 + -19656;
	// addi r4,r9,-18116
	ctx.r4.s64 = ctx.r9.s64 + -18116;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,52
	ctx.r6.s64 = 52;
	// addi r5,r31,6800
	ctx.r5.s64 = r31.s64 + 6800;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82605078
	sub_82605078(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8268b62c
	if (cr6.eq) goto loc_8268B62C;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7110(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7110, ctx.r10.u8);
	// stb r28,7109(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7109, r28.u8);
loc_8268B604:
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b62c
	if (cr6.eq) goto loc_8268B62C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b620
	if (!cr6.gt) goto loc_8268B620;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B620:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B62C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268B630"))) PPC_WEAK_FUNC(sub_8268B630);
PPC_FUNC_IMPL(__imp__sub_8268B630) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8268B634"))) PPC_WEAK_FUNC(sub_8268B634);
PPC_FUNC_IMPL(__imp__sub_8268B634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268B638"))) PPC_WEAK_FUNC(sub_8268B638);
PPC_FUNC_IMPL(__imp__sub_8268B638) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r29,0
	r29.s64 = 0;
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// beq cr6,0x8268b670
	if (cr6.eq) goto loc_8268B670;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r29,7110(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7110, r29.u8);
	// stb r29,7109(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7109, r29.u8);
	// b 0x8268b758
	goto loc_8268B758;
loc_8268B670:
	// li r11,1
	r11.s64 = 1;
	// li r5,28
	ctx.r5.s64 = 28;
	// stb r11,7108(r30)
	PPC_STORE_U8(r30.u32 + 7108, r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,7109(r30)
	PPC_STORE_U8(r30.u32 + 7109, r11.u8);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// std r29,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r29.u64);
	// std r29,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r29.u64);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r31,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r31.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// addi r28,r30,6800
	r28.s64 = r30.s64 + 6800;
	// stw r31,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r31.u32);
	// li r5,308
	ctx.r5.s64 = 308;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,7120(r30)
	ctx.r3.u64 = PPC_LOAD_U64(r30.u32 + 7120);
	// bl 0x82605138
	sub_82605138(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82698e28
	sub_82698E28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8268b710
	if (cr0.eq) goto loc_8268B710;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82605130
	sub_82605130(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8268b710
	if (!cr0.eq) goto loc_8268B710;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x8268b710
	if (cr6.eq) goto loc_8268B710;
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpld cr6,r11,r27
	cr6.compare<uint64_t>(r11.u64, r27.u64, xer);
	// ble cr6,0x8268b710
	if (!cr6.gt) goto loc_8268B710;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8268b538
	sub_8268B538(ctx, base);
	// b 0x8268b780
	goto loc_8268B780;
loc_8268B710:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// addi r11,r11,-19144
	r11.s64 = r11.s64 + -19144;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r11,16(r26)
	PPC_STORE_U32(r26.u32 + 16, r11.u32);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82606078
	sub_82606078(ctx, base);
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8268b780
	if (cr6.eq) goto loc_8268B780;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cntlzw r10,r3
	ctx.r10.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stb r10,7110(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7110, ctx.r10.u8);
	// stb r29,7109(r9)
	PPC_STORE_U8(ctx.r9.u32 + 7109, r29.u8);
loc_8268B758:
	// lwz r10,2136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 2136);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8268b780
	if (cr6.eq) goto loc_8268B780;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8268b774
	if (!cr6.gt) goto loc_8268B774;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r9,32775
	ctx.r3.u64 = ctx.r9.u64 | 2147942400;
loc_8268B774:
	// lwz r4,2140(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 2140);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B780:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8268B784"))) PPC_WEAK_FUNC(sub_8268B784);
PPC_FUNC_IMPL(__imp__sub_8268B784) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8268B788"))) PPC_WEAK_FUNC(sub_8268B788);
PPC_FUNC_IMPL(__imp__sub_8268B788) {
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
	// lwz r28,20(r5)
	r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,48(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// addi r11,r31,2148
	r11.s64 = r31.s64 + 2148;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,6484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 6484);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268b7d8
	if (cr6.eq) goto loc_8268B7D8;
	// bl 0x82e83e40
	sub_82E83E40(ctx, base);
	// stw r30,6484(r31)
	PPC_STORE_U32(r31.u32 + 6484, r30.u32);
loc_8268B7D8:
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// stb r30,6481(r31)
	PPC_STORE_U8(r31.u32 + 6481, r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,6488(r31)
	PPC_STORE_U8(r31.u32 + 6488, r11.u8);
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// lwz r11,2136(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2136);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268b820
	if (cr6.eq) goto loc_8268B820;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bgt cr6,0x8268b80c
	if (cr6.gt) goto loc_8268B80C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x8268b814
	goto loc_8268B814;
loc_8268B80C:
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// oris r3,r10,32775
	ctx.r3.u64 = ctx.r10.u64 | 2147942400;
loc_8268B814:
	// lwz r4,2140(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 2140);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8268B820:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8268B824"))) PPC_WEAK_FUNC(sub_8268B824);
PPC_FUNC_IMPL(__imp__sub_8268B824) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8268B828"))) PPC_WEAK_FUNC(sub_8268B828);
PPC_FUNC_IMPL(__imp__sub_8268B828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17712(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17712);
	// mflr r12
	// bl 0x828e9418
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r30,48(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// bl 0x82606820
	sub_82606820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8268b984
	if (!cr0.eq) goto loc_8268B984;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8268b984
	if (!cr6.eq) goto loc_8268B984;
	// lwz r11,6496(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 6496);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8268b8e0
	if (!cr6.eq) goto loc_8268B8E0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r30,6756
	r11.s64 = r30.s64 + 6756;
	// addi r10,r10,-17792
	ctx.r10.s64 = ctx.r10.s64 + -17792;
loc_8268B88C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8268b8b0
	if (cr0.eq) goto loc_8268B8B0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8268b88c
	if (cr6.eq) goto loc_8268B88C;
loc_8268B8B0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8268b8e0
	if (!cr0.eq) goto loc_8268B8E0;
	// lwz r11,6800(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 6800);
	// addi r3,r30,6800
	ctx.r3.s64 = r30.s64 + 6800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268b8d4
	if (cr6.eq) goto loc_8268B8D4;
	// lwz r10,6492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 6492);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8268b8e0
	if (!cr6.gt) goto loc_8268B8E0;
loc_8268B8D4:
	// addi r4,r30,6492
	ctx.r4.s64 = r30.s64 + 6492;
	// li r5,308
	ctx.r5.s64 = 308;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8268B8E0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r30,2148
	ctx.r10.s64 = r30.s64 + 2148;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r11,6484(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 6484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268b92c
	if (!cr6.eq) goto loc_8268B92C;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268b978
	goto loc_8268B978;
loc_8268B92C:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r11,r11,-18384
	r11.s64 = r11.s64 + -18384;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r30,6492
	ctx.r4.s64 = r30.s64 + 6492;
	// lwz r3,6484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 6484);
	// bl 0x82606030
	sub_82606030(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8268b978
	if (cr6.eq) goto loc_8268B978;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268b978
	goto loc_8268B978;
loc_8268B978:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// b 0x8268ba3c
	goto loc_8268BA3C;
loc_8268B984:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r30,2148
	ctx.r10.s64 = r30.s64 + 2148;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// li r29,0
	r29.s64 = 0;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,6484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 6484);
	// bl 0x82e83e40
	sub_82E83E40(ctx, base);
	// lwz r11,6800(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 6800);
	// stw r29,6484(r30)
	PPC_STORE_U32(r30.u32 + 6484, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268b9f0
	if (cr6.eq) goto loc_8268B9F0;
	// li r11,1
	r11.s64 = 1;
	// stb r29,6481(r30)
	PPC_STORE_U8(r30.u32 + 6481, r29.u8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stb r11,6488(r30)
	PPC_STORE_U8(r30.u32 + 6488, r11.u8);
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268b538
	sub_8268B538(ctx, base);
loc_8268B9E4:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// b 0x8268ba3c
	goto loc_8268BA3C;
loc_8268B9F0:
	// bl 0x82698e38
	sub_82698E38(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268ba24
	if (cr0.eq) goto loc_8268BA24;
	// li r11,1
	r11.s64 = 1;
	// stb r29,6481(r30)
	PPC_STORE_U8(r30.u32 + 6481, r29.u8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stb r11,6488(r30)
	PPC_STORE_U8(r30.u32 + 6488, r11.u8);
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268b638
	sub_8268B638(ctx, base);
	// b 0x8268b9e4
	goto loc_8268B9E4;
loc_8268BA24:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
loc_8268BA3C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8268B830"))) PPC_WEAK_FUNC(sub_8268B830);
PPC_FUNC_IMPL(__imp__sub_8268B830) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r3,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r30,48(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// bl 0x82606820
	sub_82606820(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8268b984
	if (!cr0.eq) goto loc_8268B984;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8268b984
	if (!cr6.eq) goto loc_8268B984;
	// lwz r11,6496(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 6496);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8268b8e0
	if (!cr6.eq) goto loc_8268B8E0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r30,6756
	r11.s64 = r30.s64 + 6756;
	// addi r10,r10,-17792
	ctx.r10.s64 = ctx.r10.s64 + -17792;
loc_8268B88C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8268b8b0
	if (cr0.eq) goto loc_8268B8B0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8268b88c
	if (cr6.eq) goto loc_8268B88C;
loc_8268B8B0:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8268b8e0
	if (!cr0.eq) goto loc_8268B8E0;
	// lwz r11,6800(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 6800);
	// addi r3,r30,6800
	ctx.r3.s64 = r30.s64 + 6800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268b8d4
	if (cr6.eq) goto loc_8268B8D4;
	// lwz r10,6492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 6492);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8268b8e0
	if (!cr6.gt) goto loc_8268B8E0;
loc_8268B8D4:
	// addi r4,r30,6492
	ctx.r4.s64 = r30.s64 + 6492;
	// li r5,308
	ctx.r5.s64 = 308;
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
loc_8268B8E0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r30,2148
	ctx.r10.s64 = r30.s64 + 2148;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r9,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r11,6484(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 6484);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8268b92c
	if (!cr6.eq) goto loc_8268B92C;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268b978
	goto loc_8268B978;
loc_8268B92C:
	// lis r11,-32151
	r11.s64 = -2107047936;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r11,r11,-18384
	r11.s64 = r11.s64 + -18384;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r30,6492
	ctx.r4.s64 = r30.s64 + 6492;
	// lwz r3,6484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 6484);
	// bl 0x82606030
	sub_82606030(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8268b978
	if (cr6.eq) goto loc_8268B978;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268b978
	goto loc_8268B978;
loc_8268B978:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// b 0x8268ba3c
	goto loc_8268BA3C;
loc_8268B984:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r30,2148
	ctx.r10.s64 = r30.s64 + 2148;
	// addi r11,r11,-29600
	r11.s64 = r11.s64 + -29600;
	// li r29,0
	r29.s64 = 0;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,6484(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 6484);
	// bl 0x82e83e40
	sub_82E83E40(ctx, base);
	// lwz r11,6800(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 6800);
	// stw r29,6484(r30)
	PPC_STORE_U32(r30.u32 + 6484, r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268b9f0
	if (cr6.eq) goto loc_8268B9F0;
	// li r11,1
	r11.s64 = 1;
	// stb r29,6481(r30)
	PPC_STORE_U8(r30.u32 + 6481, r29.u8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stb r11,6488(r30)
	PPC_STORE_U8(r30.u32 + 6488, r11.u8);
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268b538
	sub_8268B538(ctx, base);
loc_8268B9E4:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// b 0x8268ba3c
	goto loc_8268BA3C;
loc_8268B9F0:
	// bl 0x82698e38
	sub_82698E38(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8268ba24
	if (cr0.eq) goto loc_8268BA24;
	// li r11,1
	r11.s64 = 1;
	// stb r29,6481(r30)
	PPC_STORE_U8(r30.u32 + 6481, r29.u8);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stb r11,6488(r30)
	PPC_STORE_U8(r30.u32 + 6488, r11.u8);
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268b638
	sub_8268B638(ctx, base);
	// b 0x8268b9e4
	goto loc_8268B9E4;
loc_8268BA24:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
loc_8268BA3C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
}

__attribute__((alias("__imp__sub_8268BA44"))) PPC_WEAK_FUNC(sub_8268BA44);
PPC_FUNC_IMPL(__imp__sub_8268BA44) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268BA68"))) PPC_WEAK_FUNC(sub_8268BA68);
PPC_FUNC_IMPL(__imp__sub_8268BA68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BA6C"))) PPC_WEAK_FUNC(sub_8268BA6C);
PPC_FUNC_IMPL(__imp__sub_8268BA6C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268BA90"))) PPC_WEAK_FUNC(sub_8268BA90);
PPC_FUNC_IMPL(__imp__sub_8268BA90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BA94"))) PPC_WEAK_FUNC(sub_8268BA94);
PPC_FUNC_IMPL(__imp__sub_8268BA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268BA98"))) PPC_WEAK_FUNC(sub_8268BA98);
PPC_FUNC_IMPL(__imp__sub_8268BA98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r16{};
	PPCRegister r20{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r20,-3096(r14)
	r20.u64 = PPC_LOAD_U32(r14.u32 + -3096);
	// lwz r16,-17632(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17632);
	// mflr r12
	// bl 0x828e940c
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,48(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// beq cr6,0x8268bad0
	if (cr6.eq) goto loc_8268BAD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268bc10
	goto loc_8268BC10;
loc_8268BAD0:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// addi r9,r29,2148
	ctx.r9.s64 = r29.s64 + 2148;
	// stb r11,6480(r29)
	PPC_STORE_U8(r29.u32 + 6480, r11.u8);
	// li r27,0
	r27.s64 = 0;
	// stb r11,6481(r29)
	PPC_STORE_U8(r29.u32 + 6481, r11.u8);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r11,6484(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 6484);
	// addi r26,r29,6484
	r26.s64 = r29.s64 + 6484;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268bb2c
	if (cr6.eq) goto loc_8268BB2C;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,113
	ctx.r3.s64 = 113;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268bc08
	goto loc_8268BC08;
loc_8268BB2C:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r8,r31,80
	ctx.r8.s64 = r31.s64 + 80;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x82605120
	sub_82605120(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x8268bb70
	if (cr0.eq) goto loc_8268BB70;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268bc08
	goto loc_8268BC08;
loc_8268BB70:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,308
	cr6.compare<uint32_t>(r11.u32, 308, xer);
	// beq cr6,0x8268bb98
	if (cr6.eq) goto loc_8268BB98;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268bc08
	goto loc_8268BC08;
loc_8268BB98:
	// std r27,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r27.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r27,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r27.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r11,r11,-18384
	r11.s64 = r11.s64 + -18384;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r29,6492
	ctx.r4.s64 = r29.s64 + 6492;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82606030
	sub_82606030(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8268bc08
	if (cr6.eq) goto loc_8268BC08;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268bc08
	goto loc_8268BC08;
loc_8268BC08:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8268BC10:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_8268BAA0"))) PPC_WEAK_FUNC(sub_8268BAA0);
PPC_FUNC_IMPL(__imp__sub_8268BAA0) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r5)
	r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r29,48(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// beq cr6,0x8268bad0
	if (cr6.eq) goto loc_8268BAD0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268bc10
	goto loc_8268BC10;
loc_8268BAD0:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r11,1
	r11.s64 = 1;
	// addi r10,r10,-29600
	ctx.r10.s64 = ctx.r10.s64 + -29600;
	// addi r9,r29,2148
	ctx.r9.s64 = r29.s64 + 2148;
	// stb r11,6480(r29)
	PPC_STORE_U8(r29.u32 + 6480, r11.u8);
	// li r27,0
	r27.s64 = 0;
	// stb r11,6481(r29)
	PPC_STORE_U8(r29.u32 + 6481, r11.u8);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r9,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r11,6484(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 6484);
	// addi r26,r29,6484
	r26.s64 = r29.s64 + 6484;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268bb2c
	if (cr6.eq) goto loc_8268BB2C;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,113
	ctx.r3.s64 = 113;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268bc08
	goto loc_8268BC08;
loc_8268BB2C:
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// addi r8,r31,80
	ctx.r8.s64 = r31.s64 + 80;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,254
	ctx.r3.s64 = 254;
	// bl 0x82605120
	sub_82605120(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x8268bb70
	if (cr0.eq) goto loc_8268BB70;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268bc08
	goto loc_8268BC08;
loc_8268BB70:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r11,308
	cr6.compare<uint32_t>(r11.u32, 308, xer);
	// beq cr6,0x8268bb98
	if (cr6.eq) goto loc_8268BB98;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268bc08
	goto loc_8268BC08;
loc_8268BB98:
	// std r27,0(r30)
	PPC_STORE_U64(r30.u32 + 0, r27.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r27,8(r30)
	PPC_STORE_U64(r30.u32 + 8, r27.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r27.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r30,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r30.u32);
	// bl 0x828ec890
	sub_828EC890(ctx, base);
	// lis r11,-32151
	r11.s64 = -2107047936;
	// stw r30,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r30.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r11,r11,-18384
	r11.s64 = r11.s64 + -18384;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r11.u32);
	// li r5,308
	ctx.r5.s64 = 308;
	// addi r4,r29,6492
	ctx.r4.s64 = r29.s64 + 6492;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82606030
	sub_82606030(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	cr6.compare<uint32_t>(ctx.r3.u32, 997, xer);
	// beq cr6,0x8268bc08
	if (cr6.eq) goto loc_8268BC08;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d0a8
	sub_8267D0A8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8268b788
	sub_8268B788(ctx, base);
	// b 0x8268bc08
	goto loc_8268BC08;
loc_8268BC08:
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
loc_8268BC10:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
}

__attribute__((alias("__imp__sub_8268BC18"))) PPC_WEAK_FUNC(sub_8268BC18);
PPC_FUNC_IMPL(__imp__sub_8268BC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268BC3C"))) PPC_WEAK_FUNC(sub_8268BC3C);
PPC_FUNC_IMPL(__imp__sub_8268BC3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BC40"))) PPC_WEAK_FUNC(sub_8268BC40);
PPC_FUNC_IMPL(__imp__sub_8268BC40) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r11,-29600
	r29.s64 = r11.s64 + -29600;
	// addi r11,r3,2112
	r11.s64 = ctx.r3.s64 + 2112;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268bc88
	if (cr6.eq) goto loc_8268BC88;
	// bl 0x82605300
	sub_82605300(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_8268BC88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-18116
	ctx.r3.s64 = r11.s64 + -18116;
	// bl 0x82605100
	sub_82605100(ctx, base);
	// addi r11,r31,2148
	r11.s64 = r31.s64 + 2148;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,6800(r31)
	PPC_STORE_U32(r31.u32 + 6800, r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// bl 0x8267d058
	sub_8267D058(ctx, base);
	// lwz r3,6484(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 6484);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268bcd0
	if (cr6.eq) goto loc_8268BCD0;
	// bl 0x82e83e40
	sub_82E83E40(ctx, base);
	// stw r30,6484(r31)
	PPC_STORE_U32(r31.u32 + 6484, r30.u32);
loc_8268BCD0:
	// stb r30,6480(r31)
	PPC_STORE_U8(r31.u32 + 6480, r30.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r30,6481(r31)
	PPC_STORE_U8(r31.u32 + 6481, r30.u8);
	// stb r30,6488(r31)
	PPC_STORE_U8(r31.u32 + 6488, r30.u8);
	// bl 0x8267d278
	sub_8267D278(ctx, base);
	// stb r30,7108(r31)
	PPC_STORE_U8(r31.u32 + 7108, r30.u8);
	// stb r30,7109(r31)
	PPC_STORE_U8(r31.u32 + 7109, r30.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r30,7110(r31)
	PPC_STORE_U8(r31.u32 + 7110, r30.u8);
	// stb r30,7111(r31)
	PPC_STORE_U8(r31.u32 + 7111, r30.u8);
	// stb r30,7112(r31)
	PPC_STORE_U8(r31.u32 + 7112, r30.u8);
	// stb r30,7113(r31)
	PPC_STORE_U8(r31.u32 + 7113, r30.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8268BD04"))) PPC_WEAK_FUNC(sub_8268BD04);
PPC_FUNC_IMPL(__imp__sub_8268BD04) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8268BD08"))) PPC_WEAK_FUNC(sub_8268BD08);
PPC_FUNC_IMPL(__imp__sub_8268BD08) {
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
	// lwz r3,6800(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6800);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8268bd40
	if (cr6.eq) goto loc_8268BD40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82605128
	sub_82605128(ctx, base);
	// cmplwi cr6,r3,1167
	cr6.compare<uint32_t>(ctx.r3.u32, 1167, xer);
	// bne cr6,0x8268bd40
	if (!cr6.eq) goto loc_8268BD40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8268bc40
	sub_8268BC40(ctx, base);
loc_8268BD40:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8268BD50"))) PPC_WEAK_FUNC(sub_8268BD50);
PPC_FUNC_IMPL(__imp__sub_8268BD50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BD54"))) PPC_WEAK_FUNC(sub_8268BD54);
PPC_FUNC_IMPL(__imp__sub_8268BD54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8268BD58"))) PPC_WEAK_FUNC(sub_8268BD58);
PPC_FUNC_IMPL(__imp__sub_8268BD58) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8268bdb0
	if (cr6.eq) goto loc_8268BDB0;
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x8268bd94
	if (cr6.gt) goto loc_8268BD94;
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x826c6ff8
	sub_826C6FF8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8268bdb0
	if (!cr0.eq) goto loc_8268BDB0;
loc_8268BD94:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8268ab18
	sub_8268AB18(ctx, base);
	// lis r11,-32220
	r11.s64 = -2111569920;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-11692
	ctx.r4.s64 = r11.s64 + -11692;
	// bl 0x828efb40
	sub_828EFB40(ctx, base);
loc_8268BDB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8268BDBC"))) PPC_WEAK_FUNC(sub_8268BDBC);
PPC_FUNC_IMPL(__imp__sub_8268BDBC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8268BDC0"))) PPC_WEAK_FUNC(sub_8268BDC0);
PPC_FUNC_IMPL(__imp__sub_8268BDC0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// beq cr6,0x8268be28
	if (cr6.eq) goto loc_8268BE28;
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268bdf8
	if (cr0.eq) goto loc_8268BDF8;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x828eed00
	sub_828EED00(ctx, base);
loc_8268BDF8:
	// li r11,0
	r11.s64 = 0;
	// stb r11,8(r31)
	PPC_STORE_U8(r31.u32 + 8, r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8268be20
	if (cr0.eq) goto loc_8268BE20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8268aa38
	sub_8268AA38(ctx, base);
	// b 0x8268be28
	goto loc_8268BE28;
loc_8268BE20:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8268BE28:
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

