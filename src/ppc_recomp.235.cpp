#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8270CD60"))) PPC_WEAK_FUNC(sub_8270CD60);
PPC_FUNC_IMPL(__imp__sub_8270CD60) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CD68"))) PPC_WEAK_FUNC(sub_8270CD68);
PPC_FUNC_IMPL(__imp__sub_8270CD68) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CD70"))) PPC_WEAK_FUNC(sub_8270CD70);
PPC_FUNC_IMPL(__imp__sub_8270CD70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CD74"))) PPC_WEAK_FUNC(sub_8270CD74);
PPC_FUNC_IMPL(__imp__sub_8270CD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270CD78"))) PPC_WEAK_FUNC(sub_8270CD78);
PPC_FUNC_IMPL(__imp__sub_8270CD78) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bgt cr6,0x8270ce58
	if (cr6.gt) goto loc_8270CE58;
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bdzf 4*cr6+eq,0x8270cdc0
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8270CDC0;
	// bdzf 4*cr6+eq,0x8270cdcc
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_8270CDCC;
	// bne cr6,0x8270cddc
	if (!cr6.eq) goto loc_8270CDDC;
	// li r6,1
	ctx.r6.s64 = 1;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r11,3
	r11.s64 = 3;
	// b 0x8270cde8
	goto loc_8270CDE8;
loc_8270CDC0:
	// li r6,2
	ctx.r6.s64 = 2;
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// b 0x8270cde4
	goto loc_8270CDE4;
loc_8270CDCC:
	// li r6,2
	ctx.r6.s64 = 2;
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// li r11,2
	r11.s64 = 2;
	// b 0x8270cde8
	goto loc_8270CDE8;
loc_8270CDDC:
	// li r6,3
	ctx.r6.s64 = 3;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
loc_8270CDE4:
	// li r11,4
	r11.s64 = 4;
loc_8270CDE8:
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lwz r3,22232(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22232);
	// bl 0x826d8ec8
	sub_826D8EC8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270ce50
	if (cr6.eq) goto loc_8270CE50;
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// std r3,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r3.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x8270ce5c
	goto loc_8270CE5C;
loc_8270CE50:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8270ce5c
	goto loc_8270CE5C;
loc_8270CE58:
	// li r3,31
	ctx.r3.s64 = 31;
loc_8270CE5C:
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

__attribute__((alias("__imp__sub_8270CE70"))) PPC_WEAK_FUNC(sub_8270CE70);
PPC_FUNC_IMPL(__imp__sub_8270CE70) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CE74"))) PPC_WEAK_FUNC(sub_8270CE74);
PPC_FUNC_IMPL(__imp__sub_8270CE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270CE78"))) PPC_WEAK_FUNC(sub_8270CE78);
PPC_FUNC_IMPL(__imp__sub_8270CE78) {
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
	// lwz r31,20(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// ld r11,0(r7)
	r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// extsw r5,r11
	ctx.r5.s64 = r11.s32;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// cmpd cr6,r3,r6
	cr6.compare<int64_t>(ctx.r3.s64, ctx.r6.s64, xer);
	// beq cr6,0x8270cef0
	if (cr6.eq) goto loc_8270CEF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x828e946c
	return;
loc_8270CEF0:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
}

__attribute__((alias("__imp__sub_8270CEF8"))) PPC_WEAK_FUNC(sub_8270CEF8);
PPC_FUNC_IMPL(__imp__sub_8270CEF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_8270CEFC"))) PPC_WEAK_FUNC(sub_8270CEFC);
PPC_FUNC_IMPL(__imp__sub_8270CEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270CF00"))) PPC_WEAK_FUNC(sub_8270CF00);
PPC_FUNC_IMPL(__imp__sub_8270CF00) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r4,20(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,22232(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 22232);
	// bl 0x826d8ce0
	sub_826D8CE0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8270CF2C"))) PPC_WEAK_FUNC(sub_8270CF2C);
PPC_FUNC_IMPL(__imp__sub_8270CF2C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CF30"))) PPC_WEAK_FUNC(sub_8270CF30);
PPC_FUNC_IMPL(__imp__sub_8270CF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,21236
	ctx.r8.s64 = r11.s64 + 21236;
	// addi r7,r10,21268
	ctx.r7.s64 = ctx.r10.s64 + 21268;
	// addi r6,r9,21204
	ctx.r6.s64 = ctx.r9.s64 + 21204;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
}

__attribute__((alias("__imp__sub_8270CF5C"))) PPC_WEAK_FUNC(sub_8270CF5C);
PPC_FUNC_IMPL(__imp__sub_8270CF5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270CF60"))) PPC_WEAK_FUNC(sub_8270CF60);
PPC_FUNC_IMPL(__imp__sub_8270CF60) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// beq cr6,0x8270d024
	if (cr6.eq) goto loc_8270D024;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8270d024
	if (!cr6.eq) goto loc_8270D024;
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8270cfb8
	if (!cr6.eq) goto loc_8270CFB8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,21296
	ctx.r5.s64 = r11.s64 + 21296;
	// b 0x8270cfd4
	goto loc_8270CFD4;
loc_8270CFB8:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x8270cfcc
	if (!cr6.eq) goto loc_8270CFCC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,21288
	ctx.r5.s64 = r11.s64 + 21288;
	// b 0x8270cfd4
	goto loc_8270CFD4;
loc_8270CFCC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,21280
	ctx.r5.s64 = r11.s64 + 21280;
loc_8270CFD4:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8278eb18
	sub_8278EB18(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x828e9464
	return;
loc_8270D024:
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
}

__attribute__((alias("__imp__sub_8270D034"))) PPC_WEAK_FUNC(sub_8270D034);
PPC_FUNC_IMPL(__imp__sub_8270D034) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8270D038"))) PPC_WEAK_FUNC(sub_8270D038);
PPC_FUNC_IMPL(__imp__sub_8270D038) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
}

__attribute__((alias("__imp__sub_8270D03C"))) PPC_WEAK_FUNC(sub_8270D03C);
PPC_FUNC_IMPL(__imp__sub_8270D03C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// b 0x8270d040
	goto loc_8270D040;
loc_8270D040:
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,21204
	ctx.r8.s64 = r11.s64 + 21204;
	// addi r7,r10,21164
	ctx.r7.s64 = ctx.r10.s64 + 21164;
	// addi r6,r9,21188
	ctx.r6.s64 = ctx.r9.s64 + 21188;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8270d08c
	if (cr6.eq) goto loc_8270D08C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8270D08C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D040"))) PPC_WEAK_FUNC(sub_8270D040);
PPC_FUNC_IMPL(__imp__sub_8270D040) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r8,r11,21204
	ctx.r8.s64 = r11.s64 + 21204;
	// addi r7,r10,21164
	ctx.r7.s64 = ctx.r10.s64 + 21164;
	// addi r6,r9,21188
	ctx.r6.s64 = ctx.r9.s64 + 21188;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x8270d08c
	if (cr6.eq) goto loc_8270D08C;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8270D08C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8270D0A0"))) PPC_WEAK_FUNC(sub_8270D0A0);
PPC_FUNC_IMPL(__imp__sub_8270D0A0) {
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
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// addi r4,r10,2928
	ctx.r4.s64 = ctx.r10.s64 + 2928;
	// stw r9,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r9.u32);
	// bl 0x82719a28
	sub_82719A28(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x827197b0
	sub_827197B0(ctx, base);
	// lwz r3,856(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 856);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8270D104"))) PPC_WEAK_FUNC(sub_8270D104);
PPC_FUNC_IMPL(__imp__sub_8270D104) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D108"))) PPC_WEAK_FUNC(sub_8270D108);
PPC_FUNC_IMPL(__imp__sub_8270D108) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e550
	sub_8270E550(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e588
	sub_8270E588(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270d788
	sub_8270D788(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r31,r11,24888
	r31.s64 = r11.s64 + 24888;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8270f0f8
	sub_8270F0F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270d828
	sub_8270D828(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f198
	sub_8270F198(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e7c8
	sub_8270E7C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e860
	sub_8270E860(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e918
	sub_8270E918(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r3,r10,22584
	ctx.r3.s64 = ctx.r10.s64 + 22584;
	// bl 0x8270f218
	sub_8270F218(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,15
	ctx.r4.s64 = 15;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270d8f8
	sub_8270D8F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f2d8
	sub_8270F2D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270e950
	sub_8270E950(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270ea58
	sub_8270EA58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8270f358
	sub_8270F358(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_8270D1EC"))) PPC_WEAK_FUNC(sub_8270D1EC);
PPC_FUNC_IMPL(__imp__sub_8270D1EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D1F0"))) PPC_WEAK_FUNC(sub_8270D1F0);
PPC_FUNC_IMPL(__imp__sub_8270D1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,21304
	ctx.r9.s64 = r11.s64 + 21304;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r7,r8,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r3.u8 & 0x3F));
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 & ctx.r7.u64;
	// subf r4,r5,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r5.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D21C"))) PPC_WEAK_FUNC(sub_8270D21C);
PPC_FUNC_IMPL(__imp__sub_8270D21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270D220"))) PPC_WEAK_FUNC(sub_8270D220);
PPC_FUNC_IMPL(__imp__sub_8270D220) {
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
	// lis r31,-31933
	r31.s64 = -2092761088;
	// lwz r3,21952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 21952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270d260
	if (cr6.eq) goto loc_8270D260;
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,21952(r31)
	PPC_STORE_U32(r31.u32 + 21952, r11.u32);
loc_8270D260:
	// bl 0x8270ee38
	sub_8270EE38(ctx, base);
	// lis r30,-31933
	r30.s64 = -2092761088;
	// lwz r31,21956(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 21956);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8270d28c
	if (cr6.eq) goto loc_8270D28C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x827130e8
	sub_827130E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,21956(r30)
	PPC_STORE_U32(r30.u32 + 21956, r11.u32);
loc_8270D28C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,21964
	ctx.r3.s64 = r11.s64 + 21964;
	// bl 0x8271ea20
	sub_8271EA20(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r3,r10,22512
	ctx.r3.s64 = ctx.r10.s64 + 22512;
	// bl 0x8271e998
	sub_8271E998(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// addi r3,r9,22528
	ctx.r3.s64 = ctx.r9.s64 + 22528;
	// bl 0x8271e8f0
	sub_8271E8F0(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r3,r8,22556
	ctx.r3.s64 = ctx.r8.s64 + 22556;
	// bl 0x8271e848
	sub_8271E848(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// addi r3,r7,22584
	ctx.r3.s64 = ctx.r7.s64 + 22584;
	// bl 0x827195d8
	sub_827195D8(ctx, base);
	// bl 0x8270eca0
	sub_8270ECA0(ctx, base);
	// bl 0x8270f028
	sub_8270F028(ctx, base);
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

__attribute__((alias("__imp__sub_8270D2E4"))) PPC_WEAK_FUNC(sub_8270D2E4);
PPC_FUNC_IMPL(__imp__sub_8270D2E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D2E8"))) PPC_WEAK_FUNC(sub_8270D2E8);
PPC_FUNC_IMPL(__imp__sub_8270D2E8) {
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
	// lis r31,-31933
	r31.s64 = -2092761088;
	// li r5,1136
	ctx.r5.s64 = 1136;
	// addi r30,r31,23752
	r30.s64 = r31.s64 + 23752;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r10,88
	ctx.r10.s64 = 88;
	// stw r11,520(r30)
	PPC_STORE_U32(r30.u32 + 520, r11.u32);
	// li r11,88
	r11.s64 = 88;
	// li r9,88
	ctx.r9.s64 = 88;
	// stw r10,544(r30)
	PPC_STORE_U32(r30.u32 + 544, ctx.r10.u32);
	// stw r11,552(r30)
	PPC_STORE_U32(r30.u32 + 552, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r9,548(r30)
	PPC_STORE_U32(r30.u32 + 548, ctx.r9.u32);
	// stw r10,556(r30)
	PPC_STORE_U32(r30.u32 + 556, ctx.r10.u32);
	// stw r9,1016(r30)
	PPC_STORE_U32(r30.u32 + 1016, ctx.r9.u32);
	// stw r11,23752(r31)
	PPC_STORE_U32(r31.u32 + 23752, r11.u32);
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

__attribute__((alias("__imp__sub_8270D358"))) PPC_WEAK_FUNC(sub_8270D358);
PPC_FUNC_IMPL(__imp__sub_8270D358) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D35C"))) PPC_WEAK_FUNC(sub_8270D35C);
PPC_FUNC_IMPL(__imp__sub_8270D35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270D360"))) PPC_WEAK_FUNC(sub_8270D360);
PPC_FUNC_IMPL(__imp__sub_8270D360) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r31,r11,21964
	r31.s64 = r11.s64 + 21964;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// clrlwi r8,r10,23
	ctx.r8.u64 = ctx.r10.u32 & 0x1FF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// oris r11,r8,4110
	r11.u64 = ctx.r8.u64 | 269352960;
	// rlwinm r7,r10,0,21,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF87FF;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// rlwinm r7,r7,0,5,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
	// ori r11,r7,30720
	r11.u64 = ctx.r7.u64 | 30720;
	// rlwinm r6,r11,0,17,12
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF87FFF;
	// rlwinm r6,r6,0,3,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// oris r11,r6,7
	r11.u64 = ctx.r6.u64 | 458752;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// rlwinm r5,r11,0,13,8
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFF87FFFF;
	// rlwinm r5,r5,0,2,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// oris r11,r5,120
	r11.u64 = ctx.r5.u64 | 7864320;
	// rlwinm r11,r11,0,9,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF87FFFFF;
	// oris r11,r11,1920
	r11.u64 = r11.u64 | 125829120;
	// rlwimi r11,r9,7,21,31
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0x7FF) | (r11.u64 & 0xFFFFFFFFFFFFF800);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x8271eab8
	sub_8271EAB8(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r30,r11,-26256
	r30.s64 = r11.s64 + -26256;
	// lwz r11,-26240(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26240);
	// clrlwi r4,r11,31
	ctx.r4.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x8270d428
	if (!cr6.eq) goto loc_8270D428;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// lis r8,-31979
	ctx.r8.s64 = -2095775744;
	// stw r11,-26240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -26240, r11.u32);
	// addi r3,r8,-22608
	ctx.r3.s64 = ctx.r8.s64 + -22608;
	// lfs f0,-25600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25600);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x828e95f8
	sub_828E95F8(ctx, base);
loc_8270D428:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,22512
	ctx.r3.s64 = r11.s64 + 22512;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 32, temp.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// clrlwi r8,r10,15
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFF;
	// oris r10,r9,52223
	ctx.r10.u64 = ctx.r9.u64 | 3422486528;
	// oris r11,r8,57358
	r11.u64 = ctx.r8.u64 | 3759013888;
	// ori r10,r10,64512
	ctx.r10.u64 = ctx.r10.u64 | 64512;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// bl 0x8271e988
	sub_8271E988(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// addi r5,r7,22528
	ctx.r5.s64 = ctx.r7.s64 + 22528;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f31,21036(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21036);
	f31.f64 = double(temp.f32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stfs f31,12(r5)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lwz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// stfs f31,16(r5)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// clrlwi r4,r11,4
	ctx.r4.u64 = r11.u32 & 0xFFFFFFF;
	// stfs f31,20(r5)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// clrlwi r10,r10,4
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// oris r11,r4,8192
	r11.u64 = ctx.r4.u64 | 536870912;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// bl 0x8271e8e0
	sub_8271E8E0(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// addi r8,r9,22556
	ctx.r8.s64 = ctx.r9.s64 + 22556;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, r11.u8);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stb r10,16(r8)
	PPC_STORE_U8(ctx.r8.u32 + 16, ctx.r10.u8);
	// li r10,255
	ctx.r10.s64 = 255;
	// stb r11,24(r8)
	PPC_STORE_U8(ctx.r8.u32 + 24, r11.u8);
	// stfs f31,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stb r10,25(r8)
	PPC_STORE_U8(ctx.r8.u32 + 25, ctx.r10.u8);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// clrlwi r7,r11,13
	ctx.r7.u64 = r11.u32 & 0x7FFFF;
	// rlwinm r11,r10,0,11,7
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF1FFFFF;
	// oris r10,r7,1168
	ctx.r10.u64 = ctx.r7.u64 | 76546048;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// bl 0x8271e838
	sub_8271E838(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// addi r3,r6,22584
	ctx.r3.s64 = ctx.r6.s64 + 22584;
	// bl 0x827195a0
	sub_827195A0(ctx, base);
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

__attribute__((alias("__imp__sub_8270D540"))) PPC_WEAK_FUNC(sub_8270D540);
PPC_FUNC_IMPL(__imp__sub_8270D540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D544"))) PPC_WEAK_FUNC(sub_8270D544);
PPC_FUNC_IMPL(__imp__sub_8270D544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270D548"))) PPC_WEAK_FUNC(sub_8270D548);
PPC_FUNC_IMPL(__imp__sub_8270D548) {
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
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r10,21920
	ctx.r3.s64 = ctx.r10.s64 + 21920;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r9,888(r1)
	PPC_STORE_U32(ctx.r1.u32 + 888, ctx.r9.u32);
	// bl 0x82605748
	sub_82605748(ctx, base);
	// bl 0x8270ee38
	sub_8270EE38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270ee48
	sub_8270EE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270ebb0
	sub_8270EBB0(ctx, base);
	// bl 0x8270d2e8
	sub_8270D2E8(ctx, base);
	// bl 0x8270d360
	sub_8270D360(ctx, base);
	// bl 0x8270d108
	sub_8270D108(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r6,22
	ctx.r6.s64 = 22;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r10,21320
	r30.s64 = ctx.r10.s64 + 21320;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r8,53
	ctx.r8.s64 = 53;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270d5f4
	if (cr6.eq) goto loc_8270D5F4;
	// bl 0x826c7c98
	sub_826C7C98(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r3,21952(r11)
	PPC_STORE_U32(r11.u32 + 21952, ctx.r3.u32);
	// b 0x8270d600
	goto loc_8270D600;
loc_8270D5F4:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r31,21952(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21952, r31.u32);
loc_8270D600:
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,66
	ctx.r8.s64 = 66;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r3,108
	ctx.r3.s64 = 108;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270d648
	if (cr6.eq) goto loc_8270D648;
	// bl 0x827127a0
	sub_827127A0(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r3,21956(r11)
	PPC_STORE_U32(r11.u32 + 21956, ctx.r3.u32);
	// b 0x8270d650
	goto loc_8270D650;
loc_8270D648:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// stw r31,21956(r11)
	PPC_STORE_U32(r11.u32 + 21956, r31.u32);
loc_8270D650:
	// addi r30,r11,21956
	r30.s64 = r11.s64 + 21956;
	// lis r11,-31964
	r11.s64 = -2094792704;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,24632
	ctx.r4.s64 = r11.s64 + 24632;
	// bl 0x82719a28
	sub_82719A28(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x827197b0
	sub_827197B0(ctx, base);
	// lwz r3,888(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 888);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8270D690"))) PPC_WEAK_FUNC(sub_8270D690);
PPC_FUNC_IMPL(__imp__sub_8270D690) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D694"))) PPC_WEAK_FUNC(sub_8270D694);
PPC_FUNC_IMPL(__imp__sub_8270D694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270D698"))) PPC_WEAK_FUNC(sub_8270D698);
PPC_FUNC_IMPL(__imp__sub_8270D698) {
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
	// li r30,0
	r30.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,264
	ctx.r3.s64 = r31.s64 + 264;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r30,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,308
	ctx.r3.s64 = r31.s64 + 308;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,368
	ctx.r3.s64 = r31.s64 + 368;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,432
	ctx.r3.s64 = r31.s64 + 432;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// stw r30,496(r31)
	PPC_STORE_U32(r31.u32 + 496, r30.u32);
	// stw r30,500(r31)
	PPC_STORE_U32(r31.u32 + 500, r30.u32);
	// stw r30,504(r31)
	PPC_STORE_U32(r31.u32 + 504, r30.u32);
	// stw r30,508(r31)
	PPC_STORE_U32(r31.u32 + 508, r30.u32);
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

__attribute__((alias("__imp__sub_8270D780"))) PPC_WEAK_FUNC(sub_8270D780);
PPC_FUNC_IMPL(__imp__sub_8270D780) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D784"))) PPC_WEAK_FUNC(sub_8270D784);
PPC_FUNC_IMPL(__imp__sub_8270D784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270D788"))) PPC_WEAK_FUNC(sub_8270D788);
PPC_FUNC_IMPL(__imp__sub_8270D788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,27556
	ctx.r6.s64 = ctx.r10.s64 + 27556;
	// addi r5,r9,27592
	ctx.r5.s64 = ctx.r9.s64 + 27592;
	// addi r7,r11,27520
	ctx.r7.s64 = r11.s64 + 27520;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// lwzx r10,r8,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r6,r9,22000
	ctx.r6.s64 = ctx.r9.s64 + 22000;
	// lwzx r9,r8,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// addi r5,r4,25332
	ctx.r5.s64 = ctx.r4.s64 + 25332;
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// stw r3,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r3.u32);
	// stw r10,-4(r5)
	PPC_STORE_U32(ctx.r5.u32 + -4, ctx.r10.u32);
	// stw r11,-18768(r7)
	PPC_STORE_U32(ctx.r7.u32 + -18768, r11.u32);
	// stw r9,25332(r4)
	PPC_STORE_U32(ctx.r4.u32 + 25332, ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8270D7D4"))) PPC_WEAK_FUNC(sub_8270D7D4);
PPC_FUNC_IMPL(__imp__sub_8270D7D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D7D8"))) PPC_WEAK_FUNC(sub_8270D7D8);
PPC_FUNC_IMPL(__imp__sub_8270D7D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// addi r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 + 204;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r7,r9,25256
	ctx.r7.s64 = ctx.r9.s64 + 25256;
	// addi r6,r8,25196
	ctx.r6.s64 = ctx.r8.s64 + 25196;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r4,r11,r7
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r3,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r3.u32);
	// stb r10,25324(r5)
	PPC_STORE_U8(ctx.r5.u32 + 25324, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_8270D824"))) PPC_WEAK_FUNC(sub_8270D824);
PPC_FUNC_IMPL(__imp__sub_8270D824) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D828"))) PPC_WEAK_FUNC(sub_8270D828);
PPC_FUNC_IMPL(__imp__sub_8270D828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8270d89c
	if (cr6.eq) goto loc_8270D89C;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// addi r7,r7,25196
	ctx.r7.s64 = ctx.r7.s64 + 25196;
	// addi r6,r9,25256
	ctx.r6.s64 = ctx.r9.s64 + 25256;
	// addi r3,r10,22000
	ctx.r3.s64 = ctx.r10.s64 + 22000;
loc_8270D868:
	// addi r9,r3,204
	ctx.r9.s64 = ctx.r3.s64 + 204;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r30,r11,r9
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x8270d890
	if (cr6.eq) goto loc_8270D890;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r8,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// stwx r4,r11,r7
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// stb r10,25324(r5)
	PPC_STORE_U8(ctx.r5.u32 + 25324, ctx.r10.u8);
loc_8270D890:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8270d868
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8270D868;
loc_8270D89C:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8270D8A4"))) PPC_WEAK_FUNC(sub_8270D8A4);
PPC_FUNC_IMPL(__imp__sub_8270D8A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D8A8"))) PPC_WEAK_FUNC(sub_8270D8A8);
PPC_FUNC_IMPL(__imp__sub_8270D8A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// addi r10,r10,308
	ctx.r10.s64 = ctx.r10.s64 + 308;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// addi r7,r9,25136
	ctx.r7.s64 = ctx.r9.s64 + 25136;
	// addi r6,r8,25076
	ctx.r6.s64 = ctx.r8.s64 + 25076;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r4,r11,r7
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r3,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r3.u32);
	// stb r10,25325(r5)
	PPC_STORE_U8(ctx.r5.u32 + 25325, ctx.r10.u8);
}

__attribute__((alias("__imp__sub_8270D8F4"))) PPC_WEAK_FUNC(sub_8270D8F4);
PPC_FUNC_IMPL(__imp__sub_8270D8F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D8F8"))) PPC_WEAK_FUNC(sub_8270D8F8);
PPC_FUNC_IMPL(__imp__sub_8270D8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8270d96c
	if (cr6.eq) goto loc_8270D96C;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// mtctr r4
	ctr.u64 = ctx.r4.u64;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// addi r7,r7,25076
	ctx.r7.s64 = ctx.r7.s64 + 25076;
	// addi r6,r9,25136
	ctx.r6.s64 = ctx.r9.s64 + 25136;
	// addi r3,r10,22000
	ctx.r3.s64 = ctx.r10.s64 + 22000;
loc_8270D938:
	// addi r9,r3,308
	ctx.r9.s64 = ctx.r3.s64 + 308;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r30,r11,r9
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x8270d960
	if (cr6.eq) goto loc_8270D960;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r8,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// stwx r4,r11,r7
	PPC_STORE_U32(r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// stb r10,25325(r5)
	PPC_STORE_U8(ctx.r5.u32 + 25325, ctx.r10.u8);
loc_8270D960:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8270d938
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8270D938;
loc_8270D96C:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
}

__attribute__((alias("__imp__sub_8270D974"))) PPC_WEAK_FUNC(sub_8270D974);
PPC_FUNC_IMPL(__imp__sub_8270D974) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D978"))) PPC_WEAK_FUNC(sub_8270D978);
PPC_FUNC_IMPL(__imp__sub_8270D978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// addi r10,r10,-15152
	ctx.r10.s64 = ctx.r10.s64 + -15152;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8270D990"))) PPC_WEAK_FUNC(sub_8270D990);
PPC_FUNC_IMPL(__imp__sub_8270D990) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D994"))) PPC_WEAK_FUNC(sub_8270D994);
PPC_FUNC_IMPL(__imp__sub_8270D994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270D998"))) PPC_WEAK_FUNC(sub_8270D998);
PPC_FUNC_IMPL(__imp__sub_8270D998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + r11.u64;
	// addi r11,r10,-15152
	r11.s64 = ctx.r10.s64 + -15152;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addic r6,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r6.s64 = r11.s64 + -1;
	// subfe r3,r6,r11
	temp.u8 = (~ctx.r6.u32 + r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D9C4"))) PPC_WEAK_FUNC(sub_8270D9C4);
PPC_FUNC_IMPL(__imp__sub_8270D9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270D9C8"))) PPC_WEAK_FUNC(sub_8270D9C8);
PPC_FUNC_IMPL(__imp__sub_8270D9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + r11.u64;
	// addi r11,r10,-15152
	r11.s64 = ctx.r10.s64 + -15152;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addic r6,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r6.s64 = r11.s64 + -1;
	// subfe r3,r6,r11
	temp.u8 = (~ctx.r6.u32 + r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270D9F4"))) PPC_WEAK_FUNC(sub_8270D9F4);
PPC_FUNC_IMPL(__imp__sub_8270D9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270D9F8"))) PPC_WEAK_FUNC(sub_8270D9F8);
PPC_FUNC_IMPL(__imp__sub_8270D9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + r11.u64;
	// addi r11,r10,-15152
	r11.s64 = ctx.r10.s64 + -15152;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,12
	ctx.r7.s64 = r11.s64 + 12;
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addic r6,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r6.s64 = r11.s64 + -1;
	// subfe r3,r6,r11
	temp.u8 = (~ctx.r6.u32 + r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
}

__attribute__((alias("__imp__sub_8270DA20"))) PPC_WEAK_FUNC(sub_8270DA20);
PPC_FUNC_IMPL(__imp__sub_8270DA20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DA24"))) PPC_WEAK_FUNC(sub_8270DA24);
PPC_FUNC_IMPL(__imp__sub_8270DA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DA28"))) PPC_WEAK_FUNC(sub_8270DA28);
PPC_FUNC_IMPL(__imp__sub_8270DA28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// cmpwi cr6,r3,76
	cr6.compare<int32_t>(ctx.r3.s32, 76, xer);
	// blt cr6,0x8270da64
	if (cr6.lt) goto loc_8270DA64;
	// cmpwi cr6,r3,83
	cr6.compare<int32_t>(ctx.r3.s32, 83, xer);
	// bgt cr6,0x8270da64
	if (cr6.gt) goto loc_8270DA64;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + r11.u64;
	// addi r11,r10,-15152
	r11.s64 = ctx.r10.s64 + -15152;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addic r6,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r6.s64 = r11.s64 + -1;
	// subfe r3,r6,r11
	temp.u8 = (~ctx.r6.u32 + r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~ctx.r6.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
loc_8270DA64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DA6C"))) PPC_WEAK_FUNC(sub_8270DA6C);
PPC_FUNC_IMPL(__imp__sub_8270DA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DA70"))) PPC_WEAK_FUNC(sub_8270DA70);
PPC_FUNC_IMPL(__imp__sub_8270DA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r10,r10,25344
	ctx.r10.s64 = ctx.r10.s64 + 25344;
	// lwz r11,25336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25336);
	// mulli r11,r11,108
	r11.s64 = r11.s64 * 108;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
}

__attribute__((alias("__imp__sub_8270DA88"))) PPC_WEAK_FUNC(sub_8270DA88);
PPC_FUNC_IMPL(__imp__sub_8270DA88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DA8C"))) PPC_WEAK_FUNC(sub_8270DA8C);
PPC_FUNC_IMPL(__imp__sub_8270DA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DA90"))) PPC_WEAK_FUNC(sub_8270DA90);
PPC_FUNC_IMPL(__imp__sub_8270DA90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,21920
	r11.s64 = r11.s64 + 21920;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8270dac8
	if (!cr6.eq) goto loc_8270DAC8;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r10,25336(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25336);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// divwu r8,r9,r11
	ctx.r8.u32 = ctx.r9.u32 / r11.u32;
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
loc_8270DAC8:
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mulli r11,r10,108
	r11.s64 = ctx.r10.s64 * 108;
	// addi r10,r9,25344
	ctx.r10.s64 = ctx.r9.s64 + 25344;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DADC"))) PPC_WEAK_FUNC(sub_8270DADC);
PPC_FUNC_IMPL(__imp__sub_8270DADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DAE0"))) PPC_WEAK_FUNC(sub_8270DAE0);
PPC_FUNC_IMPL(__imp__sub_8270DAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2079
	r11.u64 = r11.u64 | 2079;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x8270dc30
	if (cr6.gt) goto loc_8270DC30;
	// beq cr6,0x8270dc24
	if (cr6.eq) goto loc_8270DC24;
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2072
	r11.u64 = r11.u64 | 2072;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x8270dbb0
	if (cr6.gt) goto loc_8270DBB0;
	// beq cr6,0x8270dba4
	if (cr6.eq) goto loc_8270DBA4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x8270db6c
	if (cr6.gt) goto loc_8270DB6C;
	// beq cr6,0x8270db60
	if (cr6.eq) goto loc_8270DB60;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r10,r11,16385
	ctx.r10.u64 = r11.u64 | 16385;
	// subf. r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8270db54
	if (cr0.eq) goto loc_8270DB54;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8270db48
	if (cr6.eq) goto loc_8270DB48;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x8270dd4c
	if (!cr6.eq) goto loc_8270DD4C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,24648
	ctx.r3.s64 = r11.s64 + 24648;
	// blr 
	return;
loc_8270DB48:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,24592
	ctx.r3.s64 = r11.s64 + 24592;
	// blr 
	return;
loc_8270DB54:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,24564
	ctx.r3.s64 = r11.s64 + 24564;
	// blr 
	return;
loc_8270DB60:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,24480
	ctx.r3.s64 = r11.s64 + 24480;
	// blr 
	return;
loc_8270DB6C:
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r10,r11,87
	ctx.r10.u64 = r11.u64 | 87;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x8270db98
	if (cr6.eq) goto loc_8270DB98;
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r10,r11,380
	ctx.r10.u64 = r11.u64 | 380;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// bne cr6,0x8270dd4c
	if (!cr6.eq) goto loc_8270DD4C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,24008
	ctx.r3.s64 = r11.s64 + 24008;
	// blr 
	return;
loc_8270DB98:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,23928
	ctx.r3.s64 = r11.s64 + 23928;
	// blr 
	return;
loc_8270DBA4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,23840
	ctx.r3.s64 = r11.s64 + 23840;
	// blr 
	return;
loc_8270DBB0:
	// addis r11,r3,30602
	r11.s64 = ctx.r3.s64 + 2005532672;
	// addi r11,r11,-2073
	r11.s64 = r11.s64 + -2073;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x8270dd4c
	if (cr6.gt) goto loc_8270DD4C;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8270dc18
	if (cr6.eq) goto loc_8270DC18;
	// bdz 0x8270dc0c
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8270DC0C;
	// bdz 0x8270dc00
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8270DC00;
	// bdz 0x8270dbf4
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8270DBF4;
	// bdz 0x8270dbe8
	--ctr.u64;
	if (ctr.u32 == 0) goto loc_8270DBE8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,23752
	ctx.r3.s64 = r11.s64 + 23752;
	// blr 
	return;
loc_8270DBE8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,23632
	ctx.r3.s64 = r11.s64 + 23632;
	// blr 
	return;
loc_8270DBF4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,23512
	ctx.r3.s64 = r11.s64 + 23512;
	// blr 
	return;
loc_8270DC00:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,23384
	ctx.r3.s64 = r11.s64 + 23384;
	// blr 
	return;
loc_8270DC0C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,23272
	ctx.r3.s64 = r11.s64 + 23272;
	// blr 
	return;
loc_8270DC18:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,23152
	ctx.r3.s64 = r11.s64 + 23152;
	// blr 
	return;
loc_8270DC24:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,23000
	ctx.r3.s64 = r11.s64 + 23000;
	// blr 
	return;
loc_8270DC30:
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2153
	r11.u64 = r11.u64 | 2153;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x8270dce4
	if (cr6.gt) goto loc_8270DCE4;
	// beq cr6,0x8270dcd8
	if (cr6.eq) goto loc_8270DCD8;
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2150
	r11.u64 = r11.u64 | 2150;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x8270dca8
	if (cr6.gt) goto loc_8270DCA8;
	// beq cr6,0x8270dc9c
	if (cr6.eq) goto loc_8270DC9C;
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r10,r11,2081
	ctx.r10.u64 = r11.u64 | 2081;
	// subf. r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8270dc90
	if (cr0.eq) goto loc_8270DC90;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8270dc84
	if (cr6.eq) goto loc_8270DC84;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bne cr6,0x8270dd4c
	if (!cr6.eq) goto loc_8270DD4C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,22792
	ctx.r3.s64 = r11.s64 + 22792;
	// blr 
	return;
loc_8270DC84:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,22696
	ctx.r3.s64 = r11.s64 + 22696;
	// blr 
	return;
loc_8270DC90:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,22608
	ctx.r3.s64 = r11.s64 + 22608;
	// blr 
	return;
loc_8270DC9C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,22556
	ctx.r3.s64 = r11.s64 + 22556;
	// blr 
	return;
loc_8270DCA8:
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r10,r11,2151
	ctx.r10.u64 = r11.u64 | 2151;
	// subf. r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8270dccc
	if (cr0.eq) goto loc_8270DCCC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8270dd4c
	if (!cr6.eq) goto loc_8270DD4C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,22104
	ctx.r3.s64 = r11.s64 + 22104;
	// blr 
	return;
loc_8270DCCC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,22016
	ctx.r3.s64 = r11.s64 + 22016;
	// blr 
	return;
loc_8270DCD8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,21936
	ctx.r3.s64 = r11.s64 + 21936;
	// blr 
	return;
loc_8270DCE4:
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2156
	r11.u64 = r11.u64 | 2156;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x8270dd34
	if (cr6.gt) goto loc_8270DD34;
	// beq cr6,0x8270dd28
	if (cr6.eq) goto loc_8270DD28;
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r10,r11,2154
	ctx.r10.u64 = r11.u64 | 2154;
	// subf. r11,r10,r3
	r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8270dd1c
	if (cr0.eq) goto loc_8270DD1C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8270dd4c
	if (!cr6.eq) goto loc_8270DD4C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,21868
	ctx.r3.s64 = r11.s64 + 21868;
	// blr 
	return;
loc_8270DD1C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,21792
	ctx.r3.s64 = r11.s64 + 21792;
	// blr 
	return;
loc_8270DD28:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,21680
	ctx.r3.s64 = r11.s64 + 21680;
	// blr 
	return;
loc_8270DD34:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8270dd64
	if (cr6.eq) goto loc_8270DD64;
	// lis r11,2166
	r11.s64 = 141950976;
	// ori r10,r11,2159
	ctx.r10.u64 = r11.u64 | 2159;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// beq cr6,0x8270dd58
	if (cr6.eq) goto loc_8270DD58;
loc_8270DD4C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,21644
	ctx.r3.s64 = r11.s64 + 21644;
	// blr 
	return;
loc_8270DD58:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,21424
	ctx.r3.s64 = r11.s64 + 21424;
	// blr 
	return;
loc_8270DD64:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,21392
	ctx.r3.s64 = r11.s64 + 21392;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DD70"))) PPC_WEAK_FUNC(sub_8270DD70);
PPC_FUNC_IMPL(__imp__sub_8270DD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24720
	ctx.r9.s64 = r11.s64 + 24720;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8270DD80"))) PPC_WEAK_FUNC(sub_8270DD80);
PPC_FUNC_IMPL(__imp__sub_8270DD80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DD84"))) PPC_WEAK_FUNC(sub_8270DD84);
PPC_FUNC_IMPL(__imp__sub_8270DD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DD88"))) PPC_WEAK_FUNC(sub_8270DD88);
PPC_FUNC_IMPL(__imp__sub_8270DD88) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DD90"))) PPC_WEAK_FUNC(sub_8270DD90);
PPC_FUNC_IMPL(__imp__sub_8270DD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24736
	ctx.r9.s64 = r11.s64 + 24736;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8270DDA0"))) PPC_WEAK_FUNC(sub_8270DDA0);
PPC_FUNC_IMPL(__imp__sub_8270DDA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DDA4"))) PPC_WEAK_FUNC(sub_8270DDA4);
PPC_FUNC_IMPL(__imp__sub_8270DDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DDA8"))) PPC_WEAK_FUNC(sub_8270DDA8);
PPC_FUNC_IMPL(__imp__sub_8270DDA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270ddb8
	if (cr6.eq) goto loc_8270DDB8;
	// cmplwi cr6,r3,4
	cr6.compare<uint32_t>(ctx.r3.u32, 4, xer);
	// bne cr6,0x8270ddc4
	if (!cr6.eq) goto loc_8270DDC4;
loc_8270DDB8:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r3,2
	ctx.r3.s64 = 2;
	// beqlr cr6
	if (cr6.eq) return;
loc_8270DDC4:
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_8270DDC8"))) PPC_WEAK_FUNC(sub_8270DDC8);
PPC_FUNC_IMPL(__imp__sub_8270DDC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DDCC"))) PPC_WEAK_FUNC(sub_8270DDCC);
PPC_FUNC_IMPL(__imp__sub_8270DDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DDD0"))) PPC_WEAK_FUNC(sub_8270DDD0);
PPC_FUNC_IMPL(__imp__sub_8270DDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8270de48
	if (cr6.eq) goto loc_8270DE48;
	// cmpwi cr6,r5,76
	cr6.compare<int32_t>(ctx.r5.s32, 76, xer);
	// blt cr6,0x8270de18
	if (cr6.lt) goto loc_8270DE18;
	// cmpwi cr6,r5,83
	cr6.compare<int32_t>(ctx.r5.s32, 83, xer);
	// bgt cr6,0x8270de18
	if (cr6.gt) goto loc_8270DE18;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + r11.u64;
	// addi r11,r10,-15152
	r11.s64 = ctx.r10.s64 + -15152;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// lwzx r11,r8,r7
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addic r6,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r6.s64 = r11.s64 + -1;
	// subfe r11,r6,r11
	temp.u8 = (~ctx.r6.u32 + r11.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r6.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x8270de1c
	goto loc_8270DE1C;
loc_8270DE18:
	// li r11,0
	r11.s64 = 0;
loc_8270DE1C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,24756
	ctx.r7.s64 = ctx.r10.s64 + 24756;
	// rlwinm r6,r9,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r6,1
	r11.u64 = ctx.r6.u64 ^ 1;
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// blr 
	return;
loc_8270DE48:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24756
	ctx.r9.s64 = r11.s64 + 24756;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8270DE58"))) PPC_WEAK_FUNC(sub_8270DE58);
PPC_FUNC_IMPL(__imp__sub_8270DE58) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DE5C"))) PPC_WEAK_FUNC(sub_8270DE5C);
PPC_FUNC_IMPL(__imp__sub_8270DE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DE60"))) PPC_WEAK_FUNC(sub_8270DE60);
PPC_FUNC_IMPL(__imp__sub_8270DE60) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DE68"))) PPC_WEAK_FUNC(sub_8270DE68);
PPC_FUNC_IMPL(__imp__sub_8270DE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24736
	ctx.r9.s64 = r11.s64 + 24736;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DE7C"))) PPC_WEAK_FUNC(sub_8270DE7C);
PPC_FUNC_IMPL(__imp__sub_8270DE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DE80"))) PPC_WEAK_FUNC(sub_8270DE80);
PPC_FUNC_IMPL(__imp__sub_8270DE80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31962
	r11.s64 = -2094661632;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-15152
	r11.s64 = r11.s64 + -15152;
loc_8270DE8C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// beq cr6,0x8270deb0
	if (cr6.eq) goto loc_8270DEB0;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// cmplwi cr6,r10,1760
	cr6.compare<uint32_t>(ctx.r10.u32, 1760, xer);
	// blt cr6,0x8270de8c
	if (cr6.lt) goto loc_8270DE8C;
	// li r3,88
	ctx.r3.s64 = 88;
	// blr 
	return;
loc_8270DEB0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
}

__attribute__((alias("__imp__sub_8270DEB4"))) PPC_WEAK_FUNC(sub_8270DEB4);
PPC_FUNC_IMPL(__imp__sub_8270DEB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DEB8"))) PPC_WEAK_FUNC(sub_8270DEB8);
PPC_FUNC_IMPL(__imp__sub_8270DEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24772
	ctx.r9.s64 = r11.s64 + 24772;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8270DEC8"))) PPC_WEAK_FUNC(sub_8270DEC8);
PPC_FUNC_IMPL(__imp__sub_8270DEC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DECC"))) PPC_WEAK_FUNC(sub_8270DECC);
PPC_FUNC_IMPL(__imp__sub_8270DECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DED0"))) PPC_WEAK_FUNC(sub_8270DED0);
PPC_FUNC_IMPL(__imp__sub_8270DED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24772
	ctx.r9.s64 = r11.s64 + 24772;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
}

__attribute__((alias("__imp__sub_8270DEE0"))) PPC_WEAK_FUNC(sub_8270DEE0);
PPC_FUNC_IMPL(__imp__sub_8270DEE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DEE4"))) PPC_WEAK_FUNC(sub_8270DEE4);
PPC_FUNC_IMPL(__imp__sub_8270DEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DEE8"))) PPC_WEAK_FUNC(sub_8270DEE8);
PPC_FUNC_IMPL(__imp__sub_8270DEE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8270defc
	if (cr6.eq) goto loc_8270DEFC;
	// li r11,15
	r11.s64 = 15;
loc_8270DEFC:
	// rlwinm r10,r3,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x8270df0c
	if (cr6.eq) goto loc_8270DF0C;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_8270DF0C:
	// rlwinm r10,r3,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// ori r3,r11,32
	ctx.r3.u64 = r11.u64 | 32;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DF24"))) PPC_WEAK_FUNC(sub_8270DF24);
PPC_FUNC_IMPL(__imp__sub_8270DF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DF28"))) PPC_WEAK_FUNC(sub_8270DF28);
PPC_FUNC_IMPL(__imp__sub_8270DF28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DF2C"))) PPC_WEAK_FUNC(sub_8270DF2C);
PPC_FUNC_IMPL(__imp__sub_8270DF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DF30"))) PPC_WEAK_FUNC(sub_8270DF30);
PPC_FUNC_IMPL(__imp__sub_8270DF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lbz r3,25676(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 25676);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DF3C"))) PPC_WEAK_FUNC(sub_8270DF3C);
PPC_FUNC_IMPL(__imp__sub_8270DF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DF40"))) PPC_WEAK_FUNC(sub_8270DF40);
PPC_FUNC_IMPL(__imp__sub_8270DF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31962
	r11.s64 = -2094661632;
	// addi r3,r11,-15184
	ctx.r3.s64 = r11.s64 + -15184;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DF4C"))) PPC_WEAK_FUNC(sub_8270DF4C);
PPC_FUNC_IMPL(__imp__sub_8270DF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270DF50"))) PPC_WEAK_FUNC(sub_8270DF50);
PPC_FUNC_IMPL(__imp__sub_8270DF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DF58"))) PPC_WEAK_FUNC(sub_8270DF58);
PPC_FUNC_IMPL(__imp__sub_8270DF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DF60"))) PPC_WEAK_FUNC(sub_8270DF60);
PPC_FUNC_IMPL(__imp__sub_8270DF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DF68"))) PPC_WEAK_FUNC(sub_8270DF68);
PPC_FUNC_IMPL(__imp__sub_8270DF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DF70"))) PPC_WEAK_FUNC(sub_8270DF70);
PPC_FUNC_IMPL(__imp__sub_8270DF70) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DF78"))) PPC_WEAK_FUNC(sub_8270DF78);
PPC_FUNC_IMPL(__imp__sub_8270DF78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	// srawi r3,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DF80"))) PPC_WEAK_FUNC(sub_8270DF80);
PPC_FUNC_IMPL(__imp__sub_8270DF80) {
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

__attribute__((alias("__imp__sub_8270DFA8"))) PPC_WEAK_FUNC(sub_8270DFA8);
PPC_FUNC_IMPL(__imp__sub_8270DFA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// srawi r11,r3,8
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	r11.s64 = ctx.r3.s32 >> 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rldicr r9,r10,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// clrldi r7,r3,56
	ctx.r7.u64 = ctx.r3.u64 & 0xFF;
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srad r5,r9,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r5.s64 = ctx.r9.s64 >> temp.u64;
	// srd r3,r5,r7
	ctx.r3.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270DFD0"))) PPC_WEAK_FUNC(sub_8270DFD0);
PPC_FUNC_IMPL(__imp__sub_8270DFD0) {
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

__attribute__((alias("__imp__sub_8270DFFC"))) PPC_WEAK_FUNC(sub_8270DFFC);
PPC_FUNC_IMPL(__imp__sub_8270DFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E000"))) PPC_WEAK_FUNC(sub_8270E000);
PPC_FUNC_IMPL(__imp__sub_8270E000) {
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

__attribute__((alias("__imp__sub_8270E018"))) PPC_WEAK_FUNC(sub_8270E018);
PPC_FUNC_IMPL(__imp__sub_8270E018) {
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

__attribute__((alias("__imp__sub_8270E02C"))) PPC_WEAK_FUNC(sub_8270E02C);
PPC_FUNC_IMPL(__imp__sub_8270E02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E030"))) PPC_WEAK_FUNC(sub_8270E030);
PPC_FUNC_IMPL(__imp__sub_8270E030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + ctx.r3.u32);
	// andc r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// stdx r9,r11,r3
	PPC_STORE_U64(r11.u32 + ctx.r3.u32, ctx.r9.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E044"))) PPC_WEAK_FUNC(sub_8270E044);
PPC_FUNC_IMPL(__imp__sub_8270E044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E048"))) PPC_WEAK_FUNC(sub_8270E048);
PPC_FUNC_IMPL(__imp__sub_8270E048) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E050"))) PPC_WEAK_FUNC(sub_8270E050);
PPC_FUNC_IMPL(__imp__sub_8270E050) {
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

__attribute__((alias("__imp__sub_8270E090"))) PPC_WEAK_FUNC(sub_8270E090);
PPC_FUNC_IMPL(__imp__sub_8270E090) {
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

__attribute__((alias("__imp__sub_8270E0D0"))) PPC_WEAK_FUNC(sub_8270E0D0);
PPC_FUNC_IMPL(__imp__sub_8270E0D0) {
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

__attribute__((alias("__imp__sub_8270E110"))) PPC_WEAK_FUNC(sub_8270E110);
PPC_FUNC_IMPL(__imp__sub_8270E110) {
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

__attribute__((alias("__imp__sub_8270E154"))) PPC_WEAK_FUNC(sub_8270E154);
PPC_FUNC_IMPL(__imp__sub_8270E154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E158"))) PPC_WEAK_FUNC(sub_8270E158);
PPC_FUNC_IMPL(__imp__sub_8270E158) {
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

__attribute__((alias("__imp__sub_8270E1A4"))) PPC_WEAK_FUNC(sub_8270E1A4);
PPC_FUNC_IMPL(__imp__sub_8270E1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E1A8"))) PPC_WEAK_FUNC(sub_8270E1A8);
PPC_FUNC_IMPL(__imp__sub_8270E1A8) {
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

__attribute__((alias("__imp__sub_8270E1EC"))) PPC_WEAK_FUNC(sub_8270E1EC);
PPC_FUNC_IMPL(__imp__sub_8270E1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E1F0"))) PPC_WEAK_FUNC(sub_8270E1F0);
PPC_FUNC_IMPL(__imp__sub_8270E1F0) {
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

__attribute__((alias("__imp__sub_8270E234"))) PPC_WEAK_FUNC(sub_8270E234);
PPC_FUNC_IMPL(__imp__sub_8270E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E238"))) PPC_WEAK_FUNC(sub_8270E238);
PPC_FUNC_IMPL(__imp__sub_8270E238) {
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

__attribute__((alias("__imp__sub_8270E27C"))) PPC_WEAK_FUNC(sub_8270E27C);
PPC_FUNC_IMPL(__imp__sub_8270E27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E280"))) PPC_WEAK_FUNC(sub_8270E280);
PPC_FUNC_IMPL(__imp__sub_8270E280) {
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

__attribute__((alias("__imp__sub_8270E2C4"))) PPC_WEAK_FUNC(sub_8270E2C4);
PPC_FUNC_IMPL(__imp__sub_8270E2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E2C8"))) PPC_WEAK_FUNC(sub_8270E2C8);
PPC_FUNC_IMPL(__imp__sub_8270E2C8) {
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

__attribute__((alias("__imp__sub_8270E314"))) PPC_WEAK_FUNC(sub_8270E314);
PPC_FUNC_IMPL(__imp__sub_8270E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E318"))) PPC_WEAK_FUNC(sub_8270E318);
PPC_FUNC_IMPL(__imp__sub_8270E318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// subfic r11,r4,95
	xer.ca = ctx.r4.u32 <= 95;
	r11.s64 = 95 - ctx.r4.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r9,r11,21846
	ctx.r9.s64 = r11.s64 * 21846;
	// rlwinm r11,r9,16,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// clrldi r10,r11,32
	ctx.r10.u64 = r11.u64 & 0xFFFFFFFF;
	// srd r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x825decb8
	sub_825DECB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E33C"))) PPC_WEAK_FUNC(sub_8270E33C);
PPC_FUNC_IMPL(__imp__sub_8270E33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E340"))) PPC_WEAK_FUNC(sub_8270E340);
PPC_FUNC_IMPL(__imp__sub_8270E340) {
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

__attribute__((alias("__imp__sub_8270E358"))) PPC_WEAK_FUNC(sub_8270E358);
PPC_FUNC_IMPL(__imp__sub_8270E358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8270E36C"))) PPC_WEAK_FUNC(sub_8270E36C);
PPC_FUNC_IMPL(__imp__sub_8270E36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E370"))) PPC_WEAK_FUNC(sub_8270E370);
PPC_FUNC_IMPL(__imp__sub_8270E370) {
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

__attribute__((alias("__imp__sub_8270E384"))) PPC_WEAK_FUNC(sub_8270E384);
PPC_FUNC_IMPL(__imp__sub_8270E384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E388"))) PPC_WEAK_FUNC(sub_8270E388);
PPC_FUNC_IMPL(__imp__sub_8270E388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
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
	// stfs f11,1932(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 1932, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stfs f13,1924(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 1924, temp.u32);
	// rlwinm r7,r4,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stfsx f0,r9,r3
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, temp.u32);
	// stfs f12,1928(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 1928, temp.u32);
	// srd r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// ld r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r11,r5,r4
	r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E3D8"))) PPC_WEAK_FUNC(sub_8270E3D8);
PPC_FUNC_IMPL(__imp__sub_8270E3D8) {
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

__attribute__((alias("__imp__sub_8270E428"))) PPC_WEAK_FUNC(sub_8270E428);
PPC_FUNC_IMPL(__imp__sub_8270E428) {
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
	// b 0x825d7180
	sub_825D7180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E454"))) PPC_WEAK_FUNC(sub_8270E454);
PPC_FUNC_IMPL(__imp__sub_8270E454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E458"))) PPC_WEAK_FUNC(sub_8270E458);
PPC_FUNC_IMPL(__imp__sub_8270E458) {
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

__attribute__((alias("__imp__sub_8270E484"))) PPC_WEAK_FUNC(sub_8270E484);
PPC_FUNC_IMPL(__imp__sub_8270E484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E488"))) PPC_WEAK_FUNC(sub_8270E488);
PPC_FUNC_IMPL(__imp__sub_8270E488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// srawi r11,r4,16
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	r11.s64 = ctx.r4.s32 >> 16;
	// srawi r10,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrldi r5,r4,56
	ctx.r5.u64 = ctx.r4.u64 & 0xFF;
	// srad r4,r7,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r4.s64 = ctx.r7.s64 >> temp.u64;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + ctx.r3.u32);
	// srd r9,r4,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r5.u8 & 0x7F));
	// andc r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stdx r8,r11,r3
	PPC_STORE_U64(r11.u32 + ctx.r3.u32, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E4C4"))) PPC_WEAK_FUNC(sub_8270E4C4);
PPC_FUNC_IMPL(__imp__sub_8270E4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E4C8"))) PPC_WEAK_FUNC(sub_8270E4C8);
PPC_FUNC_IMPL(__imp__sub_8270E4C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// srawi r11,r4,16
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	r11.s64 = ctx.r4.s32 >> 16;
	// srawi r10,r4,8
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrldi r5,r4,56
	ctx.r5.u64 = ctx.r4.u64 & 0xFF;
	// srad r4,r7,r6
	temp.u64 = ctx.r6.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r4.s64 = ctx.r7.s64 >> temp.u64;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + ctx.r3.u32);
	// srd r9,r4,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r5.u8 & 0x7F));
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stdx r8,r11,r3
	PPC_STORE_U64(r11.u32 + ctx.r3.u32, ctx.r8.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E504"))) PPC_WEAK_FUNC(sub_8270E504);
PPC_FUNC_IMPL(__imp__sub_8270E504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E508"))) PPC_WEAK_FUNC(sub_8270E508);
PPC_FUNC_IMPL(__imp__sub_8270E508) {
	PPC_FUNC_PROLOGUE();
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x825dde80
	sub_825DDE80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E510"))) PPC_WEAK_FUNC(sub_8270E510);
PPC_FUNC_IMPL(__imp__sub_8270E510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31962
	r11.s64 = -2094661632;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-18764
	ctx.r9.s64 = r11.s64 + -18764;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// addi r6,r8,24952
	ctx.r6.s64 = ctx.r8.s64 + 24952;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r3,25320(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 25320);
	// stw r4,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r4.u32);
}

__attribute__((alias("__imp__sub_8270E534"))) PPC_WEAK_FUNC(sub_8270E534);
PPC_FUNC_IMPL(__imp__sub_8270E534) {
	PPC_FUNC_PROLOGUE();
	// b 0x825de168
	sub_825DE168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E538"))) PPC_WEAK_FUNC(sub_8270E538);
PPC_FUNC_IMPL(__imp__sub_8270E538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,-18772(r11)
	PPC_STORE_U32(r11.u32 + -18772, ctx.r3.u32);
	// lwz r3,25320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25320);
}

__attribute__((alias("__imp__sub_8270E54C"))) PPC_WEAK_FUNC(sub_8270E54C);
PPC_FUNC_IMPL(__imp__sub_8270E54C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825de178
	sub_825DE178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E550"))) PPC_WEAK_FUNC(sub_8270E550);
PPC_FUNC_IMPL(__imp__sub_8270E550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r10,22000(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 22000);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,22000(r11)
	PPC_STORE_U32(r11.u32 + 22000, ctx.r3.u32);
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x8270e574
	if (!cr6.eq) goto loc_8270E574;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8270E574:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
}

__attribute__((alias("__imp__sub_8270E57C"))) PPC_WEAK_FUNC(sub_8270E57C);
PPC_FUNC_IMPL(__imp__sub_8270E57C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825dee60
	sub_825DEE60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E580"))) PPC_WEAK_FUNC(sub_8270E580);
PPC_FUNC_IMPL(__imp__sub_8270E580) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E584"))) PPC_WEAK_FUNC(sub_8270E584);
PPC_FUNC_IMPL(__imp__sub_8270E584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E588"))) PPC_WEAK_FUNC(sub_8270E588);
PPC_FUNC_IMPL(__imp__sub_8270E588) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r11,r11,22000
	r11.s64 = r11.s64 + 22000;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x8270e5b0
	if (cr6.eq) goto loc_8270E5B0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8270e5b4
	goto loc_8270E5B4;
loc_8270E5B0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8270E5B4:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
}

__attribute__((alias("__imp__sub_8270E5BC"))) PPC_WEAK_FUNC(sub_8270E5BC);
PPC_FUNC_IMPL(__imp__sub_8270E5BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d7988
	sub_825D7988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E5C0"))) PPC_WEAK_FUNC(sub_8270E5C0);
PPC_FUNC_IMPL(__imp__sub_8270E5C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E5C4"))) PPC_WEAK_FUNC(sub_8270E5C4);
PPC_FUNC_IMPL(__imp__sub_8270E5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E5C8"))) PPC_WEAK_FUNC(sub_8270E5C8);
PPC_FUNC_IMPL(__imp__sub_8270E5C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 + 12;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bne cr6,0x8270e608
	if (!cr6.eq) goto loc_8270E608;
	// addi r8,r10,76
	ctx.r8.s64 = ctx.r10.s64 + 76;
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmplw cr6,r7,r5
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, xer);
	// bne cr6,0x8270e608
	if (!cr6.eq) goto loc_8270E608;
	// addi r8,r10,140
	ctx.r8.s64 = ctx.r10.s64 + 140;
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r5
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_8270E608:
	// subfic r8,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r4.s64;
	// stwx r4,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// addi r9,r10,76
	ctx.r9.s64 = ctx.r10.s64 + 76;
	// subfe r8,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r5,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r4.s64;
	// addi r10,r10,140
	ctx.r10.s64 = ctx.r10.s64 + 140;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	// and r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 & ctx.r6.u64;
	// stwx r8,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stwx r5,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r5,r4,8
	ctx.r5.s64 = ctx.r4.s64 + 8;
	// bne cr6,0x8270e644
	if (!cr6.eq) goto loc_8270E644;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8270E644:
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// subfic r11,r3,95
	xer.ca = ctx.r3.u32 <= 95;
	r11.s64 = 95 - ctx.r3.s64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mulli r9,r11,21846
	ctx.r9.s64 = r11.s64 * 21846;
	// lwz r11,25320(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25320);
	// rlwinm r10,r9,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r4,32
	ctx.r9.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// srd r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
}

__attribute__((alias("__imp__sub_8270E674"))) PPC_WEAK_FUNC(sub_8270E674);
PPC_FUNC_IMPL(__imp__sub_8270E674) {
	PPC_FUNC_PROLOGUE();
	// b 0x825decb8
	sub_825DECB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E678"))) PPC_WEAK_FUNC(sub_8270E678);
PPC_FUNC_IMPL(__imp__sub_8270E678) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E67C"))) PPC_WEAK_FUNC(sub_8270E67C);
PPC_FUNC_IMPL(__imp__sub_8270E67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E680"))) PPC_WEAK_FUNC(sub_8270E680);
PPC_FUNC_IMPL(__imp__sub_8270E680) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9408
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8270e764
	if (cr6.eq) goto loc_8270E764;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,22000
	r11.s64 = r11.s64 + 22000;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,76
	r11.s64 = r11.s64 + 76;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// li r11,1
	r11.s64 = 1;
	// subf r26,r6,r7
	r26.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subf r25,r6,r5
	r25.s64 = ctx.r5.s64 - ctx.r6.s64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lis r24,-31933
	r24.s64 = -2092761088;
	// rldicr r28,r11,63,63
	r28.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_8270E6C8:
	// lwzx r11,r25,r30
	r11.u64 = PPC_LOAD_U32(r25.u32 + r30.u32);
	// lwz r10,-64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + -64);
	// lwzx r6,r26,r30
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + r30.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8270e6f8
	if (!cr6.eq) goto loc_8270E6F8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// bne cr6,0x8270e6f8
	if (!cr6.eq) goto loc_8270E6F8;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplw cr6,r6,r10
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, xer);
	// beq cr6,0x8270e750
	if (cr6.eq) goto loc_8270E750;
loc_8270E6F8:
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// stw r11,-64(r31)
	PPC_STORE_U32(r31.u32 + -64, r11.u32);
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// lwz r3,25320(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 25320);
	// subfe r4,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// and r8,r4,r7
	ctx.r8.u64 = ctx.r4.u64 & ctx.r7.u64;
	// subfe r4,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// subfic r10,r29,95
	xer.ca = r29.u32 <= 95;
	ctx.r10.s64 = 95 - r29.s64;
	// and r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 & ctx.r6.u64;
	// mulli r8,r10,21846
	ctx.r8.s64 = ctx.r10.s64 * 21846;
	// stw r9,64(r31)
	PPC_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// rlwinm r10,r8,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// subfic r4,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r4.s64 = 0 - r11.s64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// subfe r9,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// and r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 & ctx.r5.u64;
	// srd r8,r28,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (r28.u64 >> (ctx.r8.u8 & 0x7F));
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825decb8
	sub_825DECB8(ctx, base);
loc_8270E750:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x8270e6c8
	if (!cr0.eq) goto loc_8270E6C8;
loc_8270E764:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8270E768"))) PPC_WEAK_FUNC(sub_8270E768);
PPC_FUNC_IMPL(__imp__sub_8270E768) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9458
	return;
}

__attribute__((alias("__imp__sub_8270E76C"))) PPC_WEAK_FUNC(sub_8270E76C);
PPC_FUNC_IMPL(__imp__sub_8270E76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E770"))) PPC_WEAK_FUNC(sub_8270E770);
PPC_FUNC_IMPL(__imp__sub_8270E770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// addi r10,r10,280
	ctx.r10.s64 = ctx.r10.s64 + 280;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// bne cr6,0x8270e7a0
	if (!cr6.eq) goto loc_8270E7A0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8270E7A0:
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// srd r6,r7,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r8.u8 & 0x7F));
}

__attribute__((alias("__imp__sub_8270E7C0"))) PPC_WEAK_FUNC(sub_8270E7C0);
PPC_FUNC_IMPL(__imp__sub_8270E7C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d5690
	sub_825D5690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E7C4"))) PPC_WEAK_FUNC(sub_8270E7C4);
PPC_FUNC_IMPL(__imp__sub_8270E7C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E7C8"))) PPC_WEAK_FUNC(sub_8270E7C8);
PPC_FUNC_IMPL(__imp__sub_8270E7C8) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8270e858
	if (cr6.eq) goto loc_8270E858;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,22000
	r11.s64 = r11.s64 + 22000;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,280
	r11.s64 = r11.s64 + 280;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// li r11,1
	r11.s64 = 1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r26,-31933
	r26.s64 = -2092761088;
	// rldicr r27,r11,63,63
	r27.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_8270E808:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8270e844
	if (cr6.eq) goto loc_8270E844;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// addi r8,r30,32
	ctx.r8.s64 = r30.s64 + 32;
	// lwz r3,25320(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 25320);
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrldi r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srd r6,r27,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x40 ? 0 : (r27.u64 >> (ctx.r4.u8 & 0x7F));
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
loc_8270E844:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bne 0x8270e808
	if (!cr0.eq) goto loc_8270E808;
loc_8270E858:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8270E85C"))) PPC_WEAK_FUNC(sub_8270E85C);
PPC_FUNC_IMPL(__imp__sub_8270E85C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8270E860"))) PPC_WEAK_FUNC(sub_8270E860);
PPC_FUNC_IMPL(__imp__sub_8270E860) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r11,r11,22000
	r11.s64 = r11.s64 + 22000;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8270e8f8
	if (cr6.eq) goto loc_8270E8F8;
	// stw r3,296(r11)
	PPC_STORE_U32(r11.u32 + 296, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// beq cr6,0x8270e8b8
	if (cr6.eq) goto loc_8270E8B8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825d7770
	sub_825D7770(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,1
	r11.s64 = 1;
	// stb r11,25324(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25324, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8270E8B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825d7770
	sub_825D7770(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r9,25256
	ctx.r3.s64 = ctx.r9.s64 + 25256;
	// stb r11,25324(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25324, r11.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r8,25196
	ctx.r3.s64 = ctx.r8.s64 + 25196;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
loc_8270E8F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8270E904"))) PPC_WEAK_FUNC(sub_8270E904);
PPC_FUNC_IMPL(__imp__sub_8270E904) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E908"))) PPC_WEAK_FUNC(sub_8270E908);
PPC_FUNC_IMPL(__imp__sub_8270E908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
}

__attribute__((alias("__imp__sub_8270E914"))) PPC_WEAK_FUNC(sub_8270E914);
PPC_FUNC_IMPL(__imp__sub_8270E914) {
	PPC_FUNC_PROLOGUE();
	// b 0x825debc0
	sub_825DEBC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E918"))) PPC_WEAK_FUNC(sub_8270E918);
PPC_FUNC_IMPL(__imp__sub_8270E918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,22000
	ctx.r10.s64 = r11.s64 + 22000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r5,300(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// stw r3,300(r10)
	PPC_STORE_U32(ctx.r10.u32 + 300, ctx.r3.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
}

__attribute__((alias("__imp__sub_8270E944"))) PPC_WEAK_FUNC(sub_8270E944);
PPC_FUNC_IMPL(__imp__sub_8270E944) {
	PPC_FUNC_PROLOGUE();
	// b 0x82710188
	sub_82710188(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270E948"))) PPC_WEAK_FUNC(sub_8270E948);
PPC_FUNC_IMPL(__imp__sub_8270E948) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E94C"))) PPC_WEAK_FUNC(sub_8270E94C);
PPC_FUNC_IMPL(__imp__sub_8270E94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270E950"))) PPC_WEAK_FUNC(sub_8270E950);
PPC_FUNC_IMPL(__imp__sub_8270E950) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r11,r11,22000
	r11.s64 = r11.s64 + 22000;
	// lwz r10,496(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 496);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8270e9e8
	if (cr6.eq) goto loc_8270E9E8;
	// stw r3,496(r11)
	PPC_STORE_U32(r11.u32 + 496, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// beq cr6,0x8270e9a8
	if (cr6.eq) goto loc_8270E9A8;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825d7568
	sub_825D7568(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,1
	r11.s64 = 1;
	// stb r11,25325(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25325, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8270E9A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825d7568
	sub_825D7568(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,0
	r11.s64 = 0;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r9,25136
	ctx.r3.s64 = ctx.r9.s64 + 25136;
	// stb r11,25325(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25325, r11.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r8,25076
	ctx.r3.s64 = ctx.r8.s64 + 25076;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
loc_8270E9E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8270E9F4"))) PPC_WEAK_FUNC(sub_8270E9F4);
PPC_FUNC_IMPL(__imp__sub_8270E9F4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270E9F8"))) PPC_WEAK_FUNC(sub_8270E9F8);
PPC_FUNC_IMPL(__imp__sub_8270E9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// bne cr6,0x8270ea2c
	if (!cr6.eq) goto loc_8270EA2C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8270EA2C:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// srd r6,r6,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
}

__attribute__((alias("__imp__sub_8270EA4C"))) PPC_WEAK_FUNC(sub_8270EA4C);
PPC_FUNC_IMPL(__imp__sub_8270EA4C) {
	PPC_FUNC_PROLOGUE();
	// b 0x825d5690
	sub_825D5690(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EA50"))) PPC_WEAK_FUNC(sub_8270EA50);
PPC_FUNC_IMPL(__imp__sub_8270EA50) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EA54"))) PPC_WEAK_FUNC(sub_8270EA54);
PPC_FUNC_IMPL(__imp__sub_8270EA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270EA58"))) PPC_WEAK_FUNC(sub_8270EA58);
PPC_FUNC_IMPL(__imp__sub_8270EA58) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8270eae8
	if (cr6.eq) goto loc_8270EAE8;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,22000
	r11.s64 = r11.s64 + 22000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	r11.s64 = r11.s64 + 432;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// li r11,1
	r11.s64 = 1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r26,-31933
	r26.s64 = -2092761088;
	// rldicr r27,r11,63,63
	r27.u64 = __builtin_rotateleft64(r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_8270EA98:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x8270ead4
	if (cr6.eq) goto loc_8270EAD4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// lwz r3,25320(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 25320);
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrldi r4,r8,32
	ctx.r4.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srd r6,r27,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x40 ? 0 : (r27.u64 >> (ctx.r4.u8 & 0x7F));
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825d5690
	sub_825D5690(ctx, base);
loc_8270EAD4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x8270ea98
	if (!cr0.eq) goto loc_8270EA98;
loc_8270EAE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8270EAEC"))) PPC_WEAK_FUNC(sub_8270EAEC);
PPC_FUNC_IMPL(__imp__sub_8270EAEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8270EAF0"))) PPC_WEAK_FUNC(sub_8270EAF0);
PPC_FUNC_IMPL(__imp__sub_8270EAF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,22000
	ctx.r10.s64 = r11.s64 + 22000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r5,504(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// stw r3,504(r10)
	PPC_STORE_U32(ctx.r10.u32 + 504, ctx.r3.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
}

__attribute__((alias("__imp__sub_8270EB1C"))) PPC_WEAK_FUNC(sub_8270EB1C);
PPC_FUNC_IMPL(__imp__sub_8270EB1C) {
	PPC_FUNC_PROLOGUE();
	// b 0x827103b0
	sub_827103B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EB20"))) PPC_WEAK_FUNC(sub_8270EB20);
PPC_FUNC_IMPL(__imp__sub_8270EB20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EB24"))) PPC_WEAK_FUNC(sub_8270EB24);
PPC_FUNC_IMPL(__imp__sub_8270EB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270EB28"))) PPC_WEAK_FUNC(sub_8270EB28);
PPC_FUNC_IMPL(__imp__sub_8270EB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,22000
	ctx.r9.s64 = r11.s64 + 22000;
	// lwz r3,25320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25320);
	// lwz r4,508(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 508);
}

__attribute__((alias("__imp__sub_8270EB3C"))) PPC_WEAK_FUNC(sub_8270EB3C);
PPC_FUNC_IMPL(__imp__sub_8270EB3C) {
	PPC_FUNC_PROLOGUE();
	// b 0x82710710
	sub_82710710(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EB40"))) PPC_WEAK_FUNC(sub_8270EB40);
PPC_FUNC_IMPL(__imp__sub_8270EB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,22000
	ctx.r9.s64 = r11.s64 + 22000;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,25320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25320);
	// lwz r4,508(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 508);
}

__attribute__((alias("__imp__sub_8270EB58"))) PPC_WEAK_FUNC(sub_8270EB58);
PPC_FUNC_IMPL(__imp__sub_8270EB58) {
	PPC_FUNC_PROLOGUE();
	// b 0x82710880
	sub_82710880(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EB5C"))) PPC_WEAK_FUNC(sub_8270EB5C);
PPC_FUNC_IMPL(__imp__sub_8270EB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270EB60"))) PPC_WEAK_FUNC(sub_8270EB60);
PPC_FUNC_IMPL(__imp__sub_8270EB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,22000
	ctx.r9.s64 = r11.s64 + 22000;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,25320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25320);
	// lwz r4,508(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 508);
}

__attribute__((alias("__imp__sub_8270EB84"))) PPC_WEAK_FUNC(sub_8270EB84);
PPC_FUNC_IMPL(__imp__sub_8270EB84) {
	PPC_FUNC_PROLOGUE();
	// b 0x82710a10
	sub_82710A10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EB88"))) PPC_WEAK_FUNC(sub_8270EB88);
PPC_FUNC_IMPL(__imp__sub_8270EB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// addi r9,r11,22000
	ctx.r9.s64 = r11.s64 + 22000;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,25320(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 25320);
	// lwz r4,508(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 508);
	// b 0x82710bf0
	sub_82710BF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EBAC"))) PPC_WEAK_FUNC(sub_8270EBAC);
PPC_FUNC_IMPL(__imp__sub_8270EBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270EBB0"))) PPC_WEAK_FUNC(sub_8270EBB0);
PPC_FUNC_IMPL(__imp__sub_8270EBB0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,22616
	r30.s64 = r11.s64 + 22616;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82714ae8
	sub_82714AE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82715108
	sub_82715108(ctx, base);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r4,88
	cr6.compare<int32_t>(ctx.r4.s32, 88, xer);
	// beq cr6,0x8270ec10
	if (cr6.eq) goto loc_8270EC10;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82714bc0
	sub_82714BC0(ctx, base);
loc_8270EC10:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82715680
	sub_82715680(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r28,25336(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25336, r28.u32);
	// mr r30,r27
	r30.u64 = r27.u64;
	// bne cr6,0x8270ec40
	if (!cr6.eq) goto loc_8270EC40;
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
loc_8270EC40:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8270ec94
	if (cr6.eq) goto loc_8270EC94;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r29,r11,25344
	r29.s64 = r11.s64 + 25344;
loc_8270EC50:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r27,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r27.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r28,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r28.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x827139d8
	sub_827139D8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,108
	r29.s64 = r29.s64 + 108;
	// bne 0x8270ec50
	if (!cr0.eq) goto loc_8270EC50;
loc_8270EC94:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_8270EC98"))) PPC_WEAK_FUNC(sub_8270EC98);
PPC_FUNC_IMPL(__imp__sub_8270EC98) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8270EC9C"))) PPC_WEAK_FUNC(sub_8270EC9C);
PPC_FUNC_IMPL(__imp__sub_8270EC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270ECA0"))) PPC_WEAK_FUNC(sub_8270ECA0);
PPC_FUNC_IMPL(__imp__sub_8270ECA0) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,22616
	ctx.r3.s64 = r11.s64 + 22616;
	// bl 0x82715058
	sub_82715058(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r30,3
	r30.s64 = 3;
	// addi r31,r11,25344
	r31.s64 = r11.s64 + 25344;
loc_8270ECCC:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8270ece4
	if (cr6.eq) goto loc_8270ECE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82712c10
	sub_82712C10(ctx, base);
loc_8270ECE4:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,108
	r31.s64 = r31.s64 + 108;
	// bne 0x8270eccc
	if (!cr0.eq) goto loc_8270ECCC;
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

__attribute__((alias("__imp__sub_8270ED04"))) PPC_WEAK_FUNC(sub_8270ED04);
PPC_FUNC_IMPL(__imp__sub_8270ED04) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270ED08"))) PPC_WEAK_FUNC(sub_8270ED08);
PPC_FUNC_IMPL(__imp__sub_8270ED08) {
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
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,21920
	r29.s64 = r11.s64 + 21920;
	// lbz r11,4(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8270ed60
	if (cr6.eq) goto loc_8270ED60;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8270ed3c
	if (!cr6.eq) goto loc_8270ED3C;
	// bl 0x828e9290
	sub_828E9290(ctx, base);
loc_8270ED3C:
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r4,r11,25344
	ctx.r4.s64 = r11.s64 + 25344;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8270ED58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
loc_8270ED60:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8270ed58
	if (cr6.eq) goto loc_8270ED58;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,25344
	r31.s64 = r11.s64 + 25344;
loc_8270ED78:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8270edb8
	if (cr6.eq) {
		sub_8270EDB8(ctx, base);
		return;
	}
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,108
	r31.s64 = r31.s64 + 108;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8270ed78
	if (cr6.lt) goto loc_8270ED78;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8270EDB8"))) PPC_WEAK_FUNC(sub_8270EDB8);
PPC_FUNC_IMPL(__imp__sub_8270EDB8) {
	PPC_FUNC_PROLOGUE();
	// bl 0x828e9290
	sub_828E9290(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270EDC0"))) PPC_WEAK_FUNC(sub_8270EDC0);
PPC_FUNC_IMPL(__imp__sub_8270EDC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r12,-16
	r12.s64 = -16;
	// rldicr r12,r12,33,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,25320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// and r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 & r12.u64;
	// std r9,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r9.u64);
}

__attribute__((alias("__imp__sub_8270EDDC"))) PPC_WEAK_FUNC(sub_8270EDDC);
PPC_FUNC_IMPL(__imp__sub_8270EDDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EDE0"))) PPC_WEAK_FUNC(sub_8270EDE0);
PPC_FUNC_IMPL(__imp__sub_8270EDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r12,15
	r12.s64 = 15;
	// rldicr r12,r12,33,30
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFE00000000;
	// lwz r11,25320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | r12.u64;
	// std r9,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r9.u64);
}

__attribute__((alias("__imp__sub_8270EDFC"))) PPC_WEAK_FUNC(sub_8270EDFC);
PPC_FUNC_IMPL(__imp__sub_8270EDFC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270EE00"))) PPC_WEAK_FUNC(sub_8270EE00);
PPC_FUNC_IMPL(__imp__sub_8270EE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// li r5,32
	ctx.r5.s64 = 32;
	// stb r3,25676(r11)
	PPC_STORE_U8(r11.u32 + 25676, ctx.r3.u8);
	// addi r3,r10,-15216
	ctx.r3.s64 = ctx.r10.s64 + -15216;
	// beq cr6,0x8270ee2c
	if (cr6.eq) goto loc_8270EE2C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,27316
	ctx.r4.s64 = r11.s64 + 27316;
	// b 0x82605748
	sub_82605748(ctx, base);
	return;
loc_8270EE2C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,27284
	ctx.r4.s64 = r11.s64 + 27284;
}

__attribute__((alias("__imp__sub_8270EE34"))) PPC_WEAK_FUNC(sub_8270EE34);
PPC_FUNC_IMPL(__imp__sub_8270EE34) {
	PPC_FUNC_PROLOGUE();
	// b 0x82605748
	sub_82605748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EE38"))) PPC_WEAK_FUNC(sub_8270EE38);
PPC_FUNC_IMPL(__imp__sub_8270EE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r3,r11,22000
	ctx.r3.s64 = r11.s64 + 22000;
}

__attribute__((alias("__imp__sub_8270EE40"))) PPC_WEAK_FUNC(sub_8270EE40);
PPC_FUNC_IMPL(__imp__sub_8270EE40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8270d698
	sub_8270D698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270EE44"))) PPC_WEAK_FUNC(sub_8270EE44);
PPC_FUNC_IMPL(__imp__sub_8270EE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270EE48"))) PPC_WEAK_FUNC(sub_8270EE48);
PPC_FUNC_IMPL(__imp__sub_8270EE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// li r11,1
	r11.s64 = 1;
	// lis r22,-31933
	r22.s64 = -2092761088;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r21,r22,24952
	r21.s64 = r22.s64 + 24952;
	// stw r11,25316(r10)
	PPC_STORE_U32(ctx.r10.u32 + 25316, r11.u32);
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// li r24,128
	r24.s64 = 128;
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// li r25,3
	r25.s64 = 3;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// li r26,25
	r26.s64 = 25;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// li r30,2
	r30.s64 = 2;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// ori r27,r9,32768
	r27.u64 = ctx.r9.u64 | 32768;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// li r29,1
	r29.s64 = 1;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r28,1
	r28.s64 = 1;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r10,24952(r22)
	PPC_STORE_U32(r22.u32 + 24952, ctx.r10.u32);
	// addi r22,r8,24784
	r22.s64 = ctx.r8.s64 + 24784;
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// li r9,69
	ctx.r9.s64 = 69;
	// stw r30,52(r21)
	PPC_STORE_U32(r21.u32 + 52, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r29,56(r21)
	PPC_STORE_U32(r21.u32 + 56, r29.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r28,60(r21)
	PPC_STORE_U32(r21.u32 + 60, r28.u32);
	// stw r27,76(r21)
	PPC_STORE_U32(r21.u32 + 76, r27.u32);
	// stw r11,4(r21)
	PPC_STORE_U32(r21.u32 + 4, r11.u32);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
	// lis r10,96
	ctx.r10.s64 = 6291456;
	// stw r3,80(r21)
	PPC_STORE_U32(r21.u32 + 80, ctx.r3.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stw r10,84(r21)
	PPC_STORE_U32(r21.u32 + 84, ctx.r10.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// lis r3,96
	ctx.r3.s64 = 6291456;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x826c6d30
	sub_826C6D30(ctx, base);
	// li r11,64
	r11.s64 = 64;
	// stw r3,88(r21)
	PPC_STORE_U32(r21.u32 + 88, ctx.r3.u32);
	// lis r30,-31933
	r30.s64 = -2092761088;
	// stw r11,92(r21)
	PPC_STORE_U32(r21.u32 + 92, r11.u32);
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// addi r8,r30,25320
	ctx.r8.s64 = r30.s64 + 25320;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825d1a88
	sub_825D1A88(ctx, base);
	// lwz r11,25320(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// li r12,-16
	r12.s64 = -16;
	// li r4,1
	ctx.r4.s64 = 1;
	// rldicr r12,r12,33,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// and r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 & r12.u64;
	// std r6,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r6.u64);
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// bl 0x825dde80
	sub_825DDE80(ctx, base);
	// lis r5,-31933
	ctx.r5.s64 = -2092761088;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lis r3,-31962
	ctx.r3.s64 = -2094661632;
	// addi r4,r4,27284
	ctx.r4.s64 = ctx.r4.s64 + 27284;
	// addi r3,r3,-15216
	ctx.r3.s64 = ctx.r3.s64 + -15216;
	// stb r31,25676(r5)
	PPC_STORE_U8(ctx.r5.u32 + 25676, r31.u8);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r11,r31
	r11.u64 = r31.u64;
	// bl 0x82605748
	sub_82605748(ctx, base);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lis r8,-31933
	ctx.r8.s64 = -2092761088;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r8,25256
	ctx.r3.s64 = ctx.r8.s64 + 25256;
	// stb r31,25324(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25324, r31.u8);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stb r31,25325(r9)
	PPC_STORE_U8(ctx.r9.u32 + 25325, r31.u8);
	// mr r11,r31
	r11.u64 = r31.u64;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r7,-31933
	ctx.r7.s64 = -2092761088;
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,25196
	ctx.r3.s64 = ctx.r7.s64 + 25196;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r6,-31933
	ctx.r6.s64 = -2092761088;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r6,25136
	ctx.r3.s64 = ctx.r6.s64 + 25136;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r4,-31933
	ctx.r4.s64 = -2092761088;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r3,r4,25076
	ctx.r3.s64 = ctx.r4.s64 + 25076;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
}

__attribute__((alias("__imp__sub_8270F024"))) PPC_WEAK_FUNC(sub_8270F024);
PPC_FUNC_IMPL(__imp__sub_8270F024) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_8270F028"))) PPC_WEAK_FUNC(sub_8270F028);
PPC_FUNC_IMPL(__imp__sub_8270F028) {
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
	// lis r31,-31933
	r31.s64 = -2092761088;
	// li r12,15
	r12.s64 = 15;
	// rldicr r12,r12,33,30
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFE00000000;
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | r12.u64;
	// std r9,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r9.u64);
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// bl 0x825e4a00
	sub_825E4A00(ctx, base);
	// lwz r3,25320(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270f074
	if (cr6.eq) goto loc_8270F074;
	// bl 0x825d13c8
	sub_825D13C8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,25320(r31)
	PPC_STORE_U32(r31.u32 + 25320, r11.u32);
loc_8270F074:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r31,r11,24952
	r31.s64 = r11.s64 + 24952;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270f094
	if (cr6.eq) goto loc_8270F094;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_8270F094:
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270f0ac
	if (cr6.eq) goto loc_8270F0AC;
	// bl 0x826c67a0
	sub_826C67A0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_8270F0AC:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r10,25316(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 25316);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8270f0c4
	if (cr6.eq) goto loc_8270F0C4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,25316(r11)
	PPC_STORE_U32(r11.u32 + 25316, ctx.r10.u32);
loc_8270F0C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8270F0D4"))) PPC_WEAK_FUNC(sub_8270F0D4);
PPC_FUNC_IMPL(__imp__sub_8270F0D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F0D8"))) PPC_WEAK_FUNC(sub_8270F0D8);
PPC_FUNC_IMPL(__imp__sub_8270F0D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8270f0e8
	if (cr6.eq) goto loc_8270F0E8;
	// lwz r5,48(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// b 0x8270f0ec
	goto loc_8270F0EC;
loc_8270F0E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8270F0EC:
	// li r6,0
	ctx.r6.s64 = 0;
}

__attribute__((alias("__imp__sub_8270F0F0"))) PPC_WEAK_FUNC(sub_8270F0F0);
PPC_FUNC_IMPL(__imp__sub_8270F0F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8270e5c8
	sub_8270E5C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270F0F4"))) PPC_WEAK_FUNC(sub_8270F0F4);
PPC_FUNC_IMPL(__imp__sub_8270F0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270F0F8"))) PPC_WEAK_FUNC(sub_8270F0F8);
PPC_FUNC_IMPL(__imp__sub_8270F0F8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8270f150
	if (cr6.eq) goto loc_8270F150;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_8270F11C:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8270f130
	if (cr6.eq) goto loc_8270F130;
	// lwz r5,48(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// b 0x8270f134
	goto loc_8270F134;
loc_8270F130:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8270F134:
	// li r6,0
	ctx.r6.s64 = 0;
	// add r3,r31,r28
	ctx.r3.u64 = r31.u64 + r28.u64;
	// bl 0x8270e5c8
	sub_8270E5C8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x8270f11c
	if (cr6.lt) goto loc_8270F11C;
loc_8270F150:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8270F154"))) PPC_WEAK_FUNC(sub_8270F154);
PPC_FUNC_IMPL(__imp__sub_8270F154) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8270F158"))) PPC_WEAK_FUNC(sub_8270F158);
PPC_FUNC_IMPL(__imp__sub_8270F158) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r10,264
	ctx.r10.s64 = ctx.r10.s64 + 264;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
}

__attribute__((alias("__imp__sub_8270F190"))) PPC_WEAK_FUNC(sub_8270F190);
PPC_FUNC_IMPL(__imp__sub_8270F190) {
	PPC_FUNC_PROLOGUE();
	// b 0x82710df0
	sub_82710DF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270F194"))) PPC_WEAK_FUNC(sub_8270F194);
PPC_FUNC_IMPL(__imp__sub_8270F194) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F198"))) PPC_WEAK_FUNC(sub_8270F198);
PPC_FUNC_IMPL(__imp__sub_8270F198) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8270f210
	if (cr6.eq) goto loc_8270F210;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r10,r10,264
	ctx.r10.s64 = ctx.r10.s64 + 264;
	// lis r27,-31933
	r27.s64 = -2092761088;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
loc_8270F1D4:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x8270f1fc
	if (cr6.eq) goto loc_8270F1FC;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x8270f1fc
	if (cr6.eq) goto loc_8270F1FC;
	// add r4,r30,r28
	ctx.r4.u64 = r30.u64 + r28.u64;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x82710df0
	sub_82710DF0(ctx, base);
loc_8270F1FC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x8270f1d4
	if (cr6.lt) goto loc_8270F1D4;
loc_8270F210:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8270F214"))) PPC_WEAK_FUNC(sub_8270F214);
PPC_FUNC_IMPL(__imp__sub_8270F214) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8270F218"))) PPC_WEAK_FUNC(sub_8270F218);
PPC_FUNC_IMPL(__imp__sub_8270F218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,22000
	r11.s64 = r11.s64 + 22000;
	// lwz r10,304(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 304);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x8270f288
	if (cr6.eq) goto loc_8270F288;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,304(r11)
	PPC_STORE_U32(r11.u32 + 304, ctx.r3.u32);
	// beq cr6,0x8270f288
	if (cr6.eq) goto loc_8270F288;
	// lwz r11,508(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 508);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8270f288
	if (cr6.eq) goto loc_8270F288;
	// lwz r7,524(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 524);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// lwz r6,528(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 528);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r3,25320(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25320);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x82711240
	sub_82711240(ctx, base);
loc_8270F288:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8270F294"))) PPC_WEAK_FUNC(sub_8270F294);
PPC_FUNC_IMPL(__imp__sub_8270F294) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F298"))) PPC_WEAK_FUNC(sub_8270F298);
PPC_FUNC_IMPL(__imp__sub_8270F298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r10,368
	ctx.r10.s64 = ctx.r10.s64 + 368;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
}

__attribute__((alias("__imp__sub_8270F2D0"))) PPC_WEAK_FUNC(sub_8270F2D0);
PPC_FUNC_IMPL(__imp__sub_8270F2D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82711328
	sub_82711328(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270F2D4"))) PPC_WEAK_FUNC(sub_8270F2D4);
PPC_FUNC_IMPL(__imp__sub_8270F2D4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F2D8"))) PPC_WEAK_FUNC(sub_8270F2D8);
PPC_FUNC_IMPL(__imp__sub_8270F2D8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8270f350
	if (cr6.eq) goto loc_8270F350;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r10,r10,368
	ctx.r10.s64 = ctx.r10.s64 + 368;
	// lis r27,-31933
	r27.s64 = -2092761088;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
loc_8270F314:
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// beq cr6,0x8270f33c
	if (cr6.eq) goto loc_8270F33C;
	// cmplw cr6,r5,r6
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, xer);
	// beq cr6,0x8270f33c
	if (cr6.eq) goto loc_8270F33C;
	// add r4,r30,r28
	ctx.r4.u64 = r30.u64 + r28.u64;
	// lwz r3,25320(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 25320);
	// bl 0x82711328
	sub_82711328(ctx, base);
loc_8270F33C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x8270f314
	if (cr6.lt) goto loc_8270F314;
loc_8270F350:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_8270F354"))) PPC_WEAK_FUNC(sub_8270F354);
PPC_FUNC_IMPL(__imp__sub_8270F354) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8270F358"))) PPC_WEAK_FUNC(sub_8270F358);
PPC_FUNC_IMPL(__imp__sub_8270F358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r10,r11,22000
	ctx.r10.s64 = r11.s64 + 22000;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r5,500(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 500);
	// stw r3,500(r10)
	PPC_STORE_U32(ctx.r10.u32 + 500, ctx.r3.u32);
	// beqlr cr6
	if (cr6.eq) return;
	// cmplw cr6,r3,r5
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
}

__attribute__((alias("__imp__sub_8270F384"))) PPC_WEAK_FUNC(sub_8270F384);
PPC_FUNC_IMPL(__imp__sub_8270F384) {
	PPC_FUNC_PROLOGUE();
	// b 0x82711768
	sub_82711768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8270F388"))) PPC_WEAK_FUNC(sub_8270F388);
PPC_FUNC_IMPL(__imp__sub_8270F388) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F38C"))) PPC_WEAK_FUNC(sub_8270F38C);
PPC_FUNC_IMPL(__imp__sub_8270F38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270F390"))) PPC_WEAK_FUNC(sub_8270F390);
PPC_FUNC_IMPL(__imp__sub_8270F390) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// bl 0x828e9410
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r26,r11,22000
	r26.s64 = r11.s64 + 22000;
	// lwz r11,508(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 508);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x8270f50c
	if (cr6.eq) goto loc_8270F50C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r30,-31933
	r30.s64 = -2092761088;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f31,21036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f31.f64 = double(temp.f32);
	// beq cr6,0x8270f3fc
	if (cr6.eq) goto loc_8270F3FC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x8270f3fc
	if (!cr6.gt) goto loc_8270F3FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825e9838
	sub_825E9838(ctx, base);
loc_8270F3FC:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r28,508(r26)
	PPC_STORE_U32(r26.u32 + 508, r28.u32);
	// li r31,0
	r31.s64 = 0;
	// beq cr6,0x8270f4e4
	if (cr6.eq) goto loc_8270F4E4;
	// addi r29,r28,268
	r29.s64 = r28.s64 + 268;
	// addi r27,r28,544
	r27.s64 = r28.s64 + 544;
loc_8270F414:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8270f430
	if (!cr6.eq) goto loc_8270F430;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8270F430:
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x8270f414
	if (cr6.lt) goto loc_8270F414;
	// lwz r11,1016(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1016);
	// addi r4,r28,468
	ctx.r4.s64 = r28.s64 + 468;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// bne cr6,0x8270f460
	if (!cr6.eq) goto loc_8270F460;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8270F460:
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x8270f4c0
	if (!cr6.gt) goto loc_8270F4C0;
	// lwz r11,25320(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// li r12,15
	r12.s64 = 15;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rldicr r12,r12,33,30
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFE00000000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r28,12
	ctx.r6.s64 = r28.s64 + 12;
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// or r8,r10,r12
	ctx.r8.u64 = ctx.r10.u64 | r12.u64;
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// bl 0x825e94c8
	sub_825E94C8(ctx, base);
	// lwz r11,25320(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// li r12,-16
	r12.s64 = -16;
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// rldicr r12,r12,33,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// and r6,r7,r12
	ctx.r6.u64 = ctx.r7.u64 & r12.u64;
	// std r6,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r6.u64);
loc_8270F4C0:
	// lwz r3,304(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8270f50c
	if (cr6.eq) goto loc_8270F50C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,304(r26)
	PPC_STORE_U32(r26.u32 + 304, r11.u32);
	// bl 0x8270f218
	sub_8270F218(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x828e9460
	return;
loc_8270F4E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x825dfcb0
	sub_825DFCB0(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x8270f4e4
	if (cr6.lt) goto loc_8270F4E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 25320);
	// bl 0x825df9d8
	sub_825DF9D8(ctx, base);
loc_8270F50C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_8270F514"))) PPC_WEAK_FUNC(sub_8270F514);
PPC_FUNC_IMPL(__imp__sub_8270F514) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_8270F518"))) PPC_WEAK_FUNC(sub_8270F518);
PPC_FUNC_IMPL(__imp__sub_8270F518) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8270f548
	if (cr6.eq) goto loc_8270F548;
	// li r30,15
	r30.s64 = 15;
loc_8270F548:
	// rlwinm r11,r3,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8270f558
	if (cr6.eq) goto loc_8270F558;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
loc_8270F558:
	// rlwinm r11,r3,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8270f568
	if (cr6.eq) goto loc_8270F568;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
loc_8270F568:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8270f5e0
	if (cr6.eq) goto loc_8270F5E0;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r9,r10,22000
	ctx.r9.s64 = ctx.r10.s64 + 22000;
	// addi r3,r11,22584
	ctx.r3.s64 = r11.s64 + 22584;
	// lwz r31,304(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x8270f590
	if (cr6.eq) goto loc_8270F590;
	// bl 0x8270f218
	sub_8270F218(ctx, base);
loc_8270F590:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// rotlwi r7,r29,24
	ctx.r7.u64 = __builtin_rotateleft32(r29.u32, 24);
	// lbz r10,25676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25676);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8270f5b4
	if (cr6.eq) goto loc_8270F5B4;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 - f31.f64));
	// b 0x8270f5b8
	goto loc_8270F5B8;
loc_8270F5B4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_8270F5B8:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825fc1b8
	sub_825FC1B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270f218
	sub_8270F218(ctx, base);
loc_8270F5E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8270F5E8"))) PPC_WEAK_FUNC(sub_8270F5E8);
PPC_FUNC_IMPL(__imp__sub_8270F5E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8270F5EC"))) PPC_WEAK_FUNC(sub_8270F5EC);
PPC_FUNC_IMPL(__imp__sub_8270F5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270F5F0"))) PPC_WEAK_FUNC(sub_8270F5F0);
PPC_FUNC_IMPL(__imp__sub_8270F5F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9418
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r9,24192(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// beq cr6,0x8270f62c
	if (cr6.eq) goto loc_8270F62C;
	// li r30,15
	r30.s64 = 15;
loc_8270F62C:
	// rlwinm r11,r3,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8270f63c
	if (cr6.eq) goto loc_8270F63C;
	// ori r30,r30,16
	r30.u64 = r30.u64 | 16;
loc_8270F63C:
	// rlwinm r11,r3,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8270f64c
	if (cr6.eq) goto loc_8270F64C;
	// ori r30,r30,32
	r30.u64 = r30.u64 | 32;
loc_8270F64C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8270f6dc
	if (cr6.eq) goto loc_8270F6DC;
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r9,r10,22000
	ctx.r9.s64 = ctx.r10.s64 + 22000;
	// addi r3,r11,22584
	ctx.r3.s64 = r11.s64 + 22584;
	// lwz r31,304(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 304);
	// cmplw cr6,r31,r3
	cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, xer);
	// beq cr6,0x8270f674
	if (cr6.eq) goto loc_8270F674;
	// bl 0x8270f218
	sub_8270F218(ctx, base);
loc_8270F674:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lbz r10,25676(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 25676);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8270f6b4
	if (cr6.eq) goto loc_8270F6B4;
	// lis r11,-32229
	r11.s64 = -2112159744;
	// lfs f0,-25600(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25600);
	f0.f64 = double(temp.f32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 - f31.f64));
	// b 0x8270f6b8
	goto loc_8270F6B8;
loc_8270F6B4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_8270F6B8:
	// lis r11,-31933
	r11.s64 = -2092761088;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,25320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 25320);
	// bl 0x825fc080
	sub_825FC080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8270f218
	sub_8270F218(ctx, base);
loc_8270F6DC:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
}

__attribute__((alias("__imp__sub_8270F6EC"))) PPC_WEAK_FUNC(sub_8270F6EC);
PPC_FUNC_IMPL(__imp__sub_8270F6EC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_8270F6F0"))) PPC_WEAK_FUNC(sub_8270F6F0);
PPC_FUNC_IMPL(__imp__sub_8270F6F0) {
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
	// lis r31,-31933
	r31.s64 = -2092761088;
	// li r12,15
	r12.s64 = 15;
	// li r5,0
	ctx.r5.s64 = 0;
	// rldicr r12,r12,33,30
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFE00000000;
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// or r9,r10,r12
	ctx.r9.u64 = ctx.r10.u64 | r12.u64;
	// std r9,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r9.u64);
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x825f62c8
	sub_825F62C8(ctx, base);
	// lwz r11,25320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 25320);
	// li r12,-16
	r12.s64 = -16;
	// rldicr r12,r12,33,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & r12.u64;
	// std r7,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r7.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8270F758"))) PPC_WEAK_FUNC(sub_8270F758);
PPC_FUNC_IMPL(__imp__sub_8270F758) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F75C"))) PPC_WEAK_FUNC(sub_8270F75C);
PPC_FUNC_IMPL(__imp__sub_8270F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8270F760"))) PPC_WEAK_FUNC(sub_8270F760);
PPC_FUNC_IMPL(__imp__sub_8270F760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r10,-15184
	ctx.r9.s64 = ctx.r10.s64 + -15184;
	// stw r11,-15184(r10)
	PPC_STORE_U32(ctx.r10.u32 + -15184, r11.u32);
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, r11.u32);
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 24, temp.u32);
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8270F7AC"))) PPC_WEAK_FUNC(sub_8270F7AC);
PPC_FUNC_IMPL(__imp__sub_8270F7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

