#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_825105C0"))) PPC_WEAK_FUNC(sub_825105C0);
PPC_FUNC_IMPL(__imp__sub_825105C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825105C4"))) PPC_WEAK_FUNC(sub_825105C4);
PPC_FUNC_IMPL(__imp__sub_825105C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825105C8"))) PPC_WEAK_FUNC(sub_825105C8);
PPC_FUNC_IMPL(__imp__sub_825105C8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82510630
	if (cr6.eq) goto loc_82510630;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// bne cr6,0x82510708
	if (!cr6.eq) goto loc_82510708;
	// lbz r11,619(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 619);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82510708
	if (cr6.eq) goto loc_82510708;
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// bl 0x825101d8
	sub_825101D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82510630:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// stb r9,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,25728(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25728);
	// lfs f0,21036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,21640(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21640);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x82513338
	sub_82513338(ctx, base);
	// lis r31,-31970
	r31.s64 = -2095185920;
	// li r30,0
	r30.s64 = 0;
	// stb r30,647(r29)
	PPC_STORE_U8(r29.u32 + 647, r30.u8);
	// stb r30,621(r29)
	PPC_STORE_U8(r29.u32 + 621, r30.u8);
	// stb r30,619(r29)
	PPC_STORE_U8(r29.u32 + 619, r30.u8);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82510694
	if (cr6.eq) goto loc_82510694;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82510698
	if (!cr6.eq) goto loc_82510698;
loc_82510694:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82510698:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521860
	sub_82521860(ctx, base);
	// lwz r3,-14756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825106bc
	if (cr6.eq) goto loc_825106BC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825106bc
	if (cr6.eq) goto loc_825106BC;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825106BC:
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// bl 0x82521560
	sub_82521560(ctx, base);
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
	// beq cr6,0x82510700
	if (cr6.eq) goto loc_82510700;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16820
	ctx.r9.s64 = ctx.r10.s64 + 16820;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82510700:
	// li r11,12
	r11.s64 = 12;
	// stw r11,40(r29)
	PPC_STORE_U32(r29.u32 + 40, r11.u32);
loc_82510708:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_8251070C"))) PPC_WEAK_FUNC(sub_8251070C);
PPC_FUNC_IMPL(__imp__sub_8251070C) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82510710"))) PPC_WEAK_FUNC(sub_82510710);
PPC_FUNC_IMPL(__imp__sub_82510710) {
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
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// blt cr6,0x82510738
	if (cr6.lt) goto loc_82510738;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82510738:
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x825101d8
	sub_825101D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82510760"))) PPC_WEAK_FUNC(sub_82510760);
PPC_FUNC_IMPL(__imp__sub_82510760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82510764"))) PPC_WEAK_FUNC(sub_82510764);
PPC_FUNC_IMPL(__imp__sub_82510764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82510768"))) PPC_WEAK_FUNC(sub_82510768);
PPC_FUNC_IMPL(__imp__sub_82510768) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8250dc48
	sub_8250DC48(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stb r10,647(r31)
	PPC_STORE_U8(r31.u32 + 647, ctx.r10.u8);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// blt cr6,0x825107a0
	if (cr6.lt) goto loc_825107A0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_825107A0:
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825101d8
	sub_825101D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825107D0"))) PPC_WEAK_FUNC(sub_825107D0);
PPC_FUNC_IMPL(__imp__sub_825107D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825107D4"))) PPC_WEAK_FUNC(sub_825107D4);
PPC_FUNC_IMPL(__imp__sub_825107D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825107D8"))) PPC_WEAK_FUNC(sub_825107D8);
PPC_FUNC_IMPL(__imp__sub_825107D8) {
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
	// li r27,0
	r27.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stb r27,647(r3)
	PPC_STORE_U8(ctx.r3.u32 + 647, r27.u8);
	// bl 0x8250dc48
	sub_8250DC48(ctx, base);
	// lis r28,-31970
	r28.s64 = -2095185920;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82510814
	if (cr6.eq) goto loc_82510814;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82510818
	if (!cr6.eq) goto loc_82510818;
loc_82510814:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82510818:
	// lwz r3,148(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82510874
	if (!cr6.eq) goto loc_82510874;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,20992(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
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
	// beq cr6,0x82510874
	if (cr6.eq) goto loc_82510874;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r27,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, r27.u8);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,-27972
	ctx.r9.s64 = ctx.r10.s64 + -27972;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82510874:
	// li r11,3
	r11.s64 = 3;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825101d8
	sub_825101D8(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// lwz r11,19440(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19440);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// beq cr6,0x825108b4
	if (cr6.eq) goto loc_825108B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825108b8
	if (!cr6.eq) goto loc_825108B8;
loc_825108B4:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825108B8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82510904
	if (cr6.eq) goto loc_82510904;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239b9e0
	sub_8239B9E0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82510904
	if (!cr6.eq) goto loc_82510904;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82510904:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82510908"))) PPC_WEAK_FUNC(sub_82510908);
PPC_FUNC_IMPL(__imp__sub_82510908) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9464
	return;
}

__attribute__((alias("__imp__sub_8251090C"))) PPC_WEAK_FUNC(sub_8251090C);
PPC_FUNC_IMPL(__imp__sub_8251090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82510910"))) PPC_WEAK_FUNC(sub_82510910);
PPC_FUNC_IMPL(__imp__sub_82510910) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,612(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 612);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8251098c
	if (!cr6.eq) goto loc_8251098C;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,612(r3)
	PPC_STORE_U8(ctx.r3.u32 + 612, ctx.r10.u8);
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82510958
	if (cr6.eq) goto loc_82510958;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251095c
	if (!cr6.eq) goto loc_8251095C;
loc_82510958:
	// li r11,0
	r11.s64 = 0;
loc_8251095C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82538698
	sub_82538698(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,21416(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21416);
	// lwz r10,21640(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21640);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,92(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// bl 0x8245a370
	sub_8245A370(ctx, base);
loc_8251098C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_8251099C"))) PPC_WEAK_FUNC(sub_8251099C);
PPC_FUNC_IMPL(__imp__sub_8251099C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825109A0"))) PPC_WEAK_FUNC(sub_825109A0);
PPC_FUNC_IMPL(__imp__sub_825109A0) {
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
	// lbz r11,612(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825109e0
	if (cr6.eq) goto loc_825109E0;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stb r10,612(r3)
	PPC_STORE_U8(ctx.r3.u32 + 612, ctx.r10.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,21640(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21640);
	// lwz r10,21412(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21412);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// bl 0x8245a3f0
	sub_8245A3F0(ctx, base);
loc_825109E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825109EC"))) PPC_WEAK_FUNC(sub_825109EC);
PPC_FUNC_IMPL(__imp__sub_825109EC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825109F0"))) PPC_WEAK_FUNC(sub_825109F0);
PPC_FUNC_IMPL(__imp__sub_825109F0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e9400
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-31970
	r24.s64 = -2095185920;
	// stw r5,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r5.u32);
	// lis r11,-31962
	r11.s64 = -2094661632;
	// stw r7,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r4,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r6,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r6.u32);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// li r22,0
	r22.s64 = 0;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r10,17472
	ctx.r8.s64 = ctx.r10.s64 + 17472;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r6,24192(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r23,r22
	r23.u64 = r22.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// beq cr6,0x82510a78
	if (cr6.eq) goto loc_82510A78;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82510a7c
	if (!cr6.eq) goto loc_82510A7C;
loc_82510A78:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82510A7C:
	// lwz r28,188(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82510a94
	if (cr6.lt) goto loc_82510A94;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82510a98
	if (cr6.lt) goto loc_82510A98;
loc_82510A94:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82510A98:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82510ab0
	if (cr6.eq) goto loc_82510AB0;
	// addi r4,r1,236
	ctx.r4.s64 = ctx.r1.s64 + 236;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_82510AB0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82510ac4
	if (cr6.lt) goto loc_82510AC4;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82510ac8
	if (cr6.lt) goto loc_82510AC8;
loc_82510AC4:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82510AC8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82510ae0
	if (cr6.eq) goto loc_82510AE0;
	// addi r4,r1,244
	ctx.r4.s64 = ctx.r1.s64 + 244;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_82510AE0:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x82510af4
	if (cr6.lt) goto loc_82510AF4;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82510af8
	if (cr6.lt) goto loc_82510AF8;
loc_82510AF4:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82510AF8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82510b10
	if (cr6.eq) goto loc_82510B10;
	// addi r4,r1,252
	ctx.r4.s64 = ctx.r1.s64 + 252;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_82510B10:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x82510b24
	if (cr6.lt) goto loc_82510B24;
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82510b28
	if (cr6.lt) goto loc_82510B28;
loc_82510B24:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82510B28:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82510b40
	if (cr6.eq) goto loc_82510B40;
	// addi r4,r1,260
	ctx.r4.s64 = ctx.r1.s64 + 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823845e0
	sub_823845E0(ctx, base);
loc_82510B40:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82510dac
	if (cr6.eq) goto loc_82510DAC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// li r28,1
	r28.s64 = 1;
	// mr r26,r22
	r26.u64 = r22.u64;
	// li r29,1
	r29.s64 = 1;
	// bl 0x82568bd0
	sub_82568BD0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r25,-1
	r25.s64 = -1;
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x82510c34
	if (cr6.eq) goto loc_82510C34;
	// lis r30,-31934
	r30.s64 = -2092826624;
loc_82510B84:
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,21636(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r28,r6,r28
	r28.u64 = ctx.r6.u64 & r28.u64;
	// lwz r5,44(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r5
	ctr.u64 = ctx.r5.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82510bdc
	if (!cr6.eq) goto loc_82510BDC;
	// li r26,1
	r26.s64 = 1;
loc_82510BDC:
	// lwz r3,21636(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 21636);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// subfic r9,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// and r29,r7,r29
	r29.u64 = ctx.r7.u64 & r29.u64;
	// bne cr6,0x82510c18
	if (!cr6.eq) goto loc_82510C18;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_82510C18:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x82510b84
	if (!cr6.eq) goto loc_82510B84;
loc_82510C34:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82510c70
	if (cr6.eq) goto loc_82510C70;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,17528
	ctx.r5.s64 = r11.s64 + 17528;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9450
	return;
loc_82510C70:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82510cac
	if (!cr6.eq) goto loc_82510CAC;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,17504
	ctx.r5.s64 = r11.s64 + 17504;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9450
	return;
loc_82510CAC:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82510ce8
	if (cr6.eq) goto loc_82510CE8;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,17480
	ctx.r5.s64 = r11.s64 + 17480;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,16564
	ctx.r3.s64 = ctx.r9.s64 + 16564;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x828e9450
	return;
loc_82510CE8:
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(r25.s32, -1, xer);
	// beq cr6,0x82510dac
	if (cr6.eq) goto loc_82510DAC;
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// li r23,1
	r23.s64 = 1;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82510d10
	if (cr6.eq) goto loc_82510D10;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82510d14
	if (!cr6.eq) goto loc_82510D14;
loc_82510D10:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82510D14:
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r22,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r22.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82510d40
	if (cr6.eq) goto loc_82510D40;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82510d44
	if (!cr6.eq) goto loc_82510D44;
loc_82510D40:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82510D44:
	// lwz r11,176(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x82510dac
	if (cr6.eq) goto loc_82510DAC;
loc_82510D64:
	// lwz r3,-14756(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82510d80
	if (cr6.eq) goto loc_82510D80;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82510d84
	if (!cr6.eq) goto loc_82510D84;
loc_82510D80:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_82510D84:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,176(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 176);
	// bl 0x82573b90
	sub_82573B90(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bne cr6,0x82510d64
	if (!cr6.eq) goto loc_82510D64;
loc_82510DAC:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
}

__attribute__((alias("__imp__sub_82510DBC"))) PPC_WEAK_FUNC(sub_82510DBC);
PPC_FUNC_IMPL(__imp__sub_82510DBC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9450
	return;
}

__attribute__((alias("__imp__sub_82510DC0"))) PPC_WEAK_FUNC(sub_82510DC0);
PPC_FUNC_IMPL(__imp__sub_82510DC0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,640(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// bl 0x8256a198
	sub_8256A198(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82510e10
	if (!cr6.eq) goto loc_82510E10;
	// lbz r11,647(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 647);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82510e10
	if (!cr6.eq) goto loc_82510E10;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,-28424(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -28424);
	// lwz r3,20992(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825133c0
	sub_825133C0(ctx, base);
loc_82510E10:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,17548
	ctx.r3.s64 = ctx.r10.s64 + 17548;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82510E34"))) PPC_WEAK_FUNC(sub_82510E34);
PPC_FUNC_IMPL(__imp__sub_82510E34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82510E38"))) PPC_WEAK_FUNC(sub_82510E38);
PPC_FUNC_IMPL(__imp__sub_82510E38) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r26,660(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 660);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,660(r28)
	PPC_STORE_U32(r28.u32 + 660, ctx.r3.u32);
	// li r27,0
	r27.s64 = 0;
	// lwz r3,1172(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1172);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82510e84
	if (cr6.eq) goto loc_82510E84;
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
	// stw r27,1172(r28)
	PPC_STORE_U32(r28.u32 + 1172, r27.u32);
loc_82510E84:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1168(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1168);
	// bl 0x822f3718
	sub_822F3718(ctx, base);
	// stw r3,1172(r28)
	PPC_STORE_U32(r28.u32 + 1172, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1176(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1176);
	// bl 0x822e8d10
	sub_822E8D10(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// mr r11,r30
	r11.u64 = r30.u64;
	// lwz r10,20192(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20192);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82510EB0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82510eb0
	if (!cr6.eq) goto loc_82510EB0;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,260
	ctx.r4.s64 = 260;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x828eb0e8
	sub_828EB0E8(ctx, base);
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,288
	ctx.r4.s64 = 288;
	// lwz r11,20992(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// lwz r29,108(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82510f3c
	if (cr6.eq) goto loc_82510F3C;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r10,17412
	ctx.r9.s64 = ctx.r10.s64 + 17412;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,260
	ctx.r5.s64 = 260;
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// bl 0x828ea1b0
	sub_828EA1B0(ctx, base);
	// stw r27,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r27.u32);
	// stw r27,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r27.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82510F3C:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// li r3,5381
	ctx.r3.s64 = 5381;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82510f6c
	if (cr6.eq) goto loc_82510F6C;
loc_82510F50:
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// lbzu r10,1(r30)
	ea = 1 + r30.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	r30.u32 = ea;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + r11.u64;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82510f50
	if (!cr6.eq) goto loc_82510F50;
loc_82510F6C:
	// bl 0x82516978
	sub_82516978(ctx, base);
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82510f90
	if (cr6.eq) goto loc_82510F90;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82510f94
	if (!cr6.eq) goto loc_82510F94;
loc_82510F90:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82510F94:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,660(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 660);
	// lwz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// bl 0x82422d88
	sub_82422D88(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
}

__attribute__((alias("__imp__sub_82510FA8"))) PPC_WEAK_FUNC(sub_82510FA8);
PPC_FUNC_IMPL(__imp__sub_82510FA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_82510FAC"))) PPC_WEAK_FUNC(sub_82510FAC);
PPC_FUNC_IMPL(__imp__sub_82510FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82510FB0"))) PPC_WEAK_FUNC(sub_82510FB0);
PPC_FUNC_IMPL(__imp__sub_82510FB0) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,25920(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25920);
	// lwz r10,20992(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,108(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// bl 0x82513438
	sub_82513438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82510FE8"))) PPC_WEAK_FUNC(sub_82510FE8);
PPC_FUNC_IMPL(__imp__sub_82510FE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82510FEC"))) PPC_WEAK_FUNC(sub_82510FEC);
PPC_FUNC_IMPL(__imp__sub_82510FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82510FF0"))) PPC_WEAK_FUNC(sub_82510FF0);
PPC_FUNC_IMPL(__imp__sub_82510FF0) {
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
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lbz r10,692(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 692);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// rlwinm r6,r8,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r11,20416(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20416);
	// lwz r3,20992(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20992);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stb r6,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r6.u8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822d0a58
	sub_822D0A58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82511040"))) PPC_WEAK_FUNC(sub_82511040);
PPC_FUNC_IMPL(__imp__sub_82511040) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82511044"))) PPC_WEAK_FUNC(sub_82511044);
PPC_FUNC_IMPL(__imp__sub_82511044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82511048"))) PPC_WEAK_FUNC(sub_82511048);
PPC_FUNC_IMPL(__imp__sub_82511048) {
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
	// li r11,1
	r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825101d8
	sub_825101D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82511074"))) PPC_WEAK_FUNC(sub_82511074);
PPC_FUNC_IMPL(__imp__sub_82511074) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82511078"))) PPC_WEAK_FUNC(sub_82511078);
PPC_FUNC_IMPL(__imp__sub_82511078) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,640(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// bl 0x8256a198
	sub_8256A198(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x825110c8
	if (!cr6.eq) goto loc_825110C8;
	// lbz r11,647(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 647);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825110c8
	if (!cr6.eq) goto loc_825110C8;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,-28424(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -28424);
	// lwz r3,20992(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825133c0
	sub_825133C0(ctx, base);
loc_825110C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825110D8"))) PPC_WEAK_FUNC(sub_825110D8);
PPC_FUNC_IMPL(__imp__sub_825110D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825110DC"))) PPC_WEAK_FUNC(sub_825110DC);
PPC_FUNC_IMPL(__imp__sub_825110DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825110E0"))) PPC_WEAK_FUNC(sub_825110E0);
PPC_FUNC_IMPL(__imp__sub_825110E0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,640(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// bl 0x8256a198
	sub_8256A198(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82511130
	if (!cr6.eq) goto loc_82511130;
	// lbz r11,647(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 647);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511130
	if (!cr6.eq) goto loc_82511130;
	// lis r11,-31933
	r11.s64 = -2092761088;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lwz r11,-28424(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -28424);
	// lwz r3,20992(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20992);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82320d20
	sub_82320D20(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825133c0
	sub_825133C0(ctx, base);
loc_82511130:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82511140"))) PPC_WEAK_FUNC(sub_82511140);
PPC_FUNC_IMPL(__imp__sub_82511140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82511144"))) PPC_WEAK_FUNC(sub_82511144);
PPC_FUNC_IMPL(__imp__sub_82511144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82511148"))) PPC_WEAK_FUNC(sub_82511148);
PPC_FUNC_IMPL(__imp__sub_82511148) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1168(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r15,0
	r15.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8251117c
	if (cr6.eq) goto loc_8251117C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f3710
	sub_822F3710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r15,1168(r30)
	PPC_STORE_U32(r30.u32 + 1168, r15.u32);
loc_8251117C:
	// lwz r31,640(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 640);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8251119c
	if (cr6.eq) goto loc_8251119C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256a518
	sub_8256A518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r15,640(r30)
	PPC_STORE_U32(r30.u32 + 640, r15.u32);
loc_8251119C:
	// lis r27,-31970
	r27.s64 = -2095185920;
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825111bc
	if (cr6.eq) goto loc_825111BC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825111c0
	if (!cr6.eq) goto loc_825111C0;
loc_825111BC:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_825111C0:
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-23876(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -23876);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,332
	ctx.r4.s64 = r30.s64 + 332;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511218
	if (!cr6.eq) goto loc_82511218;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511218
	if (!cr6.eq) goto loc_82511218;
	// lwz r11,-23876(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -23876);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82511218:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82511234
	if (cr6.eq) goto loc_82511234;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511238
	if (!cr6.eq) goto loc_82511238;
loc_82511234:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82511238:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,17960(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17960);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r4,r30,304
	ctx.r4.s64 = r30.s64 + 304;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511290
	if (!cr6.eq) goto loc_82511290;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511290
	if (!cr6.eq) goto loc_82511290;
	// lwz r11,17960(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17960);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82511290:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825112ac
	if (cr6.eq) goto loc_825112AC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825112b0
	if (!cr6.eq) goto loc_825112B0;
loc_825112AC:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_825112B0:
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-23868(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -23868);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r14,r30,248
	r14.s64 = r30.s64 + 248;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511308
	if (!cr6.eq) goto loc_82511308;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511308
	if (!cr6.eq) goto loc_82511308;
	// lwz r11,-23868(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -23868);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82511308:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82511324
	if (cr6.eq) goto loc_82511324;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511328
	if (!cr6.eq) goto loc_82511328;
loc_82511324:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82511328:
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-23872(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -23872);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r16,r30,276
	r16.s64 = r30.s64 + 276;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511380
	if (!cr6.eq) goto loc_82511380;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511380
	if (!cr6.eq) goto loc_82511380;
	// lwz r11,-23872(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -23872);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82511380:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251139c
	if (cr6.eq) goto loc_8251139C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825113a0
	if (!cr6.eq) goto loc_825113A0;
loc_8251139C:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_825113A0:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,21420(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21420);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r17,r30,220
	r17.s64 = r30.s64 + 220;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825113f8
	if (!cr6.eq) goto loc_825113F8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825113f8
	if (!cr6.eq) goto loc_825113F8;
	// lwz r11,21420(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 21420);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825113F8:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82511414
	if (cr6.eq) goto loc_82511414;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511418
	if (!cr6.eq) goto loc_82511418;
loc_82511414:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82511418:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,17936(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17936);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r18,r30,192
	r18.s64 = r30.s64 + 192;
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
	// bne cr6,0x82511470
	if (!cr6.eq) goto loc_82511470;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511470
	if (!cr6.eq) goto loc_82511470;
	// lwz r11,17936(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17936);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82511470:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251148c
	if (cr6.eq) goto loc_8251148C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511490
	if (!cr6.eq) goto loc_82511490;
loc_8251148C:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82511490:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20400);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r19,r30,108
	r19.s64 = r30.s64 + 108;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825114e8
	if (!cr6.eq) goto loc_825114E8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825114e8
	if (!cr6.eq) goto loc_825114E8;
	// lwz r11,20400(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20400);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825114E8:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82511504
	if (cr6.eq) goto loc_82511504;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511508
	if (!cr6.eq) goto loc_82511508;
loc_82511504:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82511508:
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-31444(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -31444);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r20,r30,360
	r20.s64 = r30.s64 + 360;
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
	// bne cr6,0x82511560
	if (!cr6.eq) goto loc_82511560;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511560
	if (!cr6.eq) goto loc_82511560;
	// lwz r11,-31444(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -31444);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82511560:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251157c
	if (cr6.eq) goto loc_8251157C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511580
	if (!cr6.eq) goto loc_82511580;
loc_8251157C:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82511580:
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-28420(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -28420);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r21,r30,416
	r21.s64 = r30.s64 + 416;
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
	// bne cr6,0x825115d8
	if (!cr6.eq) goto loc_825115D8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825115d8
	if (!cr6.eq) goto loc_825115D8;
	// lwz r11,-28420(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -28420);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825115D8:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825115f4
	if (cr6.eq) goto loc_825115F4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825115f8
	if (!cr6.eq) goto loc_825115F8;
loc_825115F4:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_825115F8:
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,-28416(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -28416);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r22,r30,388
	r22.s64 = r30.s64 + 388;
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
	// bne cr6,0x82511650
	if (!cr6.eq) goto loc_82511650;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511650
	if (!cr6.eq) goto loc_82511650;
	// lwz r11,-28416(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -28416);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82511650:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251166c
	if (cr6.eq) goto loc_8251166C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511670
	if (!cr6.eq) goto loc_82511670;
loc_8251166C:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82511670:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,25860(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 25860);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r23,r30,444
	r23.s64 = r30.s64 + 444;
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
	// bne cr6,0x825116c8
	if (!cr6.eq) goto loc_825116C8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825116c8
	if (!cr6.eq) goto loc_825116C8;
	// lwz r11,25860(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 25860);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825116C8:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825116e4
	if (cr6.eq) goto loc_825116E4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825116e8
	if (!cr6.eq) goto loc_825116E8;
loc_825116E4:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_825116E8:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20416(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20416);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r24,r30,500
	r24.s64 = r30.s64 + 500;
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
	// bne cr6,0x82511740
	if (!cr6.eq) goto loc_82511740;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511740
	if (!cr6.eq) goto loc_82511740;
	// lwz r11,20416(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20416);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82511740:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251175c
	if (cr6.eq) goto loc_8251175C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511760
	if (!cr6.eq) goto loc_82511760;
loc_8251175C:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82511760:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20412(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20412);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r25,r30,528
	r25.s64 = r30.s64 + 528;
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
	// bne cr6,0x825117b8
	if (!cr6.eq) goto loc_825117B8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825117b8
	if (!cr6.eq) goto loc_825117B8;
	// lwz r11,20412(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20412);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825117B8:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825117d4
	if (cr6.eq) goto loc_825117D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825117d8
	if (!cr6.eq) goto loc_825117D8;
loc_825117D4:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_825117D8:
	// lis r28,-31934
	r28.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,19644(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19644);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r26,r30,556
	r26.s64 = r30.s64 + 556;
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
	// bne cr6,0x82511830
	if (!cr6.eq) goto loc_82511830;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511830
	if (!cr6.eq) goto loc_82511830;
	// lwz r11,19644(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19644);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82511830:
	// lwz r3,-14756(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x8251184c
	if (cr6.eq) goto loc_8251184C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511850
	if (!cr6.eq) goto loc_82511850;
loc_8251184C:
	// mr r11,r15
	r11.u64 = r15.u64;
loc_82511850:
	// lis r27,-31934
	r27.s64 = -2092826624;
	// lwz r29,12(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,20408(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20408);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// addi r28,r30,584
	r28.s64 = r30.s64 + 584;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825118a8
	if (!cr6.eq) goto loc_825118A8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825118a8
	if (!cr6.eq) goto loc_825118A8;
	// lwz r11,20408(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20408);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825118A8:
	// lwz r11,684(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 684);
	// addi r31,r30,664
	r31.s64 = r30.s64 + 664;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825118c0
	if (cr6.lt) goto loc_825118C0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_825118C0:
	// li r29,15
	r29.s64 = 15;
	// stw r15,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r15.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// stb r15,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r15.u8);
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
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,472
	ctx.r3.s64 = r30.s64 + 472;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
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
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,164
	ctx.r3.s64 = r30.s64 + 164;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// addi r3,r30,136
	ctx.r3.s64 = r30.s64 + 136;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826c78d0
	sub_826C78D0(ctx, base);
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x82511978
	if (cr6.lt) goto loc_82511978;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_82511978:
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// addi r28,r30,52
	r28.s64 = r30.s64 + 52;
	// stw r15,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r15.u32);
	// stb r15,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r15.u8);
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8251199c
	if (cr6.lt) goto loc_8251199C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
loc_8251199C:
	// stw r29,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r29.u32);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r15,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r15.u32);
	// stb r15,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r15.u8);
	// bl 0x825b2ff8
	sub_825B2FF8(ctx, base);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x826c6630
	sub_826C6630(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
}

__attribute__((alias("__imp__sub_825119BC"))) PPC_WEAK_FUNC(sub_825119BC);
PPC_FUNC_IMPL(__imp__sub_825119BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_825119C0"))) PPC_WEAK_FUNC(sub_825119C0);
PPC_FUNC_IMPL(__imp__sub_825119C0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825119f8
	if (cr6.eq) goto loc_825119F8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825119fc
	if (!cr6.eq) goto loc_825119FC;
loc_825119F8:
	// li r11,0
	r11.s64 = 0;
loc_825119FC:
	// lwz r31,148(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 148);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82517aa8
	sub_82517AA8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511a40
	if (!cr6.eq) goto loc_82511A40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82517ae8
	sub_82517AE8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82511a40
	if (!cr6.eq) goto loc_82511A40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82517d10
	sub_82517D10(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82511a44
	if (cr6.eq) goto loc_82511A44;
loc_82511A40:
	// li r11,1
	r11.s64 = 1;
loc_82511A44:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82511a5c
	if (cr6.eq) goto loc_82511A5C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,17572
	ctx.r4.s64 = r11.s64 + 17572;
	// b 0x82511a64
	goto loc_82511A64;
loc_82511A5C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,22616
	ctx.r4.s64 = r11.s64 + 22616;
loc_82511A64:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82511A68:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82511a68
	if (!cr6.eq) goto loc_82511A68;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r3,r30,80
	ctx.r3.s64 = r30.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
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

__attribute__((alias("__imp__sub_82511AA0"))) PPC_WEAK_FUNC(sub_82511AA0);
PPC_FUNC_IMPL(__imp__sub_82511AA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82511AA4"))) PPC_WEAK_FUNC(sub_82511AA4);
PPC_FUNC_IMPL(__imp__sub_82511AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82511AA8"))) PPC_WEAK_FUNC(sub_82511AA8);
PPC_FUNC_IMPL(__imp__sub_82511AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r18{};
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
	// lwz r11,40(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bgt cr6,0x82511cfc
	if (cr6.gt) goto loc_82511CFC;
	// lis r12,-32175
	r12.s64 = -2108620800;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6880
	r12.s64 = r12.s64 + 6880;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82511B18;
	case 1:
		goto loc_82511CFC;
	case 2:
		goto loc_82511CFC;
	case 3:
		goto loc_82511CFC;
	case 4:
		goto loc_82511CFC;
	case 5:
		goto loc_82511CFC;
	case 6:
		goto loc_82511CFC;
	case 7:
		goto loc_82511CFC;
	case 8:
		goto loc_82511CFC;
	case 9:
		goto loc_82511CFC;
	case 10:
		goto loc_82511BB4;
	case 11:
		goto loc_82511C18;
	case 12:
		goto loc_82511CA8;
	case 13:
		goto loc_82511BE4;
	default:
		__builtin_unreachable();
	}
	// lwz r18,6936(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 6936);
	// lwz r18,7420(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7420);
	// lwz r18,7420(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7420);
	// lwz r18,7420(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7420);
	// lwz r18,7420(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7420);
	// lwz r18,7420(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7420);
	// lwz r18,7420(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7420);
	// lwz r18,7420(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7420);
	// lwz r18,7420(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7420);
	// lwz r18,7420(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7420);
	// lwz r18,7092(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7092);
	// lwz r18,7192(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7192);
	// lwz r18,7336(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7336);
	// lwz r18,7140(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 7140);
loc_82511B18:
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// bl 0x8256a1f0
	sub_8256A1F0(ctx, base);
	// lis r30,-31970
	r30.s64 = -2095185920;
	// li r29,0
	r29.s64 = 0;
	// stb r29,647(r31)
	PPC_STORE_U8(r31.u32 + 647, r29.u8);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82511b4c
	if (cr6.eq) goto loc_82511B4C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511b50
	if (!cr6.eq) goto loc_82511B50;
loc_82511B4C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82511B50:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521860
	sub_82521860(ctx, base);
	// lwz r3,-14756(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82511b74
	if (cr6.eq) goto loc_82511B74;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511b78
	if (!cr6.eq) goto loc_82511B78;
loc_82511B74:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82511B78:
	// lwz r3,152(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// bl 0x82521560
	sub_82521560(ctx, base);
	// lis r30,-31934
	r30.s64 = -2092826624;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,18436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 18436);
	// bl 0x82513a20
	sub_82513A20(ctx, base);
	// lwz r3,18436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 18436);
	// bl 0x82514378
	sub_82514378(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825119c0
	sub_825119C0(ctx, base);
	// li r11,11
	r11.s64 = 11;
	// stb r29,620(r31)
	PPC_STORE_U8(r31.u32 + 620, r29.u8);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82511BB4:
	// lbz r11,618(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 618);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82511cfc
	if (cr6.eq) goto loc_82511CFC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,17612
	ctx.r3.s64 = ctx.r10.s64 + 17612;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82511BE4:
	// lbz r11,620(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 620);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82511cfc
	if (cr6.eq) goto loc_82511CFC;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,20992(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20992);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// bl 0x82512ed8
	sub_82512ED8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r10,619(r31)
	PPC_STORE_U8(r31.u32 + 619, ctx.r10.u8);
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82511C18:
	// lbz r11,619(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 619);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82511cfc
	if (cr6.eq) goto loc_82511CFC;
	// lwz r3,640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// bl 0x8256a1b0
	sub_8256A1B0(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,18436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// bl 0x82513a18
	sub_82513A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82511c6c
	if (!cr6.eq) goto loc_82511C6C;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82511c6c
	if (cr6.eq) goto loc_82511C6C;
	// lwz r3,636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 636);
	// bl 0x825619e0
	sub_825619E0(ctx, base);
	// li r11,13
	r11.s64 = 13;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82511C6C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// bl 0x8256a1f0
	sub_8256A1F0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825101d8
	sub_825101D8(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x828e946c
	return;
loc_82511CA8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,18436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 18436);
	// bl 0x82513a18
	sub_82513A18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82511cd0
	if (!cr6.eq) goto loc_82511CD0;
	// lwz r3,636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 636);
	// bl 0x8255e8f0
	sub_8255E8F0(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82511cfc
	if (!cr6.eq) goto loc_82511CFC;
loc_82511CD0:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r3,640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// bl 0x8256a1f0
	sub_8256A1F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8250dda0
	sub_8250DDA0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
loc_82511CFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82511D00"))) PPC_WEAK_FUNC(sub_82511D00);
PPC_FUNC_IMPL(__imp__sub_82511D00) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82511D04"))) PPC_WEAK_FUNC(sub_82511D04);
PPC_FUNC_IMPL(__imp__sub_82511D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82511D08"))) PPC_WEAK_FUNC(sub_82511D08);
PPC_FUNC_IMPL(__imp__sub_82511D08) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82511D28:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82511d28
	if (!cr6.eq) goto loc_82511D28;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r30,664
	ctx.r3.s64 = r30.s64 + 664;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lwz r10,1172(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1172);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r3,r11,13435
	ctx.r3.s64 = r11.s64 + 13435;
	// beq cr6,0x82511d7c
	if (cr6.eq) goto loc_82511D7C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
loc_82511D7C:
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

__attribute__((alias("__imp__sub_82511D90"))) PPC_WEAK_FUNC(sub_82511D90);
PPC_FUNC_IMPL(__imp__sub_82511D90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82511D94"))) PPC_WEAK_FUNC(sub_82511D94);
PPC_FUNC_IMPL(__imp__sub_82511D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82511D98"))) PPC_WEAK_FUNC(sub_82511D98);
PPC_FUNC_IMPL(__imp__sub_82511D98) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e93e0
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x82512f30
	sub_82512F30(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r29,15
	r29.s64 = 15;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r25,r31,108
	r25.s64 = r31.s64 + 108;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r30.u8);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stb r30,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r30.u8);
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = r31.s64 + 164;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r27,r31,192
	r27.s64 = r31.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r24,r31,220
	r24.s64 = r31.s64 + 220;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r23,r31,248
	r23.s64 = r31.s64 + 248;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r22,r31,276
	r22.s64 = r31.s64 + 276;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r21,r31,304
	r21.s64 = r31.s64 + 304;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r20,r31,332
	r20.s64 = r31.s64 + 332;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r19,r31,360
	r19.s64 = r31.s64 + 360;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r17,r31,388
	r17.s64 = r31.s64 + 388;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r18,r31,416
	r18.s64 = r31.s64 + 416;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r16,r31,444
	r16.s64 = r31.s64 + 444;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = r31.s64 + 472;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r15,r31,500
	r15.s64 = r31.s64 + 500;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,528
	ctx.r3.s64 = r31.s64 + 528;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,556
	ctx.r3.s64 = r31.s64 + 556;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// addi r3,r31,584
	ctx.r3.s64 = r31.s64 + 584;
	// bl 0x826c7a40
	sub_826C7A40(ctx, base);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// stw r3,648(r31)
	PPC_STORE_U32(r31.u32 + 648, ctx.r3.u32);
	// stw r28,656(r31)
	PPC_STORE_U32(r31.u32 + 656, r28.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r29,684(r31)
	PPC_STORE_U32(r31.u32 + 684, r29.u32);
	// stw r30,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r30.u32);
	// stb r30,664(r31)
	PPC_STORE_U8(r31.u32 + 664, r30.u8);
	// stb r30,618(r31)
	PPC_STORE_U8(r31.u32 + 618, r30.u8);
	// stb r30,612(r31)
	PPC_STORE_U8(r31.u32 + 612, r30.u8);
	// stb r30,613(r31)
	PPC_STORE_U8(r31.u32 + 613, r30.u8);
	// stb r30,614(r31)
	PPC_STORE_U8(r31.u32 + 614, r30.u8);
	// stb r11,615(r31)
	PPC_STORE_U8(r31.u32 + 615, r11.u8);
	// stb r30,616(r31)
	PPC_STORE_U8(r31.u32 + 616, r30.u8);
	// stb r11,617(r31)
	PPC_STORE_U8(r31.u32 + 617, r11.u8);
	// stb r30,619(r31)
	PPC_STORE_U8(r31.u32 + 619, r30.u8);
	// stb r30,620(r31)
	PPC_STORE_U8(r31.u32 + 620, r30.u8);
	// stb r30,621(r31)
	PPC_STORE_U8(r31.u32 + 621, r30.u8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r30,647(r31)
	PPC_STORE_U8(r31.u32 + 647, r30.u8);
	// stw r11,628(r31)
	PPC_STORE_U32(r31.u32 + 628, r11.u32);
	// addi r3,r10,-28272
	ctx.r3.s64 = ctx.r10.s64 + -28272;
	// stw r30,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r30.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,21644(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21644);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82511f6c
	if (cr6.eq) goto loc_82511F6C;
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
	// beq cr6,0x82511f6c
	if (cr6.eq) goto loc_82511F6C;
	// bl 0x822c8790
	sub_822C8790(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82511f70
	if (!cr6.eq) goto loc_82511F70;
loc_82511F6C:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82511F70:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stb r11,692(r31)
	PPC_STORE_U8(r31.u32 + 692, r11.u8);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// stb r30,622(r31)
	PPC_STORE_U8(r31.u32 + 622, r30.u8);
	// stb r30,623(r31)
	PPC_STORE_U8(r31.u32 + 623, r30.u8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stb r30,624(r31)
	PPC_STORE_U8(r31.u32 + 624, r30.u8);
	// li r8,113
	ctx.r8.s64 = 113;
	// stb r30,693(r31)
	PPC_STORE_U8(r31.u32 + 693, r30.u8);
	// addi r7,r10,17316
	ctx.r7.s64 = ctx.r10.s64 + 17316;
	// stb r30,625(r31)
	PPC_STORE_U8(r31.u32 + 625, r30.u8);
	// li r10,17
	ctx.r10.s64 = 17;
	// stb r30,626(r31)
	PPC_STORE_U8(r31.u32 + 626, r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r30.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r30.u32);
	// ld r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82511fe0
	if (cr6.eq) goto loc_82511FE0;
	// bl 0x822f3708
	sub_822F3708(ctx, base);
	// b 0x82511fe4
	goto loc_82511FE4;
loc_82511FE0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82511FE4:
	// lis r28,-31970
	r28.s64 = -2095185920;
	// stw r3,1168(r31)
	PPC_STORE_U32(r31.u32 + 1168, ctx.r3.u32);
	// stw r30,1172(r31)
	PPC_STORE_U32(r31.u32 + 1172, r30.u32);
	// stw r30,1176(r31)
	PPC_STORE_U32(r31.u32 + 1176, r30.u32);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82512010
	if (cr6.eq) goto loc_82512010;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512014
	if (!cr6.eq) goto loc_82512014;
loc_82512010:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512014:
	// lwz r29,16(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x824f67f8
	sub_824F67F8(ctx, base);
	// addi r4,r31,644
	ctx.r4.s64 = r31.s64 + 644;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x824f6618
	sub_824F6618(ctx, base);
	// addi r4,r31,645
	ctx.r4.s64 = r31.s64 + 645;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x824f4c98
	sub_824F4C98(ctx, base);
	// addi r4,r31,646
	ctx.r4.s64 = r31.s64 + 646;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// bl 0x824fbf38
	sub_824FBF38(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r26,r11,-7056
	r26.s64 = r11.s64 + -7056;
	// beq cr6,0x8251206c
	if (cr6.eq) goto loc_8251206C;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512070
	if (!cr6.eq) goto loc_82512070;
loc_8251206C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82512070:
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lwz r14,12(r10)
	r14.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// addi r29,r11,-3784
	r29.s64 = r11.s64 + -3784;
	// addi r3,r10,-12736
	ctx.r3.s64 = ctx.r10.s64 + -12736;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// lwz r11,17936(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17936);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r26.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-8944
	r27.s64 = r11.s64 + -8944;
	// beq cr6,0x825120e4
	if (cr6.eq) goto loc_825120E4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825120e8
	if (!cr6.eq) goto loc_825120E8;
loc_825120E4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825120E8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,12528
	ctx.r3.s64 = ctx.r10.s64 + 12528;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20400(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20400);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-7632
	r27.s64 = r11.s64 + -7632;
	// beq cr6,0x82512154
	if (cr6.eq) goto loc_82512154;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512158
	if (!cr6.eq) goto loc_82512158;
loc_82512154:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512158:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,25480
	ctx.r3.s64 = ctx.r10.s64 + 25480;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,21420(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21420);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,3520
	r27.s64 = r11.s64 + 3520;
	// beq cr6,0x825121c4
	if (cr6.eq) goto loc_825121C4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825121c8
	if (!cr6.eq) goto loc_825121C8;
loc_825121C4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825121C8:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-28884
	ctx.r3.s64 = ctx.r10.s64 + -28884;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-23868(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23868);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-9056
	r27.s64 = r11.s64 + -9056;
	// beq cr6,0x82512234
	if (cr6.eq) goto loc_82512234;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512238
	if (!cr6.eq) goto loc_82512238;
loc_82512234:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512238:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-28836
	ctx.r3.s64 = ctx.r10.s64 + -28836;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-23872(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23872);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,4216
	r27.s64 = r11.s64 + 4216;
	// beq cr6,0x825122a4
	if (cr6.eq) goto loc_825122A4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825122a8
	if (!cr6.eq) goto loc_825122A8;
loc_825122A4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825122A8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-13028
	ctx.r3.s64 = ctx.r10.s64 + -13028;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,17960(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17960);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,4320
	r27.s64 = r11.s64 + 4320;
	// beq cr6,0x82512314
	if (cr6.eq) goto loc_82512314;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512318
	if (!cr6.eq) goto loc_82512318;
loc_82512314:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512318:
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-28788
	ctx.r3.s64 = ctx.r10.s64 + -28788;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-23876(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23876);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-8256
	r27.s64 = r11.s64 + -8256;
	// beq cr6,0x82512384
	if (cr6.eq) goto loc_82512384;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512388
	if (!cr6.eq) goto loc_82512388;
loc_82512384:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512388:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,32416
	ctx.r3.s64 = ctx.r10.s64 + 32416;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-31444(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -31444);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-8816
	r27.s64 = r11.s64 + -8816;
	// beq cr6,0x825123f4
	if (cr6.eq) goto loc_825123F4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825123f8
	if (!cr6.eq) goto loc_825123F8;
loc_825123F4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825123F8:
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,20192
	ctx.r3.s64 = ctx.r10.s64 + 20192;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-28420(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28420);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-8832
	r27.s64 = r11.s64 + -8832;
	// beq cr6,0x82512464
	if (cr6.eq) goto loc_82512464;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512468
	if (!cr6.eq) goto loc_82512468;
loc_82512464:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512468:
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,20136
	ctx.r3.s64 = ctx.r10.s64 + 20136;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,-28416(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -28416);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-9256
	r27.s64 = r11.s64 + -9256;
	// beq cr6,0x825124d4
	if (cr6.eq) goto loc_825124D4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825124d8
	if (!cr6.eq) goto loc_825124D8;
loc_825124D4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825124D8:
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,17444
	ctx.r3.s64 = ctx.r10.s64 + 17444;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,25860(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 25860);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-6584
	r27.s64 = r11.s64 + -6584;
	// beq cr6,0x82512544
	if (cr6.eq) goto loc_82512544;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512548
	if (!cr6.eq) goto loc_82512548;
loc_82512544:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512548:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,12324
	ctx.r3.s64 = ctx.r10.s64 + 12324;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20416(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20416);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,4080
	r27.s64 = r11.s64 + 4080;
	// beq cr6,0x825125b4
	if (cr6.eq) goto loc_825125B4;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825125b8
	if (!cr6.eq) goto loc_825125B8;
loc_825125B4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825125B8:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,12376
	ctx.r3.s64 = ctx.r10.s64 + 12376;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20412(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20412);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r4,r31,528
	ctx.r4.s64 = r31.s64 + 528;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-3632
	r27.s64 = r11.s64 + -3632;
	// beq cr6,0x82512624
	if (cr6.eq) goto loc_82512624;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512628
	if (!cr6.eq) goto loc_82512628;
loc_82512624:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512628:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r26,12(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,-1216
	ctx.r3.s64 = ctx.r10.s64 + -1216;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,19644(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 19644);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r4,r31,556
	ctx.r4.s64 = r31.s64 + 556;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// lwz r3,-14756(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -14756);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r27,r11,-8704
	r27.s64 = r11.s64 + -8704;
	// beq cr6,0x82512694
	if (cr6.eq) goto loc_82512694;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512698
	if (!cr6.eq) goto loc_82512698;
loc_82512694:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512698:
	// lis r10,-31970
	ctx.r10.s64 = -2095185920;
	// lwz r28,12(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r10,12432
	ctx.r3.s64 = ctx.r10.s64 + 12432;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20408(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20408);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r31.u32);
	// addi r4,r31,584
	ctx.r4.s64 = r31.s64 + 584;
	// li r6,50
	ctx.r6.s64 = 50;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x82473178
	sub_82473178(ctx, base);
	// li r7,17
	ctx.r7.s64 = 17;
	// li r8,146
	ctx.r8.s64 = 146;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r30.u32);
	// li r3,188
	ctx.r3.s64 = 188;
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r30.u32);
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r30.u32);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// ld r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82512720
	if (cr6.eq) goto loc_82512720;
	// bl 0x8256abe0
	sub_8256ABE0(ctx, base);
	// b 0x82512724
	goto loc_82512724;
loc_82512720:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82512724:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r3,640(r31)
	PPC_STORE_U32(r31.u32 + 640, ctx.r3.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,17820
	ctx.r3.s64 = ctx.r10.s64 + 17820;
	// lwz r11,21644(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21644);
	// lwz r27,12(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r3,r9,17808
	ctx.r3.s64 = ctx.r9.s64 + 17808;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// bl 0x826cb0f0
	sub_826CB0F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r8,17780
	ctx.r3.s64 = ctx.r8.s64 + 17780;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r30,r11,18440
	r30.s64 = r11.s64 + 18440;
	// beq cr6,0x82512800
	if (cr6.eq) goto loc_82512800;
	// rotlwi r11,r7,0
	r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
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
	// beq cr6,0x82512800
	if (cr6.eq) goto loc_82512800;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512804
	if (!cr6.eq) goto loc_82512804;
loc_82512800:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512804:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,17756
	ctx.r3.s64 = r11.s64 + 17756;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82512874
	if (cr6.eq) goto loc_82512874;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// beq cr6,0x82512874
	if (cr6.eq) goto loc_82512874;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512878
	if (!cr6.eq) goto loc_82512878;
loc_82512874:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512878:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r29,r11,20600
	r29.s64 = r11.s64 + 20600;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825128ec
	if (cr6.eq) goto loc_825128EC;
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
	// beq cr6,0x825128ec
	if (cr6.eq) goto loc_825128EC;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825128f0
	if (!cr6.eq) goto loc_825128F0;
loc_825128EC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825128F0:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82512960
	if (cr6.eq) goto loc_82512960;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// beq cr6,0x82512960
	if (cr6.eq) goto loc_82512960;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512964
	if (!cr6.eq) goto loc_82512964;
loc_82512960:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82512964:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,17728
	ctx.r3.s64 = ctx.r10.s64 + 17728;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825129d8
	if (cr6.eq) goto loc_825129D8;
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
	// beq cr6,0x825129d8
	if (cr6.eq) goto loc_825129D8;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825129dc
	if (!cr6.eq) goto loc_825129DC;
loc_825129D8:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825129DC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,17700
	ctx.r3.s64 = ctx.r10.s64 + 17700;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82512a50
	if (cr6.eq) goto loc_82512A50;
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
	// beq cr6,0x82512a50
	if (cr6.eq) goto loc_82512A50;
	// bl 0x822c86f8
	sub_822C86F8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512a54
	if (!cr6.eq) goto loc_82512A54;
loc_82512A50:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82512A54:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,17672
	ctx.r3.s64 = ctx.r10.s64 + 17672;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// addi r30,r11,21544
	r30.s64 = r11.s64 + 21544;
	// beq cr6,0x82512ad0
	if (cr6.eq) goto loc_82512AD0;
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
	// beq cr6,0x82512ad0
	if (cr6.eq) goto loc_82512AD0;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512ad4
	if (!cr6.eq) goto loc_82512AD4;
loc_82512AD0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512AD4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,17644
	ctx.r3.s64 = r11.s64 + 17644;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82512b48
	if (cr6.eq) goto loc_82512B48;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
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
	// beq cr6,0x82512b48
	if (cr6.eq) goto loc_82512B48;
	// bl 0x822b09b8
	sub_822B09B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82512b4c
	if (!cr6.eq) goto loc_82512B4C;
loc_82512B48:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512B4C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,694
	ctx.r3.s64 = r31.s64 + 694;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,758
	ctx.r3.s64 = r31.s64 + 758;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,822
	ctx.r3.s64 = r31.s64 + 822;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,886
	ctx.r3.s64 = r31.s64 + 886;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,950
	ctx.r3.s64 = r31.s64 + 950;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1014
	ctx.r3.s64 = r31.s64 + 1014;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1078
	ctx.r3.s64 = r31.s64 + 1078;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,21036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 21036);
	f0.f64 = double(temp.f32);
	// stfs f0,1144(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1144, temp.u32);
	// stfs f0,1148(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 1148, temp.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// stw r3,648(r31)
	PPC_STORE_U32(r31.u32 + 648, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
}

__attribute__((alias("__imp__sub_82512BEC"))) PPC_WEAK_FUNC(sub_82512BEC);
PPC_FUNC_IMPL(__imp__sub_82512BEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9430
	return;
}

__attribute__((alias("__imp__sub_82512BF0"))) PPC_WEAK_FUNC(sub_82512BF0);
PPC_FUNC_IMPL(__imp__sub_82512BF0) {
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
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,648(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82512c20
	if (cr6.lt) goto loc_82512C20;
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82512c2c
	goto loc_82512C2C;
loc_82512C20:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82512C2C:
	// stw r11,652(r31)
	PPC_STORE_U32(r31.u32 + 652, r11.u32);
	// bl 0x82605a98
	sub_82605A98(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lis r30,-31934
	r30.s64 = -2092826624;
	// stw r3,648(r31)
	PPC_STORE_U32(r31.u32 + 648, ctx.r3.u32);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x82512d30
	if (cr6.gt) goto loc_82512D30;
	// mtctr r11
	ctr.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bdzf 4*cr6+eq,0x82512c90
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82512C90;
	// bdzf 4*cr6+eq,0x82512d10
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82512D10;
	// bdzf 4*cr6+eq,0x82512d1c
	--ctr.u64;
	if (ctr.u32 == 0 && !cr6.eq) goto loc_82512D1C;
	// bne cr6,0x82512d28
	if (!cr6.eq) goto loc_82512D28;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82512d30
	if (!cr6.gt) goto loc_82512D30;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r9,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r9.u32);
	// bl 0x82330958
	sub_82330958(ctx, base);
	// b 0x82512d30
	goto loc_82512D30;
loc_82512C90:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82512cc8
	if (cr6.eq) goto loc_82512CC8;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// bne cr6,0x82512cec
	if (!cr6.eq) goto loc_82512CEC;
	// lwz r3,18436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 18436);
	// bl 0x82513a18
	sub_82513A18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82512cc0
	if (!cr6.eq) goto loc_82512CC0;
	// lwz r3,632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 632);
	// bl 0x825662f8
	sub_825662F8(ctx, base);
loc_82512CC0:
	// li r11,17
	r11.s64 = 17;
	// b 0x82512ce8
	goto loc_82512CE8;
loc_82512CC8:
	// lwz r3,18436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 18436);
	// bl 0x82513a18
	sub_82513A18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82512ce4
	if (cr6.eq) goto loc_82512CE4;
	// lwz r3,18436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 18436);
	// bl 0x82513a08
	sub_82513A08(ctx, base);
loc_82512CE4:
	// li r11,16
	r11.s64 = 16;
loc_82512CE8:
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_82512CEC:
	// lwz r3,18436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 18436);
	// bl 0x82513a18
	sub_82513A18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82512d30
	if (!cr6.eq) goto loc_82512D30;
	// lwz r4,652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// lwz r3,632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 632);
	// bl 0x82566968
	sub_82566968(ctx, base);
	// b 0x82512d30
	goto loc_82512D30;
loc_82512D10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82510328
	sub_82510328(ctx, base);
	// b 0x82512d30
	goto loc_82512D30;
loc_82512D1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82511aa8
	sub_82511AA8(ctx, base);
	// b 0x82512d30
	goto loc_82512D30;
loc_82512D28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825105c8
	sub_825105C8(ctx, base);
loc_82512D30:
	// lwz r3,18436(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 18436);
	// bl 0x82513a18
	sub_82513A18(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82512d58
	if (!cr6.eq) goto loc_82512D58;
	// lwz r3,636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 636);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82512d58
	if (cr6.eq) goto loc_82512D58;
	// lwz r4,652(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 652);
	// bl 0x8255fdd0
	sub_8255FDD0(ctx, base);
loc_82512D58:
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

__attribute__((alias("__imp__sub_82512D6C"))) PPC_WEAK_FUNC(sub_82512D6C);
PPC_FUNC_IMPL(__imp__sub_82512D6C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82512D70"))) PPC_WEAK_FUNC(sub_82512D70);
PPC_FUNC_IMPL(__imp__sub_82512D70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r3,r10,17836
	ctx.r3.s64 = ctx.r10.s64 + 17836;
	// lwz r11,21644(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21644);
	// lwz r31,16(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb510
	sub_826CB510(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82512df4
	if (cr6.eq) goto loc_82512DF4;
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
	// beq cr6,0x82512df4
	if (cr6.eq) goto loc_82512DF4;
	// bl 0x822ba4c0
	sub_822BA4C0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82512df4
	if (cr6.eq) goto loc_82512DF4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x82512dfc
	goto loc_82512DFC;
loc_82512DF4:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r11,r11,18440
	r11.s64 = r11.s64 + 18440;
loc_82512DFC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x826ca568
	sub_826CA568(ctx, base);
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

__attribute__((alias("__imp__sub_82512E1C"))) PPC_WEAK_FUNC(sub_82512E1C);
PPC_FUNC_IMPL(__imp__sub_82512E1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82512E20"))) PPC_WEAK_FUNC(sub_82512E20);
PPC_FUNC_IMPL(__imp__sub_82512E20) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_82512E3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82512e3c
	if (!cr6.eq) goto loc_82512E3C;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// addi r31,r3,52
	r31.s64 = ctx.r3.s64 + 52;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f09e0
	sub_822F09E0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r10,22564
	ctx.r4.s64 = ctx.r10.s64 + 22564;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82512E7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82512e7c
	if (!cr6.eq) goto loc_82512E7C;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// bl 0x822f0b10
	sub_822F0B10(ctx, base);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// blt cr6,0x82512eb8
	if (cr6.lt) goto loc_82512EB8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82512ebc
	goto loc_82512EBC;
loc_82512EB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82512EBC:
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

__attribute__((alias("__imp__sub_82512ED0"))) PPC_WEAK_FUNC(sub_82512ED0);
PPC_FUNC_IMPL(__imp__sub_82512ED0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82512ED4"))) PPC_WEAK_FUNC(sub_82512ED4);
PPC_FUNC_IMPL(__imp__sub_82512ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82512ED8"))) PPC_WEAK_FUNC(sub_82512ED8);
PPC_FUNC_IMPL(__imp__sub_82512ED8) {
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
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82512f18
	if (cr6.eq) goto loc_82512F18;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r9,r10,16820
	ctx.r9.s64 = ctx.r10.s64 + 16820;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82512F18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82512F28"))) PPC_WEAK_FUNC(sub_82512F28);
PPC_FUNC_IMPL(__imp__sub_82512F28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82512F2C"))) PPC_WEAK_FUNC(sub_82512F2C);
PPC_FUNC_IMPL(__imp__sub_82512F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82512F30"))) PPC_WEAK_FUNC(sub_82512F30);
PPC_FUNC_IMPL(__imp__sub_82512F30) {
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
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x826c67f8
	sub_826C67F8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r6,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r6.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82512FB4"))) PPC_WEAK_FUNC(sub_82512FB4);
PPC_FUNC_IMPL(__imp__sub_82512FB4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82512FB8"))) PPC_WEAK_FUNC(sub_82512FB8);
PPC_FUNC_IMPL(__imp__sub_82512FB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x828e941c
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eaaf8
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r5,16
	ctx.r5.s64 = 16;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// li r4,160
	ctx.r4.s64 = 160;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82513044
	if (cr6.eq) goto loc_82513044;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f31,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f30,148(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// addi r9,r10,16892
	ctx.r9.s64 = ctx.r10.s64 + 16892;
	// stfs f29,152(r3)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f28,156(r3)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82604ed8
	sub_82604ED8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x828eb368
	sub_828EB368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_82513044:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x828eab44
}

__attribute__((alias("__imp__sub_82513050"))) PPC_WEAK_FUNC(sub_82513050);
PPC_FUNC_IMPL(__imp__sub_82513050) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82513054"))) PPC_WEAK_FUNC(sub_82513054);
PPC_FUNC_IMPL(__imp__sub_82513054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513058"))) PPC_WEAK_FUNC(sub_82513058);
PPC_FUNC_IMPL(__imp__sub_82513058) {
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
	// lis r29,-31933
	r29.s64 = -2092761088;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-23868(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23868);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825130b8
	if (!cr6.eq) goto loc_825130B8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825130b8
	if (!cr6.eq) goto loc_825130B8;
	// lwz r11,-23868(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23868);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_825130B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_825130BC"))) PPC_WEAK_FUNC(sub_825130BC);
PPC_FUNC_IMPL(__imp__sub_825130BC) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825130C0"))) PPC_WEAK_FUNC(sub_825130C0);
PPC_FUNC_IMPL(__imp__sub_825130C0) {
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
	// lis r29,-31933
	r29.s64 = -2092761088;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-23872(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23872);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7ac0
	sub_826C7AC0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82570e08
	sub_82570E08(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82513120
	if (!cr6.eq) goto loc_82513120;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82513120
	if (!cr6.eq) goto loc_82513120;
	// lwz r11,-23872(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -23872);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b10
	sub_826C7B10(ctx, base);
loc_82513120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82513124"))) PPC_WEAK_FUNC(sub_82513124);
PPC_FUNC_IMPL(__imp__sub_82513124) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82513128"))) PPC_WEAK_FUNC(sub_82513128);
PPC_FUNC_IMPL(__imp__sub_82513128) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,17472
	ctx.r9.s64 = r11.s64 + 17472;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82513158
	if (!cr6.gt) goto loc_82513158;
loc_82513140:
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
	// bgt cr6,0x82513140
	if (cr6.gt) goto loc_82513140;
loc_82513158:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,-22728
	ctx.r9.s64 = r11.s64 + -22728;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blelr cr6
	if (!cr6.gt) return;
loc_82513170:
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
	// bgt cr6,0x82513170
	if (cr6.gt) goto loc_82513170;
}

__attribute__((alias("__imp__sub_82513188"))) PPC_WEAK_FUNC(sub_82513188);
PPC_FUNC_IMPL(__imp__sub_82513188) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251318C"))) PPC_WEAK_FUNC(sub_8251318C);
PPC_FUNC_IMPL(__imp__sub_8251318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513190"))) PPC_WEAK_FUNC(sub_82513190);
PPC_FUNC_IMPL(__imp__sub_82513190) {
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
	// beq cr6,0x825131c0
	if (cr6.eq) goto loc_825131C0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825131c4
	if (!cr6.eq) goto loc_825131C4;
loc_825131C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825131C4:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825131e0
	if (cr6.eq) goto loc_825131E0;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r6,284(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// lwz r5,280(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// bl 0x82379520
	sub_82379520(ctx, base);
loc_825131E0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825131F0"))) PPC_WEAK_FUNC(sub_825131F0);
PPC_FUNC_IMPL(__imp__sub_825131F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825131F4"))) PPC_WEAK_FUNC(sub_825131F4);
PPC_FUNC_IMPL(__imp__sub_825131F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825131F8"))) PPC_WEAK_FUNC(sub_825131F8);
PPC_FUNC_IMPL(__imp__sub_825131F8) {
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
	// bl 0x82513128
	sub_82513128(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82513230
	if (cr6.eq) goto loc_82513230;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82513230:
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

__attribute__((alias("__imp__sub_82513244"))) PPC_WEAK_FUNC(sub_82513244);
PPC_FUNC_IMPL(__imp__sub_82513244) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513248"))) PPC_WEAK_FUNC(sub_82513248);
PPC_FUNC_IMPL(__imp__sub_82513248) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-28884
	ctx.r3.s64 = ctx.r10.s64 + -28884;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-23868(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23868);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825132B8"))) PPC_WEAK_FUNC(sub_825132B8);
PPC_FUNC_IMPL(__imp__sub_825132B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_825132BC"))) PPC_WEAK_FUNC(sub_825132BC);
PPC_FUNC_IMPL(__imp__sub_825132BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825132C0"))) PPC_WEAK_FUNC(sub_825132C0);
PPC_FUNC_IMPL(__imp__sub_825132C0) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-31932
	r11.s64 = -2092695552;
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-3784
	ctx.r4.s64 = r11.s64 + -3784;
	// addi r3,r10,-28836
	ctx.r3.s64 = ctx.r10.s64 + -28836;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x828e9620
	sub_828E9620(ctx, base);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-23872(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -23872);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826c7b58
	sub_826C7B58(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x82473178
	sub_82473178(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82513330"))) PPC_WEAK_FUNC(sub_82513330);
PPC_FUNC_IMPL(__imp__sub_82513330) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82513334"))) PPC_WEAK_FUNC(sub_82513334);
PPC_FUNC_IMPL(__imp__sub_82513334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513338"))) PPC_WEAK_FUNC(sub_82513338);
PPC_FUNC_IMPL(__imp__sub_82513338) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826cc188
	sub_826CC188(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825133a4
	if (cr6.eq) goto loc_825133A4;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,17388
	ctx.r8.s64 = ctx.r9.s64 + 17388;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r7,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r7.u32);
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// stb r6,20(r11)
	PPC_STORE_U8(r11.u32 + 20, ctx.r6.u8);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// bl 0x826cc2f8
	sub_826CC2F8(ctx, base);
loc_825133A4:
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

__attribute__((alias("__imp__sub_825133B8"))) PPC_WEAK_FUNC(sub_825133B8);
PPC_FUNC_IMPL(__imp__sub_825133B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825133BC"))) PPC_WEAK_FUNC(sub_825133BC);
PPC_FUNC_IMPL(__imp__sub_825133BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825133C0"))) PPC_WEAK_FUNC(sub_825133C0);
PPC_FUNC_IMPL(__imp__sub_825133C0) {
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
	// beq cr6,0x8251341c
	if (cr6.eq) goto loc_8251341C;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,17400
	ctx.r8.s64 = ctx.r9.s64 + 17400;
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
loc_8251341C:
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

__attribute__((alias("__imp__sub_82513430"))) PPC_WEAK_FUNC(sub_82513430);
PPC_FUNC_IMPL(__imp__sub_82513430) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513434"))) PPC_WEAK_FUNC(sub_82513434);
PPC_FUNC_IMPL(__imp__sub_82513434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513438"))) PPC_WEAK_FUNC(sub_82513438);
PPC_FUNC_IMPL(__imp__sub_82513438) {
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
	// beq cr6,0x82513494
	if (cr6.eq) goto loc_82513494;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r9,17424
	ctx.r8.s64 = ctx.r9.s64 + 17424;
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
loc_82513494:
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

__attribute__((alias("__imp__sub_825134A8"))) PPC_WEAK_FUNC(sub_825134A8);
PPC_FUNC_IMPL(__imp__sub_825134A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825134AC"))) PPC_WEAK_FUNC(sub_825134AC);
PPC_FUNC_IMPL(__imp__sub_825134AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825134B0"))) PPC_WEAK_FUNC(sub_825134B0);
PPC_FUNC_IMPL(__imp__sub_825134B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_825134C0"))) PPC_WEAK_FUNC(sub_825134C0);
PPC_FUNC_IMPL(__imp__sub_825134C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825134C4"))) PPC_WEAK_FUNC(sub_825134C4);
PPC_FUNC_IMPL(__imp__sub_825134C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825134C8"))) PPC_WEAK_FUNC(sub_825134C8);
PPC_FUNC_IMPL(__imp__sub_825134C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825134DC"))) PPC_WEAK_FUNC(sub_825134DC);
PPC_FUNC_IMPL(__imp__sub_825134DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825134E0"))) PPC_WEAK_FUNC(sub_825134E0);
PPC_FUNC_IMPL(__imp__sub_825134E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825134F4"))) PPC_WEAK_FUNC(sub_825134F4);
PPC_FUNC_IMPL(__imp__sub_825134F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825134F8"))) PPC_WEAK_FUNC(sub_825134F8);
PPC_FUNC_IMPL(__imp__sub_825134F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8251350C"))) PPC_WEAK_FUNC(sub_8251350C);
PPC_FUNC_IMPL(__imp__sub_8251350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513510"))) PPC_WEAK_FUNC(sub_82513510);
PPC_FUNC_IMPL(__imp__sub_82513510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82513524"))) PPC_WEAK_FUNC(sub_82513524);
PPC_FUNC_IMPL(__imp__sub_82513524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513528"))) PPC_WEAK_FUNC(sub_82513528);
PPC_FUNC_IMPL(__imp__sub_82513528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8251353C"))) PPC_WEAK_FUNC(sub_8251353C);
PPC_FUNC_IMPL(__imp__sub_8251353C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513540"))) PPC_WEAK_FUNC(sub_82513540);
PPC_FUNC_IMPL(__imp__sub_82513540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82513554"))) PPC_WEAK_FUNC(sub_82513554);
PPC_FUNC_IMPL(__imp__sub_82513554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513558"))) PPC_WEAK_FUNC(sub_82513558);
PPC_FUNC_IMPL(__imp__sub_82513558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8251356C"))) PPC_WEAK_FUNC(sub_8251356C);
PPC_FUNC_IMPL(__imp__sub_8251356C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513570"))) PPC_WEAK_FUNC(sub_82513570);
PPC_FUNC_IMPL(__imp__sub_82513570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
}

__attribute__((alias("__imp__sub_82513580"))) PPC_WEAK_FUNC(sub_82513580);
PPC_FUNC_IMPL(__imp__sub_82513580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82513584"))) PPC_WEAK_FUNC(sub_82513584);
PPC_FUNC_IMPL(__imp__sub_82513584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513588"))) PPC_WEAK_FUNC(sub_82513588);
PPC_FUNC_IMPL(__imp__sub_82513588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8251359C"))) PPC_WEAK_FUNC(sub_8251359C);
PPC_FUNC_IMPL(__imp__sub_8251359C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825135A0"))) PPC_WEAK_FUNC(sub_825135A0);
PPC_FUNC_IMPL(__imp__sub_825135A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825135B4"))) PPC_WEAK_FUNC(sub_825135B4);
PPC_FUNC_IMPL(__imp__sub_825135B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825135B8"))) PPC_WEAK_FUNC(sub_825135B8);
PPC_FUNC_IMPL(__imp__sub_825135B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825135CC"))) PPC_WEAK_FUNC(sub_825135CC);
PPC_FUNC_IMPL(__imp__sub_825135CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825135D0"))) PPC_WEAK_FUNC(sub_825135D0);
PPC_FUNC_IMPL(__imp__sub_825135D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r6,r11,17900
	ctx.r6.s64 = r11.s64 + 17900;
	// addi r5,r10,17880
	ctx.r5.s64 = ctx.r10.s64 + 17880;
	// addi r4,r9,17876
	ctx.r4.s64 = ctx.r9.s64 + 17876;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
}

__attribute__((alias("__imp__sub_825135F4"))) PPC_WEAK_FUNC(sub_825135F4);
PPC_FUNC_IMPL(__imp__sub_825135F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825135F8"))) PPC_WEAK_FUNC(sub_825135F8);
PPC_FUNC_IMPL(__imp__sub_825135F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r11,17912
	ctx.r6.s64 = r11.s64 + 17912;
	// addi r5,r10,17880
	ctx.r5.s64 = ctx.r10.s64 + 17880;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
}

__attribute__((alias("__imp__sub_82513618"))) PPC_WEAK_FUNC(sub_82513618);
PPC_FUNC_IMPL(__imp__sub_82513618) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251361C"))) PPC_WEAK_FUNC(sub_8251361C);
PPC_FUNC_IMPL(__imp__sub_8251361C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513620"))) PPC_WEAK_FUNC(sub_82513620);
PPC_FUNC_IMPL(__imp__sub_82513620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r11,17920
	ctx.r6.s64 = r11.s64 + 17920;
	// addi r5,r10,17880
	ctx.r5.s64 = ctx.r10.s64 + 17880;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
}

__attribute__((alias("__imp__sub_82513640"))) PPC_WEAK_FUNC(sub_82513640);
PPC_FUNC_IMPL(__imp__sub_82513640) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82513644"))) PPC_WEAK_FUNC(sub_82513644);
PPC_FUNC_IMPL(__imp__sub_82513644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513648"))) PPC_WEAK_FUNC(sub_82513648);
PPC_FUNC_IMPL(__imp__sub_82513648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r11,17928
	ctx.r6.s64 = r11.s64 + 17928;
	// addi r5,r10,17880
	ctx.r5.s64 = ctx.r10.s64 + 17880;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
}

__attribute__((alias("__imp__sub_82513668"))) PPC_WEAK_FUNC(sub_82513668);
PPC_FUNC_IMPL(__imp__sub_82513668) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251366C"))) PPC_WEAK_FUNC(sub_8251366C);
PPC_FUNC_IMPL(__imp__sub_8251366C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513670"))) PPC_WEAK_FUNC(sub_82513670);
PPC_FUNC_IMPL(__imp__sub_82513670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r11,17936
	ctx.r6.s64 = r11.s64 + 17936;
	// addi r5,r10,17880
	ctx.r5.s64 = ctx.r10.s64 + 17880;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
}

__attribute__((alias("__imp__sub_82513690"))) PPC_WEAK_FUNC(sub_82513690);
PPC_FUNC_IMPL(__imp__sub_82513690) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82513694"))) PPC_WEAK_FUNC(sub_82513694);
PPC_FUNC_IMPL(__imp__sub_82513694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513698"))) PPC_WEAK_FUNC(sub_82513698);
PPC_FUNC_IMPL(__imp__sub_82513698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r11,17948
	ctx.r6.s64 = r11.s64 + 17948;
	// addi r5,r10,17880
	ctx.r5.s64 = ctx.r10.s64 + 17880;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
}

__attribute__((alias("__imp__sub_825136B8"))) PPC_WEAK_FUNC(sub_825136B8);
PPC_FUNC_IMPL(__imp__sub_825136B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825136BC"))) PPC_WEAK_FUNC(sub_825136BC);
PPC_FUNC_IMPL(__imp__sub_825136BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825136C0"))) PPC_WEAK_FUNC(sub_825136C0);
PPC_FUNC_IMPL(__imp__sub_825136C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r11,17956
	ctx.r6.s64 = r11.s64 + 17956;
	// addi r5,r10,17880
	ctx.r5.s64 = ctx.r10.s64 + 17880;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
}

__attribute__((alias("__imp__sub_825136E0"))) PPC_WEAK_FUNC(sub_825136E0);
PPC_FUNC_IMPL(__imp__sub_825136E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825136E4"))) PPC_WEAK_FUNC(sub_825136E4);
PPC_FUNC_IMPL(__imp__sub_825136E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825136E8"))) PPC_WEAK_FUNC(sub_825136E8);
PPC_FUNC_IMPL(__imp__sub_825136E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r11,17964
	ctx.r6.s64 = r11.s64 + 17964;
	// addi r5,r10,17880
	ctx.r5.s64 = ctx.r10.s64 + 17880;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
}

__attribute__((alias("__imp__sub_82513708"))) PPC_WEAK_FUNC(sub_82513708);
PPC_FUNC_IMPL(__imp__sub_82513708) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8251370C"))) PPC_WEAK_FUNC(sub_8251370C);
PPC_FUNC_IMPL(__imp__sub_8251370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513710"))) PPC_WEAK_FUNC(sub_82513710);
PPC_FUNC_IMPL(__imp__sub_82513710) {
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
	// lis r11,-31962
	r11.s64 = -2094661632;
	// lis r3,0
	ctx.r3.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,24192(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bl 0x82606150
	sub_82606150(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x82606150
	sub_82606150(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r5,r10,17972
	ctx.r5.s64 = ctx.r10.s64 + 17972;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_825137B8"))) PPC_WEAK_FUNC(sub_825137B8);
PPC_FUNC_IMPL(__imp__sub_825137B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825137BC"))) PPC_WEAK_FUNC(sub_825137BC);
PPC_FUNC_IMPL(__imp__sub_825137BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825137C0"))) PPC_WEAK_FUNC(sub_825137C0);
PPC_FUNC_IMPL(__imp__sub_825137C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,17992
	ctx.r5.s64 = r11.s64 + 17992;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,17852
	ctx.r3.s64 = ctx.r9.s64 + 17852;
}

__attribute__((alias("__imp__sub_825137D8"))) PPC_WEAK_FUNC(sub_825137D8);
PPC_FUNC_IMPL(__imp__sub_825137D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825137DC"))) PPC_WEAK_FUNC(sub_825137DC);
PPC_FUNC_IMPL(__imp__sub_825137DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825137E0"))) PPC_WEAK_FUNC(sub_825137E0);
PPC_FUNC_IMPL(__imp__sub_825137E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r6,r11,18020
	ctx.r6.s64 = r11.s64 + 18020;
	// addi r5,r10,17880
	ctx.r5.s64 = ctx.r10.s64 + 17880;
	// addi r4,r9,17908
	ctx.r4.s64 = ctx.r9.s64 + 17908;
	// addi r3,r8,17852
	ctx.r3.s64 = ctx.r8.s64 + 17852;
}

__attribute__((alias("__imp__sub_82513800"))) PPC_WEAK_FUNC(sub_82513800);
PPC_FUNC_IMPL(__imp__sub_82513800) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82513804"))) PPC_WEAK_FUNC(sub_82513804);
PPC_FUNC_IMPL(__imp__sub_82513804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513808"))) PPC_WEAK_FUNC(sub_82513808);
PPC_FUNC_IMPL(__imp__sub_82513808) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,18032
	ctx.r10.s64 = r11.s64 + 18032;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r30.u32);
	// stb r30,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r30.u8);
	// bl 0x82735630
	sub_82735630(ctx, base);
	// lis r8,-31970
	ctx.r8.s64 = -2095185920;
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r3,-14756(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82513868
	if (cr6.eq) goto loc_82513868;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8251386c
	if (!cr6.eq) goto loc_8251386C;
loc_82513868:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8251386C:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x824f6118
	sub_824F6118(ctx, base);
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

__attribute__((alias("__imp__sub_82513894"))) PPC_WEAK_FUNC(sub_82513894);
PPC_FUNC_IMPL(__imp__sub_82513894) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513898"))) PPC_WEAK_FUNC(sub_82513898);
PPC_FUNC_IMPL(__imp__sub_82513898) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r10,r11,18032
	ctx.r10.s64 = r11.s64 + 18032;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x825138d8
	if (cr6.eq) goto loc_825138D8;
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
loc_825138D8:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x825138f0
	if (cr6.lt) goto loc_825138F0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
loc_825138F0:
	// li r11,0
	r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82513914"))) PPC_WEAK_FUNC(sub_82513914);
PPC_FUNC_IMPL(__imp__sub_82513914) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513918"))) PPC_WEAK_FUNC(sub_82513918);
PPC_FUNC_IMPL(__imp__sub_82513918) {
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
	// bl 0x82513898
	sub_82513898(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82513950
	if (cr6.eq) goto loc_82513950;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82513950:
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

__attribute__((alias("__imp__sub_82513964"))) PPC_WEAK_FUNC(sub_82513964);
PPC_FUNC_IMPL(__imp__sub_82513964) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513968"))) PPC_WEAK_FUNC(sub_82513968);
PPC_FUNC_IMPL(__imp__sub_82513968) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c5f00
	sub_826C5F00(ctx, base);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-23784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23784, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_8251399C"))) PPC_WEAK_FUNC(sub_8251399C);
PPC_FUNC_IMPL(__imp__sub_8251399C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825139A0"))) PPC_WEAK_FUNC(sub_825139A0);
PPC_FUNC_IMPL(__imp__sub_825139A0) {
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
	// addi r11,r4,28
	r11.s64 = ctx.r4.s64 + 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// bl 0x8272e608
	sub_8272E608(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x82548458
	sub_82548458(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 188);
	// bl 0x825688b0
	sub_825688B0(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,78(r3)
	PPC_STORE_U8(ctx.r3.u32 + 78, ctx.r9.u8);
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

__attribute__((alias("__imp__sub_82513A00"))) PPC_WEAK_FUNC(sub_82513A00);
PPC_FUNC_IMPL(__imp__sub_82513A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513A04"))) PPC_WEAK_FUNC(sub_82513A04);
PPC_FUNC_IMPL(__imp__sub_82513A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513A08"))) PPC_WEAK_FUNC(sub_82513A08);
PPC_FUNC_IMPL(__imp__sub_82513A08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513A0C"))) PPC_WEAK_FUNC(sub_82513A0C);
PPC_FUNC_IMPL(__imp__sub_82513A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513A10"))) PPC_WEAK_FUNC(sub_82513A10);
PPC_FUNC_IMPL(__imp__sub_82513A10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513A14"))) PPC_WEAK_FUNC(sub_82513A14);
PPC_FUNC_IMPL(__imp__sub_82513A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513A18"))) PPC_WEAK_FUNC(sub_82513A18);
PPC_FUNC_IMPL(__imp__sub_82513A18) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
}

__attribute__((alias("__imp__sub_82513A1C"))) PPC_WEAK_FUNC(sub_82513A1C);
PPC_FUNC_IMPL(__imp__sub_82513A1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513A20"))) PPC_WEAK_FUNC(sub_82513A20);
PPC_FUNC_IMPL(__imp__sub_82513A20) {
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
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31962
	r11.s64 = -2094661632;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,24192(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24192);
	// stb r4,308(r30)
	PPC_STORE_U8(r30.u32 + 308, ctx.r4.u8);
	// stw r10,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r10.u32);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r8,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r8.u32);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// lis r7,-31934
	ctx.r7.s64 = -2092826624;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,21892(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21892);
	// stw r6,664(r1)
	PPC_STORE_U32(ctx.r1.u32 + 664, ctx.r6.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// stw r5,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r5.u32);
	// bne cr6,0x82513ab0
	if (!cr6.eq) goto loc_82513AB0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r9,19
	ctx.r9.s64 = 19;
	// addi r11,r11,18164
	r11.s64 = r11.s64 + 18164;
	// addi r10,r1,399
	ctx.r10.s64 = ctx.r1.s64 + 399;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82513AA0:
	// lbzu r9,1(r11)
	ea = 1 + r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82513aa0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82513AA0;
	// b 0x82513adc
	goto loc_82513ADC;
loc_82513AB0:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// addi r9,r11,18148
	ctx.r9.s64 = r11.s64 + 18148;
	// lwz r8,18148(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 18148);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
loc_82513ADC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// clrlwi r10,r31,24
	ctx.r10.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ld r11,18140(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 18140);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// bne cr6,0x82513b0c
	if (!cr6.eq) goto loc_82513B0C;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,18128
	ctx.r10.s64 = r11.s64 + 18128;
	// lwz r9,18128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 18128);
	// lbz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// stb r7,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r7.u8);
	// b 0x82513b30
	goto loc_82513B30;
loc_82513B0C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r10,r11,18112
	ctx.r10.s64 = r11.s64 + 18112;
	// lwz r9,18112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 18112);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lbz r5,14(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// sth r6,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, ctx.r6.u16);
	// stb r5,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, ctx.r5.u8);
loc_82513B30:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lis r31,-31934
	r31.s64 = -2092826624;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lwz r3,21888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 21888);
	// bl 0x82881690
	sub_82881690(ctx, base);
	// lwz r3,21888(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 21888);
	// lwz r4,140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// bl 0x828812f0
	sub_828812F0(ctx, base);
	// lwz r3,668(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// bl 0x828ea198
	sub_828EA198(ctx, base);
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82513B74"))) PPC_WEAK_FUNC(sub_82513B74);
PPC_FUNC_IMPL(__imp__sub_82513B74) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513B78"))) PPC_WEAK_FUNC(sub_82513B78);
PPC_FUNC_IMPL(__imp__sub_82513B78) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82513a20
	sub_82513A20(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881758
	sub_82881758(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r10,308(r31)
	PPC_STORE_U8(r31.u32 + 308, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c5f00
	sub_826C5F00(ctx, base);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r11,-23784(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23784, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82513BD4"))) PPC_WEAK_FUNC(sub_82513BD4);
PPC_FUNC_IMPL(__imp__sub_82513BD4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513BD8"))) PPC_WEAK_FUNC(sub_82513BD8);
PPC_FUNC_IMPL(__imp__sub_82513BD8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82513a20
	sub_82513A20(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881390
	sub_82881390(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r10,308(r31)
	PPC_STORE_U8(r31.u32 + 308, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c5f00
	sub_826C5F00(ctx, base);
	// lwz r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r9,-31933
	ctx.r9.s64 = -2092761088;
	// stw r11,-23784(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23784, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82513C34"))) PPC_WEAK_FUNC(sub_82513C34);
PPC_FUNC_IMPL(__imp__sub_82513C34) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513C38"))) PPC_WEAK_FUNC(sub_82513C38);
PPC_FUNC_IMPL(__imp__sub_82513C38) {
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
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x828813a0
	sub_828813A0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c5f00
	sub_826C5F00(ctx, base);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31933
	ctx.r10.s64 = -2092761088;
	// stw r11,-23784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -23784, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82513C78"))) PPC_WEAK_FUNC(sub_82513C78);
PPC_FUNC_IMPL(__imp__sub_82513C78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82513C7C"))) PPC_WEAK_FUNC(sub_82513C7C);
PPC_FUNC_IMPL(__imp__sub_82513C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82513C80"))) PPC_WEAK_FUNC(sub_82513C80);
PPC_FUNC_IMPL(__imp__sub_82513C80) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
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
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, r11.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x825141ac
	if (cr6.eq) goto loc_825141AC;
	// lis r26,-31934
	r26.s64 = -2092826624;
	// lwz r3,21888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 21888);
	// bl 0x82881280
	sub_82881280(ctx, base);
	// lis r11,-31933
	r11.s64 = -2092761088;
	// addi r29,r11,-23792
	r29.s64 = r11.s64 + -23792;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8232d458
	sub_8232D458(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lfs f0,26356(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 26356);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bgt cr6,0x82513d08
	if (cr6.gt) goto loc_82513D08;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82513d10
	if (!cr6.gt) goto loc_82513D10;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bgt cr6,0x82513d08
	if (cr6.gt) goto loc_82513D08;
	// mr r28,r11
	r28.u64 = r11.u64;
	// b 0x82513d14
	goto loc_82513D14;
loc_82513D08:
	// li r28,2
	r28.s64 = 2;
	// b 0x82513d14
	goto loc_82513D14;
loc_82513D10:
	// li r28,1
	r28.s64 = 1;
loc_82513D14:
	// extsw r11,r28
	r11.s64 = r28.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,4432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4432);
	f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	f31.f64 = double(float(ctx.f12.f64 * f0.f64));
	// bl 0x82605a40
	sub_82605A40(ctx, base);
	// lis r30,-31934
	r30.s64 = -2092826624;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// addi r31,r11,20544
	r31.s64 = r11.s64 + 20544;
	// std r10,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82513d84
	if (!cr6.eq) goto loc_82513D84;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82513D84:
	// lwz r3,92(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 92);
	// bl 0x826cc1d0
	sub_826CC1D0(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82513dc0
	if (!cr6.eq) goto loc_82513DC0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82513DC0:
	// lwz r3,180(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 180);
	// bl 0x82512bf0
	sub_82512BF0(ctx, base);
	// lwz r3,144(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 144);
	// bl 0x8254ebc0
	sub_8254EBC0(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82513e04
	if (!cr6.eq) goto loc_82513E04;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82513E04:
	// lwz r3,240(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 240);
	// bl 0x825218e8
	sub_825218E8(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82513e40
	if (!cr6.eq) goto loc_82513E40;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82513E40:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,21888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 21888);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x828818e8
	sub_828818E8(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82513e84
	if (!cr6.eq) goto loc_82513E84;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82513E84:
	// lwz r3,164(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 164);
	// bl 0x825561b8
	sub_825561B8(ctx, base);
	// lwz r3,272(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 272);
	// bl 0x82579bb0
	sub_82579BB0(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82513ec8
	if (!cr6.eq) goto loc_82513EC8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82513EC8:
	// lwz r3,188(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 188);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,220(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 220);
	// bl 0x8254b2f8
	sub_8254B2F8(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82513f1c
	if (!cr6.eq) goto loc_82513F1C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82513F1C:
	// lwz r3,196(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 196);
	// bl 0x82538690
	sub_82538690(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82513f58
	if (!cr6.eq) goto loc_82513F58;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82513F58:
	// lwz r3,264(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 264);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82577228
	sub_82577228(ctx, base);
	// lwz r3,268(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 268);
	// bl 0x8256f9c0
	sub_8256F9C0(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82513fa0
	if (!cr6.eq) goto loc_82513FA0;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82513FA0:
	// lwz r3,148(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 148);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82513fe8
	if (!cr6.eq) goto loc_82513FE8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82513FE8:
	// lwz r3,140(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82514030
	if (!cr6.eq) goto loc_82514030;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82514030:
	// lwz r3,184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// bl 0x825134b0
	sub_825134B0(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8251406c
	if (!cr6.eq) goto loc_8251406C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_8251406C:
	// lwz r3,176(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 176);
	// bl 0x8250c320
	sub_8250C320(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825140a8
	if (!cr6.eq) goto loc_825140A8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_825140A8:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825140f8
	if (!cr6.eq) goto loc_825140F8;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_825140F8:
	// lwz r3,152(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 152);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82514140
	if (!cr6.eq) goto loc_82514140;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82514140:
	// lwz r3,232(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 232);
	// bl 0x8255cc88
	sub_8255CC88(ctx, base);
	// lwz r3,280(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 280);
	// bl 0x82423190
	sub_82423190(ctx, base);
	// lwz r11,20548(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20548);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82514184
	if (!cr6.eq) goto loc_82514184;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r11,20548(r30)
	PPC_STORE_U32(r30.u32 + 20548, r11.u32);
	// li r9,255
	ctx.r9.s64 = 255;
	// li r11,255
	r11.s64 = 255;
	// stb r10,3(r31)
	PPC_STORE_U8(r31.u32 + 3, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(r31.u32 + 2, ctx.r9.u8);
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
loc_82514184:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r3,104(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 104);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,32
	ctx.r6.s64 = 32;
	// lfs f2,-32364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -32364);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8892);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x827447c0
	sub_827447C0(ctx, base);
	// lwz r3,21888(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 21888);
	// bl 0x82881288
	sub_82881288(ctx, base);
loc_825141AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
}

__attribute__((alias("__imp__sub_825141B8"))) PPC_WEAK_FUNC(sub_825141B8);
PPC_FUNC_IMPL(__imp__sub_825141B8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9460
	return;
}

__attribute__((alias("__imp__sub_825141BC"))) PPC_WEAK_FUNC(sub_825141BC);
PPC_FUNC_IMPL(__imp__sub_825141BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825141C0"))) PPC_WEAK_FUNC(sub_825141C0);
PPC_FUNC_IMPL(__imp__sub_825141C0) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,18188
	ctx.r9.s64 = r11.s64 + 18188;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// lwz r11,22292(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22292);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82727768
	sub_82727768(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514214
	if (cr6.eq) goto loc_82514214;
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
loc_82514214:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-32392
	ctx.r10.s64 = r11.s64 + -32392;
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

__attribute__((alias("__imp__sub_82514238"))) PPC_WEAK_FUNC(sub_82514238);
PPC_FUNC_IMPL(__imp__sub_82514238) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8251423C"))) PPC_WEAK_FUNC(sub_8251423C);
PPC_FUNC_IMPL(__imp__sub_8251423C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82514240"))) PPC_WEAK_FUNC(sub_82514240);
PPC_FUNC_IMPL(__imp__sub_82514240) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825142f0
	if (cr6.eq) goto loc_825142F0;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251427c
	if (cr6.eq) goto loc_8251427C;
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
loc_8251427C:
	// li r31,0
	r31.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// addi r7,r10,18200
	ctx.r7.s64 = ctx.r10.s64 + 18200;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// li r8,825
	ctx.r8.s64 = 825;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r3,20
	ctx.r3.s64 = 20;
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
	// beq cr6,0x825142c4
	if (cr6.eq) goto loc_825142C4;
	// bl 0x8241c700
	sub_8241C700(ctx, base);
	// b 0x825142c8
	goto loc_825142C8;
loc_825142C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825142C8:
	// stw r3,60(r30)
	PPC_STORE_U32(r30.u32 + 60, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r9,14000
	ctx.r4.s64 = ctx.r9.s64 + 14000;
	// bl 0x8241c658
	sub_8241C658(ctx, base);
loc_825142F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_825142F4"))) PPC_WEAK_FUNC(sub_825142F4);
PPC_FUNC_IMPL(__imp__sub_825142F4) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_825142F8"))) PPC_WEAK_FUNC(sub_825142F8);
PPC_FUNC_IMPL(__imp__sub_825142F8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r11,18280
	ctx.r9.s64 = r11.s64 + 18280;
	// addi r8,r10,18248
	ctx.r8.s64 = ctx.r10.s64 + 18248;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,300
	ctx.r3.s64 = ctx.r3.s64 + 300;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// bl 0x826ca530
	sub_826CA530(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x825141c0
	sub_825141C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826cfd20
	sub_826CFD20(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-31934
	ctx.r6.s64 = -2092826624;
	// addi r5,r7,18108
	ctx.r5.s64 = ctx.r7.s64 + 18108;
	// li r11,0
	r11.s64 = 0;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r11,18436(r6)
	PPC_STORE_U32(ctx.r6.u32 + 18436, r11.u32);
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

__attribute__((alias("__imp__sub_82514370"))) PPC_WEAK_FUNC(sub_82514370);
PPC_FUNC_IMPL(__imp__sub_82514370) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82514374"))) PPC_WEAK_FUNC(sub_82514374);
PPC_FUNC_IMPL(__imp__sub_82514374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82514378"))) PPC_WEAK_FUNC(sub_82514378);
PPC_FUNC_IMPL(__imp__sub_82514378) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825143a0
	if (cr6.eq) goto loc_825143A0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825143a4
	if (!cr6.eq) goto loc_825143A4;
loc_825143A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825143A4:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250db80
	sub_8250DB80(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881738
	sub_82881738(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_825143C4"))) PPC_WEAK_FUNC(sub_825143C4);
PPC_FUNC_IMPL(__imp__sub_825143C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825143C8"))) PPC_WEAK_FUNC(sub_825143C8);
PPC_FUNC_IMPL(__imp__sub_825143C8) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x825143f0
	if (cr6.eq) goto loc_825143F0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825143f4
	if (!cr6.eq) goto loc_825143F4;
loc_825143F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825143F4:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250db80
	sub_8250DB80(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x828813a0
	sub_828813A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82514414"))) PPC_WEAK_FUNC(sub_82514414);
PPC_FUNC_IMPL(__imp__sub_82514414) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82514418"))) PPC_WEAK_FUNC(sub_82514418);
PPC_FUNC_IMPL(__imp__sub_82514418) {
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
	// lwz r29,276(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8251444c
	if (cr6.eq) goto loc_8251444C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825697e0
	sub_825697E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r30.u32);
loc_8251444C:
	// addi r4,r31,292
	ctx.r4.s64 = r31.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826ca488
	sub_826CA488(ctx, base);
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// bl 0x82570ae0
	sub_82570AE0(ctx, base);
	// lwz r29,268(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82514480
	if (cr6.eq) goto loc_82514480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256f970
	sub_8256F970(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
loc_82514480:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// bl 0x82573ac0
	sub_82573AC0(ctx, base);
	// lwz r29,264(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825144a8
	if (cr6.eq) goto loc_825144A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82577e10
	sub_82577E10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
loc_825144A8:
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// bl 0x8250df38
	sub_8250DF38(ctx, base);
	// lwz r29,180(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825144d0
	if (cr6.eq) goto loc_825144D0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82511148
	sub_82511148(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
loc_825144D0:
	// lis r29,-31934
	r29.s64 = -2092826624;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r11,21640(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 21640);
	// addi r3,r11,408
	ctx.r3.s64 = r11.s64 + 408;
	// bl 0x826dad80
	sub_826DAD80(ctx, base);
	// lis r28,-31933
	r28.s64 = -2092761088;
	// lwz r3,25320(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 25320);
	// bl 0x825d1450
	sub_825D1450(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881278
	sub_82881278(ctx, base);
	// lwz r3,25320(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 25320);
	// bl 0x825d1490
	sub_825D1490(ctx, base);
	// lwz r11,21640(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 21640);
	// addi r3,r11,408
	ctx.r3.s64 = r11.s64 + 408;
	// bl 0x826dadb0
	sub_826DADB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x8250c298
	sub_8250C298(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// bl 0x8250c290
	sub_8250C290(ctx, base);
	// lwz r29,176(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82514548
	if (cr6.eq) goto loc_82514548;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8250c288
	sub_8250C288(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
loc_82514548:
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251456c
	if (cr6.eq) goto loc_8251456C;
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
	// stw r30,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r30.u32);
loc_8251456C:
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 188);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514590
	if (cr6.eq) goto loc_82514590;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
loc_82514590:
	// lwz r29,236(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825145b0
	if (cr6.eq) goto loc_825145B0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8251c5e8
	sub_8251C5E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
loc_825145B0:
	// lwz r29,216(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 216);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825145d0
	if (cr6.eq) goto loc_825145D0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825456c8
	sub_825456C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,216(r31)
	PPC_STORE_U32(r31.u32 + 216, r30.u32);
loc_825145D0:
	// lwz r29,192(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 192);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825145f0
	if (cr6.eq) goto loc_825145F0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254a7b8
	sub_8254A7B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
loc_825145F0:
	// lwz r29,172(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82514610
	if (cr6.eq) goto loc_82514610;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8255b998
	sub_8255B998(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
loc_82514610:
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514634
	if (cr6.eq) goto loc_82514634;
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
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
loc_82514634:
	// lwz r29,272(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82514654
	if (cr6.eq) goto loc_82514654;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8273e120
	sub_8273E120(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
loc_82514654:
	// lwz r29,164(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82514674
	if (cr6.eq) goto loc_82514674;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825560d0
	sub_825560D0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
loc_82514674:
	// lwz r3,260(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514698
	if (cr6.eq) goto loc_82514698;
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
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
loc_82514698:
	// lwz r29,256(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825146b8
	if (cr6.eq) goto loc_825146B8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82548b60
	sub_82548B60(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r30.u32);
loc_825146B8:
	// lwz r29,196(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825146d8
	if (cr6.eq) goto loc_825146D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82539b80
	sub_82539B80(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
loc_825146D8:
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825146fc
	if (cr6.eq) goto loc_825146FC;
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
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
loc_825146FC:
	// lwz r29,156(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8251471c
	if (cr6.eq) goto loc_8251471C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82542488
	sub_82542488(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
loc_8251471C:
	// lwz r29,268(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8251473c
	if (cr6.eq) goto loc_8251473C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256f970
	sub_8256F970(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
loc_8251473C:
	// lwz r29,264(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8251475c
	if (cr6.eq) goto loc_8251475C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82577e10
	sub_82577E10(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
loc_8251475C:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514780
	if (cr6.eq) goto loc_82514780;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
loc_82514780:
	// lwz r29,132(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825147a0
	if (cr6.eq) goto loc_825147A0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254d118
	sub_8254D118(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
loc_825147A0:
	// lwz r3,252(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825147c4
	if (cr6.eq) goto loc_825147C4;
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
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
loc_825147C4:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825147e8
	if (cr6.eq) goto loc_825147E8;
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
	// stw r30,280(r31)
	PPC_STORE_U32(r31.u32 + 280, r30.u32);
loc_825147E8:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251480c
	if (cr6.eq) goto loc_8251480C;
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
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
loc_8251480C:
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// bl 0x8255c738
	sub_8255C738(ctx, base);
	// lwz r29,232(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82514834
	if (cr6.eq) goto loc_82514834;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8255cc28
	sub_8255CC28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
loc_82514834:
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// bl 0x82521620
	sub_82521620(ctx, base);
	// lwz r29,240(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8251485c
	if (cr6.eq) goto loc_8251485C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82520ff8
	sub_82520FF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r30.u32);
loc_8251485C:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514894
	if (cr6.eq) goto loc_82514894;
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
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
loc_82514894:
	// lwz r29,144(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825148b4
	if (cr6.eq) goto loc_825148B4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254e9c0
	sub_8254E9C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
loc_825148B4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r4,r11,14000
	ctx.r4.s64 = r11.s64 + 14000;
	// bl 0x8241c500
	sub_8241C500(ctx, base);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825148fc
	if (cr6.eq) goto loc_825148FC;
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
loc_825148FC:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514934
	if (cr6.eq) goto loc_82514934;
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
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
loc_82514934:
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514958
	if (cr6.eq) goto loc_82514958;
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
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
loc_82514958:
	// lwz r29,224(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82514978
	if (cr6.eq) goto loc_82514978;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82551e28
	sub_82551E28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r30.u32);
loc_82514978:
	// addi r29,r31,200
	r29.s64 = r31.s64 + 200;
	// li r28,4
	r28.s64 = 4;
loc_82514980:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825149a4
	if (cr6.eq) goto loc_825149A4;
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
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
loc_825149A4:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82514980
	if (!cr0.eq) goto loc_82514980;
	// lwz r29,160(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825149d0
	if (cr6.eq) goto loc_825149D0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82549408
	sub_82549408(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
loc_825149D0:
	// lwz r29,248(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 248);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825149f0
	if (cr6.eq) goto loc_825149F0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254ecc0
	sub_8254ECC0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
loc_825149F0:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514a28
	if (cr6.eq) goto loc_82514A28;
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
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
loc_82514A28:
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r11,21636(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// lwz r29,92(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82514a54
	if (cr6.eq) goto loc_82514A54;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826cc190
	sub_826CC190(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
loc_82514A54:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514a78
	if (cr6.eq) goto loc_82514A78;
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
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
loc_82514A78:
	// lis r31,-31934
	r31.s64 = -2092826624;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da6a8
	sub_826DA6A8(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da5a8
	sub_826DA5A8(ctx, base);
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da838
	sub_826DA838(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
}

__attribute__((alias("__imp__sub_82514AA0"))) PPC_WEAK_FUNC(sub_82514AA0);
PPC_FUNC_IMPL(__imp__sub_82514AA0) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e9468
	return;
}

__attribute__((alias("__imp__sub_82514AA4"))) PPC_WEAK_FUNC(sub_82514AA4);
PPC_FUNC_IMPL(__imp__sub_82514AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82514AA8"))) PPC_WEAK_FUNC(sub_82514AA8);
PPC_FUNC_IMPL(__imp__sub_82514AA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// addi r10,r11,18188
	ctx.r10.s64 = r11.s64 + 18188;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// addi r7,r9,18200
	ctx.r7.s64 = ctx.r9.s64 + 18200;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r30.u32);
	// li r8,742
	ctx.r8.s64 = 742;
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r30.u32);
	// rldicr r6,r30,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF00000000;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514b34
	if (cr6.eq) goto loc_82514B34;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,-31536
	ctx.r4.s64 = r11.s64 + -31536;
	// bl 0x82423b28
	sub_82423B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82514b38
	goto loc_82514B38;
loc_82514B34:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82514B38:
	// addi r29,r31,32
	r29.s64 = r31.s64 + 32;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82423af8
	sub_82423AF8(ctx, base);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r30.u32);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r30,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r30,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r30,176(r31)
	PPC_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r30.u32);
	// lwz r11,22292(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 22292);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x827276c0
	sub_827276C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
}

__attribute__((alias("__imp__sub_82514BE8"))) PPC_WEAK_FUNC(sub_82514BE8);
PPC_FUNC_IMPL(__imp__sub_82514BE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e946c
	return;
}

__attribute__((alias("__imp__sub_82514BEC"))) PPC_WEAK_FUNC(sub_82514BEC);
PPC_FUNC_IMPL(__imp__sub_82514BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82514BF0"))) PPC_WEAK_FUNC(sub_82514BF0);
PPC_FUNC_IMPL(__imp__sub_82514BF0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// addi r8,r11,18108
	ctx.r8.s64 = r11.s64 + 18108;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// li r27,0
	r27.s64 = 0;
	// lwz r11,19960(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r3,18436(r9)
	PPC_STORE_U32(ctx.r9.u32 + 18436, ctx.r3.u32);
	// addi r28,r11,8
	r28.s64 = r11.s64 + 8;
	// bne cr6,0x82514c30
	if (!cr6.eq) goto loc_82514C30;
	// mr r28,r27
	r28.u64 = r27.u64;
loc_82514C30:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r30,12(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r26,8(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r25,16(r9)
	r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x826d04f8
	sub_826D04F8(ctx, base);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// addi r5,r7,18280
	ctx.r5.s64 = ctx.r7.s64 + 18280;
	// addi r3,r6,18248
	ctx.r3.s64 = ctx.r6.s64 + 18248;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82514aa8
	sub_82514AA8(ctx, base);
	// addi r3,r31,300
	ctx.r3.s64 = r31.s64 + 300;
	// bl 0x826ca2b8
	sub_826CA2B8(ctx, base);
	// stb r27,308(r31)
	PPC_STORE_U8(r31.u32 + 308, r27.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r27,312(r31)
	PPC_STORE_U32(r31.u32 + 312, r27.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
}

__attribute__((alias("__imp__sub_82514CD8"))) PPC_WEAK_FUNC(sub_82514CD8);
PPC_FUNC_IMPL(__imp__sub_82514CD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e945c
	return;
}

__attribute__((alias("__imp__sub_82514CDC"))) PPC_WEAK_FUNC(sub_82514CDC);
PPC_FUNC_IMPL(__imp__sub_82514CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82514CE0"))) PPC_WEAK_FUNC(sub_82514CE0);
PPC_FUNC_IMPL(__imp__sub_82514CE0) {
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
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82881950
	sub_82881950(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82514D14"))) PPC_WEAK_FUNC(sub_82514D14);
PPC_FUNC_IMPL(__imp__sub_82514D14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82514D18"))) PPC_WEAK_FUNC(sub_82514D18);
PPC_FUNC_IMPL(__imp__sub_82514D18) {
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
	// addi r3,r3,300
	ctx.r3.s64 = ctx.r3.s64 + 300;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826ca440
	sub_826CA440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514df0
	if (cr6.eq) goto loc_82514DF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x822b2850
	sub_822B2850(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514df0
	if (cr6.eq) goto loc_82514DF0;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,18284
	ctx.r3.s64 = r11.s64 + 18284;
	// bl 0x822b0000
	sub_822B0000(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cb2e8
	sub_826CB2E8(ctx, base);
	// bl 0x822d57a8
	sub_822D57A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514da8
	if (cr6.eq) goto loc_82514DA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826ca128
	sub_826CA128(ctx, base);
	// bl 0x8234a8b8
	sub_8234A8B8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82514dac
	goto loc_82514DAC;
loc_82514DA8:
	// li r31,0
	r31.s64 = 0;
loc_82514DAC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826ca568
	sub_826CA568(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82514df0
	if (cr6.eq) goto loc_82514DF0;
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82514ddc
	if (cr6.eq) goto loc_82514DDC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82514de0
	if (!cr6.eq) goto loc_82514DE0;
loc_82514DDC:
	// li r11,0
	r11.s64 = 0;
loc_82514DE0:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x827450c8
	sub_827450C8(ctx, base);
loc_82514DF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82514E00"))) PPC_WEAK_FUNC(sub_82514E00);
PPC_FUNC_IMPL(__imp__sub_82514E00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82514E04"))) PPC_WEAK_FUNC(sub_82514E04);
PPC_FUNC_IMPL(__imp__sub_82514E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82514E08"))) PPC_WEAK_FUNC(sub_82514E08);
PPC_FUNC_IMPL(__imp__sub_82514E08) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c5f00
	sub_826C5F00(ctx, base);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r21,-31933
	r21.s64 = -2092761088;
	// lis r31,-31934
	r31.s64 = -2092826624;
	// stw r11,-23784(r21)
	PPC_STORE_U32(r21.u32 + -23784, r11.u32);
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da500
	sub_826DA500(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da548
	sub_826DA548(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,22228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22228);
	// bl 0x826da648
	sub_826DA648(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r10,18200
	r29.s64 = ctx.r10.s64 + 18200;
	// li r28,17
	r28.s64 = 17;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,157
	ctx.r8.s64 = 157;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514ea4
	if (cr6.eq) goto loc_82514EA4;
	// bl 0x826c7c98
	sub_826C7C98(ctx, base);
	// b 0x82514ea8
	goto loc_82514EA8;
loc_82514EA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82514EA8:
	// stw r3,100(r30)
	PPC_STORE_U32(r30.u32 + 100, ctx.r3.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,160
	ctx.r8.s64 = 160;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514f04
	if (cr6.eq) goto loc_82514F04;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x824fcb48
	sub_824FCB48(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// b 0x82514f08
	goto loc_82514F08;
loc_82514F04:
	// mr r22,r31
	r22.u64 = r31.u64;
loc_82514F08:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,164
	ctx.r8.s64 = 164;
	// stw r22,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r22.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82514f88
	if (cr6.eq) goto loc_82514F88;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// lbz r26,4(r11)
	r26.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r25,20(r10)
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// bl 0x8257af28
	sub_8257AF28(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x826cc368
	sub_826CC368(ctx, base);
	// b 0x82514f8c
	goto loc_82514F8C;
loc_82514F88:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82514F8C:
	// lis r23,-31934
	r23.s64 = -2092826624;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r3,92(r30)
	PPC_STORE_U32(r30.u32 + 92, ctx.r3.u32);
	// lis r9,-31970
	ctx.r9.s64 = -2095185920;
	// lwz r11,21636(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 21636);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r3,-14756(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82514fbc
	if (cr6.eq) goto loc_82514FBC;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82514fc0
	if (!cr6.eq) goto loc_82514FC0;
loc_82514FBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82514FC0:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,-32304
	ctx.r4.s64 = r11.s64 + -32304;
	// bl 0x82514240
	sub_82514240(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c5f00
	sub_826C5F00(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// addi r26,r30,196
	r26.s64 = r30.s64 + 196;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r27,4
	r27.s64 = 4;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// ld r25,120(r1)
	r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r24,112(r1)
	r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r11,-23784(r21)
	PPC_STORE_U32(r21.u32 + -23784, r11.u32);
loc_82515004:
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,175
	ctx.r8.s64 = 175;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// li r3,92
	ctx.r3.s64 = 92;
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515030
	if (cr6.eq) goto loc_82515030;
	// bl 0x8253f990
	sub_8253F990(ctx, base);
	// b 0x82515034
	goto loc_82515034;
loc_82515030:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515034:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
	// bne 0x82515004
	if (!cr0.eq) goto loc_82515004;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,178
	ctx.r8.s64 = 178;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r3,720
	ctx.r3.s64 = 720;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251507c
	if (cr6.eq) goto loc_8251507C;
	// bl 0x8255cb80
	sub_8255CB80(ctx, base);
	// b 0x82515080
	goto loc_82515080;
loc_8251507C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515080:
	// stw r3,232(r30)
	PPC_STORE_U32(r30.u32 + 232, ctx.r3.u32);
	// bl 0x8255d700
	sub_8255D700(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,181
	ctx.r8.s64 = 181;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825150c4
	if (cr6.eq) goto loc_825150C4;
	// bl 0x82555620
	sub_82555620(ctx, base);
	// b 0x825150c8
	goto loc_825150C8;
loc_825150C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825150C8:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,183
	ctx.r8.s64 = 183;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r3,228(r30)
	PPC_STORE_U32(r30.u32 + 228, ctx.r3.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515108
	if (cr6.eq) goto loc_82515108;
	// bl 0x82551d68
	sub_82551D68(ctx, base);
	// b 0x8251510c
	goto loc_8251510C;
loc_82515108:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8251510C:
	// stw r3,224(r30)
	PPC_STORE_U32(r30.u32 + 224, ctx.r3.u32);
	// bl 0x82551e88
	sub_82551E88(ctx, base);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,186
	ctx.r8.s64 = 186;
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515150
	if (cr6.eq) goto loc_82515150;
	// bl 0x82737238
	sub_82737238(ctx, base);
	// b 0x82515154
	goto loc_82515154;
loc_82515150:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515154:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,188
	ctx.r8.s64 = 188;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r3,188(r30)
	PPC_STORE_U32(r30.u32 + 188, ctx.r3.u32);
	// li r3,1632
	ctx.r3.s64 = 1632;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515194
	if (cr6.eq) goto loc_82515194;
	// bl 0x8254af40
	sub_8254AF40(ctx, base);
	// b 0x82515198
	goto loc_82515198;
loc_82515194:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515198:
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
	// bl 0x8254ab50
	sub_8254AB50(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,192
	ctx.r8.s64 = 192;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825151dc
	if (cr6.eq) goto loc_825151DC;
	// bl 0x8241a930
	sub_8241A930(ctx, base);
	// b 0x825151e0
	goto loc_825151E0;
loc_825151DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825151E0:
	// stw r3,152(r30)
	PPC_STORE_U32(r30.u32 + 152, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,197
	ctx.r8.s64 = 197;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,248
	ctx.r3.s64 = 248;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515230
	if (cr6.eq) goto loc_82515230;
	// bl 0x82568e88
	sub_82568E88(ctx, base);
	// b 0x82515234
	goto loc_82515234;
loc_82515230:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515234:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,200
	ctx.r8.s64 = 200;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r3,276(r30)
	PPC_STORE_U32(r30.u32 + 276, ctx.r3.u32);
	// li r3,1180
	ctx.r3.s64 = 1180;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515278
	if (cr6.eq) goto loc_82515278;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// bl 0x82511d98
	sub_82511D98(ctx, base);
	// b 0x8251527c
	goto loc_8251527C;
loc_82515278:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8251527C:
	// stw r3,180(r30)
	PPC_STORE_U32(r30.u32 + 180, ctx.r3.u32);
	// bl 0x8250ed38
	sub_8250ED38(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,203
	ctx.r8.s64 = 203;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,23936
	ctx.r3.s64 = 23936;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825152c0
	if (cr6.eq) goto loc_825152C0;
	// bl 0x82559018
	sub_82559018(ctx, base);
	// b 0x825152c4
	goto loc_825152C4;
loc_825152C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825152C4:
	// stw r3,164(r30)
	PPC_STORE_U32(r30.u32 + 164, ctx.r3.u32);
	// bl 0x82556138
	sub_82556138(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r8,206
	ctx.r8.s64 = 206;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r3,72
	ctx.r3.s64 = 72;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515310
	if (cr6.eq) goto loc_82515310;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8273e5c0
	sub_8273E5C0(ctx, base);
	// b 0x82515314
	goto loc_82515314;
loc_82515310:
	// mr r27,r31
	r27.u64 = r31.u64;
loc_82515314:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,211
	ctx.r8.s64 = 211;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r3,108
	ctx.r3.s64 = 108;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r27,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r27.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515354
	if (cr6.eq) goto loc_82515354;
	// bl 0x82520f80
	sub_82520F80(ctx, base);
	// b 0x82515358
	goto loc_82515358;
loc_82515354:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515358:
	// stw r3,240(r30)
	PPC_STORE_U32(r30.u32 + 240, ctx.r3.u32);
	// bl 0x82521700
	sub_82521700(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,214
	ctx.r8.s64 = 214;
	// li r3,3872
	ctx.r3.s64 = 3872;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251539c
	if (cr6.eq) goto loc_8251539C;
	// bl 0x8251cf30
	sub_8251CF30(ctx, base);
	// b 0x825153a0
	goto loc_825153A0;
loc_8251539C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825153A0:
	// stw r3,236(r30)
	PPC_STORE_U32(r30.u32 + 236, ctx.r3.u32);
	// bl 0x82517ed8
	sub_82517ED8(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,217
	ctx.r8.s64 = 217;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825153e4
	if (cr6.eq) goto loc_825153E4;
	// bl 0x82549220
	sub_82549220(ctx, base);
	// b 0x825153e8
	goto loc_825153E8;
loc_825153E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825153E8:
	// stw r3,256(r30)
	PPC_STORE_U32(r30.u32 + 256, ctx.r3.u32);
	// bl 0x82548400
	sub_82548400(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,220
	ctx.r8.s64 = 220;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251542c
	if (cr6.eq) goto loc_8251542C;
	// bl 0x825477e0
	sub_825477E0(ctx, base);
	// b 0x82515430
	goto loc_82515430;
loc_8251542C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515430:
	// stw r3,260(r30)
	PPC_STORE_U32(r30.u32 + 260, ctx.r3.u32);
	// bl 0x82547800
	sub_82547800(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,224
	ctx.r8.s64 = 224;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,180
	ctx.r3.s64 = 180;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515474
	if (cr6.eq) goto loc_82515474;
	// bl 0x82546f70
	sub_82546F70(ctx, base);
	// b 0x82515478
	goto loc_82515478;
loc_82515474:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515478:
	// stw r3,216(r30)
	PPC_STORE_U32(r30.u32 + 216, ctx.r3.u32);
	// bl 0x825450f8
	sub_825450F8(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,227
	ctx.r8.s64 = 227;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825154bc
	if (cr6.eq) goto loc_825154BC;
	// bl 0x8255b990
	sub_8255B990(ctx, base);
	// b 0x825154c0
	goto loc_825154C0;
loc_825154BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825154C0:
	// stw r3,172(r30)
	PPC_STORE_U32(r30.u32 + 172, ctx.r3.u32);
	// bl 0x8255bc70
	sub_8255BC70(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,230
	ctx.r8.s64 = 230;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515504
	if (cr6.eq) goto loc_82515504;
	// bl 0x8254a740
	sub_8254A740(ctx, base);
	// b 0x82515508
	goto loc_82515508;
loc_82515504:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515508:
	// stw r3,192(r30)
	PPC_STORE_U32(r30.u32 + 192, ctx.r3.u32);
	// bl 0x8254a280
	sub_8254A280(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,233
	ctx.r8.s64 = 233;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,628
	ctx.r3.s64 = 628;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251554c
	if (cr6.eq) goto loc_8251554C;
	// bl 0x8250ccb8
	sub_8250CCB8(ctx, base);
	// b 0x82515550
	goto loc_82515550;
loc_8251554C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515550:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,234
	ctx.r8.s64 = 234;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r3,168(r30)
	PPC_STORE_U32(r30.u32 + 168, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515590
	if (cr6.eq) goto loc_82515590;
	// bl 0x82542480
	sub_82542480(ctx, base);
	// b 0x82515594
	goto loc_82515594;
loc_82515590:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515594:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,236
	ctx.r8.s64 = 236;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r3,156(r30)
	PPC_STORE_U32(r30.u32 + 156, ctx.r3.u32);
	// li r3,180
	ctx.r3.s64 = 180;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825155d4
	if (cr6.eq) goto loc_825155D4;
	// bl 0x82577c10
	sub_82577C10(ctx, base);
	// b 0x825155d8
	goto loc_825155D8;
loc_825155D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825155D8:
	// stw r3,264(r30)
	PPC_STORE_U32(r30.u32 + 264, ctx.r3.u32);
	// bl 0x82573a98
	sub_82573A98(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,239
	ctx.r8.s64 = 239;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,304
	ctx.r3.s64 = 304;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251561c
	if (cr6.eq) goto loc_8251561C;
	// bl 0x82570340
	sub_82570340(ctx, base);
	// b 0x82515620
	goto loc_82515620;
loc_8251561C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515620:
	// stw r3,268(r30)
	PPC_STORE_U32(r30.u32 + 268, ctx.r3.u32);
	// bl 0x82570c70
	sub_82570C70(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,242
	ctx.r8.s64 = 242;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,36
	ctx.r3.s64 = 36;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515664
	if (cr6.eq) goto loc_82515664;
	// bl 0x82513808
	sub_82513808(ctx, base);
	// b 0x82515668
	goto loc_82515668;
loc_82515664:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515668:
	// stw r3,184(r30)
	PPC_STORE_U32(r30.u32 + 184, ctx.r3.u32);
	// lwz r4,21636(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 21636);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x824fa178
	sub_824FA178(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r8,246
	ctx.r8.s64 = 246;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r3,1760
	ctx.r3.s64 = 1760;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825156b8
	if (cr6.eq) goto loc_825156B8;
	// lwz r4,256(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// bl 0x8253aaf8
	sub_8253AAF8(ctx, base);
	// b 0x825156bc
	goto loc_825156BC;
loc_825156B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825156BC:
	// stw r3,196(r30)
	PPC_STORE_U32(r30.u32 + 196, ctx.r3.u32);
	// bl 0x82538850
	sub_82538850(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,249
	ctx.r8.s64 = 249;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515700
	if (cr6.eq) goto loc_82515700;
	// bl 0x825494d0
	sub_825494D0(ctx, base);
	// b 0x82515704
	goto loc_82515704;
loc_82515700:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515704:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,251
	ctx.r8.s64 = 251;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r3,160(r30)
	PPC_STORE_U32(r30.u32 + 160, ctx.r3.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515744
	if (cr6.eq) goto loc_82515744;
	// bl 0x8250c270
	sub_8250C270(ctx, base);
	// b 0x82515748
	goto loc_82515748;
loc_82515744:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515748:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,253
	ctx.r8.s64 = 253;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r3,176(r30)
	PPC_STORE_U32(r30.u32 + 176, ctx.r3.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825157c4
	if (cr6.eq) goto loc_825157C4;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,7
	ctx.r9.s64 = 7;
	// li r8,14
	ctx.r8.s64 = 14;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// lfs f0,-32360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -32360);
	f0.f64 = double(temp.f32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lfs f13,-32364(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32364);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82419508
	sub_82419508(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x825157c8
	goto loc_825157C8;
loc_825157C4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
loc_825157C8:
	// stw r4,244(r30)
	PPC_STORE_U32(r30.u32 + 244, ctx.r4.u32);
	// lwz r3,176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 176);
	// bl 0x8250c290
	sub_8250C290(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,257
	ctx.r8.s64 = 257;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,492
	ctx.r3.s64 = 492;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515810
	if (cr6.eq) goto loc_82515810;
	// bl 0x822e1a48
	sub_822E1A48(ctx, base);
	// b 0x82515814
	goto loc_82515814;
loc_82515810:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515814:
	// stw r3,140(r30)
	PPC_STORE_U32(r30.u32 + 140, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,140(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x824fa798
	sub_824FA798(ctx, base);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r8,261
	ctx.r8.s64 = 261;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// li r3,60
	ctx.r3.s64 = 60;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515874
	if (cr6.eq) goto loc_82515874;
	// bl 0x8254ea68
	sub_8254EA68(ctx, base);
	// b 0x82515878
	goto loc_82515878;
loc_82515874:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515878:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,264
	ctx.r8.s64 = 264;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r3,144(r30)
	PPC_STORE_U32(r30.u32 + 144, ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825158b8
	if (cr6.eq) goto loc_825158B8;
	// bl 0x8254f608
	sub_8254F608(ctx, base);
	// b 0x825158bc
	goto loc_825158BC;
loc_825158B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825158BC:
	// stw r3,248(r30)
	PPC_STORE_U32(r30.u32 + 248, ctx.r3.u32);
	// lwz r5,268(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// lwz r4,264(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// bl 0x82507b40
	sub_82507B40(ctx, base);
	// lis r11,-32175
	r11.s64 = -2108620800;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// lis r10,-31965
	ctx.r10.s64 = -2094858240;
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// addi r11,r11,19736
	r11.s64 = r11.s64 + 19736;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r31.u32);
	// lis r9,-31934
	ctx.r9.s64 = -2092826624;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r31.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r31.u32);
	// lwz r5,-26744(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -26744);
	// addi r27,r30,-8
	r27.s64 = r30.s64 + -8;
	// stw r8,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,18432(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18432);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r7,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826cd980
	sub_826CD980(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r8,277
	ctx.r8.s64 = 277;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8251596c
	if (cr6.eq) goto loc_8251596C;
	// bl 0x8254d128
	sub_8254D128(ctx, base);
	// b 0x82515970
	goto loc_82515970;
loc_8251596C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515970:
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r8,280
	ctx.r8.s64 = 280;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// stw r3,132(r30)
	PPC_STORE_U32(r30.u32 + 132, ctx.r3.u32);
	// li r3,640
	ctx.r3.s64 = 640;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825159b0
	if (cr6.eq) goto loc_825159B0;
	// bl 0x82881498
	sub_82881498(ctx, base);
	// b 0x825159b4
	goto loc_825159B4;
loc_825159B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825159B4:
	// stw r3,252(r30)
	PPC_STORE_U32(r30.u32 + 252, ctx.r3.u32);
	// lwz r4,168(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x828812f8
	sub_828812F8(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r8,284
	ctx.r8.s64 = 284;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// li r3,240
	ctx.r3.s64 = 240;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825159fc
	if (cr6.eq) goto loc_825159FC;
	// bl 0x82421340
	sub_82421340(ctx, base);
	// b 0x82515a00
	goto loc_82515A00;
loc_825159FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515A00:
	// stw r3,280(r30)
	PPC_STORE_U32(r30.u32 + 280, ctx.r3.u32);
	// bl 0x82423718
	sub_82423718(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// li r8,287
	ctx.r8.s64 = 287;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// rldicr r6,r31,32,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u64, 32) & 0xFFFFFFFF00000000;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x826c6ba8
	sub_826C6BA8(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82515a44
	if (cr6.eq) goto loc_82515A44;
	// bl 0x822e1b70
	sub_822E1B70(ctx, base);
	// b 0x82515a48
	goto loc_82515A48;
loc_82515A44:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515A48:
	// stw r3,284(r30)
	PPC_STORE_U32(r30.u32 + 284, ctx.r3.u32);
	// bl 0x822e1b90
	sub_822E1B90(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82513a20
	sub_82513A20(ctx, base);
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r3,21888(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21888);
	// bl 0x82881758
	sub_82881758(ctx, base);
	// stb r31,308(r27)
	PPC_STORE_U8(r27.u32 + 308, r31.u8);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826c5f00
	sub_826C5F00(ctx, base);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,-23784(r21)
	PPC_STORE_U32(r21.u32 + -23784, r11.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
}

__attribute__((alias("__imp__sub_82515A88"))) PPC_WEAK_FUNC(sub_82515A88);
PPC_FUNC_IMPL(__imp__sub_82515A88) {
	PPC_FUNC_PROLOGUE();
	// b 0x828e944c
	return;
}

__attribute__((alias("__imp__sub_82515A8C"))) PPC_WEAK_FUNC(sub_82515A8C);
PPC_FUNC_IMPL(__imp__sub_82515A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515A90"))) PPC_WEAK_FUNC(sub_82515A90);
PPC_FUNC_IMPL(__imp__sub_82515A90) {
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
	// lis r10,-31934
	ctx.r10.s64 = -2092826624;
	// addi r9,r11,18108
	ctx.r9.s64 = r11.s64 + 18108;
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
	// stw r11,18436(r10)
	PPC_STORE_U32(ctx.r10.u32 + 18436, r11.u32);
	// beq cr6,0x82515ad0
	if (cr6.eq) goto loc_82515AD0;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515AD0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82515AE0"))) PPC_WEAK_FUNC(sub_82515AE0);
PPC_FUNC_IMPL(__imp__sub_82515AE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515AE4"))) PPC_WEAK_FUNC(sub_82515AE4);
PPC_FUNC_IMPL(__imp__sub_82515AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515AE8"))) PPC_WEAK_FUNC(sub_82515AE8);
PPC_FUNC_IMPL(__imp__sub_82515AE8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
}

__attribute__((alias("__imp__sub_82515AEC"))) PPC_WEAK_FUNC(sub_82515AEC);
PPC_FUNC_IMPL(__imp__sub_82515AEC) {
	PPC_FUNC_PROLOGUE();
	// b 0x82515b40
	sub_82515B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82515AF0"))) PPC_WEAK_FUNC(sub_82515AF0);
PPC_FUNC_IMPL(__imp__sub_82515AF0) {
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
	// bl 0x825141c0
	sub_825141C0(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82515b28
	if (cr6.eq) goto loc_82515B28;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515B28:
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

__attribute__((alias("__imp__sub_82515B3C"))) PPC_WEAK_FUNC(sub_82515B3C);
PPC_FUNC_IMPL(__imp__sub_82515B3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515B40"))) PPC_WEAK_FUNC(sub_82515B40);
PPC_FUNC_IMPL(__imp__sub_82515B40) {
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
	// bl 0x825142f8
	sub_825142F8(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82515b78
	if (cr6.eq) goto loc_82515B78;
	// bl 0x826c6798
	sub_826C6798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82515B78:
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

__attribute__((alias("__imp__sub_82515B8C"))) PPC_WEAK_FUNC(sub_82515B8C);
PPC_FUNC_IMPL(__imp__sub_82515B8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515B90"))) PPC_WEAK_FUNC(sub_82515B90);
PPC_FUNC_IMPL(__imp__sub_82515B90) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82515bc0
	if (cr6.eq) goto loc_82515BC0;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82515bc4
	if (!cr6.eq) goto loc_82515BC4;
loc_82515BC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82515BC4:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dd08
	sub_8250DD08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82515bf8
	if (!cr6.eq) goto loc_82515BF8;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82515BF8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82515C08"))) PPC_WEAK_FUNC(sub_82515C08);
PPC_FUNC_IMPL(__imp__sub_82515C08) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515C0C"))) PPC_WEAK_FUNC(sub_82515C0C);
PPC_FUNC_IMPL(__imp__sub_82515C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515C10"))) PPC_WEAK_FUNC(sub_82515C10);
PPC_FUNC_IMPL(__imp__sub_82515C10) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82515c40
	if (cr6.eq) goto loc_82515C40;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82515c44
	if (!cr6.eq) goto loc_82515C44;
loc_82515C40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82515C44:
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x8250dd08
	sub_8250DD08(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82515c78
	if (!cr6.eq) goto loc_82515C78;
	// lis r11,-31934
	r11.s64 = -2092826624;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,21636(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 21636);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,112(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82515C78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

__attribute__((alias("__imp__sub_82515C88"))) PPC_WEAK_FUNC(sub_82515C88);
PPC_FUNC_IMPL(__imp__sub_82515C88) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515C8C"))) PPC_WEAK_FUNC(sub_82515C8C);
PPC_FUNC_IMPL(__imp__sub_82515C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515C90"))) PPC_WEAK_FUNC(sub_82515C90);
PPC_FUNC_IMPL(__imp__sub_82515C90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515C94"))) PPC_WEAK_FUNC(sub_82515C94);
PPC_FUNC_IMPL(__imp__sub_82515C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515C98"))) PPC_WEAK_FUNC(sub_82515C98);
PPC_FUNC_IMPL(__imp__sub_82515C98) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515C9C"))) PPC_WEAK_FUNC(sub_82515C9C);
PPC_FUNC_IMPL(__imp__sub_82515C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515CA0"))) PPC_WEAK_FUNC(sub_82515CA0);
PPC_FUNC_IMPL(__imp__sub_82515CA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515CA4"))) PPC_WEAK_FUNC(sub_82515CA4);
PPC_FUNC_IMPL(__imp__sub_82515CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515CA8"))) PPC_WEAK_FUNC(sub_82515CA8);
PPC_FUNC_IMPL(__imp__sub_82515CA8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515CAC"))) PPC_WEAK_FUNC(sub_82515CAC);
PPC_FUNC_IMPL(__imp__sub_82515CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515CB0"))) PPC_WEAK_FUNC(sub_82515CB0);
PPC_FUNC_IMPL(__imp__sub_82515CB0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515CB4"))) PPC_WEAK_FUNC(sub_82515CB4);
PPC_FUNC_IMPL(__imp__sub_82515CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515CB8"))) PPC_WEAK_FUNC(sub_82515CB8);
PPC_FUNC_IMPL(__imp__sub_82515CB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515CBC"))) PPC_WEAK_FUNC(sub_82515CBC);
PPC_FUNC_IMPL(__imp__sub_82515CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515CC0"))) PPC_WEAK_FUNC(sub_82515CC0);
PPC_FUNC_IMPL(__imp__sub_82515CC0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515CC4"))) PPC_WEAK_FUNC(sub_82515CC4);
PPC_FUNC_IMPL(__imp__sub_82515CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515CC8"))) PPC_WEAK_FUNC(sub_82515CC8);
PPC_FUNC_IMPL(__imp__sub_82515CC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515CCC"))) PPC_WEAK_FUNC(sub_82515CCC);
PPC_FUNC_IMPL(__imp__sub_82515CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515CD0"))) PPC_WEAK_FUNC(sub_82515CD0);
PPC_FUNC_IMPL(__imp__sub_82515CD0) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82515cf8
	if (cr6.eq) goto loc_82515CF8;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82515cfc
	if (!cr6.eq) goto loc_82515CFC;
loc_82515CF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82515CFC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r11,18304
	ctx.r4.s64 = r11.s64 + 18304;
	// bl 0x825c62e8
	sub_825C62E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82515D18"))) PPC_WEAK_FUNC(sub_82515D18);
PPC_FUNC_IMPL(__imp__sub_82515D18) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515D1C"))) PPC_WEAK_FUNC(sub_82515D1C);
PPC_FUNC_IMPL(__imp__sub_82515D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515D20"))) PPC_WEAK_FUNC(sub_82515D20);
PPC_FUNC_IMPL(__imp__sub_82515D20) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82515d48
	if (cr6.eq) goto loc_82515D48;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82515d4c
	if (!cr6.eq) goto loc_82515D4C;
loc_82515D48:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82515D4C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r11,18316
	ctx.r4.s64 = r11.s64 + 18316;
	// bl 0x825c62e8
	sub_825C62E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82515D68"))) PPC_WEAK_FUNC(sub_82515D68);
PPC_FUNC_IMPL(__imp__sub_82515D68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515D6C"))) PPC_WEAK_FUNC(sub_82515D6C);
PPC_FUNC_IMPL(__imp__sub_82515D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515D70"))) PPC_WEAK_FUNC(sub_82515D70);
PPC_FUNC_IMPL(__imp__sub_82515D70) {
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
	// lis r11,-31970
	r11.s64 = -2095185920;
	// lwz r3,-14756(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -14756);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82515d98
	if (cr6.eq) goto loc_82515D98;
	// bl 0x8314d07c
	__imp__KeTlsGetValue(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82515d9c
	if (!cr6.eq) goto loc_82515D9C;
loc_82515D98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82515D9C:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r4,r11,18328
	ctx.r4.s64 = r11.s64 + 18328;
	// bl 0x825c62e8
	sub_825C62E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
}

__attribute__((alias("__imp__sub_82515DB8"))) PPC_WEAK_FUNC(sub_82515DB8);
PPC_FUNC_IMPL(__imp__sub_82515DB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82515DBC"))) PPC_WEAK_FUNC(sub_82515DBC);
PPC_FUNC_IMPL(__imp__sub_82515DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515DC0"))) PPC_WEAK_FUNC(sub_82515DC0);
PPC_FUNC_IMPL(__imp__sub_82515DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,18376
	ctx.r5.s64 = r11.s64 + 18376;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,18340
	ctx.r3.s64 = ctx.r9.s64 + 18340;
}

__attribute__((alias("__imp__sub_82515DD8"))) PPC_WEAK_FUNC(sub_82515DD8);
PPC_FUNC_IMPL(__imp__sub_82515DD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82515DDC"))) PPC_WEAK_FUNC(sub_82515DDC);
PPC_FUNC_IMPL(__imp__sub_82515DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515DE0"))) PPC_WEAK_FUNC(sub_82515DE0);
PPC_FUNC_IMPL(__imp__sub_82515DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r4,r11,13435
	ctx.r4.s64 = r11.s64 + 13435;
	// addi r3,r10,18388
	ctx.r3.s64 = ctx.r10.s64 + 18388;
}

__attribute__((alias("__imp__sub_82515DF0"))) PPC_WEAK_FUNC(sub_82515DF0);
PPC_FUNC_IMPL(__imp__sub_82515DF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254da30
	sub_8254DA30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82515DF4"))) PPC_WEAK_FUNC(sub_82515DF4);
PPC_FUNC_IMPL(__imp__sub_82515DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82515DF8"))) PPC_WEAK_FUNC(sub_82515DF8);
PPC_FUNC_IMPL(__imp__sub_82515DF8) {
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
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r5,r11,18436
	ctx.r5.s64 = r11.s64 + 18436;
	// addi r4,r10,22032
	ctx.r4.s64 = ctx.r10.s64 + 22032;
	// addi r3,r9,18340
	ctx.r3.s64 = ctx.r9.s64 + 18340;
	// bl 0x8254da30
	sub_8254DA30(ctx, base);
	// lis r8,-31934
	ctx.r8.s64 = -2092826624;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,19956(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19956);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x825c8b98
	sub_825C8B98(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x825c8640
	sub_825C8640(ctx, base);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r6,18424
	ctx.r4.s64 = ctx.r6.s64 + 18424;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825c86b8
	sub_825C86B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
}

